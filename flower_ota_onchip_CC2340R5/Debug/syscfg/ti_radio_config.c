/*
 *  ======== ti_radio_config.c ========
 *  Configured RadioConfig module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC2340R5RKP
 *  by the SysConfig tool.
 *
 *  Tool Name:           RadioConfig 8
 *  Tool Version:        8.40.00.01_eng
 *  RF Settings Version: 
 */

#include "ti_radio_config.h"
#include DeviceFamily_constructPath(rf_patches/lrf_rfe_binary_ble5.h)
#include DeviceFamily_constructPath(rf_patches/lrf_pbe_binary_ieee.h)
#include DeviceFamily_constructPath(rf_patches/lrf_mce_binary_ieee.h)
#include DeviceFamily_constructPath(rf_patches/lrf_rfe_binary_ieee.h)


// ****************************************************************
//  PHY name:            ADC Noise
//  PHY abbreviation/ID: adc_noise
//  PHY definition file: adc_noise_bt5_cc23xx.json
// ****************************************************************



// Configuration: Common
static const uint32_t LRF_commonRegConfigAdcNoise[] =
{
    0x0000002C,                     // Segment length = 44
    0x0000A002,                     //   Data structure 32-bit region (start byte position = 0, count = 3)
    (uint32_t) &LRF_swConfigAdcNoise,//     LRF_swParam : swConfig
    0x00000000,                     //     LRF_swParam : txPowerTable
    (uint32_t) &(fcfg->appTrims),   //     LRF_swParam : trimDef
    0x00003003,                     //   HW sparse region (address/value pairs, count = 4)
    0x30800000,                     //     LRFDRFE.MAGNTHRCFG
    0x30880000,                     //     LRFDRFE.RSSIOFFSET
    0x31201820,                     //     LRFDRFE.MISC0
    0x31300C07,                     //     LRFDRFE.PHEDISC
    0x30A01002,                     //   HW 16-bit region (start address = 0x30A0, count = 3)
    0x1F40A246,                     //     LRFDRFE.SPARE3                LRFDRFE.SPARE2
    0x00000000,                     //     -                             LRFDRFE.SPARE4
    0x30B01002,                     //   HW 16-bit region (start address = 0x30B0, count = 3)
    0x0006000A,                     //     LRFDRFE.IFAMPRFLDO            LRFDRFE.LNA
    0x00000000,                     //     -                             LRFDRFE.PA0
    0x30C40005,                     //   HW zero region (start address = 0x30C4, count = 6)
    0x30E4100C,                     //   HW 16-bit region (start address = 0x30E4, count = 13)
    0x00000200,                     //     LRFDRFE.DCO                   LRFDRFE.ATSTREFH
    0x00000008,                     //     LRFDRFE.DIVLDO                LRFDRFE.DIV
    0x00000000,                     //     LRFDRFE.DCOLDO0               LRFDRFE.TDCLDO
    0x07060000,                     //     LRFDRFE.PRE0                  LRFDRFE.DCOLDO1
    0x06050000,                     //     LRFDRFE.PRE2                  LRFDRFE.PRE1
    0x40080603,                     //     LRFDRFE.CAL0                  LRFDRFE.PRE3
    0x00007F00,                     //     -                             LRFDRFE.CAL1
    0x31381002,                     //   HW 16-bit region (start address = 0x3138, count = 3)
    0x047FDF7F,                     //     LRFDRFE.PLLMON1               LRFDRFE.PLLMON0
    0x00001804,                     //     -                             LRFDRFE.MOD0
    0x68046005,                     //   RAM 32-bit region (start address = 0x6804, count = 6)
    0x03000012,                     //     RFE_COMMON_RAM.TDCCAL0        RFE_COMMON_RAM.SYNTHCTL
    0x00100000,                     //     RFE_COMMON_RAM.TDCCAL2        RFE_COMMON_RAM.TDCCAL1
    0x569B0400,                     //     RFE_COMMON_RAM.K1LSB          RFE_COMMON_RAM.TDCPLL
    0x012D010A,                     //     RFE_COMMON_RAM.K2BL           RFE_COMMON_RAM.K1MSB
    0x132C0034,                     //     RFE_COMMON_RAM.K3BL           RFE_COMMON_RAM.K2AL
    0x916F07AB,                     //     RFE_COMMON_RAM.K5             RFE_COMMON_RAM.K3AL
    0x68206005,                     //   RAM 32-bit region (start address = 0x6820, count = 6)
    0x00000000,                     //     RFE_COMMON_RAM.RTRIMMIN       RFE_COMMON_RAM.RTRIMOFF
    0x48080008,                     //     RFE_COMMON_RAM.DIVF           RFE_COMMON_RAM.DIVI
    0x00000000,                     //     RFE_COMMON_RAM.DIVLDOF        RFE_COMMON_RAM.DIVLDOI
    0x00470014,                     //     RFE_COMMON_RAM.LDOSETTLE      RFE_COMMON_RAM.DIVLDOIOFF
    0x0005002E,                     //     RFE_COMMON_RAM.DCOSETTLE      RFE_COMMON_RAM.CHRGSETTLE
    0x0000FE00,                     //     RFE_COMMON_RAM.IFAMPRFLDODEFAULT RFE_COMMON_RAM.IFAMPRFLDOTX
    0x683E5003,                     //   RAM 16-bit region (start address = 0x683E, count = 4)
    0x00220050,                     //     RFE_COMMON_RAM.SPARE0SHADOW   RFE_COMMON_RAM.PHYRSSIOFFSET
    0x00000045                      //     RFE_COMMON_RAM.AGCINFO        RFE_COMMON_RAM.SPARE1SHADOW
};


