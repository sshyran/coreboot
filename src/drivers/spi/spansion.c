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

/* S25FLxx-specific commands */
#define CMD_S25FLXX_READ	0x03	/* Read Data Bytes */
#define CMD_S25FLXX_FAST_READ	0x0b	/* Read Data Bytes at Higher Speed */
#define CMD_S25FLXX_READID	0x90	/* Read Manufacture ID and Device ID */
#define CMD_S25FLXX_WREN	0x06	/* Write Enable */
#define CMD_S25FLXX_WRDI	0x04	/* Write Disable */
#define CMD_S25FLXX_RDSR	0x05	/* Read Status Register */
#define CMD_S25FLXX_WRSR	0x01	/* Write Status Register */
#define CMD_S25FLXX_PP		0x02	/* Page Program */
#define CMD_S25FLXX_SE		0xd8	/* Sector Erase */
#define CMD_S25FLXX_BE		0xc7	/* Bulk Erase */
#define CMD_S25FLXX_DP		0xb9	/* Deep Power-down */
#define CMD_S25FLXX_RES		0xab	/* Release from DP, and Read Signature */

#define SPSN_ID_S25FL008A	0x0213
#define SPSN_ID_S25FL016A	0x0214
#define SPSN_ID_S25FL032A	0x0215
#define SPSN_ID_S25FL064A	0x0216
#define SPSN_ID_S25FL128S	0x0219
#define SPSN_ID_S25FL128P	0x2018
#define SPSN_ID_S25FL208K	0x4014
#define SPSN_ID_S25FL116K	0x4015
#define SPSN_ID_S25FL132K	0x4016
#define SPSN_ID_S25FL164K	0x4017
#define SPSN_EXT_ID_S25FL128P_256KB	0x0300
#define SPSN_EXT_ID_S25FL128P_64KB	0x0301
#define SPSN_EXT_ID_S25FL032P		0x4d00
#define SPSN_EXT_ID_S25FLXXS_64KB	0x4d01

static const struct spi_flash_part_id flash_table_ext[] = {
	{
		.id = SPSN_ID_S25FL008A,
		.name = "S25FL008A",
		.nr_sectors_shift = 4,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL016A,
		.name = "S25FL016A",
		.nr_sectors_shift = 5,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL032A,
		.name = "S25FL032A",
		.nr_sectors_shift = 6,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL064A,
		.name = "S25FL064A",
		.nr_sectors_shift = 7,
		.sector_size_kib_shift = 6,
	},
	{
		.id = (SPSN_EXT_ID_S25FL128P_64KB << 16) | SPSN_ID_S25FL128P,
		.name = "S25FL128P_64K",
		.nr_sectors_shift = 8,
		.sector_size_kib_shift = 6,
	},
	{
		.id = (SPSN_EXT_ID_S25FL128P_256KB << 16) | SPSN_ID_S25FL128P,
		.name = "S25FL128P_256K",
		.nr_sectors_shift = 6,
		.sector_size_kib_shift = 8,
	},
	{
		.id = (SPSN_EXT_ID_S25FLXXS_64KB << 16) | SPSN_ID_S25FL128S,
		.name = "S25FL128S_256K",
		.nr_sectors_shift = 9,
		.sector_size_kib_shift = 6,
	},
	{
		.id = (SPSN_EXT_ID_S25FL032P << 16) | SPSN_ID_S25FL032A,
		.name = "S25FL032P",
		.nr_sectors_shift = 6,
		.sector_size_kib_shift = 6,
	},
	{
		.id = (SPSN_EXT_ID_S25FLXXS_64KB << 16) | SPSN_ID_S25FL128P,
		.name = "S25FS128S",
		.nr_sectors_shift = 8,
		.sector_size_kib_shift = 6,
	},
};

static const struct spi_flash_part_id flash_table[] = {
	{
		.id = SPSN_ID_S25FL208K,
		.name = "S25FL208K",
		.nr_sectors_shift = 4,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL116K,
		.name = "S25FL116K_16M",
		.nr_sectors_shift = 5,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL132K,
		.name = "S25FL132K",
		.nr_sectors_shift = 6,
		.sector_size_kib_shift = 6,
	},
	{
		.id = SPSN_ID_S25FL164K,
		.name = "S25FL164K",
		.nr_sectors_shift = 7,
		.sector_size_kib_shift = 6,
	},
};

static const struct spi_flash_ops spi_flash_ops = {
	.read = spi_flash_cmd_read,
	.write = spi_flash_cmd_write_page_program,
	.erase = spi_flash_cmd_erase,
	.status = spi_flash_cmd_status,
};


static int match_table(const struct spi_slave *spi, struct spi_flash *flash, u32 id,
			const struct spi_flash_part_id *parts, size_t num_parts)
{
	const struct spi_flash_part_id *params = NULL;
	unsigned int i;

	for (i = 0; i < num_parts; i++) {
		if (parts[i].id != id)
			continue;
		params = &parts[i];
		break;
	}

	if (params == NULL)
		return -1;

	memcpy(&flash->spi, spi, sizeof(*spi));
	flash->name = params->name;
	flash->page_size = 256;
	flash->sector_size = (1U << params->sector_size_kib_shift) * KiB;
	flash->size = flash->sector_size * (1U << params->nr_sectors_shift);
	flash->erase_cmd = CMD_S25FLXX_SE;
	flash->status_cmd = CMD_S25FLXX_RDSR;
	flash->pp_cmd = CMD_S25FLXX_PP;
	flash->wren_cmd = CMD_S25FLXX_WREN;

	flash->ops = &spi_flash_ops;

	return 0;
}

int spi_flash_probe_spansion(const struct spi_slave *spi, u8 *idcode,
				struct spi_flash *flash)
{
	u32 id;

	id = ((idcode[3] << 8) | idcode[4]) << 16;
	id |= (idcode[1] << 8) | idcode[2];

	if (!match_table(spi, flash, id, flash_table_ext, ARRAY_SIZE(flash_table_ext)))
		return 0;

	if (!match_table(spi, flash, id & 0xffff, flash_table, ARRAY_SIZE(flash_table)))
		return 0;

	printk(BIOS_WARNING, "SF: Unsupported SPANSION ID %08x\n", id);

	return -1;
}
