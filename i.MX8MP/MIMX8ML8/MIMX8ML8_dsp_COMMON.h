/*
** ###################################################################
**     Processors:          MIMX8ML8CVNKZ_dsp
**                          MIMX8ML8DVNLZ_dsp
**
**     Compiler:            Xtensa Compiler
**     Reference manual:    IMX8MPRM, Rev.D, 12/2020
**     Version:             rev. 6.0, 2024-10-29
**     Build:               b260205
**
**     Abstract:
**         Peripheral Access Layer for MIMX8ML8_dsp
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2019-10-11)
**         Initial version.
**     - rev. 2.0 (2020-02-21)
**         Rev.B Header.
**     - rev. 3.0 (2020-06-22)
**         Rev.C Header.
**     - rev. 4.0 (2020-11-16)
**         Rev.D Header.
**     - rev. 5.0 (2021-03-01)
**         Rev.D Header Final.
**     - rev. 6.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file MIMX8ML8_dsp_COMMON.h
 * @version 6.0
 * @date 2024-10-29
 * @brief Peripheral Access Layer for MIMX8ML8_dsp
 *
 * Peripheral Access Layer for MIMX8ML8_dsp
 */

#if !defined(MIMX8ML8_DSP_COMMON_H_)
#define MIMX8ML8_DSP_COMMON_H_                   /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0600U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U

/* ----------------------------------------------------------------------------
   --
   ---------------------------------------------------------------------------- */

/* IO definitions (access restrictions to peripheral registers) */
/**
    \defgroup CMSIS_glob_defs CMSIS Global Defines
    <strong>IO Type Qualifiers</strong> are used
    \li to specify the access to peripheral variables.
    \li for automatic generation of peripheral register debug information.
*/
#define     __I     volatile const       /*!< Defines 'read only' permissions */
#define     __O     volatile             /*!< Defines 'write only' permissions */
#define     __IO    volatile             /*!< Defines 'read / write' permissions */

/* following defines should be used for structure members */
#define     __IM     volatile const      /*! Defines 'read only' structure member permissions */
#define     __OM     volatile            /*! Defines 'write only' structure member permissions */
#define     __IOM    volatile            /*! Defines 'read / write' structure member permissions */

#define __STATIC_INLINE static inline

#define __BKPT(value) do {} while(0)
#define __NOP() do {} while(0)

#include "system_MIMX8ML8_dsp.h"     /* Device specific configuration file */



