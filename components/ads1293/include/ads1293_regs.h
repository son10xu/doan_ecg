
#ifndef ADS1293_REGS_H
#define ADS1293_REGS_H

/* =========================================
 * ADS1293 REGISTER MAP
 * Texas Instruments
 * ========================================= */

/* 1. Operation Mode Registers */
#define ADS1293_REG_CONFIG 0x00

/* 2. Input Channel Selection Registers */
#define ADS1293_REG_FLEX_CH1_CN 0x01
#define ADS1293_REG_FLEX_CH2_CN 0x02
#define ADS1293_REG_FLEX_CH3_CN 0x03
#define ADS1293_REG_FLEX_PACE_CN 0x04
#define ADS1293_REG_FLEX_VBAT_CN 0x05

/* 3. Lead-off Detect Control Registers */
#define ADS1293_REG_LOD_CN 0x06
#define ADS1293_REG_LOD_EN 0x07
#define ADS1293_REG_LOD_CURRENT 0x08
#define ADS1293_REG_LOD_AC_CN 0x09

/* 4. Common-Mode and RLD Registers */
#define ADS1293_REG_CMDET_EN 0x0A
#define ADS1293_REG_CMDET_CN 0x0B
#define ADS1293_REG_RLD_CN 0x0C

/* 5. Wilson Control Registers */
#define ADS1293_REG_WILSON_EN1 0x0D
#define ADS1293_REG_WILSON_EN2 0x0E
#define ADS1293_REG_WILSON_EN3 0x0F
#define ADS1293_REG_WILSON_CN 0x10

/* 6. Reference Registers */
#define ADS1293_REG_REF_CN 0x11

/* 7. Oscillator Control Registers */
#define ADS1293_REG_OSC_CN 0x12

/* 8. Analog Front-End Control Registers */
#define ADS1293_REG_AFE_RES 0x13
#define ADS1293_REG_AFE_SHDN_CN 0x14
#define ADS1293_REG_AFE_FAULT_CN 0x15
#define ADS1293_REG_RESERVED_16 0x16
#define ADS1293_REG_AFE_PACE_CN 0x17

/* 9. Error Status Registers */
#define ADS1293_REG_ERROR_LOD 0x18
#define ADS1293_REG_ERROR_STATUS 0x19
#define ADS1293_REG_ERROR_RANGE1 0x1A
#define ADS1293_REG_ERROR_RANGE2 0x1B
#define ADS1293_REG_ERROR_RANGE3 0x1C
#define ADS1293_REG_ERROR_SYNC 0x1D
#define ADS1293_REG_ERROR_MISC 0x1E

/* 10. Digital Registers */
#define ADS1293_REG_DIGO_STRENGTH 0x1F

/* 11. Decimation Rate Registers */
#define ADS1293_REG_R2_RATE 0x21
#define ADS1293_REG_R3_RATE_CH1 0x22
#define ADS1293_REG_R3_RATE_CH2 0x23
#define ADS1293_REG_R3_RATE_CH3 0x24
#define ADS1293_REG_R1_RATE 0x25

/* 12. Digital Filter Registers */
#define ADS1293_REG_DIS_EFILTER 0x26

/* 13. Data Ready and Synchronization */
#define ADS1293_REG_DRDYB_SRC 0x27
#define ADS1293_REG_SYNCB_CN 0x28
#define ADS1293_REG_MASK_DRDYB 0x29
#define ADS1293_REG_MASK_ERR 0x2A

/* 14. Additional Digital Control */
#define ADS1293_REG_ALARM_FILTER 0x2E
#define ADS1293_REG_CH_CNFG 0x2F

/* 15. Data Status */
#define ADS1293_REG_DATA_STATUS 0x30

/* 16. Pace Data Registers (16-bit) */
#define ADS1293_REG_DATA_CH1_PACE 0x31
#define ADS1293_REG_DATA_CH2_PACE 0x33
#define ADS1293_REG_DATA_CH3_PACE 0x35

/* 17. ECG Data Registers (24-bit) */
#define ADS1293_REG_DATA_CH1_ECG 0x37
#define ADS1293_REG_DATA_CH2_ECG 0x3A
#define ADS1293_REG_DATA_CH3_ECG 0x3D

/* 18. Device Identification */
#define ADS1293_REG_REVID 0x40

/* 19. Loop Read Back */
#define ADS1293_REG_DATA_LOOP 0x50

/* Default Register Values */

#define ADS1293_CONFIG_DEFAULT 0x02

#define ADS1293_LOD_CN_DEFAULT 0x08

#define ADS1293_AFE_PACE_CN_DEFAULT 0x01

#define ADS1293_DIG_STRENGTH_DEFAULT 0x03

#define ADS1293_R2_RATE_DEFAULT 0x08

#define ADS1293_R3_RATE_DEFAULT 0x80

#define ADS1293_R1_RATE_DEFAULT 0x00

#define ADS1293_SYNCB_CN_DEFAULT 0x40

#define ADS1293_ALARM_FILTER_DEFAULT 0x33

#define ADS1293_REVID_DEFAULT 0x01

#endif /* ADS1293_REGS_H */
