/*
 * This file is part of the coreboot project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <console/console.h>
#include <commonlib/helpers.h>
#include <spi_flash.h>
#include <spi-generic.h>
#include <string.h>

#include "spi_flash_internal.h"

/* MX25xx-specific commands */
#define CMD_MX25XX_WREN		0x06	/* Write Enable */
#define CMD_MX25XX_WRDI		0x04	/* Write Disable */
#define CMD_MX25XX_RDSR		0x05	/* Read Status Register */
#define CMD_MX25XX_WRSR		0x01	/* Write Status Register */
#define CMD_MX25XX_READ		0x03	/* Read Data Bytes */
#define CMD_MX25XX_FAST_READ	0x0b	/* Read Data Bytes at Higher Speed */
#define CMD_MX25XX_PP		0x02	/* Page Program */
#define CMD_MX25XX_SE		0x20	/* Sector Erase */
#define CMD_MX25XX_BE		0xD8	/* Block Erase */
#define CMD_MX25XX_CE		0xc7	/* Chip Erase */
#define CMD_MX25XX_DP		0xb9	/* Deep Power-down */
#define CMD_MX25XX_RES		0xab	/* Release from DP, and Read Signature */

#define MACRONIX_SR_WIP		(1 << 0)	/* Write-in-Progress */

static const struct spi_flash_part_id flash_table[] = {
	{
		.id = 0x2014,
		.name = "MX25L8005",
		.nr_sectors_shift = 8,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2015,
		.name = "MX25L1605D",
		.nr_sectors_shift = 9,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2016,
		.name = "MX25L3205D",
		.nr_sectors_shift = 10,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2017,
		.name = "MX25L6405D",
		.nr_sectors_shift = 11,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2018,
		.name = "MX25L12805D",
		.nr_sectors_shift = 12,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2019,
		.name = "MX25L25635F",
		.nr_sectors_shift = 13,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x201a,
		.name = "MX66L51235F",
		.nr_sectors_shift = 14,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2415,
		.name = "MX25L1635D",
		.nr_sectors_shift = 9,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2515,
		.name = "MX25L1635E",
		.nr_sectors_shift = 9,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2534,
		.name = "MX25U8032E",
		.nr_sectors_shift = 8,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2535,
		.name = "MX25U1635E",
		.nr_sectors_shift = 9,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2536,
		.name = "MX25U3235E",
		.nr_sectors_shift = 10,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2537,
		.name = "MX25U6435F",
		.nr_sectors_shift = 11,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2538,
		.name = "MX25U12835F",
		.nr_sectors_shift = 12,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2539,
		.name = "MX25U25635F",
		.nr_sectors_shift = 13,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x253a,
		.name = "MX25U51245G",
		.nr_sectors_shift = 14,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x2618,
		.name = "MX25L12855E",
		.nr_sectors_shift = 12,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x5e16,
		.name = "MX25L3235D", /* MX25L3225D/MX25L3236D/MX25L3237D */
		.nr_sectors_shift = 10,
		.sector_size_kib_shift = 2,
	},
	{
		.id = 0x9517,
		.name = "MX25L6495F",
		.nr_sectors_shift = 11,
		.sector_size_kib_shift = 2,
	},
};

static const struct spi_flash_ops spi_flash_ops = {
	.read = spi_flash_cmd_read,
	.write = spi_flash_cmd_write_page_program,
	.erase = spi_flash_cmd_erase,
	.status = spi_flash_cmd_status,
};

int spi_flash_probe_macronix(const struct spi_slave *spi, u8 *idcode,
			     struct spi_flash *flash)
{
	const struct spi_flash_part_id *params;
	unsigned int i;
	u16 id = idcode[2] | idcode[1] << 8;

	for (i = 0; i < ARRAY_SIZE(flash_table); i++) {
		params = &flash_table[i];
		if (params->id == id)
			break;
	}

	if (i == ARRAY_SIZE(flash_table)) {
		printk(BIOS_WARNING, "SF: Unsupported Macronix ID %04x\n", id);
		return -1;
	}

	memcpy(&flash->spi, spi, sizeof(*spi));
	flash->name = params->name;
	flash->page_size = 256;
	flash->sector_size = (1U << params->sector_size_kib_shift) * KiB;
	flash->size = flash->sector_size * params->nr_sectors_shift;
	flash->erase_cmd = CMD_MX25XX_SE;
	flash->status_cmd = CMD_MX25XX_RDSR;
	flash->pp_cmd = CMD_MX25XX_PP;
	flash->wren_cmd = CMD_MX25XX_WREN;

	flash->ops = &spi_flash_ops;

	return 0;
}