/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 182                /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Device specific interrupts */
  RtosTimer0_IRQn              = 2,                /**< Internal RTOS Timer0 Interrupt. */
  RtosTimer1_IRQn              = 3,                /**< Internal RTOS Timer1 Interrupt. */
  MU2_MU3_IRQn                 = 7,                /**< From MU2 and MU3(the two MU instances for communication with the Audio DSP). */
  Software0_IRQn               = 8,                /**< Software0 triggered Interrupt. */
  Software1_IRQn               = 9,                /**< Software1 triggered Interrupt. */
  WriteError_IRQn              = 10,               /**< Write Error Interrupt. */
  IRQSTEER_0_IRQn              = 19,               /**< External IRQSTEER interrupt 0. */
  IRQSTEER_1_IRQn              = 20,               /**< External IRQSTEER interrupt 1. */
  IRQSTEER_2_IRQn              = 21,               /**< External IRQSTEER interrupt 2. */
  IRQSTEER_3_IRQn              = 22,               /**< External IRQSTEER interrupt 3. */
  IRQSTEER_4_IRQn              = 23,               /**< External IRQSTEER interrupt 4. */
  IRQSTEER_5_IRQn              = 24,               /**< External IRQSTEER interrupt 5. */
  IRQSTEER_6_IRQn              = 25,               /**< External IRQSTEER interrupt 6. */
  IRQSTEER_7_IRQn              = 26,               /**< External IRQSTEER interrupt 7. */
  IRQSTEER_8_IRQn              = 27,               /**< External IRQSTEER interrupt 8. */
  Profiling_IRQn               = 31,               /**< Profiling Interrupt. */
  DAP_IRQn                     = 33,               /**< DAP Interrupt(IRQSTEER Source 1) */
  SDMA1_IRQn                   = 34,               /**< AND of all 48 SDMA1 interrupts (events) from all the channels(IRQSTEER Source 2) */
  GPU3D_IRQn                   = 35,               /**< GPU3D Interrupt(IRQSTEER Source 3) */
  SNVS_IRQn                    = 36,               /**< ON-OFF button press shorter than 5 seconds (pulse event)(IRQSTEER Source 4) */
  LCDIF1_IRQn                  = 37,               /**< LCDIF1 Interrupt(IRQSTEER Source 5) */
  LCDIF2_IRQn                  = 38,               /**< LCDIF2 Interrupt(IRQSTEER Source 6) */
  VPU_G1_IRQn                  = 39,               /**< VPU G1 Decoder Interrupt(IRQSTEER Source 7) */
  VPU_G2_IRQn                  = 40,               /**< VPU G2 Decoder Interrupt(IRQSTEER Source 8) */
  QOS_IRQn                     = 41,               /**< QOS interrupt(IRQSTEER Source 9) */
  WDOG3_IRQn                   = 42,               /**< Watchdog Timer reset(IRQSTEER Source 10) */
  HS_CP1_IRQn                  = 43,               /**< HS Interrupt Request(IRQSTEER Source 11) */
  APBHDMA_IRQn                 = 44,               /**< GPMI operation channel 0-3 description complete interrupt(IRQSTEER Source 12) */
  ML_IRQn                      = 45,               /**< Machine Learning Processor Interrupt(IRQSTEER Source 13) */
  BCH_IRQn                     = 46,               /**< BCH operation complete interrupt(IRQSTEER Source 14) */
  GPMI_IRQn                    = 47,               /**< GPMI operation TIMEOUT ERROR interrupt(IRQSTEER Source 15) */
  ISI_IRQn                     = 48,               /**< ISI Interrupt(IRQSTEER Source 16) */
  MIPI_CSI1_IRQn               = 49,               /**< MIPI CSI Interrupt(IRQSTEER Source 17) */
  MIPI_DSI_IRQn                = 50,               /**< MIPI DSI Interrupt(IRQSTEER Source 18) */
  SNVS_Consolidated_IRQn       = 51,               /**< SRTC Consolidated Interrupt. Non TZ.(IRQSTEER Source 19) */
  SNVS_Security_IRQn           = 52,               /**< SRTC Security Interrupt. TZ.(IRQSTEER Source 20) */
  CSU_IRQn                     = 53,               /**< CSU Interrupt Request. Indicates to the processor that one or more alarm inputs were asserted.(IRQSTEER Source 21) */
  USDHC1_IRQn                  = 54,               /**< uSDHC1 Enhanced SDHC Interrupt Request(IRQSTEER Source 22) */
  USDHC2_IRQn                  = 55,               /**< uSDHC2 Enhanced SDHC Interrupt Request(IRQSTEER Source 23) */
  USDHC3_IRQn                  = 56,               /**< uSDHC3 Enhanced SDHC Interrupt Request(IRQSTEER Source 24) */
  GPU2D_IRQn                   = 57,               /**< GPU2D Interrupt(IRQSTEER Source 25) */
  UART1_IRQn                   = 58,               /**< UART-1 ORed interrupt(IRQSTEER Source 26) */
  UART2_IRQn                   = 59,               /**< UART-2 ORed interrupt(IRQSTEER Source 27) */
  UART3_IRQn                   = 60,               /**< UART-3 ORed interrupt(IRQSTEER Source 28) */
  UART4_IRQn                   = 61,               /**< UART-4 ORed interrupt(IRQSTEER Source 29) */
  VPU_IRQn                     = 62,               /**< VPU Encoder Interrupt(IRQSTEER Source 30) */
  ECSPI1_IRQn                  = 63,               /**< ECSPI1 interrupt request line to the core.(IRQSTEER Source 31) */
  ECSPI2_IRQn                  = 64,               /**< ECSPI2 interrupt request line to the core.(IRQSTEER Source 32) */
  ECSPI3_IRQn                  = 65,               /**< ECSPI3 interrupt request line to the core.(IRQSTEER Source 33) */
  SDMA3_IRQn                   = 66,               /**< AND of all 48 SDMA3 interrupts (events) from all the channels(IRQSTEER Source 34) */
  I2C1_IRQn                    = 67,               /**< I2C-1 Interrupt(IRQSTEER Source 35) */
  I2C2_IRQn                    = 68,               /**< I2C-2 Interrupt(IRQSTEER Source 36) */
  I2C3_IRQn                    = 69,               /**< I2C-3 Interrupt(IRQSTEER Source 37) */
  I2C4_IRQn                    = 70,               /**< I2C-4 Interrupt(IRQSTEER Source 38) */
  RDC_IRQn                     = 71,               /**< RDC interrupt(IRQSTEER Source 39) */
  USB1_IRQn                    = 72,               /**< USB1 Interrupt(IRQSTEER Source 40) */
  USB2_IRQn                    = 73,               /**< USB2 Interrupt(IRQSTEER Source 41) */
  ISI_CH1_IRQn                 = 74,               /**< ISI Camera Channel 1 Interrupt(IRQSTEER Source 42) */
  HDMI_TX_IRQn                 = 75,               /**< HDMI TX Subsystem Interrupt(IRQSTEER Source 43) */
  PDM_HWVAD_EVENT_IRQn         = 76,               /**< Digital Microphone interface voice activity detector event interrupt(IRQSTEER Source 44) */
  PDM_HWVAD_ERROR_IRQn         = 77,               /**< Digital Microphone interface voice activity detector error interrupt(IRQSTEER Source 45) */
  GPT6_IRQn                    = 78,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 46) */
  SCTR_IRQ0_IRQn               = 79,               /**< System Counter Interrupt 0(IRQSTEER Source 47) */
  SCTR_IRQ1_IRQn               = 80,               /**< System Counter Interrupt 1(IRQSTEER Source 48) */
  ANAMIX_IRQn                  = 81,               /**< TempSensor (Temperature alarm and criticl alarm).(IRQSTEER Source 49) */
  I2S3_IRQn                    = 82,               /**< SAI3 Receive / Transmit Interrupt(IRQSTEER Source 50) */
  GPT5_IRQn                    = 83,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 51) */
  GPT4_IRQn                    = 84,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 52) */
  GPT3_IRQn                    = 85,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 53) */
  GPT2_IRQn                    = 86,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 54) */
  GPT1_IRQn                    = 87,               /**< OR of GPT Rollover interrupt line, Input Capture 1 and 2 lines, Output Compare 1, 2, and 3 Interrupt lines(IRQSTEER Source 55) */
  GPIO1_INT7_IRQn              = 88,               /**< Active HIGH Interrupt from INT7 from GPIO(IRQSTEER Source 56) */
  GPIO1_INT6_IRQn              = 89,               /**< Active HIGH Interrupt from INT6 from GPIO(IRQSTEER Source 57) */
  GPIO1_INT5_IRQn              = 90,               /**< Active HIGH Interrupt from INT5 from GPIO(IRQSTEER Source 58) */
  GPIO1_INT4_IRQn              = 91,               /**< Active HIGH Interrupt from INT4 from GPIO(IRQSTEER Source 59) */
  GPIO1_INT3_IRQn              = 92,               /**< Active HIGH Interrupt from INT3 from GPIO(IRQSTEER Source 60) */
  GPIO1_INT2_IRQn              = 93,               /**< Active HIGH Interrupt from INT2 from GPIO(IRQSTEER Source 61) */
  GPIO1_INT1_IRQn              = 94,               /**< Active HIGH Interrupt from INT1 from GPIO(IRQSTEER Source 62) */
  GPIO1_INT0_IRQn              = 95,               /**< Active HIGH Interrupt from INT0 from GPIO(IRQSTEER Source 63) */
  GPIO1_Combined_0_15_IRQn     = 96,               /**< Combined interrupt indication for GPIO1 signal 0 throughout 15(IRQSTEER Source 64) */
  GPIO1_Combined_16_31_IRQn    = 97,               /**< Combined interrupt indication for GPIO1 signal 16 throughout 31(IRQSTEER Source 65) */
  GPIO2_Combined_0_15_IRQn     = 98,               /**< Combined interrupt indication for GPIO2 signal 0 throughout 15(IRQSTEER Source 66) */
  GPIO2_Combined_16_31_IRQn    = 99,               /**< Combined interrupt indication for GPIO2 signal 16 throughout 31(IRQSTEER Source 67) */
  GPIO3_Combined_0_15_IRQn     = 100,              /**< Combined interrupt indication for GPIO3 signal 0 throughout 15(IRQSTEER Source 68) */
  GPIO3_Combined_16_31_IRQn    = 101,              /**< Combined interrupt indication for GPIO3 signal 16 throughout 31(IRQSTEER Source 69) */
  GPIO4_Combined_0_15_IRQn     = 102,              /**< Combined interrupt indication for GPIO4 signal 0 throughout 15(IRQSTEER Source 70) */
  GPIO4_Combined_16_31_IRQn    = 103,              /**< Combined interrupt indication for GPIO4 signal 16 throughout 31(IRQSTEER Source 71) */
  GPIO5_Combined_0_15_IRQn     = 104,              /**< Combined interrupt indication for GPIO5 signal 0 throughout 15(IRQSTEER Source 72) */
  GPIO5_Combined_16_31_IRQn    = 105,              /**< Combined interrupt indication for GPIO5 signal 16 throughout 31(IRQSTEER Source 73) */
  ISP1_IRQn                    = 106,              /**< ISP 1 ISP Interrupts(IRQSTEER Source 74) */
  ISP2_IRQn                    = 107,              /**< ISP 2 ISP Interrupts(IRQSTEER Source 75) */
  I2C5_IRQn                    = 108,              /**< I2C-5 Interrupt(IRQSTEER Source 76) */
  I2C6_IRQn                    = 109,              /**< I2C-6 Interrupt(IRQSTEER Source 77) */
  WDOG1_IRQn                   = 110,              /**< Watchdog Timer reset(IRQSTEER Source 78) */
  WDOG2_IRQn                   = 111,              /**< Watchdog Timer reset(IRQSTEER Source 79) */
  MIPI_CSI2_IRQn               = 112,              /**< MIPI CSI 2 Interrupt(IRQSTEER Source 80) */
  PWM1_IRQn                    = 113,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line.(IRQSTEER Source 81) */
  PWM2_IRQn                    = 114,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line.(IRQSTEER Source 82) */
  PWM3_IRQn                    = 115,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line.(IRQSTEER Source 83) */
  PWM4_IRQn                    = 116,              /**< Cumulative interrupt line. OR of Rollover Interrupt line, Compare Interrupt line and FIFO Waterlevel crossing interrupt line.(IRQSTEER Source 84) */
  CCM_IRQ1_IRQn                = 117,              /**< CCM Interrupt Request 1(IRQSTEER Source 85) */
  CCM_IRQ2_IRQn                = 118,              /**< CCM Interrupt Request 2(IRQSTEER Source 86) */
  GPC_IRQn                     = 119,              /**< GPC Interrupt Request 1(IRQSTEER Source 87) */
  MU1_A53_IRQn                 = 120,              /**< Interrupt to A53 (A53,M7 MU)(IRQSTEER Source 88) */
  SRC_IRQn                     = 121,              /**< SRC interrupt request(IRQSTEER Source 89) */
  I2S56_IRQn                   = 122,              /**< SAI5/6 Receive / Transmit Interrupt(IRQSTEER Source 90) */
  RTIC_IRQn                    = 123,              /**< RTIC Interrupt(IRQSTEER Source 91) */
  CPU_PerformanceUnit_IRQn     = 124,              /**< Performance Unit Interrupts from Cheetah (interrnally: PMUIRQ[n](IRQSTEER Source 92) */
  CPU_CTI_Trigger_IRQn         = 125,              /**< CTI trigger outputs (internal: nCTIIRQ[n](IRQSTEER Source 93) */
  SRC_Combined_IRQn            = 126,              /**< Combined CPU wdog interrupts (4x) out of SRC.(IRQSTEER Source 94) */
  I2S1_IRQn                    = 127,              /**< SAI1 Receive / Transmit Interrupt(IRQSTEER Source 95) */
  I2S2_IRQn                    = 128,              /**< SAI2 Receive / Transmit Interrupt(IRQSTEER Source 96) */
  MU1_M7_IRQn                  = 129,              /**< Interrupt to M7 (A53, M7 MU)(IRQSTEER Source 97) */
  DDR_PerformanceMonitor_IRQn  = 130,              /**< ddr Interrupt for performance monitor(IRQSTEER Source 98) */
  DDR_IRQn                     = 131,              /**< ddr Interrupt(IRQSTEER Source 99) */
  DEWARP_IRQn                  = 132,              /**< Dewarp Interrupt(IRQSTEER Source 100) */
  CPU_Error_AXI_IRQn           = 133,              /**< CPU Error indicator for AXI transaction with a write response error condition(IRQSTEER Source 101) */
  CPU_Error_L2RAM_IRQn         = 134,              /**< CPU Error indicator for L2 RAM double-bit ECC error(IRQSTEER Source 102) */
  SDMA2_IRQn                   = 135,              /**< AND of all 48 SDMA2 interrupts (events) from all the channels(IRQSTEER Source 103) */
  SJC_IRQn                     = 136,              /**< Interrupt triggered by SJC register(IRQSTEER Source 104) */
  CAAM_IRQ0_IRQn               = 137,              /**< CAAM interrupt queue for JQ(IRQSTEER Source 105) */
  CAAM_IRQ1_IRQn               = 138,              /**< CAAM interrupt queue for JQ(IRQSTEER Source 106) */
  FlexSPI_IRQn                 = 139,              /**< FlexSPI Interrupt(IRQSTEER Source 107) */
  TZASC_IRQn                   = 140,              /**< TZASC (PL380) interrupt(IRQSTEER Source 108) */
  PDM_EVENT_IRQn               = 141,              /**< Digital Microphone interface interrupt(IRQSTEER Source 109) */
  PDM_ERROR_IRQn               = 142,              /**< Digital Microphone interface error interrupt(IRQSTEER Source 110) */
  I2S7_IRQn                    = 143,              /**< SAI7 Receive / Transmit Interrupt(IRQSTEER Source 111) */
  PERFMON1_IRQn                = 144,              /**< General Interrupt(IRQSTEER Source 112) */
  PERFMON2_IRQn                = 145,              /**< General Interrupt(IRQSTEER Source 113) */
  CAAM_IRQ2_IRQn               = 146,              /**< CAAM interrupt queue for JQ(IRQSTEER Source 114) */
  CAAM_ERROR_IRQn              = 147,              /**< Recoverable error interrupt(IRQSTEER Source 115) */
  HS_CP0_IRQn                  = 148,              /**< HS Interrupt Request(IRQSTEER Source 116) */
  CM7_CTI_IRQn                 = 149,              /**< CTI trigger outputs from CM7 platform(IRQSTEER Source 117) */
  ENET1_MAC0_Rx_Tx_Done1_IRQn  = 150,              /**< MAC 0 Receive / Trasmit Frame / Buffer Done(IRQSTEER Source 118) */
  ENET1_MAC0_Rx_Tx_Done2_IRQn  = 151,              /**< MAC 0 Receive / Trasmit Frame / Buffer Done(IRQSTEER Source 119) */
  ENET1_IRQn                   = 152,              /**< MAC 0 IRQ(IRQSTEER Source 120) */
  ENET1_1588_Timer_IRQn        = 153,              /**< MAC 0 1588 Timer Interrupt-synchronous(IRQSTEER Source 121) */
  ASRC_IRQn                    = 154,              /**< ASRC Interrupt(IRQSTEER Source 122) */
  PCIE_CTRL1_0_IRQn            = 155,              /**< Coming from GLUE logic, of set/reset FF, driven by PCIE signals, interrupt 0(IRQSTEER Source 123) */
  PCIE_CTRL1_1_IRQn            = 156,              /**< Coming from GLUE logic, of set/reset FF, driven by PCIE signals, interrupt 1(IRQSTEER Source 124) */
  PCIE_CTRL1_2_IRQn            = 157,              /**< Coming from GLUE logic, of set/reset FF, driven by PCIE signals, interrupt 2(IRQSTEER Source 125) */
  PCIE_CTRL1_3_IRQn            = 158,              /**< Coming from GLUE logic, of set/reset FF, driven by PCIE signals, interrupt 3(IRQSTEER Source 126) */
  PCIE_EDMA_IRQn               = 159,              /**< Channels [63:32] interrupts requests(IRQSTEER Source 127) */
  AUDIO_XCVR0_IRQn             = 160,              /**< eARC Interrupt 0(IRQSTEER Source 128) */
  AUDIO_XCVR1_IRQn             = 161,              /**< eARC Interrupt 1(IRQSTEER Source 129) */
  AUD2HTX_IRQn                 = 162,              /**< Audio to HDMI TX Audio Link Master Interrupt(IRQSTEER Source 130) */
  EDMA1_ERR_IRQn               = 163,              /**< Audio Subsystem eDMA Error Interrupt(IRQSTEER Source 131) */
  EDMA1_0_15_IRQn              = 164,              /**< Audio Subsystem eDMA Channel Interrupts, Logical OR of channels [15:0](IRQSTEER Source 132) */
  EDMA1_16_31_IRQn             = 165,              /**< Audio Subsystem eDMA Channel Interrupts, Logical OR of channels [31:16](IRQSTEER Source 133) */
  ENET_QOS_PMT_IRQn            = 166,              /**< ENET QOS TSN Interrupt from PMT(IRQSTEER Source 134) */
  ENET_QOS_IRQn                = 167,              /**< ENET QOS TSN LPI RX exit/Host System/RX/TX Channels[4:0] Interrupt(IRQSTEER Source 135) */
  MU2_A53_IRQn                 = 168,              /**< Interrupt to A53 (A53, Audio Processor MU)(IRQSTEER Source 136) */
  MU2_AUDIO_IRQn               = 169,              /**< Interrupt to Audio Processor (A53, Audio Processor MU)(IRQSTEER Source 137) */
  MU3_M7_IRQn                  = 170,              /**< Interrupt to M7 (M7, Audio Processor MU)(IRQSTEER Source 138) */
  MU3_AUDIO_IRQn               = 171,              /**< Interrupt to Audio Processor (M7, Audio Processor MU)(IRQSTEER Source 139) */
  PCIE_CTRL1_IRQn              = 172,              /**< RC/EP message transaction Interrupt(IRQSTEER Source 140) */
  PCIE_CTRL1_ERR_IRQn          = 173,              /**< RC/EP PME Message and Error Interrupt(IRQSTEER Source 141) */
  CAN_FD1_IRQn                 = 174,              /**< CAN-FD1 Interrupt from bus off/line error/RX warning/TX warning/wakeup/match in PN/timeout in PN/busoff done/FD error(IRQSTEER Source 142) */
  CAN_FD1_ERROR_IRQn           = 175,              /**< CAN-FD1 Interrupt from correctable error/non correctable error int host/ non correctable error int internal(IRQSTEER Source 143) */
  CAN_FD2_IRQn                 = 176,              /**< CAN-FD2 Interrupt from bus off/line error/RX warning/TX warning/wakeup/match in PN/timeout in PN/busoff done/FD error(IRQSTEER Source 144) */
  CAN_FD2_ERROR_IRQn           = 177,              /**< CAN-FD2 Interrupt from correctable error/non correctable error int host/ non correctable error int internal(IRQSTEER Source 145) */
  AUDIO_XCVR_IRQn              = 178,              /**< eARC PHY - SPDIF wakeup interrupt(IRQSTEER Source 146) */
  DDR_ERR_IRQn                 = 179,              /**< DRAM Controller Error Interrupt(IRQSTEER Source 147) */
  USB1_WAKEUP_IRQn             = 180,              /**< USB-1 Wake-up Interrupt(IRQSTEER Source 148) */
  USB2_WAKEUP_IRQn             = 181               /**< USB-2 Wake-up Interrupt(IRQSTEER Source 149) */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


#ifndef MIMX8ML8_dsp_SERIES
#define MIMX8ML8_dsp_SERIES
#endif
/* CPU specific feature definitions */
#include "MIMX8ML8_dsp_features.h"

/* AIPSTZ - Peripheral instance base addresses */
/** Peripheral AIPSTZ1 base address */
#define AIPSTZ1_BASE                             (0x301F0000u)
/** Peripheral AIPSTZ1 base pointer */
#define AIPSTZ1                                  ((AIPSTZ_Type *)AIPSTZ1_BASE)
/** Peripheral AIPSTZ2 base address */
#define AIPSTZ2_BASE                             (0x305F0000u)
/** Peripheral AIPSTZ2 base pointer */
#define AIPSTZ2                                  ((AIPSTZ_Type *)AIPSTZ2_BASE)
/** Peripheral AIPSTZ3 base address */
#define AIPSTZ3_BASE                             (0x309F0000u)
/** Peripheral AIPSTZ3 base pointer */
#define AIPSTZ3                                  ((AIPSTZ_Type *)AIPSTZ3_BASE)
/** Peripheral AIPSTZ4 base address */
#define AIPSTZ4_BASE                             (0x32DF0000u)
/** Peripheral AIPSTZ4 base pointer */
#define AIPSTZ4                                  ((AIPSTZ_Type *)AIPSTZ4_BASE)
/** Peripheral AIPSTZ5 base address */
#define AIPSTZ5_BASE                             (0x30DF0000u)
/** Peripheral AIPSTZ5 base pointer */
#define AIPSTZ5                                  ((AIPSTZ_Type *)AIPSTZ5_BASE)
/** Array initializer of AIPSTZ peripheral base addresses */
#define AIPSTZ_BASE_ADDRS                        { AIPSTZ1_BASE, AIPSTZ2_BASE, AIPSTZ3_BASE, AIPSTZ4_BASE, AIPSTZ5_BASE }
/** Array initializer of AIPSTZ peripheral base pointers */
#define AIPSTZ_BASE_PTRS                         { AIPSTZ1, AIPSTZ2, AIPSTZ3, AIPSTZ4, AIPSTZ5 }

