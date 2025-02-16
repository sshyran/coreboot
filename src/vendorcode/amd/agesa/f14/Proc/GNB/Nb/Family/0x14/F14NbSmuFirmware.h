/* $NoKeywords:$ */
/**
 * @file
 *
 * SMU firmware.
 *
 *
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  GNB
 * @e \$Revision: 51210 $   @e \$Date: 2011-04-20 11:41:43 -0600 (Wed, 20 Apr 2011) $
 *
 */
/*
 ******************************************************************************
 *
 * Copyright (c) 2011, Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */


#ifndef  _F14NBSMUFIRMWARE_H_
#define  _F14NBSMUFIRMWARE_H_

CONST UINT32 DataBlock0[] = {
  0x01060100,
  0x68d699d6,
  0xbdff018e,
  0x00cea2a4,
  0x00ce1810,
  0xa6082000,
  0x00a71800,
  0x8c081808,
  0xf3251000,
  0x270000cc,
  0x3fa5ce0b,
  0x8308006f,
  0xf8260100,
  0xa4bd248d,
  0x90fb20a5,
  0xde24900e,
  0x02de3c00,
  0x3c04de3c,
  0x9f3c06de,
  0x06df3806,
  0x3804df38,
  0xdf3802df,
  0x06de3b00,
  0xce069f3c,
  0x90fc0c83,
  0xfc02ed02,
  0x00ed0090,
  0x1caa7fce,
  0xce5f0300,
  0x00e78485,
  0xe78385ce,
  0x8585ce00,
  0x82ce00e7,
  0x6b91ccd6,
  0x82ce00ed,
  0x8491ccda,
  0x82ce00ed,
  0x039cccdc,
  0x82ce00ed,
  0xe19bccde,
  0x82ce00ed,
  0x6492cce2,
  0x82ce00ed,
  0x6295cce4,
  0x82ce00ed,
  0xc3a2cce6,
  0x82ce00ed,
  0x7696cce8,
  0x82ce00ed,
  0x6291ccea,
  0x82ce00ed,
  0xce00edec,
  0x00edee82,
  0xedf082ce,
  0xf282ce00,
  0x82ce00ed,
  0xa494ccf4,
  0x82ce00ed,
  0x96a1ccf6,
  0x82ce00ed,
  0xbc92ccf8,
  0x82ce00ed,
  0xff92ccfa,
  0xa2bd00ed,
  0x9a82ce8e,
  0xed609fcc,
  0xce180e00,
  0x01c6ed84,
  0xce00e718,
  0x00cc00bf,
  0xc600ed33,
  0x00e71802,
  0xfda9a4cc,
  0xa5fdcaa4,
  0xfd20cf05,
  0xde3c00de,
  0x04de3c02,
  0x3c06de3c,
  0xdf38069f,
  0x04df3806,
  0x3802df38,
  0xde3b00df,
  0x02de3c00,
  0x3c04de3c,
  0x9f3c06de,
  0x06df3806,
  0x3804df38,
  0xdf3802df,
  0x06de3b00,
  0x38069f3c,
  0xde3906df,
  0x069f3c06,
  0xe60086ce,
  0x220bc100,
  0xce408d07,
  0x00adc8cc,
  0x3906df38,
  0x9f3c06de,
  0x0086ce06,
  0x0bc100e6,
  0x278d2522,
  0xc6017ece,
  0xce00e7df,
  0xffcc647e,
  0xce00ed02,
  0x86cc627e,
  0xce00ed00,
  0x00e6017e,
  0xf72720c4,
  0x38259cbd,
  0xde3906df,
  0x069f3c06,
  0xde3c08de,
  0x86ce3c0a,
  0xdd5f4f08,
  0xdf08dd0a,
  0x1d02de02,
  0xdf183f00,
  0x02de1804,
  0x00c38f18,
  0xdc8f1807,
  0xc308de0a,
  0x01240100,
  0xdf0add08,
  0x02df1808,
  0x8c04de18,
  0x06260000,
  0x0a00831a,
  0x04dfcf23,
  0x4f0486ce,
  0xdd0add5f,
  0xde02df08,
  0xdf02de04,
  0x00de1800,
  0x04df0818,
  0x0700c38f,
  0x00ec188f,
  0x02dff084,
  0x831a04de,
  0x1426fe00,
  0x18fe00cc,
  0x001d00ed,
  0xc400e680,
  0x2620c1f0,
  0x0e001d03,
  0x08de0adc,
  0x240100c3,
  0x0add0801,
  0x062608df,
  0x0a00831a,
  0xdf38b723,
  0x08df380a,
  0x3906df38,
  0x9f3c06de,
  0x0785ce06,
  0x00ce00e6,
  0x008c4f00,
  0x1a062600,
  0x27010083,
  0x00008c2d,
  0x342b362e,
  0x0100831a,
  0x008c0b22,
  0xdd292600,
  0x200f2700,
  0x00008c23,
  0x831a1e26,
  0x12270200,
  0x85cc1620,
  0x4d9cbd08,
  0x85cc0e20,
  0x4d9cbd30,
  0x85cc0620,
  0x4d9cbd58,
  0x3906df38,
  0x9f3c06de,
  0x3c08de06,
  0xce3c0ade,
  0x001daa7f,
  0x8f7fce01,
  0xc610001c,
  0x846b8d1b,
  0xc636377f,
  0xfe93bd1b,
  0x5e8d04c6,
  0x1d8f7fce,
  0x7fce1000,
  0x01001daa,
  0x3101001c,
  0x0adf3831,
  0x3808df38,
  0xde3906df,
  0x069f3c06,
  0xde3c08de,
  0x7fce3c0a,
  0x01001daa,
  0x1c8f7fce,
  0x1bc61000,
  0x808a288d,
  0x1bc63637,
  0xc6fe93bd,
  0xce1b8d04,
  0x001d8f7f,
  0xaa7fce10,
  0x1c01001d,
  0x31310100,
  0x380adf38,
  0xdf3808df,
  0x06de3906,
  0xde069f3c,
  0x0ade3c08,
  0x3c0cde3c,
  0xd73c0ede,
  0x4d00cc0d,
  0x5f4f3637,
  0x00cc3637,
  0x0002ce60,
  0xcc5a9ebd,
  0x02ce6400,
  0x389ebd00,
  0x00cc08df,
  0x4f3637cd,
  0xcc36375f,
  0x02ce6000,
  0x5a9ebd00,
  0x0dd68f18,
  0xdf188f18,
  0x0e007f0e,
  0x0cdd0edc,
  0x7f0f007f,
  0x38180e00,
  0x38183818,
  0x08dc3818,
  0x08260185,
  0x8a8f0cde,
  0x0cdf8f01,
  0x36370edc,
  0x36370cdc,
  0xce6400cc,
  0x9ebd0002,
  0x4e00cc5a,
  0x5f4f3637,
  0x00cc3637,
  0x0002ce60,
  0xcc5a9ebd,
  0x02ce6400,
  0x389ebd00,
  0x38183818,
  0x38183818,
  0xdf183818,
  0x1838180e,
  0x38180cdf,
  0x180adf18,
  0x08df1838,
  0xdf183818,
  0x06de3906,
  0xde069f3c,
  0x0ade3c08,
  0x3c0cde3c,
  0xd73c0ede,
  0x4d00cc0d,
  0x5f4f3637,
  0x00cc3637,
  0x0002ce60,
  0xcc5a9ebd,
  0x02ce6400,
  0x389ebd00,
  0x00cc08df,
  0x4f3637cd,
  0xcc36375f,
  0x02ce6000,
  0x5a9ebd00,
  0x0dd68f18,
  0xdf188f18,
  0x0e007f0e,
  0x7f0d007f,
  0x5f4f0c00,
  0x8f0002ce,
  0x0fda0e9a,
  0xdf0edd8f,
  0xec06de0c,
  0xda0e9a05,
  0xdd0cde0f,
  0x1838180e,
  0x18381838,
  0x8508dc38,
  0x8f062601,
  0xdf8f018a,
  0x370edc0c,
  0x370cdc36,
  0x6400cc36,
  0xbd0002ce,
  0x38385a9e,
  0x380edf38,
  0xdf380cdf,
  0x08df380a,
  0x3906df38,
  0x9f3c06de,
  0x3c08de06,
  0xde3c0ade,
  0x0ede3c0c,
  0x9085ce3c,
  0x0edd02ec,
  0x0cdd00ec,
  0x845f0edc,
  0x8a04caf0,
  0xce0edd0e,
  0x001daa7f,
  0xbd0cde01,
  0x0add959d,
  0x85ce08df,
  0x2600e697,
  0x8a0adc06,
  0xdc042011,
  0xddef840a,
  0xdc36370a,
  0xdc363708,
  0xbd0cde0e,
  0x7fcee09d,
  0x01001caa,
  0xdf383838,
  0x0cdf380e,
  0x380adf38,
  0xdf3808df,
  0x06de3906,
  0x18069f3c,
  0xff80ce8f,
  0x0c2600e6,
  0x00e704c6,
  0x1c207ece,
  0x03200100,
  0xce04001c,
  0xefc6007e,
  0x7ece00e7,
  0x1800ec21,
  0x00d300df,
  0xed277ece,
  0x007ece00,
  0x10c400e6,
  0x80cef727,
  0x04001dff,
  0x062600e6,
  0x1d207ece,
  0xdf380100,
  0x06de3906,
  0xde069f3c,
  0x85ce3c08,
  0xce00e683,
  0x8f188485,
  0x09d700e6,
  0x09d18f18,
  0x967e0326,
  0x8385ce65,
  0x01c400e6,
  0x967e0326,
  0xb885ce3b,
  0x02ed5f4f,
  0x85ce00ed,
  0xed02edbc,
  0xc085ce00,
  0x00ed02ed,
  0xedc485ce,
  0xce00ed02,
  0x02edc885,
  0x85ce00ed,
  0xed02edcc,
  0x85ce1800,
  0x00e61882,
  0x032608c4,
  0xcece9ebd,
  0x02cc0883,
  0xce00ed00,
  0x5f4f1483,
  0x00ed02ed,
  0xed1083ce,
  0x1800ed02,
  0x188385ce,
  0xce5400e6,
  0x00e71283,
  0xe68585ce,
  0x5d02df00,
  0x80ce3a26,
  0x08001cff,
  0xe68285ce,
  0xcef0c400,
  0x01ca207e,
  0x7ece00e7,
  0x00ee1a21,
  0xec8085ce,
  0x1800dd00,
  0x1800d38f,
  0x297ece8f,
  0xce00ef1a,
  0xdfc6007e,
  0x7ece00e7,
  0x20001c02,
  0x02de04df,
  0xde01001c,
  0xce2a2004,
  0x001d8585,
  0x2600e601,
  0xff80ce1d,
  0xe608001d,
  0xce062600,
  0x001d207e,
  0x007ece01,
  0x00e7dfc6,
  0x1d027ece,
  0xa1bd2000,
  0x8385ce1b,
  0x85ce00e6,
  0x3800e784,
  0xdf3808df,
  0x06de3906,
  0x8d069f3c,
  0x8585ce1c,
  0x032600e6,
  0xce7d97bd,
  0x001c8585,
  0x9a82ce02,
  0xedcd97cc,
  0x06df3800,
  0x3c06de39,
  0x08de069f,
  0x3c0ade3c,
  0xec4485ce,
  0x10c44f00,
  0x02ec2027,
  0x00ec0add,
  0x0adc08dd,
  0x4f8f08de,
  0xbd8f0fc4,
  0xce1897a4,
  0xed18d085,
  0x00efcd02,
  0x02ec1c20,
  0x00ec0add,
  0x0adc08dd,
  0x4f8f08de,
  0xdf8f0fc4,
  0xd085ce08,
  0x08dc02ed,
  0x85ce00ed,
  0x4f00ec48,
  0x202710c4,
  0x0add02ec,
  0x08dd00ec,
  0x08de0adc,
  0x0fc44f8f,
  0x97a4bd8f,
  0xd485ce18,
  0xcd02ed18,
  0x1c2000ef,
  0x0add02ec,
  0x08dd00ec,
  0x08de0adc,
  0x0fc44f8f,
  0xce08df8f,
  0x02edd485,
  0x00ed08dc,
  0xcc5884ce,
  0x00ed0091,
  0xcc5a84ce,
  0x00ed0cc4,
  0xad0490fe,
  0x85ce1800,
  0x5e84ced8,
  0x0f8400ec,
  0x1800ed18,
  0x85ce00ec,
  0x4f00edda,
  0x1285ce5f,
  0x85ce00ed,
  0xce00ed10,
  0x00e7977f,
  0xc60b85ce,
  0x3800e701,
  0xdf380adf,
  0x06df3808,
  0x3c06de39,
  0xce069f34,
  0x001cff80,
  0x0e85ce08,
  0x06de00ec,
  0x011d01e7,
  0x217ece0f,
  0xce00ee1a,
  0x00ec0c85,
  0x8f1800dd,
  0x8f1800d3,
  0x1a297ece,
  0x7ece00ef,
  0x06de1820,
  0xca01e618,
  0xce00e701,
  0xdfc6007e,
  0x7ece00e7,
  0x20001c02,
  0x06df3831,
  0x3c06de39,
  0x069f3c3c,
  0xde3c08de,
  0x0cde3c0a,
  0x3c0ede3c,
  0xce779abd,
  0x00e6de85,
  0x997e0327,
  0x5884ce21,
  0xed0090cc,
  0x5a84ce00,
  0x50c7ce18,
  0xfe00ef1a,
  0x00ad0490,
  0xec5c84ce,
  0x10c44f00,
  0x02ec2027,
  0x00ec0add,
  0x0adc08dd,
  0x4f8f08de,
  0xbd8f0fc4,
  0xce1897a4,
  0xed18e085,
  0x00efcd02,
  0x02ec1c20,
  0x00ec0add,
  0x0adc08dd,
  0x4f8f08de,
  0xdf8f0fc4,
  0xe085ce08,
  0x08dc02ed,
  0x85ce00ed,
  0xc400e60b,
  0x18452601,
  0x18977fce,
  0x01c400e6,
  0x85ce3a26,
  0xdd02ece0,
  0xdd00ec0e,
  0xd085ce0c,
  0x0add02ec,
  0x08dd00ec,
  0x089c0cde,
  0x072e1e2d,
  0x931a0edc,
  0xc615230a,
  0x00e71801,
  0x1c1285ce,
  0x85ce0101,
  0x6f016f10,
  0x21997e00,
  0x4f06de18,
  0x03ed185f,
  0xce01ed18,
  0x00e60b85,
  0x262601c4,
  0xece085ce,
  0xec0edd02,
  0xce0cdd00,
  0x02ecd485,
  0x00ec0add,
  0xde1808dd,
  0x089c180c,
  0x142e082d,
  0x0a9c0ede,
  0xde180e24,
  0x0100cc06,
  0x4f03ed18,
  0x01ed185f,
  0x0add5f4f,
  0x7fce08dd,
  0xc100e684,
  0xcc072607,
  0x0add0100,
  0xde185f4f,
  0x03ec1806,
  0x9401eecd,
  0x8f0bd40a,
  0x09d40894,
  0x00008c8f,
  0x00dd0426,
  0x7fce0f27,
  0xe702c697,
  0x1285ce00,
  0x011d006f,
  0x847fce01,
  0x07c100e6,
  0x85ce1226,
  0x02011c12,
  0xec1085ce,
  0x0100c300,
  0x082000ed,
  0x6f1285ce,
  0x02011d00,
  0xe60b85ce,
  0x2602c400,
  0x239a7e03,
  0xe6847fce,
  0x2607c100,
  0x85ce1860,
  0x00ec1812,
  0x2604c44f,
  0x0090cc54,
  0xed5884ce,
  0x68c3ce00,
  0x5a84ce18,
  0xfe00efcd,
  0x00ad0490,
  0x5c84ce18,
  0xdd02ec18,
  0x00ec180a,
  0x0adc08dd,
  0xed1820ca,
  0x1808dc02,
  0x80ce00ed,
  0x84ce1800,
  0x00efcd58,
  0x1868c3ce,
  0xcd5a84ce,
  0x90fe00ef,
  0x1800ad06,
  0x181285ce,
  0x2004011c,
  0x847fce6a,
  0x07c100e6,
  0x85ce6127,
  0x4f00ec12,
  0x572704c4,
  0x180090ce,
  0xcd5884ce,
  0xc3ce00ef,
  0x84ce1868,
  0x00efcd5a,
  0xad0490fe,
  0x84ce1800,
  0x02ec185c,
  0xec180add,
  0xdc08dd00,
  0x18dfc40a,
  0x08dc02ed,
  0xce00ed18,
  0xce180080,
  0xefcd5884,
  0x68c3ce00,
  0x5a84ce18,
  0xfe00efcd,
  0x00ad0690,
  0x1285ce18,
  0x18006f18,
  0xce04011d,
  0x00e68385,
  0x188485ce,
  0xd700e68f,
  0xd18f1809,
  0xbd032709,
  0x85ce6295,
  0xc400e683,
  0xbd032701,
  0x7ece609f,
  0x00ee1a21,
  0xec0c85ce,
  0x1800dd00,
  0x1800d38f,
  0x297ece8f,
  0xce00ef1a,
  0x001d007e,
  0x0edf3820,
  0x380cdf38,
  0xdf380adf,
  0x38383808,
  0xde3906df,
  0x069f3c06,
  0xce3c08de,
  0x01c6687e,
  0xce1800e7,
  0xfecc647e,
  0x00ed1870,
  0xcc667ece,
  0x00ed0200,
  0xce00e618,
  0x00e6677e,
  0xf72701c4,
  0xe6637ece,
  0x5404c400,
  0xdc85ce54,
  0xce1800e7,
  0xfecc647e,
  0x00ed1880,
  0xcc667ece,
  0x00ed0200,
  0xce00e618,
  0x00e6677e,
  0xf72701c4,
  0xe6637ece,
  0x5404c400,
  0xdd85ce54,
  0xce1800e7,
  0xfecc647e,
  0x00ed1860,
  0xcc667ece,
  0x00ed0200,
  0xce00e618,
  0x00e6677e,
  0xf72701c4,
  0xe6637ece,
  0x5404c400,
  0xde85ce54,
  0xce1800e7,
  0x85cedf85,
  0xce00e6dc,
  0x04dddd85,
  0x09d700e6,
  0x09d404dc,
  0x1800e718,
  0xce1804df,
  0x85ce0088,
  0xce00ecd8,
  0x00ee4285,
  0x00d300df,
  0x1800ed18,
  0xde1802df,
  0x00e61804,
  0x052601c1,
  0x202285ce,
  0x847fce1d,
  0x07c100e6,
  0x85ce0526,
  0xe60f201e,
  0x0000ce00,
  0x598f054f,
  0x85c38f49,
  0x00ec8f14,
  0x08dd0f84,
  0x00ec02de,
  0x00ed0893,
  0xda85ce18,
  0x1804df18,
  0xcd0088ce,
  0xdf1800ee,
  0x04de1802,
  0xdd00ec18,
  0x27009c00,
  0xec02de45,
  0x00ed1800,
  0xce0091cc,
  0x00ed5884,
  0x180cc4ce,
  0xcd5a84ce,
  0x90fe00ef,
  0xce00ad04,
  0x00ec0088,
  0xed5e84ce,
  0x0081cc00,
  0xed5884ce,
  0x0cc4ce00,
  0x1804df18,
  0xcd5a84ce,
  0xde1800ef,
  0x0690fe04,
  0xdf3800ad,
  0x06df3808,
  0x3c06de39,
  0x84ce069f,
  0xc400ecf2,
  0x7e831af0,
  0xec072660,
  0x5000c300,
  0xcdce00ed,
  0x3800ad83,
  0xde3906df,
  0x069f3c06,
  0xecfc84ce,
  0x1af0c400,
  0x2600fe83,
  0xc300ec07,
  0x00ed5000,
  0xad29cece,
  0x06df3800,
  0x3c08de39,
  0xb65086ce,
  0x19270086,
  0x00a60897,
  0xa703a616,
  0xec03e700,
  0xe702a701,
  0x3a04c601,
  0x2e08007a,
  0x08df38e9,
  0x3c08de39,
  0xde3c0ade,
  0x08dd3c0c,
  0x86607ece,
  0xcc0ba701,
  0x0cedc015,
  0xedc115cc,
  0x0080cc0e,
  0xc6cc0add,
  0xdc0cdd54,
  0x868f1808,
  0xdc089709,
  0xdc00ed0a,
  0xa602ed0c,
  0x27018407,
  0x00ec18fa,
  0xec1800ed,
  0xa602ed02,
  0x27018407,
  0x8a0adcfa,
  0xdc00ed01,
  0xcb02ed0c,
  0xa60cdd04,
  0x27018407,
  0x00ec18fa,
  0xec1800ed,
  0xc602ed02,
  0xa63a1804,
  0x27018407,
  0x08007afa,
  0x0adcb52e,
  0x0cdc00ed,
  0x07a602ed,
  0xfa270184,
  0xed00ec18,
  0x02ec1800,
  0x07a602ed,
  0xfa270184,
  0x380ba74f,
  0xdf380cdf,
  0x08df380a,
  0x06de1839,
  0x069f3c18,
  0x807fce18,
  0x3701a718,
  0x02caf8c4,
  0x8f00e718,
  0xfc8a0384,
  0x1803a718,
  0xfd8602e7,
  0x8604a718,
  0x07c43301,
  0x5a480427,
  0xa718fc2e,
  0x0002cc05,
  0x1806a718,
  0x06de07e7,
  0x181606a6,
  0xed1808ed,
  0xb703860a,
  0x7fb68c7f,
  0x2680848c,
  0x06df38f9,
  0x7fce1839,
  0x01a71880,
  0xf8c43737,
  0xe71804ca,
  0x03848f00,
  0xa718fc8a,
  0x02e71803,
  0xa718fd86,
  0x33018604,
  0x042707c4,
  0xfc2e5a48,
  0xcc05a718,
  0xa7180002,
  0x07e71806,
  0x7fb70186,
  0x8c7fb68c,
  0xf9268084,
  0x1803c433,
  0x00e6183a,
  0x7fce1839,
  0x01a71880,
  0xcaf8c437,
  0x00e71804,
  0x03a7188f,
  0x4f02e718,
  0x3304a718,
  0x042704c4,
  0x0220f086,
  0xa7180f86,
  0x0002cc05,
  0x1806a718,
  0x018607e7,
  0xb68c7fb7,
  0x80848c7f,
  0xa618f926,
  0x02e61803,
  0x01a6188f,
  0x3900e618,
  0x1806de18,
  0x18069f3c,
  0x18807fce,
  0xc43701a7,
  0x00e718f8,
  0x03a7188f,
  0x4f02e718,
  0x3304a718,
  0x042704c4,
  0x0220f086,
  0xa7180f86,
  0x0002cc05,
  0x1806a718,
  0x06de07e7,
  0xe71807ec,
  0x09a71808,
  0xe71805ec,
  0x0ba7180a,
  0x7fb70386,
  0x8c7fb68c,
  0xf9268084,
  0x3906df38,
  0x807fce18,
  0x3701a718,
  0x04caf8c4,
  0x8f00e718,
  0xfc8a0384,
  0x1803a718,
  0xfd8602e7,
  0x7e04a718,
  0xde18af9d,
  0x9f3c1806,
  0x7fce1806,
  0x01a71880,
  0xcaf8c437,
  0x00e71802,
  0x8a03848f,
  0x03a718fc,
  0x8602e718,
  0x04a718fd,
  0xedff9d7e,
  0x8407a602,
  0x39fa2701,
  0x018407a6,
  0xce39fa27,
  0x046fc010,
  0xed8f184f,
  0xa7078605,
  0x6400cc09,
  0x09a607ed,
  0xfa270184,
  0x0fc48f18,
  0x17274d17,
  0x04e740c6,
  0x07c6056f,
  0x04c609e7,
  0x09e606e7,
  0xfa2701c4,
  0xecef2e4a,
  0xfecc3902,
  0xfc84fd00,
  0xfd4470cc,
  0x00ccfe84,
  0xfa84fd03,
  0x8d29cebd,
  0xa085f75b,
  0x8fa185b7,
  0x86a285b7,
  0xff84b747,
  0x8d29cebd,
  0xa385f747,
  0x8fa685b7,
  0x86a785b7,
  0xff84b74a,
  0x8d29cebd,
  0xae85fd33,
  0xad85b78f,
  0x84b74d86,
  0x29cebdff,
  0x85fd228d,
  0x85b78faa,
  0xb75086a9,
  0xcebdff84,
  0xf7118d29,
  0x85b7a485,
  0x85b78fa5,
  0x0000cca8,
  0x39be84fd,
  0xce3c08de,
  0x03e60085,
  0x08dd02a6,
  0x01a600e6,
  0x76090076,
  0x56460800,
  0x381808de,
  0x3908df18,
  0xde3c08de,
  0x7ece3c0a,
  0xa7038660,
  0x60fecc08,
  0x00cc04ed,
  0xa606ed02,
  0x8407a604,
  0x4ffa2701,
  0x03a60b97,
  0x0a970184,
  0xa62e274d,
  0x97048403,
  0x25274d0a,
  0xec1083ce,
  0x110f2702,
  0x97048407,
  0x04274d0b,
  0x0220036f,
  0x83f6036c,
  0x1a08d708,
  0x081806ee,
  0x2006ef1a,
  0x1083ce2d,
  0x90cc036f,
  0x5884fd00,
  0xfde4c6cc,
  0xd6bd5a84,
  0x0000ce99,
  0x165f84b6,
  0x163a01c4,
  0x01c40404,
  0xcb508f3a,
  0xf708d702,
  0xce4f0883,
  0xa1bdb885,
  0x4f08d664,
  0xbdc085ce,
  0x85f664a1,
  0x1809d7a6,
  0xbdb885ce,
  0x85f648a1,
  0x1809d7a7,
  0xbdc085ce,
  0x808648a1,
  0x85b60897,
  0x27048482,
  0x607ece5b,
  0x08a70386,
  0xed70fecc,
  0x0200cc04,
  0x04a606ed,
  0x018407a6,
  0x03a6fa27,
  0x44440484,
  0xce5f0188,
  0xa1bdc885,
  0xa585f664,
  0xce1809d7,
  0xa1bdc885,
  0xcc85ce48,
  0x0000ce18,
  0x142600ec,
  0x102602a6,
  0x85b103a6,
  0x180924a4,
  0xb6be84fe,
  0x0897a885,
  0xab7fff18,
  0xad7fb74f,
  0xf6ac85ce,
  0xfe18a285,
  0x1226bc85,
  0x26be85b6,
  0xbf85b60d,
  0xa1a385f6,
  0xf6032503,
  0x09d7a285,
  0xf6a885ce,
  0xfe18a285,
  0x0f26c485,
  0x26c685b6,
  0xc785b60a,
  0x032203a1,
  0xd1a385f6,
  0xd7022209,
  0x4f08d609,
  0xd68f1805,
  0xdcbd4f09,
  0x9609d706,
  0xcc1c260a,
  0x84fd0091,
  0x0cc4cc58,
  0xbd5a84fd,
  0x09d699d6,
  0xc65d84f7,
  0x5884f781,
  0xce68d6bd,
  0x04ec1083,
  0xed0100c3,
  0x0000c304,
  0x8f180a26,
  0x00ed06ec,
  0x06ed8f18,
  0x848585b6,
  0x96112602,
  0x85f35f0b,
  0x217ef380,
  0x86297efd,
  0x007eb7df,
  0x380adf38,
  0xcc3908df,
  0x84fd0091,
  0x0cc4cc58,
  0xbd5a84fd,
  0x85f699d6,
  0x5d84f7a0,
  0x84f781c6,
  0x68d6bd58,
  0x848285b6,
  0x5f082704,
  0xab7ffd4f,
  0x39ad7fb7,
  0xcd00ec18,
  0x007d02ee,
  0x040a2709,
  0x8f56468f,
  0x2609007a,
  0x04ed18f6,
  0x3906efcd,
  0x58585858,
  0x02ed02e3,
  0x00c900ec,
  0x00ed0089,
  0x435304ec,
  0x06ec8f18,
  0x00c34353,
  0xc98f1801,
  0x18008900,
  0xed02e38f,
  0xe98f1802,
  0xed00a901,
  0x06de3900,
  0x3c08de3c,
  0x7fce069f,
  0x01001daa,
  0x1c8f7fce,
  0x0ccc1000,
  0x0000ced6,
  0xd7499dbd,
  0x37c8c608,
  0xd60ccc34,
  0xbd0000ce,
  0x0cccf19c,
  0x0000ced7,
  0xca499dbd,
  0xcc343720,
  0x00ced70c,
  0xf19cbd00,
  0x3437d8c6,
  0xced60ccc,
  0x9cbd0000,
  0x371fc6f1,
  0xd70ccc34,
  0xbd0000ce,
  0xd9c6f19c,
  0x0ccc3437,
  0x0000ced6,
  0xccf19cbd,
  0x00ced70c,
  0x499dbd00,
  0x00c38f30,
  0xc4358f0a,
  0x8d022620,
  0x3708d644,
  0xd60ccc34,
  0xbd0000ce,
  0xcc38f19c,
  0x02ce00a0,
  0x499dbd00,
  0x22c120ca,
  0x258d0227,
  0xce01a0cc,
  0x9dbd0002,
  0x2710c149,
  0xce168d02,
  0x001d8f7f,
  0xaa7fce10,
  0x1c01001d,
  0xdf380100,
  0x06df3808,
  0x607ece39,
  0x08a70386,
  0xed30ffcc,
  0xe701cc04,
  0x5f4f06ed,
  0x7fc600ed,
  0x07a602ed,
  0xfa270184,
  0xede901cc,
  0xed4f5f06,
  0xa602ed00,
  0x27018407,
  0x20cf01fa,
  0x7ece39fd,
  0x30ffcc60,
  0x26cc04ed,
  0xcc06ed3d,
  0x00edfe00,
  0x839ebd5f,
  0xede20fcc,
  0xfe00cc06,
  0xbd5f00ed,
  0x22cc839e,
  0xcc06ed54,
  0x00edfcff,
  0xbd00fccc,
  0xde39839e,
  0x0ade3c08,
  0x3c0cde3c,
  0x863c0ede,
  0x017eb7df,
  0xcc607ece,
  0x04ed02ff,
  0xedc9a4cc,
  0x017eb602,
  0xf9272084,
  0xdd0101cc,
  0x1100cc08,
  0x00cc0add,
  0xcc0cdd00,
  0x0edd0f00,
  0xcc03a4bd,
  0x08dd3001,
  0xdd6280cc,
  0xffffcc0a,
  0xf7cc0cdd,
  0xbd0eddff,
  0x00cc35a4,
  0xcc0add02,
  0x0cddffff,
  0xddfbffcc,
  0x35a4bd0e,
  0xdd6380cc,
  0x0101cc0a,
  0x80cc0cdd,
  0xbd0edd00,
  0x80cc03a4,
  0xcc0add62,
  0x0cdd0000,
  0xdd0100cc,
  0x03a4bd0e,
  0xdd6080cc,
  0x0000cc0a,
  0x00cc0cdd,
  0xbd0edd01,
  0xce1803a4,
  0x7ef60200,
  0x54545420,
  0x939ebd54,
  0xcc1295bd,
  0x08dd1001,
  0xdd1000cc,
  0x0000cc0a,
  0x00cc0cdd,
  0x8d0edd01,
  0x3001cc7e,
  0x80cc08dd,
  0xcc0add60,
  0x0cdd0301,
  0xcc67a4bd,
  0x08dd3001,
  0xdd6280cc,
  0xffffcc0a,
  0xffcc0cdd,
  0xbd0eddfe,
  0x00cc35a4,
  0xcc0cdd00,
  0x0edd0008,
  0x80cc498d,
  0xcc0add63,
  0x0cddfefe,
  0xddff7fcc,
  0xcc6a8d0e,
  0x08dd2001,
  0xdd5044cc,
  0x0203cc0a,
  0xa4bd0cdd,
  0xb7df8667,
  0x7ece017e,
  0x02ffcc60,
  0xa5cc04ed,
  0xb602ed04,
  0x2084017e,
  0xdf38f927,
  0x0cdf380e,
  0x380adf38,
  0xce3908df,
  0xffcc607e,
  0xcc04ed30,
  0x06ed2800,
  0x00ed08dc,
  0x9ebd0adc,
  0x2900cc83,
  0x04a606ed,
  0xec8c9ebd,
  0xda0c9a00,
  0xec00ed0d,
  0xda0e9a02,
  0x839ebd0f,
  0x607ece39,
  0xed30ffcc,
  0x2800cc04,
  0x08dc06ed,
  0x0adc00ed,
  0xcc839ebd,
  0x06ed2900,
  0x9ebd04a6,
  0x9400ec8c,
  0xed0dd40c,
  0x9402ec00,
  0xbd0fd40e,
  0xce39839e,
  0xce18607e,
  0x0dd6607e,
  0xffcc3a18,
  0xcc04ed30,
  0x06ed2800,
  0x00ed08dc,
  0x9ebd0adc,
  0x2900cc83,
  0x04a606ed,
  0x188c9ebd,
  0x0cd400e6,
  0x5339f426,
  0x43538f43,
  0x01268f08,
  0x064f3908,
  0x203e0e39,
  0x202001fc,
  0x00000028,
  0x20200100,
  0x00000020,
  0x20200100,
  0x00000024,
  0x20200100,
  0x0000002c,
  0x00000800,
  0xff300028,
  0x2901c004,
  0x04ff3000,
  0x002800c0,
  0xc004ff30,
  0x30002901,
  0x00c004ff,
  0xff300028,
  0x2901c004,
  0x04ff3000,
  0x002800c0,
  0xc004ff30,
  0x30002901,
  0x00c004ff,
  0x28000008,
  0x04ff3000,
  0x002909c0,
  0xc004ff30,
  0x30002809,
  0x09c004ff,
  0xff300029,
  0x2809c004,
  0x04ff3000,
  0x002909c0,
  0xc004ff30,
  0x30002809,
  0x09c004ff,
  0xff300029,
  0x0001c004
};

CONST UINT32 DataBlock1[] = {
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x3f903f90,
  0x96d53f90,
  0x3f90aed5,
  0x08900890,
  0x08900890
};

CONST SMU_FIRMWARE_BLOCK FmBlockArray[] = {
  {
    0x9000,
    0x550,
    &DataBlock0[0]
  },
  {
    0xbfc0,
    0x10,
    &DataBlock1[0]
  }
};

CONST SMU_FIRMWARE_HEADER Fm = {
  {
    0x1, 0x601
  },
  2,
  &FmBlockArray[0]
};
#endif
