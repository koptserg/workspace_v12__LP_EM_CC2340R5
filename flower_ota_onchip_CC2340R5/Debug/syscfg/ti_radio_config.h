/*
 *  ======== ti_radio_config.h ========
 *  Configured RadioConfig module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC2340R5RKP
 *  by the SysConfig tool.
 *
 *  Tool Name:           RadioConfig 8
 *  Tool Version:        8.40.00.01_eng
 *  RF Settings Version: 
 */
#ifndef _TI_RADIO_CONFIG_H_
#define _TI_RADIO_CONFIG_H_

#include <ti/devices/DeviceFamily.h>
#include <ti/drivers/rcl/LRF.h>
#include DeviceFamily_constructPath(inc/hw_fcfg.h)

// RF settings version
#define RF_SETTINGS_VERSION "undefined"


// ****************************************************************
//  PHY name:            ADC Noise
//  PHY abbreviation/ID: adc_noise
//  PHY definition file: adc_noise_bt5_cc23xx.json
// ****************************************************************



// LRF data structures
extern const LRF_SwConfig LRF_swConfigAdcNoise;
extern const LRF_Config LRF_configAdcNoise;


// Address    Module            Register             Bit(s)     Field              Value             
// -----------------------------------------------------------------------------------------------
// 0x3080     LRFDRFE           MAGNTHRCFG           [1]        SEL                0x0               
// 0x3088     LRFDRFE           RSSIOFFSET           [7:0]      VAL                0x00              
// 0x30A0     LRFDRFE           SPARE2               [15:0]     VAL                0xA246            
// 0x30A4     LRFDRFE           SPARE3               [15:0]     VAL                0x1F40            
// 0x30A8     LRFDRFE           SPARE4               [15:0]     VAL                0x0000            
// 0x30B0     LRFDRFE           LNA                  [7:4]      TRIM               0x0               
// 0x30B0     LRFDRFE           LNA                  [3]        BIAS               0x1               
// 0x30B0     LRFDRFE           LNA                  [2:1]      IB                 0x1               
// 0x30B4     LRFDRFE           IFAMPRFLDO           [15:9]     TRIM               0x00              
// 0x30B4     LRFDRFE           IFAMPRFLDO           [7:4]      AAFCAP             0x0               
// 0x30B4     LRFDRFE           IFAMPRFLDO           [3:1]      IFAMPIB            0x3               
// 0x30B8     LRFDRFE           PA0                  [4:0]      TRIM               0x00              
// 0x30C4     LRFDRFE           IFADC0               [14:12]    DITHERTRIM         0x0               
// 0x30C4     LRFDRFE           IFADC0               [11:10]    DITHEREN           0x0               
// 0x30C4     LRFDRFE           IFADC0               [7:4]      INT2ADJ            0x0               
// 0x30C4     LRFDRFE           IFADC0               [3:2]      AAFCAP             0x0               
// 0x30C8     LRFDRFE           IFADC1               [15]       NRZ                0x0               
// 0x30C8     LRFDRFE           IFADC1               [14:9]     TRIM               0x00              
// 0x30CC     LRFDRFE           IFADCLF              [15:12]    FF3                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [11:8]     FF2                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [7:4]      FF1                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [3:0]      INT3               0x0               
// 0x30D0     LRFDRFE           IFADCQUANT           [2:0]      QUANTTHR           0x0               
// 0x30D4     LRFDRFE           IFADCALDO            [13:8]     TRIMOUT            0x00              
// 0x30D8     LRFDRFE           IFADCDLDO            [13:8]     TRIMOUT            0x00              
// 0x30E4     LRFDRFE           ATSTREFH             [14:10]    IREFTRIM           0x00              
// 0x30E4     LRFDRFE           ATSTREFH             [9]        BIAS               0x1               
// 0x30E8     LRFDRFE           DCO                  [6:3]      TAILRESTRIM        0x0               
// 0x30E8     LRFDRFE           DCO                  [0]        CRSCAPCM           0x0               
// 0x30EC     LRFDRFE           DIV                  [15]       PDET               0x0               
// 0x30EC     LRFDRFE           DIV                  [14:12]    NMIREFTRIM         0x0               
// 0x30EC     LRFDRFE           DIV                  [11:9]     PMIREFTRIM         0x0               
// 0x30EC     LRFDRFE           DIV                  [8]        TXBBOOST           0x0               
// 0x30EC     LRFDRFE           DIV                  [7]        S1GFRC             0x0               
// 0x30EC     LRFDRFE           DIV                  [6:5]      BUFGAIN            0x0               
// 0x30EC     LRFDRFE           DIV                  [4]        BIAS               0x0               
// 0x30EC     LRFDRFE           DIV                  [3]        OUT                0x1               
// 0x30EC     LRFDRFE           DIV                  [2:0]      RATIO              0x0               
// 0x30F0     LRFDRFE           DIVLDO               [15]       SPARE15            0x0               
// 0x30F0     LRFDRFE           DIVLDO               [14:8]     VOUTTRIM           0x00              
// 0x30F0     LRFDRFE           DIVLDO               [7]        ITST               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [6:4]      TMUX               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [3]        SPARE3             0x0               
// 0x30F0     LRFDRFE           DIVLDO               [2]        MODE               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [1]        BYPASS             0x0               
// 0x30F0     LRFDRFE           DIVLDO               [0]        CTL                0x0               
// 0x30F4     LRFDRFE           TDCLDO               [14:8]     VOUTTRIM           0x00              
// 0x30F8     LRFDRFE           DCOLDO0              [13:8]     SECONDTRIM         0x00              
// 0x30F8     LRFDRFE           DCOLDO0              [7:4]      FIRSTTRIM          0x0               
// 0x30FC     LRFDRFE           DCOLDO1              [10]       REFSRC             0x0               
// 0x30FC     LRFDRFE           DCOLDO1              [9:8]      DIVATST            0x0               
// 0x3100     LRFDRFE           PRE0                 [13:8]     PLLDIV1            0x07              
// 0x3100     LRFDRFE           PRE0                 [5:0]      PLLDIV0            0x06              
// 0x3104     LRFDRFE           PRE1                 [5:0]      HSDDC              0x00              
// 0x3108     LRFDRFE           PRE2                 [15:12]    MIDCALDIVLSB       0x0               
// 0x3108     LRFDRFE           PRE2                 [11:6]     CRSCALDIV          0x18              
// 0x3108     LRFDRFE           PRE2                 [5:0]      FSMDIV             0x05              
// 0x310C     LRFDRFE           PRE3                 [15:5]     FINECALDIV         0x030             
// 0x310C     LRFDRFE           PRE3                 [4:0]      MIDCALDIVMSB       0x03              
// 0x3110     LRFDRFE           CAL0                 [14:8]     FCSTART            0x40              
// 0x3110     LRFDRFE           CAL0                 [3:2]      TDCAVG             0x2               
// 0x3114     LRFDRFE           CAL1                 [14:8]     FCTOP              0x7F              
// 0x3114     LRFDRFE           CAL1                 [6:0]      FCBOT              0x00              
// 0x3120     LRFDRFE           MISC0                [13]       PHCPT              0x0               
// 0x3120     LRFDRFE           MISC0                [12]       TDCCALCORR         0x1               
// 0x3120     LRFDRFE           MISC0                [11]       TDCMSBCORR         0x1               
// 0x3120     LRFDRFE           MISC0                [5:4]      DLYCANCRS          0x2               
// 0x3130     LRFDRFE           PHEDISC              [13:10]    CNT                0x3               
// 0x3130     LRFDRFE           PHEDISC              [9:0]      THR                0x007             
// 0x3138     LRFDRFE           PLLMON0              [15:14]    PHELOLCNT          0x3               
// 0x3138     LRFDRFE           PLLMON0              [13:8]     PHELOLTHR          0x1F              
// 0x3138     LRFDRFE           PLLMON0              [6:0]      FCTHR              0x7F              
// 0x313C     LRFDRFE           PLLMON1              [12:8]     PHELOCKCNT         0x04              
// 0x313C     LRFDRFE           PLLMON1              [7:0]      PHELOCKTHR         0x7F              
// 0x3140     LRFDRFE           MOD0                 [12:11]    SCHEME             0x3               
// 0x3140     LRFDRFE           MOD0                 [10:8]     SYMSHP             0x0               
// 0x3140     LRFDRFE           MOD0                 [3:2]      INTPFACT           0x1               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [7]        CHRGFILT           0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [6]        VREFBP             0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [5]        TXWAITMOD          0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [4]        PHEDISC            0x1               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [3]        RTRIMTST           0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [2]        IIR                0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [1]        REFDTHR            0x1               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [0]        FCDEM              0x0               
// 0x6806     RFE_COMMON_RAM    TDCCAL0              [10:8]     STOP               0x3               
// 0x6808     RFE_COMMON_RAM    TDCCAL1              [7:0]      SUB                0x00              
// 0x680A     RFE_COMMON_RAM    TDCCAL2              [5:0]      AVG                0x10              
// 0x680C     RFE_COMMON_RAM    TDCPLL               [10:8]     STOP               0x4               
// 0x680E     RFE_COMMON_RAM    K1LSB                [15:0]     VAL                0x569B            
// 0x6810     RFE_COMMON_RAM    K1MSB                [15:0]     VAL                0x010A            
// 0x6812     RFE_COMMON_RAM    K2BL                 [15]       HPM                0x0               
// 0x6812     RFE_COMMON_RAM    K2BL                 [14:0]     VAL                0x012D            
// 0x6814     RFE_COMMON_RAM    K2AL                 [15]       HPM                0x0               
// 0x6814     RFE_COMMON_RAM    K2AL                 [14:0]     VAL                0x0034            
// 0x6816     RFE_COMMON_RAM    K3BL                 [15:0]     VAL                0x132C            
// 0x6818     RFE_COMMON_RAM    K3AL                 [15:0]     VAL                0x07AB            
// 0x681A     RFE_COMMON_RAM    K5                   [15:0]     VAL                0x916F            
// 0x6820     RFE_COMMON_RAM    RTRIMOFF             [3:0]      VAL                0x0               
// 0x6822     RFE_COMMON_RAM    RTRIMMIN             [3:0]      VAL                0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [15]       PDET               0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [14:12]    NMIREFTRIM         0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [11:9]     PMIREFTRIM         0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [8]        TXBOOST            0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [7]        S1GFRC             0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [6:5]      BUFGAIN            0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [4]        BIAS               0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [3]        OUT                0x1               
// 0x6824     RFE_COMMON_RAM    DIVI                 [2:0]      RATIO              0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [15]       PDET               0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [14:12]    NMIREFTRIM         0x4               
// 0x6826     RFE_COMMON_RAM    DIVF                 [11:9]     PMIREFTRIM         0x4               
// 0x6826     RFE_COMMON_RAM    DIVF                 [8]        TXBOOST            0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [7]        S1GFRC             0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [6:5]      BUFGAIN            0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [4]        BIAS               0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [3]        OUT                0x1               
// 0x6826     RFE_COMMON_RAM    DIVF                 [2:0]      RATIO              0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [15]       ITEST              0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [14:8]     VOUTTRIM           0x00              
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [7]        ITST               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [6:4]      TMUX               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [2]        MODE               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [1]        BYPASS             0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [0]        CTL                0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [15]       ITEST              0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [14:8]     VOUTTRIM           0x00              
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [7]        ITST               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [6:4]      TMUX               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [2]        MODE               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [1]        BYPASS             0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [0]        CTL                0x0               
// 0x682C     RFE_COMMON_RAM    DIVLDOIOFF           [6:0]      VAL                0x14              
// 0x682E     RFE_COMMON_RAM    LDOSETTLE            [9:0]      VAL                0x047             
// 0x6830     RFE_COMMON_RAM    CHRGSETTLE           [9:0]      VAL                0x02E             
// 0x6832     RFE_COMMON_RAM    DCOSETTLE            [9:0]      VAL                0x005             
// 0x6834     RFE_COMMON_RAM    IFAMPRFLDOTX         [15:9]     TRIM               0x7F              
// 0x6836     RFE_COMMON_RAM    IFAMPRFLDODEFAULT    [15:9]     TRIM               0x00              
// 0x683E     RFE_COMMON_RAM    PHYRSSIOFFSET        [7:0]      VAL                0x50              
// 0x6840     RFE_COMMON_RAM    SPARE0SHADOW         [15:0]     VAL                0x0022            
// 0x6842     RFE_COMMON_RAM    SPARE1SHADOW         [15:0]     VAL                0x0045            
// 0x6844     RFE_COMMON_RAM    AGCINFO              [0]        MODE               0x0               