/* APBH - Peripheral instance base addresses */
/** Peripheral APBH base address */
#define APBH_BASE                                (0x33000000u)
/** Peripheral APBH base pointer */
#define APBH                                     ((APBH_Type *)APBH_BASE)
/** Array initializer of APBH peripheral base addresses */
#define APBH_BASE_ADDRS                          { APBH_BASE }
/** Array initializer of APBH peripheral base pointers */
#define APBH_BASE_PTRS                           { APBH }
/** Interrupt vectors for the APBH peripheral type */
#define APBH_IRQS                                { APBHDMA_IRQn }

/* ASRC - Peripheral instance base addresses */
/** Peripheral ASRC base address */
#define ASRC_BASE                                (0x30C90000u)
/** Peripheral ASRC base pointer */
#define ASRC                                     ((ASRC_Type *)ASRC_BASE)
/** Array initializer of ASRC peripheral base addresses */
#define ASRC_BASE_ADDRS                          { ASRC_BASE }
/** Array initializer of ASRC peripheral base pointers */
#define ASRC_BASE_PTRS                           { ASRC }

/* AUDIOMIX - Peripheral instance base addresses */
/** Peripheral AUDIOMIX base address */
#define AUDIOMIX_BASE                            (0x30E20000u)
/** Peripheral AUDIOMIX base pointer */
#define AUDIOMIX                                 ((AUDIOMIX_Type *)AUDIOMIX_BASE)
/** Array initializer of AUDIOMIX peripheral base addresses */
#define AUDIOMIX_BASE_ADDRS                      { AUDIOMIX_BASE }
/** Array initializer of AUDIOMIX peripheral base pointers */
#define AUDIOMIX_BASE_PTRS                       { AUDIOMIX }

/* AUDIOPACKETIZER - Peripheral instance base addresses */
/** Peripheral AUDIOPACKETIZER base address */
#define AUDIOPACKETIZER_BASE                     (0x32FDB200u)
/** Peripheral AUDIOPACKETIZER base pointer */
#define AUDIOPACKETIZER                          ((AUDIOPACKETIZER_Type *)AUDIOPACKETIZER_BASE)
/** Array initializer of AUDIOPACKETIZER peripheral base addresses */
#define AUDIOPACKETIZER_BASE_ADDRS               { AUDIOPACKETIZER_BASE }
/** Array initializer of AUDIOPACKETIZER peripheral base pointers */
#define AUDIOPACKETIZER_BASE_PTRS                { AUDIOPACKETIZER }

/* AUDIOSAMPLEGP - Peripheral instance base addresses */
/** Peripheral AUDIOSAMPLEGP base address */
#define AUDIOSAMPLEGP_BASE                       (0x32FDB500u)
/** Peripheral AUDIOSAMPLEGP base pointer */
#define AUDIOSAMPLEGP                            ((AUDIOSAMPLEGP_Type *)AUDIOSAMPLEGP_BASE)
/** Array initializer of AUDIOSAMPLEGP peripheral base addresses */
#define AUDIOSAMPLEGP_BASE_ADDRS                 { AUDIOSAMPLEGP_BASE }
/** Array initializer of AUDIOSAMPLEGP peripheral base pointers */
#define AUDIOSAMPLEGP_BASE_PTRS                  { AUDIOSAMPLEGP }

/* BCH - Peripheral instance base addresses */
/** Peripheral BCH base address */
#define BCH_BASE                                 (0x33004000u)
/** Peripheral BCH base pointer */
#define BCH                                      ((BCH_Type *)BCH_BASE)
/** Array initializer of BCH peripheral base addresses */
#define BCH_BASE_ADDRS                           { BCH_BASE }
/** Array initializer of BCH peripheral base pointers */
#define BCH_BASE_PTRS                            { BCH }
/** Interrupt vectors for the BCH peripheral type */
#define BCH_IRQS                                 { BCH_IRQn }

/* CAN - Peripheral instance base addresses */
/** Peripheral FLEXCAN1 base address */
#define FLEXCAN1_BASE                            (0x308C0000u)
/** Peripheral FLEXCAN1 base pointer */
#define FLEXCAN1                                 ((CAN_Type *)FLEXCAN1_BASE)
/** Peripheral FLEXCAN2 base address */
#define FLEXCAN2_BASE                            (0x308D0000u)
/** Peripheral FLEXCAN2 base pointer */
#define FLEXCAN2                                 ((CAN_Type *)FLEXCAN2_BASE)
/** Array initializer of CAN peripheral base addresses */
#define CAN_BASE_ADDRS                           { 0u, FLEXCAN1_BASE, FLEXCAN2_BASE }
/** Array initializer of CAN peripheral base pointers */
#define CAN_BASE_PTRS                            { (CAN_Type *)0u, FLEXCAN1, FLEXCAN2 }
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }
#define CAN_Tx_Warning_IRQS                      { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }
#define CAN_Wake_Up_IRQS                         { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }
#define CAN_Error_IRQS                           { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }
#define CAN_Bus_Off_IRQS                         { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }
#define CAN_ORed_Message_buffer_IRQS             { NotAvail_IRQn, CAN_FD1_IRQn, CAN_FD2_IRQn }

/* CCM - Peripheral instance base addresses */
/** Peripheral CCM base address */
#define CCM_BASE                                 (0x30380000u)
/** Peripheral CCM base pointer */
#define CCM                                      ((CCM_Type *)CCM_BASE)
/** Array initializer of CCM peripheral base addresses */
#define CCM_BASE_ADDRS                           { CCM_BASE }
/** Array initializer of CCM peripheral base pointers */
#define CCM_BASE_PTRS                            { CCM }
/** Interrupt vectors for the CCM peripheral type */
#define CCM_IRQS                                 { CCM_IRQ1_IRQn, CCM_IRQ2_IRQn }

/* CCM_ANALOG - Peripheral instance base addresses */
/** Peripheral CCM_ANALOG base address */
#define CCM_ANALOG_BASE                          (0x30360000u)
/** Peripheral CCM_ANALOG base pointer */
#define CCM_ANALOG                               ((CCM_ANALOG_Type *)CCM_ANALOG_BASE)
/** Array initializer of CCM_ANALOG peripheral base addresses */
#define CCM_ANALOG_BASE_ADDRS                    { CCM_ANALOG_BASE }
/** Array initializer of CCM_ANALOG peripheral base pointers */
#define CCM_ANALOG_BASE_PTRS                     { CCM_ANALOG }

/* CEC - Peripheral instance base addresses */
/** Peripheral CEC base address */
#define CEC_BASE                                 (0x32FDFD00u)
/** Peripheral CEC base pointer */
#define CEC                                      ((CEC_Type *)CEC_BASE)
/** Array initializer of CEC peripheral base addresses */
#define CEC_BASE_ADDRS                           { CEC_BASE }
/** Array initializer of CEC peripheral base pointers */
#define CEC_BASE_PTRS                            { CEC }

/* COLORSPACECONVERTER - Peripheral instance base addresses */
/** Peripheral COLORSPACECONVERTER base address */
#define COLORSPACECONVERTER_BASE                 (0x32FDC100u)
/** Peripheral COLORSPACECONVERTER base pointer */
#define COLORSPACECONVERTER                      ((COLORSPACECONVERTER_Type *)COLORSPACECONVERTER_BASE)
/** Array initializer of COLORSPACECONVERTER peripheral base addresses */
#define COLORSPACECONVERTER_BASE_ADDRS           { COLORSPACECONVERTER_BASE }
/** Array initializer of COLORSPACECONVERTER peripheral base pointers */
#define COLORSPACECONVERTER_BASE_PTRS            { COLORSPACECONVERTER }

/* DDRC - Peripheral instance base addresses */
/** Peripheral DDRC base address */
#define DDRC_BASE                                (0x3D400000u)
/** Peripheral DDRC base pointer */
#define DDRC                                     ((DDRC_Type *)DDRC_BASE)
/** Array initializer of DDRC peripheral base addresses */
#define DDRC_BASE_ADDRS                          { DDRC_BASE }
/** Array initializer of DDRC peripheral base pointers */
#define DDRC_BASE_PTRS                           { DDRC }

/* DDR_BLK_CTL - Peripheral instance base addresses */
/** Peripheral DDR_BLK_CTRL base address */
#define DDR_BLK_CTRL_BASE                        (0x3D000000u)
/** Peripheral DDR_BLK_CTRL base pointer */
#define DDR_BLK_CTRL                             ((DDR_BLK_CTL_Type *)DDR_BLK_CTRL_BASE)
/** Array initializer of DDR_BLK_CTL peripheral base addresses */
#define DDR_BLK_CTL_BASE_ADDRS                   { DDR_BLK_CTRL_BASE }
/** Array initializer of DDR_BLK_CTL peripheral base pointers */
#define DDR_BLK_CTL_BASE_PTRS                    { DDR_BLK_CTRL }

/* DMA - Peripheral instance base addresses */
/** Peripheral EDMA1 base address */
#define EDMA1_BASE                               (0x30E30000u)
/** Peripheral EDMA1 base pointer */
#define EDMA1                                    ((DMA_Type *)EDMA1_BASE)
/** Array initializer of DMA peripheral base addresses */
#define DMA_BASE_ADDRS                           { EDMA1_BASE }
/** Array initializer of DMA peripheral base pointers */
#define DMA_BASE_PTRS                            { EDMA1 }
/** Interrupt vectors for the DMA peripheral type */
#define DMA_IRQS                                 { { EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_0_15_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn, EDMA1_16_31_IRQn } }

/* DWC_DDRPHYA_ANIB - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_ANIB0 base address */
#define DWC_DDRPHYA_ANIB0_BASE                   (0x3C000000u)
/** Peripheral DWC_DDRPHYA_ANIB0 base pointer */
#define DWC_DDRPHYA_ANIB0                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB0_BASE)
/** Peripheral DWC_DDRPHYA_ANIB1 base address */
#define DWC_DDRPHYA_ANIB1_BASE                   (0x3C001000u)
/** Peripheral DWC_DDRPHYA_ANIB1 base pointer */
#define DWC_DDRPHYA_ANIB1                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB1_BASE)
/** Peripheral DWC_DDRPHYA_ANIB2 base address */
#define DWC_DDRPHYA_ANIB2_BASE                   (0x3C002000u)
/** Peripheral DWC_DDRPHYA_ANIB2 base pointer */
#define DWC_DDRPHYA_ANIB2                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB2_BASE)
/** Peripheral DWC_DDRPHYA_ANIB3 base address */
#define DWC_DDRPHYA_ANIB3_BASE                   (0x3C003000u)
/** Peripheral DWC_DDRPHYA_ANIB3 base pointer */
#define DWC_DDRPHYA_ANIB3                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB3_BASE)
/** Peripheral DWC_DDRPHYA_ANIB4 base address */
#define DWC_DDRPHYA_ANIB4_BASE                   (0x3C004000u)
/** Peripheral DWC_DDRPHYA_ANIB4 base pointer */
#define DWC_DDRPHYA_ANIB4                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB4_BASE)
/** Peripheral DWC_DDRPHYA_ANIB5 base address */
#define DWC_DDRPHYA_ANIB5_BASE                   (0x3C005000u)
/** Peripheral DWC_DDRPHYA_ANIB5 base pointer */
#define DWC_DDRPHYA_ANIB5                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB5_BASE)
/** Peripheral DWC_DDRPHYA_ANIB6 base address */
#define DWC_DDRPHYA_ANIB6_BASE                   (0x3C006000u)
/** Peripheral DWC_DDRPHYA_ANIB6 base pointer */
#define DWC_DDRPHYA_ANIB6                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB6_BASE)
/** Peripheral DWC_DDRPHYA_ANIB7 base address */
#define DWC_DDRPHYA_ANIB7_BASE                   (0x3C007000u)
/** Peripheral DWC_DDRPHYA_ANIB7 base pointer */
#define DWC_DDRPHYA_ANIB7                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB7_BASE)
/** Peripheral DWC_DDRPHYA_ANIB8 base address */
#define DWC_DDRPHYA_ANIB8_BASE                   (0x3C008000u)
/** Peripheral DWC_DDRPHYA_ANIB8 base pointer */
#define DWC_DDRPHYA_ANIB8                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB8_BASE)
/** Peripheral DWC_DDRPHYA_ANIB9 base address */
#define DWC_DDRPHYA_ANIB9_BASE                   (0x3C009000u)
/** Peripheral DWC_DDRPHYA_ANIB9 base pointer */
#define DWC_DDRPHYA_ANIB9                        ((DWC_DDRPHYA_ANIB_Type *)DWC_DDRPHYA_ANIB9_BASE)
/** Array initializer of DWC_DDRPHYA_ANIB peripheral base addresses */
#define DWC_DDRPHYA_ANIB_BASE_ADDRS              { DWC_DDRPHYA_ANIB0_BASE, DWC_DDRPHYA_ANIB1_BASE, DWC_DDRPHYA_ANIB2_BASE, DWC_DDRPHYA_ANIB3_BASE, DWC_DDRPHYA_ANIB4_BASE, DWC_DDRPHYA_ANIB5_BASE, DWC_DDRPHYA_ANIB6_BASE, DWC_DDRPHYA_ANIB7_BASE, DWC_DDRPHYA_ANIB8_BASE, DWC_DDRPHYA_ANIB9_BASE }
/** Array initializer of DWC_DDRPHYA_ANIB peripheral base pointers */
#define DWC_DDRPHYA_ANIB_BASE_PTRS               { DWC_DDRPHYA_ANIB0, DWC_DDRPHYA_ANIB1, DWC_DDRPHYA_ANIB2, DWC_DDRPHYA_ANIB3, DWC_DDRPHYA_ANIB4, DWC_DDRPHYA_ANIB5, DWC_DDRPHYA_ANIB6, DWC_DDRPHYA_ANIB7, DWC_DDRPHYA_ANIB8, DWC_DDRPHYA_ANIB9 }