// LRF register configuration list
static const LRF_RegConfigList LRF_regConfigListAdcNoise = {
    .numEntries = 1,
    .entries = {
        (LRF_ConfigWord*)LRF_commonRegConfigAdcNoise
    }
};

// LRF_SwConfig data structure
const LRF_SwConfig LRF_swConfigAdcNoise = {
    .rxIntFrequency = 0,
    .rxFrequencyOffset = 0,
    .txFrequencyOffset = 0,
    .modFrequencyDeviation = 0x00000000,
    .txShape = (LRF_TxShape*) 0,
    .bwIndex = 0x01,
    .bwIndexDither = 0x01
};

// LRF_Config data structure
const LRF_Config LRF_configAdcNoise = {
    .pbeImage = (LRF_TOPsmImage*) 0,
    .mceImage = (LRF_TOPsmImage*) 0,
    .rfeImage = (const LRF_TOPsmImage*) LRF_RFE_binary_ble5,
    .regConfigList = &LRF_regConfigListAdcNoise
};



// ****************************************************************
//  PHY name:            250 kbps, O-QPSK
//  PHY abbreviation/ID: ieee_802_15_4
//  PHY definition file: ieee_802_15_4_oqpsk_250k_cc23xx.json
// ****************************************************************

// PARAMETER SUMMARY

// Channel - Frequency (MHz): 2405
// TX Power (dBm): 14