// ****************************************************************
//  PHY name:            250 kbps, O-QPSK
//  PHY abbreviation/ID: ieee_802_15_4
//  PHY definition file: ieee_802_15_4_oqpsk_250k_cc23xx.json
// ****************************************************************



// LRF data structures
extern const LRF_SwConfig LRF_swConfig;
extern const LRF_TxPowerTable LRF_txPowerTable;
extern const LRF_Config LRF_config;


// Address    Module            Register             Bit(s)     Field              Value             
// -----------------------------------------------------------------------------------------------
// 0x1080     LRFDPBE           MDMSYNCAL            [15:0]     SWALSB             0x00A7            
// 0x1084     LRFDPBE           MDMSYNCAH            [15:0]     SWAMSB             0x0000            
// 0x10A0     LRFDPBE           POLY0L               [15:0]     VALLSB             0x0000            
// 0x10A4     LRFDPBE           POLY0H               [15:0]     VALMSB             0x0000            
// 0x10A8     LRFDPBE           POLY1L               [15:0]     VALLSB             0x0000            
// 0x10AC     LRFDPBE           POLY1H               [15:0]     VALMSB             0x1021            
// 0x10B0     LRFDPBE           PHACFG               [2:1]      MODE1              0x0               
// 0x10B0     LRFDPBE           PHACFG               [0]        MODE0              0x0               
// 0x10B4     LRFDPBE           FCFG0                [5]        TXACOM             0x1               
// 0x10B4     LRFDPBE           FCFG0                [4]        TXADEAL            0x1               
// 0x10B4     LRFDPBE           FCFG0                [1]        RXACOM             0x1               
// 0x10B4     LRFDPBE           FCFG0                [0]        RXADEAL            0x1               
// 0x10B8     LRFDPBE           FCFG1                [8:0]      TXSTRT             0x109             
// 0x10BC     LRFDPBE           FCFG2                [7:0]      TXSIZE             0x28              
// 0x10C0     LRFDPBE           FCFG3                [8:0]      RXSTRT             0x0C1             
// 0x10C4     LRFDPBE           FCFG4                [7:0]      RXSIZE             0x48              
// 0x10D0     LRFDPBE           RXFRBTHRS            [9:0]      BYTES              0x004             
// 0x10D4     LRFDPBE           TXFWBTHRS            [9:0]      BYTES              0x002             
// 0x10DC     LRFDPBE           TIMCTL               [9]        SRC1               0x1               
// 0x10DC     LRFDPBE           TIMCTL               [1]        SRC0               0x1               
// 0x10E0     LRFDPBE           TIMPRE               [13:8]     PRE1               0x0B              
// 0x10E0     LRFDPBE           TIMPRE               [5:0]      PRE0               0x0B              
// 0x1120     LRFDPBE           MDMFWRCTL            [3:0]      WORDSZWR           0x7               
// 0x1124     LRFDPBE           MDMFRDCTL            [3:0]      WORDSZRD           0x7               
// 0x1128     LRFDPBE           MDMFCFG              [15:8]     AFULLTHR           0x07              
// 0x1128     LRFDPBE           MDMFCFG              [7:0]      AEMPTYTHR          0x05              
// 0x115C     LRFDPBE           LFSR0N               [3:0]      SIZE               0x7               
// 0x20C0     LRFDMDM           ADCDIGCONF           [1]        QBRANCHEN          0x1               
// 0x20C0     LRFDMDM           ADCDIGCONF           [0]        IBRANCHEN          0x1               
// 0x20C4     LRFDMDM           MODPRECTRL           [7:4]      REPS               0x0               
// 0x20C4     LRFDMDM           MODPRECTRL           [3:0]      SIZE               0x0               
// 0x20C8     LRFDMDM           MODSYMMAP0           [7:4]      SYM1               0x1               
// 0x20C8     LRFDMDM           MODSYMMAP0           [3:0]      SYM0               0xF               
// 0x20D4     LRFDMDM           BAUD                 [15:0]     RATEWORD           0x8000            
// 0x20D8     LRFDMDM           BAUDPRE              [15:13]    ALIGNVALUE         0x0               
// 0x20D8     LRFDMDM           BAUDPRE              [7:0]      PRESCALER          0x0C              
// 0x20DC     LRFDMDM           MODMAIN              [3:2]      FECSELECT          0x1               
// 0x20DC     LRFDMDM           MODMAIN              [1:0]      MODLEVELS          0x0               
// 0x20E4     LRFDMDM           DEMMISC1             [4]        CDCCOLRST          0x1               
// 0x20E4     LRFDMDM           DEMMISC1             [3:2]      MGE1SRCSEL         0x0               
// 0x20E4     LRFDMDM           DEMMISC1             [1:0]      CHFIBW             0x1               
// 0x20E8     LRFDMDM           DEMMISC2             [10]       STIMESTONLY        0x0               
// 0x20E8     LRFDMDM           DEMMISC2             [9:7]      STIMTEAPERIOD      0x0               
// 0x20E8     LRFDMDM           DEMMISC2             [6:4]      STIMTEAGAIN        0x0               
// 0x20E8     LRFDMDM           DEMMISC2             [3]        PDIFLINPREDEN      0x1               
// 0x20E8     LRFDMDM           DEMMISC2             [2]        PDIFDESPECK        0x0               
// 0x20E8     LRFDMDM           DEMMISC2             [1]        PDIFIQCONJEN       0x0               
// 0x20E8     LRFDMDM           DEMMISC2             [0]        PDIFLIMITRANGE     0x1               
// 0x20EC     LRFDMDM           DEMMISC3             [12]       BDE1FILTMODE       0x1               
// 0x20EC     LRFDMDM           DEMMISC3             [7]        BDE1NUMSTAGES      0x1               
// 0x20EC     LRFDMDM           DEMMISC3             [4:0]      BDE2DECRATIO       0x01              
// 0x20F0     LRFDMDM           DEMIQMC0             [15:8]     GAINFACTOR         0x00              
// 0x20F0     LRFDMDM           DEMIQMC0             [7:0]      PHASEFACTOR        0x00              
// 0x20F8     LRFDMDM           DEMCODC0             [11]       ESTSEL             0x0               
// 0x20F8     LRFDMDM           DEMCODC0             [10:9]     COMPSEL            0x3               
// 0x20F8     LRFDMDM           DEMCODC0             [8]        IIRUSEINITIAL      0x0               
// 0x20F8     LRFDMDM           DEMCODC0             [7:5]      IIRGAIN            0x3               
// 0x20F8     LRFDMDM           DEMCODC0             [4]        IIREN              0x1               
// 0x20F8     LRFDMDM           DEMCODC0             [3]        ACCMODE            0x0               
// 0x20F8     LRFDMDM           DEMCODC0             [2:1]      ACCPERIOD          0x0               
// 0x20F8     LRFDMDM           DEMCODC0             [0]        ACCEN              0x0               
// 0x20FC     LRFDMDM           DEMFIDC0             [5:4]      COMPSEL            0x2               
// 0x20FC     LRFDMDM           DEMFIDC0             [3:2]      ACCPERIOD          0x2               
// 0x20FC     LRFDMDM           DEMFIDC0             [1]        ACCMODE            0x1               
// 0x20FC     LRFDMDM           DEMFIDC0             [0]        ACCEN              0x1               
// 0x2100     LRFDMDM           DEMFEXB0             [13]       OUT2PASSTHROUGH    0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [12:11]    OUT2SRCSEL         0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [10]       OUT1PASSTHROUGH    0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [9:8]      OUT1SRCSEL         0x2               
// 0x2100     LRFDMDM           DEMFEXB0             [7:6]      B4SRCSEL           0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [5:4]      B3SRCSEL           0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [3:2]      B2SRCSEL           0x0               
// 0x2100     LRFDMDM           DEMFEXB0             [1:0]      B1SRCSEL           0x0               
// 0x2104     LRFDMDM           DEMDSXB0             [3]        OUTSRCSEL2         0x0               
// 0x2104     LRFDMDM           DEMDSXB0             [2]        OUTSRCSEL1         0x1               
// 0x2104     LRFDMDM           DEMDSXB0             [1]        B2SRCSEL           0x0               
// 0x2104     LRFDMDM           DEMDSXB0             [0]        B1SRCSEL           0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [11]       FINEFOESEL         0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [10:9]     FOCFFSEL           0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [8]        ACCCNTMODE         0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [7:6]      ACCPERIOD          0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [5]        ACCEN              0x1               
// 0x2108     LRFDMDM           DEMFIFE0             [4]        IIRUSEINITIAL      0x0               
// 0x2108     LRFDMDM           DEMFIFE0             [3:1]      IIRGAIN            0x0               
// 0x2108     LRFDMDM           DEMFIFE0             [0]        IIREN              0x0               
// 0x210C     LRFDMDM           DEMMAFI0             [15:8]     C1C7               0x00              
// 0x210C     LRFDMDM           DEMMAFI0             [7:0]      C0C8               0x00              
// 0x2110     LRFDMDM           DEMMAFI1             [15:8]     C3C5               0x40              
// 0x2110     LRFDMDM           DEMMAFI1             [7:0]      C2C6               0x10              
// 0x2114     LRFDMDM           DEMMAFI2             [8:0]      C4                 0x040             
// 0x2118     LRFDMDM           DEMC1BE0             [15:11]    MASKB              0x00              
// 0x2118     LRFDMDM           DEMC1BE0             [10:6]     MASKA              0x00              
// 0x2118     LRFDMDM           DEMC1BE0             [5:4]      CASCCONF           0x0               
// 0x2118     LRFDMDM           DEMC1BE0             [3:0]      COPYCONF           0x6               
// 0x211C     LRFDMDM           DEMC1BE1             [15:8]     THRESHOLDB         0x20              
// 0x211C     LRFDMDM           DEMC1BE1             [7:0]      THRESHOLDA         0x20              
// 0x2120     LRFDMDM           DEMC1BE2             [9:8]      PEAKCONF           0x0               
// 0x2120     LRFDMDM           DEMC1BE2             [7:0]      THRESHOLDC         0x20              
// 0x2124     LRFDMDM           SPARE0               [15:0]     VAL                0x0A2C            
// 0x2128     LRFDMDM           SPARE1               [15:0]     VAL                0x0014            
// 0x3088     LRFDRFE           RSSIOFFSET           [7:0]      VAL                0x00              
// 0x3094     LRFDRFE           MAGNCTL1             [12]       PERMODE            0x1               
// 0x3094     LRFDRFE           MAGNCTL1             [11:8]     SCL                0x7               
// 0x3094     LRFDRFE           MAGNCTL1             [7:0]      PER                0x7F              
// 0x3098     LRFDRFE           SPARE0               [15:0]     VAL                0x34F2            
// 0x30A0     LRFDRFE           SPARE2               [15:0]     VAL                0x3F13            
// 0x30A4     LRFDRFE           SPARE3               [15:0]     VAL                0x0000            
// 0x30A8     LRFDRFE           SPARE4               [15:0]     VAL                0x0000            
// 0x30B0     LRFDRFE           LNA                  [7:4]      TRIM               0x0               
// 0x30B0     LRFDRFE           LNA                  [3]        BIAS               0x1               
// 0x30B0     LRFDRFE           LNA                  [2:1]      IB                 0x1               
// 0x30B4     LRFDRFE           IFAMPRFLDO           [15:9]     TRIM               0x00              
// 0x30B4     LRFDRFE           IFAMPRFLDO           [7:4]      AAFCAP             0x0               
// 0x30B4     LRFDRFE           IFAMPRFLDO           [3:1]      IFAMPIB            0x3               
// 0x30B8     LRFDRFE           PA0                  [4:0]      TRIM               0x00              
// 0x30C4     LRFDRFE           IFADC0               [14:12]    DITHERTRIM         0x0               
// 0x30C4     LRFDRFE           IFADC0               [11:10]    DITHEREN           0x0               
// 0x30C4     LRFDRFE           IFADC0               [7:4]      INT2ADJ            0x0               
// 0x30C4     LRFDRFE           IFADC0               [3:2]      AAFCAP             0x0               
// 0x30C8     LRFDRFE           IFADC1               [15]       NRZ                0x0               
// 0x30C8     LRFDRFE           IFADC1               [14:9]     TRIM               0x00              
// 0x30CC     LRFDRFE           IFADCLF              [15:12]    FF3                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [11:8]     FF2                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [7:4]      FF1                0x0               
// 0x30CC     LRFDRFE           IFADCLF              [3:0]      INT3               0x0               
// 0x30D0     LRFDRFE           IFADCQUANT           [2:0]      QUANTTHR           0x0               
// 0x30D4     LRFDRFE           IFADCALDO            [13:8]     TRIMOUT            0x00              
// 0x30D8     LRFDRFE           IFADCDLDO            [13:8]     TRIMOUT            0x00              
// 0x30E4     LRFDRFE           ATSTREFH             [14:10]    IREFTRIM           0x00              
// 0x30E4     LRFDRFE           ATSTREFH             [9]        BIAS               0x1               
// 0x30E8     LRFDRFE           DCO                  [6:3]      TAILRESTRIM        0x0               
// 0x30E8     LRFDRFE           DCO                  [0]        CRSCAPCM           0x0               
// 0x30EC     LRFDRFE           DIV                  [15]       PDET               0x0               
// 0x30EC     LRFDRFE           DIV                  [14:12]    NMIREFTRIM         0x0               
// 0x30EC     LRFDRFE           DIV                  [11:9]     PMIREFTRIM         0x0               
// 0x30EC     LRFDRFE           DIV                  [8]        TXBBOOST           0x0               
// 0x30EC     LRFDRFE           DIV                  [7]        S1GFRC             0x0               
// 0x30EC     LRFDRFE           DIV                  [6:5]      BUFGAIN            0x0               
// 0x30EC     LRFDRFE           DIV                  [4]        BIAS               0x0               
// 0x30EC     LRFDRFE           DIV                  [3]        OUT                0x1               
// 0x30EC     LRFDRFE           DIV                  [2:0]      RATIO              0x0               
// 0x30F0     LRFDRFE           DIVLDO               [15]       SPARE15            0x0               
// 0x30F0     LRFDRFE           DIVLDO               [14:8]     VOUTTRIM           0x00              
// 0x30F0     LRFDRFE           DIVLDO               [7]        ITST               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [6:4]      TMUX               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [3]        SPARE3             0x0               
// 0x30F0     LRFDRFE           DIVLDO               [2]        MODE               0x0               
// 0x30F0     LRFDRFE           DIVLDO               [1]        BYPASS             0x0               
// 0x30F0     LRFDRFE           DIVLDO               [0]        CTL                0x0               
// 0x30F4     LRFDRFE           TDCLDO               [14:8]     VOUTTRIM           0x00              
// 0x30F8     LRFDRFE           DCOLDO0              [13:8]     SECONDTRIM         0x00              
// 0x30F8     LRFDRFE           DCOLDO0              [7:4]      FIRSTTRIM          0x0               
// 0x30FC     LRFDRFE           DCOLDO1              [10]       REFSRC             0x0               
// 0x30FC     LRFDRFE           DCOLDO1              [9:8]      DIVATST            0x0               
// 0x3100     LRFDRFE           PRE0                 [13:8]     PLLDIV1            0x07              
// 0x3100     LRFDRFE           PRE0                 [5:0]      PLLDIV0            0x06              
// 0x3104     LRFDRFE           PRE1                 [5:0]      HSDDC              0x00              
// 0x3108     LRFDRFE           PRE2                 [15:12]    MIDCALDIVLSB       0x0               
// 0x3108     LRFDRFE           PRE2                 [11:6]     CRSCALDIV          0x18              
// 0x3108     LRFDRFE           PRE2                 [5:0]      FSMDIV             0x05              
// 0x310C     LRFDRFE           PRE3                 [15:5]     FINECALDIV         0x030             
// 0x310C     LRFDRFE           PRE3                 [4:0]      MIDCALDIVMSB       0x03              
// 0x3110     LRFDRFE           CAL0                 [14:8]     FCSTART            0x40              
// 0x3110     LRFDRFE           CAL0                 [3:2]      TDCAVG             0x2               
// 0x3114     LRFDRFE           CAL1                 [14:8]     FCTOP              0x7F              
// 0x3114     LRFDRFE           CAL1                 [6:0]      FCBOT              0x00              
// 0x3120     LRFDRFE           MISC0                [13]       PHCPT              0x0               
// 0x3120     LRFDRFE           MISC0                [12]       TDCCALCORR         0x1               
// 0x3120     LRFDRFE           MISC0                [11]       TDCMSBCORR         0x1               
// 0x3120     LRFDRFE           MISC0                [5:4]      DLYCANCRS          0x2               
// 0x3130     LRFDRFE           PHEDISC              [13:10]    CNT                0x3               
// 0x3130     LRFDRFE           PHEDISC              [9:0]      THR                0x007             
// 0x3138     LRFDRFE           PLLMON0              [15:14]    PHELOLCNT          0x3               
// 0x3138     LRFDRFE           PLLMON0              [13:8]     PHELOLTHR          0x1F              
// 0x3138     LRFDRFE           PLLMON0              [6:0]      FCTHR              0x7F              
// 0x313C     LRFDRFE           PLLMON1              [12:8]     PHELOCKCNT         0x04              
// 0x313C     LRFDRFE           PLLMON1              [7:0]      PHELOCKTHR         0x7F              
// 0x3140     LRFDRFE           MOD0                 [12:11]    SCHEME             0x3               
// 0x3140     LRFDRFE           MOD0                 [10:8]     SYMSHP             0x3               
// 0x2020     PBE_IEEE_RAM      SYNTHCALTIMEOUT      [15:0]     VAL                0x00B4            
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [15]       APPENDTIMESTAMP    0x1               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [14]       APPENDRSSI         0x1               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [12]       APPENDLQI          0x1               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [11]       APPENDSTATUS       0x0               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [10]       APPENDCRC          0x0               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [8]        AUTOFLUSHIGN       0x1               
// 0x2022     PBE_IEEE_RAM      FIFOCFG              [7]        AUTOFLUSHCRC       0x1               
// 0x2024     PBE_IEEE_RAM      EXTRABYTES           [15:0]     VAL                0x0006            
// 0x2028     PBE_IEEE_RAM      PRETXIFS             [15:0]     VAL                0x0300            
// 0x202A     PBE_IEEE_RAM      PRERXIFS             [15:0]     VAL                0x02D8            
// 0x20AC     PBE_IEEE_RAM      PRETXIFSV2           [15:0]     VAL                0x0300            
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [7]        CHRGFILT           0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [6]        VREFBP             0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [5]        TXWAITMOD          0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [4]        PHEDISC            0x1               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [3]        RTRIMTST           0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [2]        IIR                0x0               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [1]        REFDTHR            0x1               
// 0x6804     RFE_COMMON_RAM    SYNTHCTL             [0]        FCDEM              0x0               
// 0x6806     RFE_COMMON_RAM    TDCCAL0              [10:8]     STOP               0x3               
// 0x6808     RFE_COMMON_RAM    TDCCAL1              [7:0]      SUB                0x00              
// 0x680A     RFE_COMMON_RAM    TDCCAL2              [5:0]      AVG                0x10              
// 0x680C     RFE_COMMON_RAM    TDCPLL               [10:8]     STOP               0x4               
// 0x680E     RFE_COMMON_RAM    K1LSB                [15:0]     VAL                0x569B            
// 0x6810     RFE_COMMON_RAM    K1MSB                [15:0]     VAL                0x010A            
// 0x6812     RFE_COMMON_RAM    K2BL                 [15]       HPM                0x0               
// 0x6812     RFE_COMMON_RAM    K2BL                 [14:0]     VAL                0x012D            
// 0x6814     RFE_COMMON_RAM    K2AL                 [15]       HPM                0x0               
// 0x6814     RFE_COMMON_RAM    K2AL                 [14:0]     VAL                0x0034            
// 0x6816     RFE_COMMON_RAM    K3BL                 [15:0]     VAL                0x132C            
// 0x6818     RFE_COMMON_RAM    K3AL                 [15:0]     VAL                0x07AB            
// 0x681A     RFE_COMMON_RAM    K5                   [15:0]     VAL                0x916F            
// 0x6820     RFE_COMMON_RAM    RTRIMOFF             [3:0]      VAL                0x0               
// 0x6822     RFE_COMMON_RAM    RTRIMMIN             [3:0]      VAL                0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [15]       PDET               0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [14:12]    NMIREFTRIM         0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [11:9]     PMIREFTRIM         0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [8]        TXBOOST            0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [7]        S1GFRC             0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [6:5]      BUFGAIN            0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [4]        BIAS               0x0               
// 0x6824     RFE_COMMON_RAM    DIVI                 [3]        OUT                0x1               
// 0x6824     RFE_COMMON_RAM    DIVI                 [2:0]      RATIO              0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [15]       PDET               0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [14:12]    NMIREFTRIM         0x4               
// 0x6826     RFE_COMMON_RAM    DIVF                 [11:9]     PMIREFTRIM         0x4               
// 0x6826     RFE_COMMON_RAM    DIVF                 [8]        TXBOOST            0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [7]        S1GFRC             0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [6:5]      BUFGAIN            0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [4]        BIAS               0x0               
// 0x6826     RFE_COMMON_RAM    DIVF                 [3]        OUT                0x1               
// 0x6826     RFE_COMMON_RAM    DIVF                 [2:0]      RATIO              0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [15]       ITEST              0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [14:8]     VOUTTRIM           0x00              
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [7]        ITST               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [6:4]      TMUX               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [2]        MODE               0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [1]        BYPASS             0x0               
// 0x6828     RFE_COMMON_RAM    DIVLDOI              [0]        CTL                0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [15]       ITEST              0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [14:8]     VOUTTRIM           0x00              
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [7]        ITST               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [6:4]      TMUX               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [2]        MODE               0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [1]        BYPASS             0x0               
// 0x682A     RFE_COMMON_RAM    DIVLDOF              [0]        CTL                0x0               
// 0x682C     RFE_COMMON_RAM    DIVLDOIOFF           [6:0]      VAL                0x14              
// 0x682E     RFE_COMMON_RAM    LDOSETTLE            [9:0]      VAL                0x047             
// 0x6830     RFE_COMMON_RAM    CHRGSETTLE           [9:0]      VAL                0x02E             
// 0x6832     RFE_COMMON_RAM    DCOSETTLE            [9:0]      VAL                0x005             
// 0x6834     RFE_COMMON_RAM    IFAMPRFLDOTX         [15:9]     TRIM               0x7F              
// 0x6836     RFE_COMMON_RAM    IFAMPRFLDODEFAULT    [15:9]     TRIM               0x00              
// 0x683E     RFE_COMMON_RAM    PHYRSSIOFFSET        [7:0]      VAL                0x46              
// 0x6842     RFE_COMMON_RAM    SPARE1SHADOW         [15:0]     VAL                0x0028            
// 0x6844     RFE_COMMON_RAM    AGCINFO              [0]        MODE               0x1               


#endif // _TI_RADIO_CONFIG_H_