/* DWC_DDRPHYA_APBONLY - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_APBONLY0 base address */
#define DWC_DDRPHYA_APBONLY0_BASE                (0x3C0D0000u)
/** Peripheral DWC_DDRPHYA_APBONLY0 base pointer */
#define DWC_DDRPHYA_APBONLY0                     ((DWC_DDRPHYA_APBONLY_Type *)DWC_DDRPHYA_APBONLY0_BASE)
/** Array initializer of DWC_DDRPHYA_APBONLY peripheral base addresses */
#define DWC_DDRPHYA_APBONLY_BASE_ADDRS           { DWC_DDRPHYA_APBONLY0_BASE }
/** Array initializer of DWC_DDRPHYA_APBONLY peripheral base pointers */
#define DWC_DDRPHYA_APBONLY_BASE_PTRS            { DWC_DDRPHYA_APBONLY0 }

/* DWC_DDRPHYA_DBYTE - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_DBYTE0 base address */
#define DWC_DDRPHYA_DBYTE0_BASE                  (0x3C010000u)
/** Peripheral DWC_DDRPHYA_DBYTE0 base pointer */
#define DWC_DDRPHYA_DBYTE0                       ((DWC_DDRPHYA_DBYTE_Type *)DWC_DDRPHYA_DBYTE0_BASE)
/** Peripheral DWC_DDRPHYA_DBYTE1 base address */
#define DWC_DDRPHYA_DBYTE1_BASE                  (0x3C011000u)
/** Peripheral DWC_DDRPHYA_DBYTE1 base pointer */
#define DWC_DDRPHYA_DBYTE1                       ((DWC_DDRPHYA_DBYTE_Type *)DWC_DDRPHYA_DBYTE1_BASE)
/** Peripheral DWC_DDRPHYA_DBYTE2 base address */
#define DWC_DDRPHYA_DBYTE2_BASE                  (0x3C012000u)
/** Peripheral DWC_DDRPHYA_DBYTE2 base pointer */
#define DWC_DDRPHYA_DBYTE2                       ((DWC_DDRPHYA_DBYTE_Type *)DWC_DDRPHYA_DBYTE2_BASE)
/** Peripheral DWC_DDRPHYA_DBYTE3 base address */
#define DWC_DDRPHYA_DBYTE3_BASE                  (0x3C013000u)
/** Peripheral DWC_DDRPHYA_DBYTE3 base pointer */
#define DWC_DDRPHYA_DBYTE3                       ((DWC_DDRPHYA_DBYTE_Type *)DWC_DDRPHYA_DBYTE3_BASE)
/** Array initializer of DWC_DDRPHYA_DBYTE peripheral base addresses */
#define DWC_DDRPHYA_DBYTE_BASE_ADDRS             { DWC_DDRPHYA_DBYTE0_BASE, DWC_DDRPHYA_DBYTE1_BASE, DWC_DDRPHYA_DBYTE2_BASE, DWC_DDRPHYA_DBYTE3_BASE }
/** Array initializer of DWC_DDRPHYA_DBYTE peripheral base pointers */
#define DWC_DDRPHYA_DBYTE_BASE_PTRS              { DWC_DDRPHYA_DBYTE0, DWC_DDRPHYA_DBYTE1, DWC_DDRPHYA_DBYTE2, DWC_DDRPHYA_DBYTE3 }

/* DWC_DDRPHYA_DRTUB - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_DRTUB0 base address */
#define DWC_DDRPHYA_DRTUB0_BASE                  (0x3C0C0000u)
/** Peripheral DWC_DDRPHYA_DRTUB0 base pointer */
#define DWC_DDRPHYA_DRTUB0                       ((DWC_DDRPHYA_DRTUB_Type *)DWC_DDRPHYA_DRTUB0_BASE)
/** Array initializer of DWC_DDRPHYA_DRTUB peripheral base addresses */
#define DWC_DDRPHYA_DRTUB_BASE_ADDRS             { DWC_DDRPHYA_DRTUB0_BASE }
/** Array initializer of DWC_DDRPHYA_DRTUB peripheral base pointers */
#define DWC_DDRPHYA_DRTUB_BASE_PTRS              { DWC_DDRPHYA_DRTUB0 }

/* DWC_DDRPHYA_INITENG - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_INITENG0 base address */
#define DWC_DDRPHYA_INITENG0_BASE                (0x3C090000u)
/** Peripheral DWC_DDRPHYA_INITENG0 base pointer */
#define DWC_DDRPHYA_INITENG0                     ((DWC_DDRPHYA_INITENG_Type *)DWC_DDRPHYA_INITENG0_BASE)
/** Array initializer of DWC_DDRPHYA_INITENG peripheral base addresses */
#define DWC_DDRPHYA_INITENG_BASE_ADDRS           { DWC_DDRPHYA_INITENG0_BASE }
/** Array initializer of DWC_DDRPHYA_INITENG peripheral base pointers */
#define DWC_DDRPHYA_INITENG_BASE_PTRS            { DWC_DDRPHYA_INITENG0 }

/* DWC_DDRPHYA_MASTER - Peripheral instance base addresses */
/** Peripheral DWC_DDRPHYA_MASTER0 base address */
#define DWC_DDRPHYA_MASTER0_BASE                 (0x3C020000u)
/** Peripheral DWC_DDRPHYA_MASTER0 base pointer */
#define DWC_DDRPHYA_MASTER0                      ((DWC_DDRPHYA_MASTER_Type *)DWC_DDRPHYA_MASTER0_BASE)
/** Array initializer of DWC_DDRPHYA_MASTER peripheral base addresses */
#define DWC_DDRPHYA_MASTER_BASE_ADDRS            { DWC_DDRPHYA_MASTER0_BASE }
/** Array initializer of DWC_DDRPHYA_MASTER peripheral base pointers */
#define DWC_DDRPHYA_MASTER_BASE_PTRS             { DWC_DDRPHYA_MASTER0 }

/* EARC - Peripheral instance base addresses */
/** Peripheral AUDIO_XCVR base address */
#define AUDIO_XCVR_BASE                          (0x30CC0000u)
/** Peripheral AUDIO_XCVR base pointer */
#define AUDIO_XCVR                               ((EARC_Type *)AUDIO_XCVR_BASE)
/** Array initializer of EARC peripheral base addresses */
#define EARC_BASE_ADDRS                          { AUDIO_XCVR_BASE }
/** Array initializer of EARC peripheral base pointers */
#define EARC_BASE_PTRS                           { AUDIO_XCVR }

/* ECSPI - Peripheral instance base addresses */
/** Peripheral ECSPI1 base address */
#define ECSPI1_BASE                              (0x30820000u)
/** Peripheral ECSPI1 base pointer */
#define ECSPI1                                   ((ECSPI_Type *)ECSPI1_BASE)
/** Peripheral ECSPI2 base address */
#define ECSPI2_BASE                              (0x30830000u)
/** Peripheral ECSPI2 base pointer */
#define ECSPI2                                   ((ECSPI_Type *)ECSPI2_BASE)
/** Peripheral ECSPI3 base address */
#define ECSPI3_BASE                              (0x30840000u)
/** Peripheral ECSPI3 base pointer */
#define ECSPI3                                   ((ECSPI_Type *)ECSPI3_BASE)
/** Array initializer of ECSPI peripheral base addresses */
#define ECSPI_BASE_ADDRS                         { 0u, ECSPI1_BASE, ECSPI2_BASE, ECSPI3_BASE }
/** Array initializer of ECSPI peripheral base pointers */
#define ECSPI_BASE_PTRS                          { (ECSPI_Type *)0u, ECSPI1, ECSPI2, ECSPI3 }
/** Interrupt vectors for the ECSPI peripheral type */
#define ECSPI_IRQS                               { NotAvail_IRQn, ECSPI1_IRQn, ECSPI2_IRQn, ECSPI3_IRQn }

/* EDDC - Peripheral instance base addresses */
/** Peripheral EDDC base address */
#define EDDC_BASE                                (0x32FDFE00u)
/** Peripheral EDDC base pointer */
#define EDDC                                     ((EDDC_Type *)EDDC_BASE)
/** Array initializer of EDDC peripheral base addresses */
#define EDDC_BASE_ADDRS                          { EDDC_BASE }
/** Array initializer of EDDC peripheral base pointers */
#define EDDC_BASE_PTRS                           { EDDC }

/* ENET - Peripheral instance base addresses */
/** Peripheral ENET1 base address */
#define ENET1_BASE                               (0x30BE0000u)
/** Peripheral ENET1 base pointer */
#define ENET1                                    ((ENET_Type *)ENET1_BASE)
/** Array initializer of ENET peripheral base addresses */
#define ENET_BASE_ADDRS                          { 0u, ENET1_BASE }
/** Array initializer of ENET peripheral base pointers */
#define ENET_BASE_PTRS                           { (ENET_Type *)0u, ENET1 }
/** Interrupt vectors for the ENET peripheral type */
#define ENET_Transmit_IRQS                       { NotAvail_IRQn, ENET1_IRQn }
#define ENET_Receive_IRQS                        { NotAvail_IRQn, ENET1_IRQn }
#define ENET_Error_IRQS                          { NotAvail_IRQn, ENET1_IRQn }
#define ENET_1588_Timer_IRQS                     { NotAvail_IRQn, ENET1_1588_Timer_IRQn }
#define ENET_Ts_IRQS                             { NotAvail_IRQn, ENET1_1588_Timer_IRQn }
/* ENET Buffer Descriptor and Buffer Address Alignment. */
#define ENET_BUFF_ALIGNMENT                      (64U)


/* ENET_QOS - Peripheral instance base addresses */
/** Peripheral ENET_QOS base address */
#define ENET_QOS_BASE                            (0x30BF0000u)
/** Peripheral ENET_QOS base pointer */
#define ENET_QOS                                 ((ENET_QOS_Type *)ENET_QOS_BASE)
/** Array initializer of ENET_QOS peripheral base addresses */
#define ENET_QOS_BASE_ADDRS                      { ENET_QOS_BASE }
/** Array initializer of ENET_QOS peripheral base pointers */
#define ENET_QOS_BASE_PTRS                       { ENET_QOS }
/** Interrupt vectors for the ENET_QOS peripheral type */
#define ENET_QOS_IRQS                            { ENET_QOS_IRQn }
#define ENET_QOS_PMT_IRQS                        { ENET_QOS_PMT_IRQn }

/* FLEXSPI - Peripheral instance base addresses */
/** Peripheral FLEXSPI base address */
#define FLEXSPI_BASE                             (0x30BB0000u)
/** Peripheral FLEXSPI base pointer */
#define FLEXSPI                                  ((FLEXSPI_Type *)FLEXSPI_BASE)
/** Array initializer of FLEXSPI peripheral base addresses */
#define FLEXSPI_BASE_ADDRS                       { FLEXSPI_BASE }
/** Array initializer of FLEXSPI peripheral base pointers */
#define FLEXSPI_BASE_PTRS                        { FLEXSPI }