// Configuration: Common
static const uint32_t LRF_commonRegConfig[] =
{
    0x00000055,                     // Segment length = 85
    0x0000A002,                     //   Data structure 32-bit region (start byte position = 0, count = 3)
    (uint32_t) &LRF_swConfig,       //     LRF_swParam : swConfig
    (uint32_t) &LRF_txPowerTable,   //     LRF_swParam : txPowerTable
    (uint32_t) &(fcfg->appTrims),   //     LRF_swParam : trimDef
    0x14402000,                     //   HW 32-bit region (start address = 0x1440, count = 1)
    0x000000A7,                     //     LRFDPBE.MDMSYNCAH             LRFDPBE.MDMSYNCAL
    0x10A00002,                     //   HW zero region (start address = 0x10A0, count = 3)
    0x10AC1006,                     //   HW 16-bit region (start address = 0x10AC, count = 7)
    0x00001021,                     //     LRFDPBE.PHACFG                LRFDPBE.POLY1H
    0x01090033,                     //     LRFDPBE.FCFG1                 LRFDPBE.FCFG0
    0x00C10028,                     //     LRFDPBE.FCFG3                 LRFDPBE.FCFG2
    0x00000048,                     //     -                             LRFDPBE.FCFG4
    0x14682000,                     //   HW 32-bit region (start address = 0x1468, count = 1)
    0x00020004,                     //     LRFDPBE.TXFWBTHRS             LRFDPBE.RXFRBTHRS
    0x10DC1001,                     //   HW 16-bit region (start address = 0x10DC, count = 2)
    0x0B0B0202,                     //     LRFDPBE.TIMPRE                LRFDPBE.TIMCTL
    0x11201002,                     //   HW 16-bit region (start address = 0x1120, count = 3)
    0x00070007,                     //     LRFDPBE.MDMFRDCTL             LRFDPBE.MDMFWRCTL
    0x00000705,                     //     -                             LRFDPBE.MDMFCFG
    0x00003003,                     //   HW sparse region (address/value pairs, count = 4)
    0x115C0007,                     //     LRFDPBE.LFSR0N
    0x30880000,                     //     LRFDRFE.RSSIOFFSET
    0x31201820,                     //     LRFDRFE.MISC0
    0x31300C07,                     //     LRFDRFE.PHEDISC
    0x20C01002,                     //   HW 16-bit region (start address = 0x20C0, count = 3)
    0x00000003,                     //     LRFDMDM.MODPRECTRL            LRFDMDM.ADCDIGCONF
    0x0000001F,                     //     -                             LRFDMDM.MODSYMMAP0
    0x20D41002,                     //   HW 16-bit region (start address = 0x20D4, count = 3)
    0x000C8000,                     //     LRFDMDM.BAUDPRE               LRFDMDM.BAUD
    0x00000004,                     //     -                             LRFDMDM.MODMAIN
    0x20E41003,                     //   HW 16-bit region (start address = 0x20E4, count = 4)
    0x00090011,                     //     LRFDMDM.DEMMISC2              LRFDMDM.DEMMISC1
    0x00001081,                     //     LRFDMDM.DEMIQMC0              LRFDMDM.DEMMISC3
    0x20F8100C,                     //   HW 16-bit region (start address = 0x20F8, count = 13)
    0x002B0670,                     //     LRFDMDM.DEMFIDC0              LRFDMDM.DEMCODC0
    0x00050200,                     //     LRFDMDM.DEMDSXB0              LRFDMDM.DEMFEXB0
    0x00000B60,                     //     LRFDMDM.DEMMAFI0              LRFDMDM.DEMFIFE0
    0x00404010,                     //     LRFDMDM.DEMMAFI2              LRFDMDM.DEMMAFI1
    0x20200006,                     //     LRFDMDM.DEMC1BE1              LRFDMDM.DEMC1BE0
    0x0A2C0020,                     //     LRFDMDM.SPARE0                LRFDMDM.DEMC1BE2
    0x00000014,                     //     -                             LRFDMDM.SPARE1
    0x30941001,                     //   HW 16-bit region (start address = 0x3094, count = 2)
    0x34F2177F,                     //     LRFDRFE.SPARE0                LRFDRFE.MAGNCTL1
    0x30A01002,                     //   HW 16-bit region (start address = 0x30A0, count = 3)
    0x00003F13,                     //     LRFDRFE.SPARE3                LRFDRFE.SPARE2
    0x00000000,                     //     -                             LRFDRFE.SPARE4
    0x30B01002,                     //   HW 16-bit region (start address = 0x30B0, count = 3)
    0x0006000A,                     //     LRFDRFE.IFAMPRFLDO            LRFDRFE.LNA
    0x00000000,                     //     -                             LRFDRFE.PA0
    0x30C40005,                     //   HW zero region (start address = 0x30C4, count = 6)
    0x30E4100C,                     //   HW 16-bit region (start address = 0x30E4, count = 13)
    0x00000200,                     //     LRFDRFE.DCO                   LRFDRFE.ATSTREFH
    0x00000008,                     //     LRFDRFE.DIVLDO                LRFDRFE.DIV
    0x00000000,                     //     LRFDRFE.DCOLDO0               LRFDRFE.TDCLDO
    0x07060000,                     //     LRFDRFE.PRE0                  LRFDRFE.DCOLDO1
    0x06050000,                     //     LRFDRFE.PRE2                  LRFDRFE.PRE1
    0x40080603,                     //     LRFDRFE.CAL0                  LRFDRFE.PRE3
    0x00007F00,                     //     -                             LRFDRFE.CAL1
    0x31381002,                     //   HW 16-bit region (start address = 0x3138, count = 3)
    0x047FDF7F,                     //     LRFDRFE.PLLMON1               LRFDRFE.PLLMON0
    0x00001B00,                     //     -                             LRFDRFE.MOD0
    0x20205002,                     //   RAM 16-bit region (start address = 0x2020, count = 3)
    0xD18000B4,                     //     PBE_IEEE_RAM.FIFOCFG          PBE_IEEE_RAM.SYNTHCALTIMEOUT
    0x00000006,                     //     -                             PBE_IEEE_RAM.EXTRABYTES
    0x20286000,                     //   RAM 32-bit region (start address = 0x2028, count = 1)
    0x02D80300,                     //     PBE_IEEE_RAM.PRERXIFS         PBE_IEEE_RAM.PRETXIFS
    0x00007001,                     //   RAM sparse region (address/value pairs, count = 2)
    0x20AC0300,                     //     PBE_IEEE_RAM.PRETXIFSV2
    0x683E0046,                     //     RFE_COMMON_RAM.PHYRSSIOFFSET
    0x68046005,                     //   RAM 32-bit region (start address = 0x6804, count = 6)
    0x03000012,                     //     RFE_COMMON_RAM.TDCCAL0        RFE_COMMON_RAM.SYNTHCTL
    0x00100000,                     //     RFE_COMMON_RAM.TDCCAL2        RFE_COMMON_RAM.TDCCAL1
    0x569B0400,                     //     RFE_COMMON_RAM.K1LSB          RFE_COMMON_RAM.TDCPLL
    0x012D010A,                     //     RFE_COMMON_RAM.K2BL           RFE_COMMON_RAM.K1MSB
    0x132C0034,                     //     RFE_COMMON_RAM.K3BL           RFE_COMMON_RAM.K2AL
    0x916F07AB,                     //     RFE_COMMON_RAM.K5             RFE_COMMON_RAM.K3AL
    0x68206005,                     //   RAM 32-bit region (start address = 0x6820, count = 6)
    0x00000000,                     //     RFE_COMMON_RAM.RTRIMMIN       RFE_COMMON_RAM.RTRIMOFF
    0x48080008,                     //     RFE_COMMON_RAM.DIVF           RFE_COMMON_RAM.DIVI
    0x00000000,                     //     RFE_COMMON_RAM.DIVLDOF        RFE_COMMON_RAM.DIVLDOI
    0x00470014,                     //     RFE_COMMON_RAM.LDOSETTLE      RFE_COMMON_RAM.DIVLDOIOFF
    0x0005002E,                     //     RFE_COMMON_RAM.DCOSETTLE      RFE_COMMON_RAM.CHRGSETTLE
    0x0000FE00,                     //     RFE_COMMON_RAM.IFAMPRFLDODEFAULT RFE_COMMON_RAM.IFAMPRFLDOTX
    0x68425001,                     //   RAM 16-bit region (start address = 0x6842, count = 2)
    0x00010028                      //     RFE_COMMON_RAM.AGCINFO        RFE_COMMON_RAM.SPARE1SHADOW
};