/* FRAMECOMPOSER - Peripheral instance base addresses */
/** Peripheral FRAMECOMPOSER base address */
#define FRAMECOMPOSER_BASE                       (0x32FD9000u)
/** Peripheral FRAMECOMPOSER base pointer */
#define FRAMECOMPOSER                            ((FRAMECOMPOSER_Type *)FRAMECOMPOSER_BASE)
/** Array initializer of FRAMECOMPOSER peripheral base addresses */
#define FRAMECOMPOSER_BASE_ADDRS                 { FRAMECOMPOSER_BASE }
/** Array initializer of FRAMECOMPOSER peripheral base pointers */
#define FRAMECOMPOSER_BASE_PTRS                  { FRAMECOMPOSER }

/* GLUE_USB - Peripheral instance base addresses */
/** Peripheral USB1_GLUE base address */
#define USB1_GLUE_BASE                           (0x381F0000u)
/** Peripheral USB1_GLUE base pointer */
#define USB1_GLUE                                ((GLUE_USB_Type *)USB1_GLUE_BASE)
/** Peripheral USB2_GLUE base address */
#define USB2_GLUE_BASE                           (0x382F0000u)
/** Peripheral USB2_GLUE base pointer */
#define USB2_GLUE                                ((GLUE_USB_Type *)USB2_GLUE_BASE)
/** Array initializer of GLUE_USB peripheral base addresses */
#define GLUE_USB_BASE_ADDRS                      { USB1_GLUE_BASE, USB2_GLUE_BASE }
/** Array initializer of GLUE_USB peripheral base pointers */
#define GLUE_USB_BASE_PTRS                       { USB1_GLUE, USB2_GLUE }

/* GPC - Peripheral instance base addresses */
/** Peripheral GPC base address */
#define GPC_BASE                                 (0x303A0000u)
/** Peripheral GPC base pointer */
#define GPC                                      ((GPC_Type *)GPC_BASE)
/** Array initializer of GPC peripheral base addresses */
#define GPC_BASE_ADDRS                           { GPC_BASE }
/** Array initializer of GPC peripheral base pointers */
#define GPC_BASE_PTRS                            { GPC }

/* GPC_PGC - Peripheral instance base addresses */
/** Peripheral GPC_PGC base address */
#define GPC_PGC_BASE                             (0x303A0000u)
/** Peripheral GPC_PGC base pointer */
#define GPC_PGC                                  ((GPC_PGC_Type *)GPC_PGC_BASE)
/** Array initializer of GPC_PGC peripheral base addresses */
#define GPC_PGC_BASE_ADDRS                       { GPC_PGC_BASE }
/** Array initializer of GPC_PGC peripheral base pointers */
#define GPC_PGC_BASE_PTRS                        { GPC_PGC }

/* GPIO - Peripheral instance base addresses */
/** Peripheral GPIO1 base address */
#define GPIO1_BASE                               (0x30200000u)
/** Peripheral GPIO1 base pointer */
#define GPIO1                                    ((GPIO_Type *)GPIO1_BASE)
/** Peripheral GPIO2 base address */
#define GPIO2_BASE                               (0x30210000u)
/** Peripheral GPIO2 base pointer */
#define GPIO2                                    ((GPIO_Type *)GPIO2_BASE)
/** Peripheral GPIO3 base address */
#define GPIO3_BASE                               (0x30220000u)
/** Peripheral GPIO3 base pointer */
#define GPIO3                                    ((GPIO_Type *)GPIO3_BASE)
/** Peripheral GPIO4 base address */
#define GPIO4_BASE                               (0x30230000u)
/** Peripheral GPIO4 base pointer */
#define GPIO4                                    ((GPIO_Type *)GPIO4_BASE)
/** Peripheral GPIO5 base address */
#define GPIO5_BASE                               (0x30240000u)
/** Peripheral GPIO5 base pointer */
#define GPIO5                                    ((GPIO_Type *)GPIO5_BASE)
/** Array initializer of GPIO peripheral base addresses */
#define GPIO_BASE_ADDRS                          { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE }
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                           { (GPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5 }
/** Interrupt vectors for the GPIO peripheral type */
#define GPIO_COMBINED_LOW_IRQS                   { NotAvail_IRQn, GPIO1_Combined_0_15_IRQn, GPIO2_Combined_0_15_IRQn, GPIO3_Combined_0_15_IRQn, GPIO4_Combined_0_15_IRQn, GPIO5_Combined_0_15_IRQn }
#define GPIO_COMBINED_HIGH_IRQS                  { NotAvail_IRQn, GPIO1_Combined_16_31_IRQn, GPIO2_Combined_16_31_IRQn, GPIO3_Combined_16_31_IRQn, GPIO4_Combined_16_31_IRQn, GPIO5_Combined_16_31_IRQn }
#define GPIO_IRQS                                { NotAvail_IRQn, GPIO1_INT0_IRQn, GPIO1_INT1_IRQn, GPIO1_INT2_IRQn, GPIO1_INT3_IRQn, GPIO1_INT4_IRQn, GPIO1_INT5_IRQn, GPIO1_INT6_IRQn, GPIO1_INT7_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn }

/* GPMI - Peripheral instance base addresses */
/** Peripheral GPMI base address */
#define GPMI_BASE                                (0x33002000u)
/** Peripheral GPMI base pointer */
#define GPMI                                     ((GPMI_Type *)GPMI_BASE)
/** Array initializer of GPMI peripheral base addresses */
#define GPMI_BASE_ADDRS                          { GPMI_BASE }
/** Array initializer of GPMI peripheral base pointers */
#define GPMI_BASE_PTRS                           { GPMI }

/* GPT - Peripheral instance base addresses */
/** Peripheral GPT1 base address */
#define GPT1_BASE                                (0x302D0000u)
/** Peripheral GPT1 base pointer */
#define GPT1                                     ((GPT_Type *)GPT1_BASE)
/** Peripheral GPT2 base address */
#define GPT2_BASE                                (0x302E0000u)
/** Peripheral GPT2 base pointer */
#define GPT2                                     ((GPT_Type *)GPT2_BASE)
/** Peripheral GPT3 base address */
#define GPT3_BASE                                (0x302F0000u)
/** Peripheral GPT3 base pointer */
#define GPT3                                     ((GPT_Type *)GPT3_BASE)
/** Peripheral GPT4 base address */
#define GPT4_BASE                                (0x30700000u)
/** Peripheral GPT4 base pointer */
#define GPT4                                     ((GPT_Type *)GPT4_BASE)
/** Peripheral GPT5 base address */
#define GPT5_BASE                                (0x306F0000u)
/** Peripheral GPT5 base pointer */
#define GPT5                                     ((GPT_Type *)GPT5_BASE)
/** Peripheral GPT6 base address */
#define GPT6_BASE                                (0x306E0000u)
/** Peripheral GPT6 base pointer */
#define GPT6                                     ((GPT_Type *)GPT6_BASE)
/** Array initializer of GPT peripheral base addresses */
#define GPT_BASE_ADDRS                           { 0u, GPT1_BASE, GPT2_BASE, GPT3_BASE, GPT4_BASE, GPT5_BASE, GPT6_BASE }
/** Array initializer of GPT peripheral base pointers */
#define GPT_BASE_PTRS                            { (GPT_Type *)0u, GPT1, GPT2, GPT3, GPT4, GPT5, GPT6 }
/** Interrupt vectors for the GPT peripheral type */
#define GPT_IRQS                                 { NotAvail_IRQn, GPT1_IRQn, GPT2_IRQn, GPT3_IRQn, GPT4_IRQn, GPT5_IRQn, GPT6_IRQn }

/* HDCP - Peripheral instance base addresses */
/** Peripheral HDCP base address */
#define HDCP_BASE                                (0x32FDD000u)
/** Peripheral HDCP base pointer */
#define HDCP                                     ((HDCP_Type *)HDCP_BASE)
/** Array initializer of HDCP peripheral base addresses */
#define HDCP_BASE_ADDRS                          { HDCP_BASE }
/** Array initializer of HDCP peripheral base pointers */
#define HDCP_BASE_PTRS                           { HDCP }

/* HDCP22 - Peripheral instance base addresses */
/** Peripheral HDCP22 base address */
#define HDCP22_BASE                              (0x32FDF900u)
/** Peripheral HDCP22 base pointer */
#define HDCP22                                   ((HDCP22_Type *)HDCP22_BASE)
/** Array initializer of HDCP22 peripheral base addresses */
#define HDCP22_BASE_ADDRS                        { HDCP22_BASE }
/** Array initializer of HDCP22 peripheral base pointers */
#define HDCP22_BASE_PTRS                         { HDCP22 }

/* HDMI_TRNG - Peripheral instance base addresses */
/** Peripheral HDMI_TRNG base address */
#define HDMI_TRNG_BASE                           (0x32FD3000u)
/** Peripheral HDMI_TRNG base pointer */
#define HDMI_TRNG                                ((HDMI_TRNG_Type *)HDMI_TRNG_BASE)
/** Array initializer of HDMI_TRNG peripheral base addresses */
#define HDMI_TRNG_BASE_ADDRS                     { HDMI_TRNG_BASE }
/** Array initializer of HDMI_TRNG peripheral base pointers */
#define HDMI_TRNG_BASE_PTRS                      { HDMI_TRNG }

/* HDMI_TX_BLK_CTL - Peripheral instance base addresses */
/** Peripheral HDMI_TX_BLK_CTRL base address */
#define HDMI_TX_BLK_CTRL_BASE                    (0x32FC0000u)
/** Peripheral HDMI_TX_BLK_CTRL base pointer */
#define HDMI_TX_BLK_CTRL                         ((HDMI_TX_BLK_CTL_Type *)HDMI_TX_BLK_CTRL_BASE)
/** Array initializer of HDMI_TX_BLK_CTL peripheral base addresses */
#define HDMI_TX_BLK_CTL_BASE_ADDRS               { HDMI_TX_BLK_CTRL_BASE }
/** Array initializer of HDMI_TX_BLK_CTL peripheral base pointers */
#define HDMI_TX_BLK_CTL_BASE_PTRS                { HDMI_TX_BLK_CTRL }

/* HSIO_BLK_CTRL - Peripheral instance base addresses */
/** Peripheral HSIO_BLK_CTRL base address */
#define HSIO_BLK_CTRL_BASE                       (0x32F10000u)
/** Peripheral HSIO_BLK_CTRL base pointer */
#define HSIO_BLK_CTRL                            ((HSIO_BLK_CTRL_Type *)HSIO_BLK_CTRL_BASE)
/** Array initializer of HSIO_BLK_CTRL peripheral base addresses */
#define HSIO_BLK_CTRL_BASE_ADDRS                 { HSIO_BLK_CTRL_BASE }
/** Array initializer of HSIO_BLK_CTRL peripheral base pointers */
#define HSIO_BLK_CTRL_BASE_PTRS                  { HSIO_BLK_CTRL }

/* HTX_PAI - Peripheral instance base addresses */
/** Peripheral HTX_PAI base address */
#define HTX_PAI_BASE                             (0x32FC4800u)
/** Peripheral HTX_PAI base pointer */
#define HTX_PAI                                  ((HTX_PAI_Type *)HTX_PAI_BASE)
/** Array initializer of HTX_PAI peripheral base addresses */
#define HTX_PAI_BASE_ADDRS                       { HTX_PAI_BASE }
/** Array initializer of HTX_PAI peripheral base pointers */
#define HTX_PAI_BASE_PTRS                        { HTX_PAI }

/* HTX_PVI - Peripheral instance base addresses */
/** Peripheral HTX_PVI base address */
#define HTX_PVI_BASE                             (0x32FC4000u)
/** Peripheral HTX_PVI base pointer */
#define HTX_PVI                                  ((HTX_PVI_Type *)HTX_PVI_BASE)
/** Array initializer of HTX_PVI peripheral base addresses */
#define HTX_PVI_BASE_ADDRS                       { HTX_PVI_BASE }
/** Array initializer of HTX_PVI peripheral base pointers */
#define HTX_PVI_BASE_PTRS                        { HTX_PVI }

/* I2C - Peripheral instance base addresses */
/** Peripheral I2C1 base address */
#define I2C1_BASE                                (0x30A20000u)
/** Peripheral I2C1 base pointer */
#define I2C1                                     ((I2C_Type *)I2C1_BASE)
/** Peripheral I2C2 base address */
#define I2C2_BASE                                (0x30A30000u)
/** Peripheral I2C2 base pointer */
#define I2C2                                     ((I2C_Type *)I2C2_BASE)
/** Peripheral I2C3 base address */
#define I2C3_BASE                                (0x30A40000u)
/** Peripheral I2C3 base pointer */
#define I2C3                                     ((I2C_Type *)I2C3_BASE)
/** Peripheral I2C4 base address */
#define I2C4_BASE                                (0x30A50000u)
/** Peripheral I2C4 base pointer */
#define I2C4                                     ((I2C_Type *)I2C4_BASE)
/** Peripheral I2C5 base address */
#define I2C5_BASE                                (0x30AD0000u)
/** Peripheral I2C5 base pointer */
#define I2C5                                     ((I2C_Type *)I2C5_BASE)
/** Peripheral I2C6 base address */
#define I2C6_BASE                                (0x30AE0000u)
/** Peripheral I2C6 base pointer */
#define I2C6                                     ((I2C_Type *)I2C6_BASE)
/** Array initializer of I2C peripheral base addresses */
#define I2C_BASE_ADDRS                           { 0u, I2C1_BASE, I2C2_BASE, I2C3_BASE, I2C4_BASE, I2C5_BASE, I2C6_BASE }
/** Array initializer of I2C peripheral base pointers */
#define I2C_BASE_PTRS                            { (I2C_Type *)0u, I2C1, I2C2, I2C3, I2C4, I2C5, I2C6 }
/** Interrupt vectors for the I2C peripheral type */
#define I2C_IRQS                                 { NotAvail_IRQn, I2C1_IRQn, I2C2_IRQn, I2C3_IRQn, I2C4_IRQn, I2C5_IRQn, I2C6_IRQn }

/* I2S - Peripheral instance base addresses */
/** Peripheral I2S1 base address */
#define I2S1_BASE                                (0x30C10000u)
/** Peripheral I2S1 base pointer */
#define I2S1                                     ((I2S_Type *)I2S1_BASE)
/** Peripheral I2S2 base address */
#define I2S2_BASE                                (0x30C20000u)
/** Peripheral I2S2 base pointer */
#define I2S2                                     ((I2S_Type *)I2S2_BASE)
/** Peripheral I2S3 base address */
#define I2S3_BASE                                (0x30C30000u)
/** Peripheral I2S3 base pointer */
#define I2S3                                     ((I2S_Type *)I2S3_BASE)
/** Peripheral I2S5 base address */
#define I2S5_BASE                                (0x30C50000u)
/** Peripheral I2S5 base pointer */
#define I2S5                                     ((I2S_Type *)I2S5_BASE)
/** Peripheral I2S6 base address */
#define I2S6_BASE                                (0x30C60000u)
/** Peripheral I2S6 base pointer */
#define I2S6                                     ((I2S_Type *)I2S6_BASE)
/** Peripheral I2S7 base address */
#define I2S7_BASE                                (0x30C80000u)
/** Peripheral I2S7 base pointer */
#define I2S7                                     ((I2S_Type *)I2S7_BASE)
/** Array initializer of I2S peripheral base addresses */
#define I2S_BASE_ADDRS                           { 0u, I2S1_BASE, I2S2_BASE, I2S3_BASE, 0u, I2S5_BASE, I2S6_BASE, I2S7_BASE }
/** Array initializer of I2S peripheral base pointers */
#define I2S_BASE_PTRS                            { (I2S_Type *)0u, I2S1, I2S2, I2S3, (I2S_Type *)0u, I2S5, I2S6, I2S7 }
/** Interrupt vectors for the I2S peripheral type */
#define I2S_RX_IRQS                              { NotAvail_IRQn, I2S1_IRQn, I2S2_IRQn, I2S3_IRQn, NotAvail_IRQn, I2S56_IRQn, I2S56_IRQn, I2S7_IRQn }
#define I2S_TX_IRQS                              { NotAvail_IRQn, I2S1_IRQn, I2S2_IRQn, I2S3_IRQn, NotAvail_IRQn, I2S56_IRQn, I2S56_IRQn, I2S7_IRQn }

/* IDENTIFICATION - Peripheral instance base addresses */
/** Peripheral IDENTIFICATION base address */
#define IDENTIFICATION_BASE                      (0x32FD8000u)
/** Peripheral IDENTIFICATION base pointer */
#define IDENTIFICATION                           ((IDENTIFICATION_Type *)IDENTIFICATION_BASE)
/** Array initializer of IDENTIFICATION peripheral base addresses */
#define IDENTIFICATION_BASE_ADDRS                { IDENTIFICATION_BASE }
/** Array initializer of IDENTIFICATION peripheral base pointers */
#define IDENTIFICATION_BASE_PTRS                 { IDENTIFICATION }

/* INTERRUPT - Peripheral instance base addresses */
/** Peripheral INTERRUPT base address */
#define INTERRUPT_BASE                           (0x32FD8100u)
/** Peripheral INTERRUPT base pointer */
#define INTERRUPT                                ((INTERRUPT_Type *)INTERRUPT_BASE)
/** Array initializer of INTERRUPT peripheral base addresses */
#define INTERRUPT_BASE_ADDRS                     { INTERRUPT_BASE }
/** Array initializer of INTERRUPT peripheral base pointers */
#define INTERRUPT_BASE_PTRS                      { INTERRUPT }

/* IOMUXC - Peripheral instance base addresses */
/** Peripheral IOMUXC base address */
#define IOMUXC_BASE                              (0x30330000u)
/** Peripheral IOMUXC base pointer */
#define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)
/** Array initializer of IOMUXC peripheral base addresses */
#define IOMUXC_BASE_ADDRS                        { IOMUXC_BASE }
/** Array initializer of IOMUXC peripheral base pointers */
#define IOMUXC_BASE_PTRS                         { IOMUXC }

/* IOMUXC_GPR - Peripheral instance base addresses */
/** Peripheral IOMUXC_GPR base address */
#define IOMUXC_GPR_BASE                          (0x30340000u)
/** Peripheral IOMUXC_GPR base pointer */
#define IOMUXC_GPR                               ((IOMUXC_GPR_Type *)IOMUXC_GPR_BASE)
/** Array initializer of IOMUXC_GPR peripheral base addresses */
#define IOMUXC_GPR_BASE_ADDRS                    { IOMUXC_GPR_BASE }
/** Array initializer of IOMUXC_GPR peripheral base pointers */
#define IOMUXC_GPR_BASE_PTRS                     { IOMUXC_GPR }

/* IRQSTEER - Peripheral instance base addresses */
/** Peripheral IRQ_STEER_AUDIO_PROCESSOR base address */
#define IRQ_STEER_AUDIO_PROCESSOR_BASE           (0x30A80000u)
/** Peripheral IRQ_STEER_AUDIO_PROCESSOR base pointer */
#define IRQ_STEER_AUDIO_PROCESSOR                ((IRQSTEER_Type *)IRQ_STEER_AUDIO_PROCESSOR_BASE)
/** Peripheral IRQ_STEER_HDMI base address */
#define IRQ_STEER_HDMI_BASE                      (0x32FC2000u)
/** Peripheral IRQ_STEER_HDMI base pointer */
#define IRQ_STEER_HDMI                           ((IRQSTEER_Type *)IRQ_STEER_HDMI_BASE)
/** Array initializer of IRQSTEER peripheral base addresses */
#define IRQSTEER_BASE_ADDRS                      { IRQ_STEER_AUDIO_PROCESSOR_BASE, IRQ_STEER_HDMI_BASE }
/** Array initializer of IRQSTEER peripheral base pointers */
#define IRQSTEER_BASE_PTRS                       { IRQ_STEER_AUDIO_PROCESSOR, IRQ_STEER_HDMI }

/* ISI - Peripheral instance base addresses */
/** Peripheral ISI base address */
#define ISI_BASE                                 (0x32E00000u)
/** Peripheral ISI base pointer */
#define ISI                                      ((ISI_Type *)ISI_BASE)
/** Array initializer of ISI peripheral base addresses */
#define ISI_BASE_ADDRS                           { ISI_BASE }
/** Array initializer of ISI peripheral base pointers */
#define ISI_BASE_PTRS                            { ISI }

/* LCDIF - Peripheral instance base addresses */
/** Peripheral LCDIF1 base address */
#define LCDIF1_BASE                              (0x32E80000u)
/** Peripheral LCDIF1 base pointer */
#define LCDIF1                                   ((LCDIF_Type *)LCDIF1_BASE)
/** Peripheral LCDIF2 base address */
#define LCDIF2_BASE                              (0x32E90000u)
/** Peripheral LCDIF2 base pointer */
#define LCDIF2                                   ((LCDIF_Type *)LCDIF2_BASE)
/** Peripheral LCDIF3 base address */
#define LCDIF3_BASE                              (0x32FC6000u)
/** Peripheral LCDIF3 base pointer */
#define LCDIF3                                   ((LCDIF_Type *)LCDIF3_BASE)
/** Array initializer of LCDIF peripheral base addresses */
#define LCDIF_BASE_ADDRS                         { LCDIF1_BASE, LCDIF2_BASE, LCDIF3_BASE }
/** Array initializer of LCDIF peripheral base pointers */
#define LCDIF_BASE_PTRS                          { LCDIF1, LCDIF2, LCDIF3 }

/* MAINCONTROLLER - Peripheral instance base addresses */
/** Peripheral MAINCONTROLLER base address */
#define MAINCONTROLLER_BASE                      (0x32FDC000u)
/** Peripheral MAINCONTROLLER base pointer */
#define MAINCONTROLLER                           ((MAINCONTROLLER_Type *)MAINCONTROLLER_BASE)
/** Array initializer of MAINCONTROLLER peripheral base addresses */
#define MAINCONTROLLER_BASE_ADDRS                { MAINCONTROLLER_BASE }
/** Array initializer of MAINCONTROLLER peripheral base pointers */
#define MAINCONTROLLER_BASE_PTRS                 { MAINCONTROLLER }

/* MEDIA_BLK_CTRL - Peripheral instance base addresses */
/** Peripheral MEDIA_BLK_CTRL base address */
#define MEDIA_BLK_CTRL_BASE                      (0x32EC0000u)
/** Peripheral MEDIA_BLK_CTRL base pointer */
#define MEDIA_BLK_CTRL                           ((MEDIA_BLK_CTRL_Type *)MEDIA_BLK_CTRL_BASE)
/** Array initializer of MEDIA_BLK_CTRL peripheral base addresses */
#define MEDIA_BLK_CTRL_BASE_ADDRS                { MEDIA_BLK_CTRL_BASE }
/** Array initializer of MEDIA_BLK_CTRL peripheral base pointers */
#define MEDIA_BLK_CTRL_BASE_PTRS                 { MEDIA_BLK_CTRL }

/* MIPI_CSI - Peripheral instance base addresses */
/** Peripheral MIPI_CSI1 base address */
#define MIPI_CSI1_BASE                           (0x32E40000u)
/** Peripheral MIPI_CSI1 base pointer */
#define MIPI_CSI1                                ((MIPI_CSI_Type *)MIPI_CSI1_BASE)
/** Peripheral MIPI_CSI2 base address */
#define MIPI_CSI2_BASE                           (0x32E50000u)
/** Peripheral MIPI_CSI2 base pointer */
#define MIPI_CSI2                                ((MIPI_CSI_Type *)MIPI_CSI2_BASE)
/** Array initializer of MIPI_CSI peripheral base addresses */
#define MIPI_CSI_BASE_ADDRS                      { MIPI_CSI1_BASE, MIPI_CSI2_BASE }
/** Array initializer of MIPI_CSI peripheral base pointers */
#define MIPI_CSI_BASE_PTRS                       { MIPI_CSI1, MIPI_CSI2 }

/* MIPI_DSI - Peripheral instance base addresses */
/** Peripheral MIPI_DSI base address */
#define MIPI_DSI_BASE                            (0x32E10000u)
/** Peripheral MIPI_DSI base pointer */
#define MIPI_DSI                                 ((MIPI_DSI_Type *)MIPI_DSI_BASE)
/** Array initializer of MIPI_DSI peripheral base addresses */
#define MIPI_DSI_BASE_ADDRS                      { MIPI_DSI_BASE }
/** Array initializer of MIPI_DSI peripheral base pointers */
#define MIPI_DSI_BASE_PTRS                       { MIPI_DSI }

/* MU - Peripheral instance base addresses */
/** Peripheral MUB base address */
#define MUB_BASE                                 (0x30AB0000u)
/** Peripheral MUB base pointer */
#define MUB                                      ((MU_Type *)MUB_BASE)
/** Array initializer of MU peripheral base addresses */
#define MU_BASE_ADDRS                            { MUB_BASE }
/** Array initializer of MU peripheral base pointers */
#define MU_BASE_PTRS                             { MUB }
/** Interrupt vectors for the MU peripheral type */
#define MU_IRQS                                  { MU1_M7_IRQn }

/* NPU - Peripheral instance base addresses */
/** Peripheral NPU base address */
#define NPU_BASE                                 (0x38500000u)
/** Peripheral NPU base pointer */
#define NPU                                      ((NPU_Type *)NPU_BASE)
/** Array initializer of NPU peripheral base addresses */
#define NPU_BASE_ADDRS                           { NPU_BASE }
/** Array initializer of NPU peripheral base pointers */
#define NPU_BASE_PTRS                            { NPU }

/* OCOTP - Peripheral instance base addresses */
/** Peripheral OCOTP base address */
#define OCOTP_BASE                               (0x30350000u)
/** Peripheral OCOTP base pointer */
#define OCOTP                                    ((OCOTP_Type *)OCOTP_BASE)
/** Array initializer of OCOTP peripheral base addresses */
#define OCOTP_BASE_ADDRS                         { OCOTP_BASE }
/** Array initializer of OCOTP peripheral base pointers */
#define OCOTP_BASE_PTRS                          { OCOTP }

/* PCIE - Peripheral instance base addresses */
/** Peripheral PCIE base address */
#define PCIE_BASE                                (0x33800000u)
/** Peripheral PCIE base pointer */
#define PCIE                                     ((PCIE_Type *)PCIE_BASE)
/** Array initializer of PCIE peripheral base addresses */
#define PCIE_BASE_ADDRS                          { PCIE_BASE }
/** Array initializer of PCIE peripheral base pointers */
#define PCIE_BASE_PTRS                           { PCIE }

/* PCIE_PHY - Peripheral instance base addresses */
/** Peripheral PCIE_PHY base address */
#define PCIE_PHY_BASE                            (0x32F00000u)
/** Peripheral PCIE_PHY base pointer */
#define PCIE_PHY                                 ((PCIE_PHY_Type *)PCIE_PHY_BASE)
/** Array initializer of PCIE_PHY peripheral base addresses */
#define PCIE_PHY_BASE_ADDRS                      { PCIE_PHY_BASE }
/** Array initializer of PCIE_PHY peripheral base pointers */
#define PCIE_PHY_BASE_PTRS                       { PCIE_PHY }

/* PDM - Peripheral instance base addresses */
/** Peripheral PDM base address */
#define PDM_BASE                                 (0x30CA0000u)
/** Peripheral PDM base pointer */
#define PDM                                      ((PDM_Type *)PDM_BASE)
/** Array initializer of PDM peripheral base addresses */
#define PDM_BASE_ADDRS                           { PDM_BASE }
/** Array initializer of PDM peripheral base pointers */
#define PDM_BASE_PTRS                            { PDM }
/** Interrupt vectors for the PDM peripheral type */
#define PDM_HWVAD_Event_IRQS                     { PDM_HWVAD_EVENT_IRQn }
#define PDM_HWVAD_Error_IRQS                     { PDM_HWVAD_ERROR_IRQn }
#define PDM_Event_IRQS                           { PDM_EVENT_IRQn }
#define PDM_Error_IRQS                           { PDM_ERROR_IRQn }

/* PHYCONFIGURATION - Peripheral instance base addresses */
/** Peripheral PHYCONFIGURATION base address */
#define PHYCONFIGURATION_BASE                    (0x32FDB000u)
/** Peripheral PHYCONFIGURATION base pointer */
#define PHYCONFIGURATION                         ((PHYCONFIGURATION_Type *)PHYCONFIGURATION_BASE)
/** Array initializer of PHYCONFIGURATION peripheral base addresses */
#define PHYCONFIGURATION_BASE_ADDRS              { PHYCONFIGURATION_BASE }
/** Array initializer of PHYCONFIGURATION peripheral base pointers */
#define PHYCONFIGURATION_BASE_PTRS               { PHYCONFIGURATION }

/* PWM - Peripheral instance base addresses */
/** Peripheral PWM1 base address */
#define PWM1_BASE                                (0x30660000u)
/** Peripheral PWM1 base pointer */
#define PWM1                                     ((PWM_Type *)PWM1_BASE)
/** Peripheral PWM2 base address */
#define PWM2_BASE                                (0x30670000u)
/** Peripheral PWM2 base pointer */
#define PWM2                                     ((PWM_Type *)PWM2_BASE)
/** Peripheral PWM3 base address */
#define PWM3_BASE                                (0x30680000u)
/** Peripheral PWM3 base pointer */
#define PWM3                                     ((PWM_Type *)PWM3_BASE)
/** Peripheral PWM4 base address */
#define PWM4_BASE                                (0x30690000u)
/** Peripheral PWM4 base pointer */
#define PWM4                                     ((PWM_Type *)PWM4_BASE)
/** Array initializer of PWM peripheral base addresses */
#define PWM_BASE_ADDRS                           { 0u, PWM1_BASE, PWM2_BASE, PWM3_BASE, PWM4_BASE }
/** Array initializer of PWM peripheral base pointers */
#define PWM_BASE_PTRS                            { (PWM_Type *)0u, PWM1, PWM2, PWM3, PWM4 }
/** Interrupt vectors for the PWM peripheral type */
#define PWM_IRQS                                 { NotAvail_IRQn, PWM1_IRQn, PWM2_IRQn, PWM3_IRQn, PWM4_IRQn }

/* RDC - Peripheral instance base addresses */
/** Peripheral RDC base address */
#define RDC_BASE                                 (0x303D0000u)
/** Peripheral RDC base pointer */
#define RDC                                      ((RDC_Type *)RDC_BASE)
/** Array initializer of RDC peripheral base addresses */
#define RDC_BASE_ADDRS                           { RDC_BASE }
/** Array initializer of RDC peripheral base pointers */
#define RDC_BASE_PTRS                            { RDC }
/** Interrupt vectors for the RDC peripheral type */
#define RDC_IRQS                                 { RDC_IRQn }

/* RDC_SEMAPHORE - Peripheral instance base addresses */
/** Peripheral RDC_SEMAPHORE1 base address */
#define RDC_SEMAPHORE1_BASE                      (0x303B0000u)
/** Peripheral RDC_SEMAPHORE1 base pointer */
#define RDC_SEMAPHORE1                           ((RDC_SEMAPHORE_Type *)RDC_SEMAPHORE1_BASE)
/** Peripheral RDC_SEMAPHORE2 base address */
#define RDC_SEMAPHORE2_BASE                      (0x303C0000u)
/** Peripheral RDC_SEMAPHORE2 base pointer */
#define RDC_SEMAPHORE2                           ((RDC_SEMAPHORE_Type *)RDC_SEMAPHORE2_BASE)
/** Array initializer of RDC_SEMAPHORE peripheral base addresses */
#define RDC_SEMAPHORE_BASE_ADDRS                 { 0u, RDC_SEMAPHORE1_BASE, RDC_SEMAPHORE2_BASE }
/** Array initializer of RDC_SEMAPHORE peripheral base pointers */
#define RDC_SEMAPHORE_BASE_PTRS                  { (RDC_SEMAPHORE_Type *)0u, RDC_SEMAPHORE1, RDC_SEMAPHORE2 }

/* SDMAARM - Peripheral instance base addresses */
/** Peripheral SDMAARM1 base address */
#define SDMAARM1_BASE                            (0x30BD0000u)
/** Peripheral SDMAARM1 base pointer */
#define SDMAARM1                                 ((SDMAARM_Type *)SDMAARM1_BASE)
/** Peripheral SDMAARM2 base address */
#define SDMAARM2_BASE                            (0x30E10000u)
/** Peripheral SDMAARM2 base pointer */
#define SDMAARM2                                 ((SDMAARM_Type *)SDMAARM2_BASE)
/** Peripheral SDMAARM3 base address */
#define SDMAARM3_BASE                            (0x30E00000u)
/** Peripheral SDMAARM3 base pointer */
#define SDMAARM3                                 ((SDMAARM_Type *)SDMAARM3_BASE)
/** Array initializer of SDMAARM peripheral base addresses */
#define SDMAARM_BASE_ADDRS                       { 0u, SDMAARM1_BASE, SDMAARM2_BASE, SDMAARM3_BASE }
/** Array initializer of SDMAARM peripheral base pointers */
#define SDMAARM_BASE_PTRS                        { (SDMAARM_Type *)0u, SDMAARM1, SDMAARM2, SDMAARM3 }
/** Interrupt vectors for the SDMAARM peripheral type */
#define SDMAARM_IRQS                             { NotAvail_IRQn, SDMA1_IRQn, SDMA2_IRQn, SDMA3_IRQn }

/* SEMA4 - Peripheral instance base addresses */
/** Peripheral SEMA4 base address */
#define SEMA4_BASE                               (0x30AC0000u)
/** Peripheral SEMA4 base pointer */
#define SEMA4                                    ((SEMA4_Type *)SEMA4_BASE)
/** Array initializer of SEMA4 peripheral base addresses */
#define SEMA4_BASE_ADDRS                         { SEMA4_BASE }
/** Array initializer of SEMA4 peripheral base pointers */
#define SEMA4_BASE_PTRS                          { SEMA4 }

/* SNVS - Peripheral instance base addresses */
/** Peripheral SNVS base address */
#define SNVS_BASE                                (0x30370000u)
/** Peripheral SNVS base pointer */
#define SNVS                                     ((SNVS_Type *)SNVS_BASE)
/** Array initializer of SNVS peripheral base addresses */
#define SNVS_BASE_ADDRS                          { SNVS_BASE }
/** Array initializer of SNVS peripheral base pointers */
#define SNVS_BASE_PTRS                           { SNVS }

/* SPBA - Peripheral instance base addresses */
/** Peripheral SPBA1 base address */
#define SPBA1_BASE                               (0x308F0000u)
/** Peripheral SPBA1 base pointer */
#define SPBA1                                    ((SPBA_Type *)SPBA1_BASE)
/** Peripheral SPBA2 base address */
#define SPBA2_BASE                               (0x30CF0000u)
/** Peripheral SPBA2 base pointer */
#define SPBA2                                    ((SPBA_Type *)SPBA2_BASE)
/** Array initializer of SPBA peripheral base addresses */
#define SPBA_BASE_ADDRS                          { 0u, SPBA1_BASE, SPBA2_BASE }
/** Array initializer of SPBA peripheral base pointers */
#define SPBA_BASE_PTRS                           { (SPBA_Type *)0u, SPBA1, SPBA2 }

/* SRC - Peripheral instance base addresses */
/** Peripheral SRC base address */
#define SRC_BASE                                 (0x30390000u)
/** Peripheral SRC base pointer */
#define SRC                                      ((SRC_Type *)SRC_BASE)
/** Array initializer of SRC peripheral base addresses */
#define SRC_BASE_ADDRS                           { SRC_BASE }
/** Array initializer of SRC peripheral base pointers */
#define SRC_BASE_PTRS                            { SRC }

/* SYS_CTR_COMPARE - Peripheral instance base addresses */
/** Peripheral SYS_CTR_COMPARE base address */
#define SYS_CTR_COMPARE_BASE                     (0x306B0000u)
/** Peripheral SYS_CTR_COMPARE base pointer */
#define SYS_CTR_COMPARE                          ((SYS_CTR_COMPARE_Type *)SYS_CTR_COMPARE_BASE)
/** Array initializer of SYS_CTR_COMPARE peripheral base addresses */
#define SYS_CTR_COMPARE_BASE_ADDRS               { SYS_CTR_COMPARE_BASE }
/** Array initializer of SYS_CTR_COMPARE peripheral base pointers */
#define SYS_CTR_COMPARE_BASE_PTRS                { SYS_CTR_COMPARE }

/* SYS_CTR_CONTROL - Peripheral instance base addresses */
/** Peripheral SYS_CTR_CONTROL base address */
#define SYS_CTR_CONTROL_BASE                     (0x306C0000u)
/** Peripheral SYS_CTR_CONTROL base pointer */
#define SYS_CTR_CONTROL                          ((SYS_CTR_CONTROL_Type *)SYS_CTR_CONTROL_BASE)
/** Array initializer of SYS_CTR_CONTROL peripheral base addresses */
#define SYS_CTR_CONTROL_BASE_ADDRS               { SYS_CTR_CONTROL_BASE }
/** Array initializer of SYS_CTR_CONTROL peripheral base pointers */
#define SYS_CTR_CONTROL_BASE_PTRS                { SYS_CTR_CONTROL }

/* SYS_CTR_READ - Peripheral instance base addresses */
/** Peripheral SYS_CTR_READ base address */
#define SYS_CTR_READ_BASE                        (0x306A0000u)
/** Peripheral SYS_CTR_READ base pointer */
#define SYS_CTR_READ                             ((SYS_CTR_READ_Type *)SYS_CTR_READ_BASE)
/** Array initializer of SYS_CTR_READ peripheral base addresses */
#define SYS_CTR_READ_BASE_ADDRS                  { SYS_CTR_READ_BASE }
/** Array initializer of SYS_CTR_READ peripheral base pointers */
#define SYS_CTR_READ_BASE_PTRS                   { SYS_CTR_READ }

/* TMU - Peripheral instance base addresses */
/** Peripheral TMU base address */
#define TMU_BASE                                 (0x30260000u)
/** Peripheral TMU base pointer */
#define TMU                                      ((TMU_Type *)TMU_BASE)
/** Array initializer of TMU peripheral base addresses */
#define TMU_BASE_ADDRS                           { TMU_BASE }
/** Array initializer of TMU peripheral base pointers */
#define TMU_BASE_PTRS                            { TMU }

/* UART - Peripheral instance base addresses */
/** Peripheral UART1 base address */
#define UART1_BASE                               (0x30860000u)
/** Peripheral UART1 base pointer */
#define UART1                                    ((UART_Type *)UART1_BASE)
/** Peripheral UART2 base address */
#define UART2_BASE                               (0x30890000u)
/** Peripheral UART2 base pointer */
#define UART2                                    ((UART_Type *)UART2_BASE)
/** Peripheral UART3 base address */
#define UART3_BASE                               (0x30880000u)
/** Peripheral UART3 base pointer */
#define UART3                                    ((UART_Type *)UART3_BASE)
/** Peripheral UART4 base address */
#define UART4_BASE                               (0x30A60000u)
/** Peripheral UART4 base pointer */
#define UART4                                    ((UART_Type *)UART4_BASE)
/** Array initializer of UART peripheral base addresses */
#define UART_BASE_ADDRS                          { 0u, UART1_BASE, UART2_BASE, UART3_BASE, UART4_BASE }
/** Array initializer of UART peripheral base pointers */
#define UART_BASE_PTRS                           { (UART_Type *)0u, UART1, UART2, UART3, UART4 }
/** Interrupt vectors for the UART peripheral type */
#define UART_IRQS                                { NotAvail_IRQn, UART1_IRQn, UART2_IRQn, UART3_IRQn, UART4_IRQn }

/* USB - Peripheral instance base addresses */
/** Peripheral USB1 base address */
#define USB1_BASE                                (0x38100000u)
/** Peripheral USB1 base pointer */
#define USB1                                     ((USB_Type *)USB1_BASE)
/** Peripheral USB2 base address */
#define USB2_BASE                                (0x38200000u)
/** Peripheral USB2 base pointer */
#define USB2                                     ((USB_Type *)USB2_BASE)
/** Array initializer of USB peripheral base addresses */
#define USB_BASE_ADDRS                           { USB1_BASE, USB2_BASE }
/** Array initializer of USB peripheral base pointers */
#define USB_BASE_PTRS                            { USB1, USB2 }

/* USDHC - Peripheral instance base addresses */
/** Peripheral USDHC1 base address */
#define USDHC1_BASE                              (0x30B40000u)
/** Peripheral USDHC1 base pointer */
#define USDHC1                                   ((USDHC_Type *)USDHC1_BASE)
/** Peripheral USDHC2 base address */
#define USDHC2_BASE                              (0x30B50000u)
/** Peripheral USDHC2 base pointer */
#define USDHC2                                   ((USDHC_Type *)USDHC2_BASE)
/** Peripheral USDHC3 base address */
#define USDHC3_BASE                              (0x30B60000u)
/** Peripheral USDHC3 base pointer */
#define USDHC3                                   ((USDHC_Type *)USDHC3_BASE)
/** Array initializer of USDHC peripheral base addresses */
#define USDHC_BASE_ADDRS                         { 0u, USDHC1_BASE, USDHC2_BASE, USDHC3_BASE }
/** Array initializer of USDHC peripheral base pointers */
#define USDHC_BASE_PTRS                          { (USDHC_Type *)0u, USDHC1, USDHC2, USDHC3 }
/** Interrupt vectors for the USDHC peripheral type */
#define USDHC_IRQS                               { NotAvail_IRQn, USDHC1_IRQn, USDHC2_IRQn, USDHC3_IRQn }

/* VIDEOPACKETIZER - Peripheral instance base addresses */
/** Peripheral VIDEOPACKETIZER base address */
#define VIDEOPACKETIZER_BASE                     (0x32FD8800u)
/** Peripheral VIDEOPACKETIZER base pointer */
#define VIDEOPACKETIZER                          ((VIDEOPACKETIZER_Type *)VIDEOPACKETIZER_BASE)
/** Array initializer of VIDEOPACKETIZER peripheral base addresses */
#define VIDEOPACKETIZER_BASE_ADDRS               { VIDEOPACKETIZER_BASE }
/** Array initializer of VIDEOPACKETIZER peripheral base pointers */
#define VIDEOPACKETIZER_BASE_PTRS                { VIDEOPACKETIZER }

/* VIDEOSAMPLER - Peripheral instance base addresses */
/** Peripheral VIDEOSAMPLER base address */
#define VIDEOSAMPLER_BASE                        (0x32FD8200u)
/** Peripheral VIDEOSAMPLER base pointer */
#define VIDEOSAMPLER                             ((VIDEOSAMPLER_Type *)VIDEOSAMPLER_BASE)
/** Array initializer of VIDEOSAMPLER peripheral base addresses */
#define VIDEOSAMPLER_BASE_ADDRS                  { VIDEOSAMPLER_BASE }
/** Array initializer of VIDEOSAMPLER peripheral base pointers */
#define VIDEOSAMPLER_BASE_PTRS                   { VIDEOSAMPLER }

/* VPU_BLK_CTL - Peripheral instance base addresses */
/** Peripheral VPU_BLK_CTRL base address */
#define VPU_BLK_CTRL_BASE                        (0x38330000u)
/** Peripheral VPU_BLK_CTRL base pointer */
#define VPU_BLK_CTRL                             ((VPU_BLK_CTL_Type *)VPU_BLK_CTRL_BASE)
/** Array initializer of VPU_BLK_CTL peripheral base addresses */
#define VPU_BLK_CTL_BASE_ADDRS                   { VPU_BLK_CTRL_BASE }
/** Array initializer of VPU_BLK_CTL peripheral base pointers */
#define VPU_BLK_CTL_BASE_PTRS                    { VPU_BLK_CTRL }

/* VPU_G1 - Peripheral instance base addresses */
/** Peripheral VPU_G1 base address */
#define VPU_G1_BASE                              (0x38300000u)
/** Peripheral VPU_G1 base pointer */
#define VPU_G1                                   ((VPU_G1_Type *)VPU_G1_BASE)
/** Array initializer of VPU_G1 peripheral base addresses */
#define VPU_G1_BASE_ADDRS                        { VPU_G1_BASE }
/** Array initializer of VPU_G1 peripheral base pointers */
#define VPU_G1_BASE_PTRS                         { VPU_G1 }

/* VPU_G1_H264 - Peripheral instance base addresses */
/** Peripheral VPU_G1_H264 base address */
#define VPU_G1_H264_BASE                         (0x38300000u)
/** Peripheral VPU_G1_H264 base pointer */
#define VPU_G1_H264                              ((VPU_G1_H264_Type *)VPU_G1_H264_BASE)
/** Array initializer of VPU_G1_H264 peripheral base addresses */
#define VPU_G1_H264_BASE_ADDRS                   { VPU_G1_H264_BASE }
/** Array initializer of VPU_G1_H264 peripheral base pointers */
#define VPU_G1_H264_BASE_PTRS                    { VPU_G1_H264 }

/* VPU_G1_VP7_VP8 - Peripheral instance base addresses */
/** Peripheral VPU_G1_VP7_VP8 base address */
#define VPU_G1_VP7_VP8_BASE                      (0x38300000u)
/** Peripheral VPU_G1_VP7_VP8 base pointer */
#define VPU_G1_VP7_VP8                           ((VPU_G1_VP7_VP8_Type *)VPU_G1_VP7_VP8_BASE)
/** Array initializer of VPU_G1_VP7_VP8 peripheral base addresses */
#define VPU_G1_VP7_VP8_BASE_ADDRS                { VPU_G1_VP7_VP8_BASE }
/** Array initializer of VPU_G1_VP7_VP8 peripheral base pointers */
#define VPU_G1_VP7_VP8_BASE_PTRS                 { VPU_G1_VP7_VP8 }

/* VPU_G1_VP8 - Peripheral instance base addresses */
/** Peripheral VPU_G1_VP8 base address */
#define VPU_G1_VP8_BASE                          (0x38300000u)
/** Peripheral VPU_G1_VP8 base pointer */
#define VPU_G1_VP8                               ((VPU_G1_VP8_Type *)VPU_G1_VP8_BASE)
/** Array initializer of VPU_G1_VP8 peripheral base addresses */
#define VPU_G1_VP8_BASE_ADDRS                    { VPU_G1_VP8_BASE }
/** Array initializer of VPU_G1_VP8 peripheral base pointers */
#define VPU_G1_VP8_BASE_PTRS                     { VPU_G1_VP8 }

/* VPU_G2 - Peripheral instance base addresses */
/** Peripheral VPU_G2 base address */
#define VPU_G2_BASE                              (0x38310000u)
/** Peripheral VPU_G2 base pointer */
#define VPU_G2                                   ((VPU_G2_Type *)VPU_G2_BASE)
/** Array initializer of VPU_G2 peripheral base addresses */
#define VPU_G2_BASE_ADDRS                        { VPU_G2_BASE }
/** Array initializer of VPU_G2 peripheral base pointers */
#define VPU_G2_BASE_PTRS                         { VPU_G2 }

/* VPU_H264 - Peripheral instance base addresses */
/** Peripheral VPU_H264 base address */
#define VPU_H264_BASE                            (0x38320000u)
/** Peripheral VPU_H264 base pointer */
#define VPU_H264                                 ((VPU_H264_Type *)VPU_H264_BASE)
/** Array initializer of VPU_H264 peripheral base addresses */
#define VPU_H264_BASE_ADDRS                      { VPU_H264_BASE }
/** Array initializer of VPU_H264 peripheral base pointers */
#define VPU_H264_BASE_PTRS                       { VPU_H264 }

/* VPU_HEVC - Peripheral instance base addresses */
/** Peripheral VPU_HEVC base address */
#define VPU_HEVC_BASE                            (0x38320000u)
/** Peripheral VPU_HEVC base pointer */
#define VPU_HEVC                                 ((VPU_HEVC_Type *)VPU_HEVC_BASE)
/** Array initializer of VPU_HEVC peripheral base addresses */
#define VPU_HEVC_BASE_ADDRS                      { VPU_HEVC_BASE }
/** Array initializer of VPU_HEVC peripheral base pointers */
#define VPU_HEVC_BASE_PTRS                       { VPU_HEVC }

/* WDOG - Peripheral instance base addresses */
/** Peripheral WDOG1 base address */
#define WDOG1_BASE                               (0x30280000u)
/** Peripheral WDOG1 base pointer */
#define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
/** Peripheral WDOG2 base address */
#define WDOG2_BASE                               (0x30290000u)
/** Peripheral WDOG2 base pointer */
#define WDOG2                                    ((WDOG_Type *)WDOG2_BASE)
/** Peripheral WDOG3 base address */
#define WDOG3_BASE                               (0x302A0000u)
/** Peripheral WDOG3 base pointer */
#define WDOG3                                    ((WDOG_Type *)WDOG3_BASE)
/** Array initializer of WDOG peripheral base addresses */
#define WDOG_BASE_ADDRS                          { 0u, WDOG1_BASE, WDOG2_BASE, WDOG3_BASE }
/** Array initializer of WDOG peripheral base pointers */
#define WDOG_BASE_PTRS                           { (WDOG_Type *)0u, WDOG1, WDOG2, WDOG3 }
/** Interrupt vectors for the WDOG peripheral type */
#define WDOG_IRQS                                { NotAvail_IRQn, WDOG1_IRQn, WDOG2_IRQn, WDOG3_IRQn }

/* XTALOSC - Peripheral instance base addresses */
/** Peripheral XTALOSC base address */
#define XTALOSC_BASE                             (0x30270000u)
/** Peripheral XTALOSC base pointer */
#define XTALOSC                                  ((XTALOSC_Type *)XTALOSC_BASE)
/** Array initializer of XTALOSC peripheral base addresses */
#define XTALOSC_BASE_ADDRS                       { XTALOSC_BASE }
/** Array initializer of XTALOSC peripheral base pointers */
#define XTALOSC_BASE_PTRS                        { XTALOSC }

/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

/**
 * @brief Mask and left-shift a bit field value for use in a register bit range.
 * @param field Name of the register bit field.
 * @param value Value of the bit field.
 * @return Masked and shifted value.
 */
#define NXP_VAL2FLD(field, value)    (((value) << (field ## _SHIFT)) & (field ## _MASK))
/**
 * @brief Mask and right-shift a register value to extract a bit field value.
 * @param field Name of the register bit field.
 * @param value Value of the register.
 * @return Masked and shifted bit field value.
 */
#define NXP_FLD2VAL(field, value)    (((value) & (field ## _MASK)) >> (field ## _SHIFT))

/*!
 * @}
 */ /* end of group Bit_Field_Generic_Macros */


/* ----------------------------------------------------------------------------
   -- SDK Compatibility
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SDK_Compatibility_Symbols SDK Compatibility
 * @{
 */

/* No SDK compatibility issues. */

/*!
 * @}
 */ /* end of group SDK_Compatibility_Symbols */


#endif  /* MIMX8ML8_DSP_COMMON_H_ */