// LRF register configuration list
static const LRF_RegConfigList LRF_regConfigList = {
    .numEntries = 1,
    .entries = {
        (LRF_ConfigWord*)LRF_commonRegConfig
    }
};

// LRF_SwConfig data structure
const LRF_SwConfig LRF_swConfig = {
    .rxIntFrequency = 0,
    .rxFrequencyOffset = 0,
    .txFrequencyOffset = 0,
    .modFrequencyDeviation = 0x0001E848,
    .txShape = (LRF_TxShape*) 0,
    .bwIndex = 0x00,
    .bwIndexDither = 0x01
};

// LRF_TxPowerTable data structure
const LRF_TxPowerTable LRF_txPowerTable = {
    .numEntries = 0x0000000E,
    .powerTable = {
        { .power = { .fraction = 0, .dBm = -20 }, .tempCoeff = 0, .value = { .reserved = 0, .ib = 18, .gain = 0, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = -16 }, .tempCoeff = 0, .value = { .reserved = 0, .ib = 25, .gain = 0, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = -12 }, .tempCoeff = 5, .value = { .reserved = 0, .ib = 29, .gain = 1, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = -8 }, .tempCoeff = 18, .value = { .reserved = 0, .ib = 44, .gain = 1, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = -4 }, .tempCoeff = 28, .value = { .reserved = 0, .ib = 40, .gain = 3, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 0 }, .tempCoeff = 40, .value = { .reserved = 0, .ib = 21, .gain = 6, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 1 }, .tempCoeff = 65, .value = { .reserved = 0, .ib = 30, .gain = 6, .mode = 0, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 2 }, .tempCoeff = 41, .value = { .reserved = 0, .ib = 39, .gain = 4, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 3 }, .tempCoeff = 43, .value = { .reserved = 0, .ib = 31, .gain = 5, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 4 }, .tempCoeff = 50, .value = { .reserved = 0, .ib = 37, .gain = 5, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 5 }, .tempCoeff = 55, .value = { .reserved = 0, .ib = 27, .gain = 6, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 6 }, .tempCoeff = 75, .value = { .reserved = 0, .ib = 38, .gain = 6, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 7 }, .tempCoeff = 80, .value = { .reserved = 0, .ib = 25, .gain = 7, .mode = 1, .noIfampRfLdoBypass = 0 } },
        { .power = { .fraction = 0, .dBm = 8 }, .tempCoeff = 180, .value = { .reserved = 0, .ib = 63, .gain = 7, .mode = 1, .noIfampRfLdoBypass = 0 } }
    }
};

// LRF_Config data structure
const LRF_Config LRF_config = {
    .pbeImage = (const LRF_TOPsmImage*) LRF_PBE_binary_ieee,
    .mceImage = (const LRF_TOPsmImage*) LRF_MCE_binary_ieee,
    .rfeImage = (const LRF_TOPsmImage*) LRF_RFE_binary_ieee,
    .regConfigList = &LRF_regConfigList
};



