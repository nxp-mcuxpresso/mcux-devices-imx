/*
** ###################################################################
**     Processors:          MIMX9596AVZXN_cm33
**                          MIMX9596CVTXN_cm33
**                          MIMX9596CVZXN_cm33
**                          MIMX9596DVTXN_cm33
**                          MIMX9596DVZXN_cm33
**                          MIMX9596DVZXQ_cm33
**                          MIMX9596XVTXN_cm33
**                          MIMX9596XVZXN_cm33
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**
**     Reference manual:    iMX95RM rev3
**     Version:             rev. 3.0, 2025-11-24
**     Build:               b260122
**
**     Abstract:
**         CMSIS Peripheral Access Layer for MIMX9596_cm33
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2026 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-01-10)
**         Initial version.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**     - rev. 3.0 (2025-11-24)
**         Header RFP.
**
** ###################################################################
*/

/*!
 * @file MIMX9596_cm33_COMMON.h
 * @version 3.0
 * @date 2025-11-24
 * @brief CMSIS Peripheral Access Layer for MIMX9596_cm33
 *
 * CMSIS Peripheral Access Layer for MIMX9596_cm33
 */

#if !defined(MIMX9596_CM33_COMMON_H_)
#define MIMX9596_CM33_COMMON_H_                  /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0300U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0000U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 392                /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M33 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M33 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M33 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M33 Usage Fault Interrupt */
  SecureFault_IRQn             = -9,               /**< Cortex-M33 Secure Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M33 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M33 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M33 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M33 System Tick Interrupt */

  /* Device specific interrupts */
  Reserved16_IRQn              = 0,                /**< Reserved interrupt */
  Reserved17_IRQn              = 1,                /**< DAP interrupt */
  Reserved18_IRQn              = 2,                /**< CTI trigger outputs from CM7 platform */
  Reserved19_IRQn              = 3,                /**< CTI trigger outputs from CM33 platform */
  Reserved20_IRQn              = 4,                /**< CTI trigger outputs from CA55 platform */
  Reserved21_IRQn              = 5,                /**< Performance Unit Interrupts from CA55 platform */
  Reserved22_IRQn              = 6,                /**< ECC error from CA55 platform cache */
  Reserved23_IRQn              = 7,                /**< 1-bit or 2-bit ECC or Parity error from CA55 platform cache */
  CAN1_IRQn                    = 8,                /**< CAN1 interrupt */
  CAN1_ERROR_IRQn              = 9,                /**< CAN1 error interrupt */
  GPIO1_0_IRQn                 = 10,               /**< General Purpose Input/Output 1 interrupt 0 */
  GPIO1_1_IRQn                 = 11,               /**< General Purpose Input/Output 1 interrupt 1 */
  I3C1_IRQn                    = 12,               /**< Improved Inter-Integrated Circuit 1 interrupt */
  LPI2C1_IRQn                  = 13,               /**< Low Power Inter-Integrated Circuit module 1 */
  LPI2C2_IRQn                  = 14,               /**< Low Power Inter-Integrated Circuit module 2 */
  LPIT1_IRQn                   = 15,               /**< Low Power Periodic Interrupt Timer 1 */
  LPSPI1_IRQn                  = 16,               /**< Low Power Serial Peripheral Interface 1 */
  LPSPI2_IRQn                  = 17,               /**< Low Power Serial Peripheral Interface 2 */
  LPTMR1_IRQn                  = 18,               /**< Low Power Timer 1 */
  LPUART1_IRQn                 = 19,               /**< Low Power UART 1 */
  LPUART2_IRQn                 = 20,               /**< Low Power UART 2 */
  Reserved37_IRQn              = 21,               /**< AONMIX Sentinel MU0 SideA interrupt */
  Reserved38_IRQn              = 22,               /**< AONMIX Sentinel MU1 SideA interrupt */
  Reserved39_IRQn              = 23,               /**< AONMIX Sentinel MU2 SideA interrupt */
  Reserved40_IRQn              = 24,               /**< AONMIX Sentinel MU3 SideA interrupt */
  Reserved41_IRQn              = 25,               /**< AONMIX Sentinel MU4 SideA interrupt */
  Reserved42_IRQn              = 26,               /**< AONMIX Sentinel MU5 SideA interrupt */
  V2X_FH_APCH0_IRQn            = 27,               /**< V2X-FH MU APCH0 (APP0) interrupt */
  V2X_FH_APHSM1_IRQn           = 28,               /**< V2X-FH MU APHSM1 (HSM1) interrupt */
  TPM1_IRQn                    = 29,               /**< Timer PWM module 1 */
  TPM2_IRQn                    = 30,               /**< Timer PWM module 2 */
  WDOG1_IRQn                   = 31,               /**< Watchdog 1 Interrupt */
  WDOG2_IRQn                   = 32,               /**< Watchdog 2 Interrupt */
  TRDC_MGR_A_IRQn              = 33,               /**< AONMIX TRDC transfer error interrupt */
  SAI1_IRQn                    = 34,               /**< Serial Audio Interface 1 */
  Reserved51_IRQn              = 35,               /**< AONMIX M33 PS Error */
  Reserved52_IRQn              = 36,               /**< AONMIX M33 TCM Error interrupt */
  Reserved53_IRQn              = 37,               /**< M7MIX ECC Multi-bit error */
  CAN2_IRQn                    = 38,               /**< CAN2 interrupt */
  CAN2_ERROR_IRQn              = 39,               /**< CAN2 error interrupt */
  CAN3_IRQn                    = 40,               /**< CAN3 interrupt */
  CAN3_ERROR_IRQn              = 41,               /**< CAN3 error interrupt */
  CAN4_IRQn                    = 42,               /**< CAN4 interrupt */
  CAN4_ERROR_IRQn              = 43,               /**< CAN4 error interrupt */
  CAN5_IRQn                    = 44,               /**< CAN5 interrupt */
  CAN5_ERROR_IRQn              = 45,               /**< CAN5 error interrupt */
  FLEXIO1_IRQn                 = 46,               /**< Flexible IO 1 interrupt */
  FLEXIO2_IRQn                 = 47,               /**< Flexible IO 2 interrupt */
  FlexSPI1_IRQn                = 48,               /**< FlexSPI controller interface interrupt 1 */
  GPIO2_0_IRQn                 = 49,               /**< General Purpose Input/Output 2 interrupt 0 */
  GPIO2_1_IRQn                 = 50,               /**< General Purpose Input/Output 2 interrupt 1 */
  GPIO3_0_IRQn                 = 51,               /**< General Purpose Input/Output 3 interrupt 0 */
  GPIO3_1_IRQn                 = 52,               /**< General Purpose Input/Output 3 interrupt 1 */
  GPIO4_0_IRQn                 = 53,               /**< General Purpose Input/Output 4 interrupt 0 */
  GPIO4_1_IRQn                 = 54,               /**< General Purpose Input/Output 4 interrupt 1 */
  GPIO5_0_IRQn                 = 55,               /**< General Purpose Input/Output 5 interrupt 0 */
  GPIO5_1_IRQn                 = 56,               /**< General Purpose Input/Output 5 interrupt 1 */
  I3C2_IRQn                    = 57,               /**< Improved Inter-Integrated Circuit 2 interrupt */
  LPI2C3_IRQn                  = 58,               /**< Low Power Inter-Integrated Circuit module 3 */
  LPI2C4_IRQn                  = 59,               /**< Low Power Inter-Integrated Circuit module 4 */
  LPIT2_IRQn                   = 60,               /**< Low Power Periodic Interrupt Timer 2 */
  LPSPI3_IRQn                  = 61,               /**< Low Power Serial Peripheral Interface 3 */
  LPSPI4_IRQn                  = 62,               /**< Low Power Serial Peripheral Interface 4 */
  LPTMR2_IRQn                  = 63,               /**< Low Power Timer 2 */
  LPUART3_IRQn                 = 64,               /**< Low Power UART 3 */
  LPUART4_IRQn                 = 65,               /**< Low Power UART 4 */
  LPUART5_IRQn                 = 66,               /**< Low Power UART 5 */
  LPUART6_IRQn                 = 67,               /**< Low Power UART 6 */
  LPUART7_IRQn                 = 68,               /**< Low Power UART 7 */
  LPUART8_IRQn                 = 69,               /**< Low Power UART 8 */
  Reserved86_IRQn              = 70,               /**< MTR Master error interrupt */
  Reserved87_IRQn              = 71,               /**< BBNSM Non-Secure interrupt */
  Reserved88_IRQn              = 72,               /**< System Counter compare interrupt */
  TPM3_IRQn                    = 73,               /**< Timer PWM module 3 */
  TPM4_IRQn                    = 74,               /**< Timer PWM module 4 */
  TPM5_IRQn                    = 75,               /**< Timer PWM module 5 */
  TPM6_IRQn                    = 76,               /**< Timer PWM module 6 */
  WDOG3_IRQn                   = 77,               /**< Watchdog 3 Interrupt */
  WDOG4_IRQn                   = 78,               /**< Watchdog 4 Interrupt */
  WDOG5_IRQn                   = 79,               /**< Watchdog 5 Interrupt */
  TMPSNS1_THR1_IRQn            = 80,               /**< ANAMIX TempSensor non-secure interrupt from Threshold 1 */
  TMPSNS1_THR2_IRQn            = 81,               /**< ANAMIX TempSensor non-secure interrupt from Threshold 2 */
  TMPSNS1_DRDY_IRQn            = 82,               /**< ANAMIX TempSensor non-secure data ready interrupt */
  TMPSNS2_THR1_IRQn            = 83,               /**< CORTEXAMIX TempSensor non-secure interrupt from Threshold 1 */
  TMPSNS2_THR2_IRQn            = 84,               /**< CORTEXAMIX TempSensor non-secure interrupt from Threshold 2 */
  TMPSNS2_DRDY_IRQn            = 85,               /**< CORTEXAMIX TempSensor non-secure data ready interrupt */
  uSDHC1_IRQn                  = 86,               /**< ultra Secure Digital Host Controller interrupt 1 */
  uSDHC2_IRQn                  = 87,               /**< ultra Secure Digital Host Controller interrupt 2 */
  Reserved104_IRQn             = 88,               /**< MEGAMIX TRDC transfer error interrupt */
  Reserved105_IRQn             = 89,               /**< NIC_WRAPPER TRDC transfer error interrupt */
  Reserved106_IRQn             = 90,               /**< NOCMIX TRDC transfer error interrupt */
  Reserved107_IRQn             = 91,               /**< DRAM controller Performance Monitor Interrupt */
  Reserved108_IRQn             = 92,               /**< DRAM controller Critical Interrupt */
  Reserved109_IRQn             = 93,               /**< DRAM Phy Critical Interrupt */
  Reserved110_IRQn             = 94,               /**< Reserved */
  DMA3_ERROR_IRQn              = 95,               /**< eDMA1 error interrupt */
  DMA3_0_IRQn                  = 96,               /**< eDMA1 channel 0 interrupt */
  DMA3_1_IRQn                  = 97,               /**< eDMA1 channel 1 interrupt */
  DMA3_2_IRQn                  = 98,               /**< eDMA1 channel 2 interrupt */
  DMA3_3_IRQn                  = 99,               /**< eDMA1 channel 3 interrupt */
  DMA3_4_IRQn                  = 100,              /**< eDMA1 channel 4 interrupt */
  DMA3_5_IRQn                  = 101,              /**< eDMA1 channel 5 interrupt */
  DMA3_6_IRQn                  = 102,              /**< eDMA1 channel 6 interrupt */
  DMA3_7_IRQn                  = 103,              /**< eDMA1 channel 7 interrupt */
  DMA3_8_IRQn                  = 104,              /**< eDMA1 channel 8 interrupt */
  DMA3_9_IRQn                  = 105,              /**< eDMA1 channel 9 interrupt */
  DMA3_10_IRQn                 = 106,              /**< eDMA1 channel 10 interrupt */
  DMA3_11_IRQn                 = 107,              /**< eDMA1 channel 11 interrupt */
  DMA3_12_IRQn                 = 108,              /**< eDMA1 channel 12 interrupt */
  DMA3_13_IRQn                 = 109,              /**< eDMA1 channel 13 interrupt */
  DMA3_14_IRQn                 = 110,              /**< eDMA1 channel 14 interrupt */
  DMA3_15_IRQn                 = 111,              /**< eDMA1 channel 15 interrupt */
  DMA3_16_IRQn                 = 112,              /**< eDMA1 channel 16 interrupt */
  DMA3_17_IRQn                 = 113,              /**< eDMA1 channel 17 interrupt */
  DMA3_18_IRQn                 = 114,              /**< eDMA1 channel 18 interrupt */
  DMA3_19_IRQn                 = 115,              /**< eDMA1 channel 19 interrupt */
  DMA3_20_IRQn                 = 116,              /**< eDMA1 channel 20 interrupt */
  DMA3_21_IRQn                 = 117,              /**< eDMA1 channel 21 interrupt */
  DMA3_22_IRQn                 = 118,              /**< eDMA1 channel 22 interrupt */
  DMA3_23_IRQn                 = 119,              /**< eDMA1 channel 23 interrupt */
  DMA3_24_IRQn                 = 120,              /**< eDMA1 channel 24 interrupt */
  DMA3_25_IRQn                 = 121,              /**< eDMA1 channel 25 interrupt */
  DMA3_26_IRQn                 = 122,              /**< eDMA1 channel 26 interrupt */
  DMA3_27_IRQn                 = 123,              /**< eDMA1 channel 27 interrupt */
  DMA3_28_IRQn                 = 124,              /**< eDMA1 channel 28 interrupt */
  DMA3_29_IRQn                 = 125,              /**< eDMA1 channel 29 interrupt */
  DMA3_30_IRQn                 = 126,              /**< eDMA1 channel 30 interrupt */
  DMA5_2_ERROR_IRQn            = 127,              /**< eDMA2 error interrupt */
  DMA5_2_0_1_IRQn              = 128,              /**< eDMA2 channel 0/1 interrupt */
  DMA5_2_2_3_IRQn              = 129,              /**< eDMA2 channel 2/3 interrupt */
  DMA5_2_4_5_IRQn              = 130,              /**< eDMA2 channel 4/5 interrupt */
  DMA5_2_6_7_IRQn              = 131,              /**< eDMA2 channel 6/7 interrupt */
  DMA5_2_8_9_IRQn              = 132,              /**< eDMA2 channel 8/9 interrupt */
  DMA5_2_10_11_IRQn            = 133,              /**< eDMA2 channel 10/11 interrupt */
  DMA5_2_12_13_IRQn            = 134,              /**< eDMA2 channel 12/13 interrupt */
  DMA5_2_14_15_IRQn            = 135,              /**< eDMA2 channel 14/15 interrupt */
  DMA5_2_16_17_IRQn            = 136,              /**< eDMA2 channel 16/17 interrupt */
  DMA5_2_18_19_IRQn            = 137,              /**< eDMA2 channel 18/19 interrupt */
  DMA5_2_20_21_IRQn            = 138,              /**< eDMA2 channel 20/21 interrupt */
  DMA5_2_22_23_IRQn            = 139,              /**< eDMA2 channel 22/23 interrupt */
  DMA5_2_24_25_IRQn            = 140,              /**< eDMA2 channel 24/25 interrupt */
  DMA5_2_26_27_IRQn            = 141,              /**< eDMA2 channel 26/27 interrupt */
  DMA5_2_28_29_IRQn            = 142,              /**< eDMA2 channel 28/29 interrupt */
  DMA5_2_30_31_IRQn            = 143,              /**< eDMA2 channel 30/31 interrupt */
  DMA5_2_32_33_IRQn            = 144,              /**< eDMA2 channel 32/33 interrupt */
  DMA5_2_34_35_IRQn            = 145,              /**< eDMA2 channel 34/35 interrupt */
  DMA5_2_36_37_IRQn            = 146,              /**< eDMA2 channel 36/37 interrupt */
  DMA5_2_38_39_IRQn            = 147,              /**< eDMA2 channel 38/39 interrupt */
  DMA5_2_40_41_IRQn            = 148,              /**< eDMA2 channel 40/41 interrupt */
  DMA5_2_42_43_IRQn            = 149,              /**< eDMA2 channel 42/43 interrupt */
  DMA5_2_44_45_IRQn            = 150,              /**< eDMA2 channel 44/45 interrupt */
  DMA5_2_46_47_IRQn            = 151,              /**< eDMA2 channel 46/47 interrupt */
  DMA5_2_48_49_IRQn            = 152,              /**< eDMA2 channel 48/49 interrupt */
  DMA5_2_50_51_IRQn            = 153,              /**< eDMA2 channel 50/51 interrupt */
  DMA5_2_52_53_IRQn            = 154,              /**< eDMA2 channel 52/53 interrupt */
  DMA5_2_54_55_IRQn            = 155,              /**< eDMA2 channel 54/55 interrupt */
  DMA5_2_56_57_IRQn            = 156,              /**< eDMA2 channel 56/57 interrupt */
  DMA5_2_58_59_IRQn            = 157,              /**< eDMA2 channel 58/59 interrupt */
  DMA5_2_60_61_IRQn            = 158,              /**< eDMA2 channel 60/61 interrupt */
  DMA5_2_62_63_IRQn            = 159,              /**< eDMA2 channel 62/63 interrupt */
  Reserved176_IRQn             = 160,              /**< Sentinel Group 1 reset source if no s500 reference clock is detected. Output synchronized to 32khz clk. */
  Reserved177_IRQn             = 161,              /**< Sentinel Group 2 reset source s500 reference clock is not detected or too slow. Output synchronized to ref1_clk. */
  Reserved178_IRQn             = 162,              /**< Sentinel Group 2 reset source s500 reference clock is not detected or too slow. Output synchronized to ref1_clk. */
  Reserved179_IRQn             = 163,              /**< JTAGSW DAP MDM-AP SRC reset source */
  Reserved180_IRQn             = 164,              /**< JTAGC SRC reset source */
  Reserved181_IRQn             = 165,              /**< CM33 SYSREQRST SRC reset source */
  Reserved182_IRQn             = 166,              /**< CM33 LOCKUP SRC reset source */
  Reserved183_IRQn             = 167,              /**< CM7 SYSREQRST SRC reset source */
  Reserved184_IRQn             = 168,              /**< CM7 LOCKUP SRC reset source */
  SAI2_IRQn                    = 169,              /**< Serial Audio Interface 2 */
  SAI3_IRQn                    = 170,              /**< Serial Audio Interface 3 */
  SAI4_IRQn                    = 171,              /**< Serial Audio Interface 4 */
  SAI5_IRQn                    = 172,              /**< Serial Audio Interface 5 */
  Reserved189_IRQn             = 173,              /**< USB-1 Wake-up Interrupt */
  Reserved190_IRQn             = 174,              /**< USB-2 Wake-up Interrupt */
  USB1_IRQn                    = 175,              /**< USB-1 Interrupt */
  USB2_IRQn                    = 176,              /**< USB-2 Interrupt */
  LPSPI5_IRQn                  = 177,              /**< Low Power Serial Peripheral Interface 5 */
  LPSPI6_IRQn                  = 178,              /**< Low Power Serial Peripheral Interface 6 */
  LPSPI7_IRQn                  = 179,              /**< Low Power Serial Peripheral Interface 7 */
  LPSPI8_IRQn                  = 180,              /**< Low Power Serial Peripheral Interface 8 */
  LPI2C5_IRQn                  = 181,              /**< Low Power Inter-Integrated Circuit module 5 */
  LPI2C6_IRQn                  = 182,              /**< Low Power Inter-Integrated Circuit module 6 */
  LPI2C7_IRQn                  = 183,              /**< Low Power Inter-Integrated Circuit module 7 */
  LPI2C8_IRQn                  = 184,              /**< Low Power Inter-Integrated Circuit module 8 */
  PDM_HWVAD_ERROR_IRQn         = 185,              /**< PDM interrupt */
  PDM_HWVAD_EVENT_IRQn         = 186,              /**< PDM interrupt */
  PDM_ERROR_IRQn               = 187,              /**< PDM interrupt */
  PDM_EVENT_IRQn               = 188,              /**< PDM interrupt */
  Reserved205_IRQn             = 189,              /**< AUDIO XCVR interrupt */
  Reserved206_IRQn             = 190,              /**< AUDIO XCVR interrupt */
  uSDHC3_IRQn                  = 191,              /**< ultra Secure Digital Host Controller interrupt 3 */
  Reserved208_IRQn             = 192,              /**< OCRAM MECC interrupt */
  Reserved209_IRQn             = 193,              /**< OCRAM MECC interrupt */
  Reserved210_IRQn             = 194,              /**< CM33 MCM interrupt */
  Reserved211_IRQn             = 195,              /**< ANAMIX SFA interrupt */
  Reserved212_IRQn             = 196,              /**< GIC700 Fault */
  Reserved213_IRQn             = 197,              /**< GIC700 Error */
  Reserved214_IRQn             = 198,              /**< GIC700 PMU Counter Overflow */
  ADC_ER_IRQn                  = 199,              /**< ADC interrupt */
  ADC_WD_IRQn                  = 200,              /**< ADC interrupt */
  ADC_EOC_IRQn                 = 201,              /**< ADC interrupt */
  Reserved218_IRQn             = 202,              /**< s500 glue logic IRQ */
  Reserved219_IRQn             = 203,              /**< I3C1 wakeup irq after double sync */
  Reserved220_IRQn             = 204,              /**< I3C2 wakeup irq after double sync */
  MU5_A_IRQn                   = 205,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU6_A_IRQn                   = 206,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU7_B_IRQn                   = 207,              /**< WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU8_B_IRQn                   = 208,              /**< WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  Reserved225_IRQn             = 209,              /**< WAKEUPMIX XSPI Responder */
  Reserved226_IRQn             = 210,              /**< AONMIX FCCU Interrupt Reaction 0 */
  Reserved227_IRQn             = 211,              /**< AONMIX FCCU Interrupt Reaction 1 */
  Reserved228_IRQn             = 212,              /**< AONMIX FCCU Interrupt Reaction 2 */
  Reserved229_IRQn             = 213,              /**< AONMIX STCU Selftest end Interrupt */
  DISP_IRQSTEER0_IRQn          = 214,              /**< DISPLAYMIX IRQSTEER 0 */
  DISP_IRQSTEER1_IRQn          = 215,              /**< DISPLAYMIX IRQSTEER 1 */
  DISP_IRQSTEER2_IRQn          = 216,              /**< DISPLAYMIX IRQSTEER 2 */
  DISP_IRQSTEER3_IRQn          = 217,              /**< DISPLAYMIX IRQSTEER 3 */
  DISP_IRQSTEER4_IRQn          = 218,              /**< DISPLAYMIX IRQSTEER 4 */
  DISP_IRQSTEER7_IRQn          = 219,              /**< DISPLAYMIX IRQSTEER 7 */
  Reserved236_IRQn             = 220,              /**< CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  ISI_IRQn                     = 221,              /**< CAMERAMIX ISI interrupt Channel 0 */
  Reserved238_IRQn             = 222,              /**< ISP Processing Interrupt - Context 0 */
  Reserved239_IRQn             = 223,              /**< M7MIX MCM interrupt */
  MU1_A_IRQn                   = 224,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU1_B_IRQn                   = 225,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU2_A_IRQn                   = 226,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU2_B_IRQn                   = 227,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU3_A_IRQn                   = 228,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU3_B_IRQn                   = 229,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU4_A_IRQn                   = 230,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU4_B_IRQn                   = 231,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU5_B_IRQn                   = 232,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU6_B_IRQn                   = 233,              /**< AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB */
  MU7_A_IRQn                   = 234,              /**< WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MU8_A_IRQn                   = 235,              /**< WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA */
  MSGINTR1_IRQn                = 236,              /**< MSGINTR Instance 1, Interrupt */
  MSGINTR2_IRQn                = 237,              /**< MSGINTR Instance 2, Interrupts */
  Reserved254_IRQn             = 238,              /**< V2X-FH MU APCH1 (APP1) interrupt */
  Reserved255_IRQn             = 239,              /**< V2X-FH MU APHSM2 (HSM2) interrupt */
  Reserved256_IRQn             = 240,              /**< CAMERAMIX TRDC transfer error interrupt */
  Reserved257_IRQn             = 241,              /**< DISPLAYMIX TRDC transfer error interrupt */
  Reserved258_IRQn             = 242,              /**< NETCMIX TRDC transfer error interrupt */
  Reserved259_IRQn             = 243,              /**< GPUMIX TRDC transfer error interrupt */
  Reserved260_IRQn             = 244,              /**< HSIOMIX TRDC transfer error interrupt */
  Reserved261_IRQn             = 245,              /**< VPUMIX TRDC transfer error interrupt */
  Reserved262_IRQn             = 246,              /**< AONMIX ERM Single bit corrected ECC Error */
  Reserved263_IRQn             = 247,              /**< M7MIX ERM Single bit corrected ECC Error */
  Reserved264_IRQn             = 248,              /**< WAKEUPMIX ERM Single bit corrected ECC Error */
  Reserved265_IRQn             = 249,              /**< NPUMIX ERM Single bit corrected ECC Error */
  Reserved266_IRQn             = 250,              /**< WAKEUPMIX ACP EDMA error interrupt */
  Reserved267_IRQn             = 251,              /**< OCRAM_C ECC multiple bit or address error */
  Reserved268_IRQn             = 252,              /**< CAMERAMIX Cortex-M0+ Cache write-buffer error */
  Reserved269_IRQn             = 253,              /**< CAMERAMIX Cortex-M0+ Cache data parity error */
  Reserved270_IRQn             = 254,              /**< V2X-FH MU APSHE (SHE) interrupt */
  Reserved271_IRQn             = 255,              /**< V2X-FH MU SCU/APDEBUG (DEBUG) interrupt */
  DMA5_3_0_1_IRQn              = 256,              /**< eDMA3 channel 0/1 interrupt */
  DMA5_3_2_3_IRQn              = 257,              /**< eDMA3 channel 2/3 interrupt */
  DMA5_3_4_5_IRQn              = 258,              /**< eDMA3 channel 4/5 interrupt */
  DMA5_3_6_7_IRQn              = 259,              /**< eDMA3 channel 6/7 interrupt */
  DMA5_3_8_9_IRQn              = 260,              /**< eDMA3 channel 8/9 interrupt */
  DMA5_3_10_11_IRQn            = 261,              /**< eDMA3 channel 10/11 interrupt */
  DMA5_3_12_13_IRQn            = 262,              /**< eDMA3 channel 12/13 interrupt */
  DMA5_3_14_15_IRQn            = 263,              /**< eDMA3 channel 14/15 interrupt */
  DMA5_3_16_17_IRQn            = 264,              /**< eDMA3 channel 16/17 interrupt */
  DMA5_3_18_19_IRQn            = 265,              /**< eDMA3 channel 18/19 interrupt */
  DMA5_3_20_21_IRQn            = 266,              /**< eDMA3 channel 20/21 interrupt */
  DMA5_3_22_23_IRQn            = 267,              /**< eDMA3 channel 22/23 interrupt */
  DMA5_3_24_25_IRQn            = 268,              /**< eDMA3 channel 24/25 interrupt */
  DMA5_3_26_27_IRQn            = 269,              /**< eDMA3 channel 26/27 interrupt */
  DMA5_3_28_29_IRQn            = 270,              /**< eDMA3 channel 28/29 interrupt */
  DMA5_3_30_31_IRQn            = 271,              /**< eDMA3 channel 30/31 interrupt */
  DMA5_3_32_33_IRQn            = 272,              /**< eDMA3 channel 32/33 interrupt */
  DMA5_3_34_35_IRQn            = 273,              /**< eDMA3 channel 34/35 interrupt */
  DMA5_3_36_37_IRQn            = 274,              /**< eDMA3 channel 36/37 interrupt */
  DMA5_3_38_39_IRQn            = 275,              /**< eDMA3 channel 38/39 interrupt */
  DMA5_3_40_41_IRQn            = 276,              /**< eDMA3 channel 40/41 interrupt */
  DMA5_3_42_43_IRQn            = 277,              /**< eDMA3 channel 42/43 interrupt */
  DMA5_3_44_45_IRQn            = 278,              /**< eDMA3 channel 44/45 interrupt */
  DMA5_3_46_47_IRQn            = 279,              /**< eDMA3 channel 46/47 interrupt */
  DMA5_3_48_49_IRQn            = 280,              /**< eDMA3 channel 48/49 interrupt */
  DMA5_3_50_51_IRQn            = 281,              /**< eDMA3 channel 50/51 interrupt */
  DMA5_3_52_53_IRQn            = 282,              /**< eDMA3 channel 52/53 interrupt */
  DMA5_3_54_55_IRQn            = 283,              /**< eDMA3 channel 54/55 interrupt */
  DMA5_3_56_57_IRQn            = 284,              /**< eDMA3 channel 56/57 interrupt */
  DMA5_3_58_59_IRQn            = 285,              /**< eDMA3 channel 58/59 interrupt */
  DMA5_3_60_61_IRQn            = 286,              /**< eDMA3 channel 60/61 interrupt */
  DMA5_3_62_63_IRQn            = 287,              /**< eDMA3 channel 62/63 interrupt */
  Reserved304_IRQn             = 288,              /**< GPUMIX GPU Interrupt */
  Reserved305_IRQn             = 289,              /**< GPUMIX Job Interrupt */
  Reserved306_IRQn             = 290,              /**< GPUMIX MMU Interrupt */
  Reserved307_IRQn             = 291,              /**< Reserved INTERRUPT */
  Reserved308_IRQn             = 292,              /**< Reserved interrupt */
  Reserved309_IRQn             = 293,              /**< Reserved interrupt */
  Reserved310_IRQn             = 294,              /**< Reserved interrupt */
  Reserved311_IRQn             = 295,              /**< Reserved interrupt */
  Reserved312_IRQn             = 296,              /**< Reserved interrupt */
  Reserved313_IRQn             = 297,              /**< Reserved interrupt */
  Reserved314_IRQn             = 298,              /**< Reserved interrupt */
  Reserved315_IRQn             = 299,              /**< Reserved interrupt */
  Reserved316_IRQn             = 300,              /**< Reserved interrupt */
  Reserved317_IRQn             = 301,              /**< Reserved interrupt */
  Reserved318_IRQn             = 302,              /**< Reserved interrupt */
  Reserved319_IRQn             = 303,              /**< Reserved interrupt */
  Reserved320_IRQn             = 304,              /**< NETC iEPRC PCI INT */
  Reserved321_IRQn             = 305,              /**< NETC iEPRC PCI INT */
  Reserved322_IRQn             = 306,              /**< PCIe Controller 1 INTA */
  Reserved323_IRQn             = 307,              /**< PCIe Controller 1 INTB */
  Reserved324_IRQn             = 308,              /**< PCIe Controller 1 INTC */
  Reserved325_IRQn             = 309,              /**< PCIe Controller 1 INTD */
  Reserved326_IRQn             = 310,              /**< PCIe interrupts */
  Reserved327_IRQn             = 311,              /**< PCIe Controller EDMA channel interrupt */
  Reserved328_IRQn             = 312,              /**< PCIe Controller 1 INTA */
  Reserved329_IRQn             = 313,              /**< PCIe Controller 1 INTB */
  Reserved330_IRQn             = 314,              /**< PCIe Controller 1 INTC */
  Reserved331_IRQn             = 315,              /**< PCIe Controller 1 INTD */
  Reserved332_IRQn             = 316,              /**< PCIe miscellaneous interrupts */
  Reserved333_IRQn             = 317,              /**< PCIe Controller EDMA channel interrupt */
  Reserved334_IRQn             = 318,              /**< Wakeup interrupt from CLKREQ#, WAKEUP#, BEACON_DET */
  Reserved335_IRQn             = 319,              /**< NPUMIX Functional interrupt */
  Reserved336_IRQn             = 320,              /**< DISPLAYMIX Real-time traffic TBU: Fault Handling RAS Interrupt for a contained error */
  Reserved337_IRQn             = 321,              /**< DISPLAYMIX Real-time traffic TBU: Error Handling RAS Interrupt for an uncontained error */
  Reserved338_IRQn             = 322,              /**< DISPLAYMIX Real-time traffic TBU: Critical Error Interrupt for an uncontainable error */
  Reserved339_IRQn             = 323,              /**< DISPLAYMIX Real-time traffic TBU: PMU Interrupt */
  Reserved340_IRQn             = 324,              /**< TCU Event queue, secure interrupt */
  Reserved341_IRQn             = 325,              /**< TCU Event queue, non-secure interrupt */
  Reserved342_IRQn             = 326,              /**< TCU SYNC complete, non-secure interrupt */
  Reserved343_IRQn             = 327,              /**< TCU SYNC complete, secure interrupt */
  Reserved344_IRQn             = 328,              /**< TCU global non-secure interrupt */
  Reserved345_IRQn             = 329,              /**< TCU global secure interrupt */
  Reserved346_IRQn             = 330,              /**< TCU fault handling RAS interrupt for a contained error */
  Reserved347_IRQn             = 331,              /**< TCU error recovery RAS interrupt for an uncontained error */
  Reserved348_IRQn             = 332,              /**< TCU critical error interrupt, for an uncontainable uncorrected error */
  Reserved349_IRQn             = 333,              /**< TCU PMU interrupt */
  Reserved350_IRQn             = 334,              /**< TCU Page Request Interface */
  Reserved351_IRQn             = 335,              /**< SRC GPC Low Power Handshake Gasket interrupt request for system management */
  Reserved352_IRQn             = 336,              /**< CAMERAMIX MU Ored of all */
  Reserved353_IRQn             = 337,              /**< CAMERAMIX MU Ored of all */
  Reserved354_IRQn             = 338,              /**< CAMERAMIX MU Ored of all */
  Reserved355_IRQn             = 339,              /**< CAMERAMIX MU Ored of all */
  Reserved356_IRQn             = 340,              /**< CAMERAMIX MU Ored of all */
  Reserved357_IRQn             = 341,              /**< CAMERAMIX MU Ored of all */
  Reserved358_IRQn             = 342,              /**< CAMERAMIX MU Ored of all */
  Reserved359_IRQn             = 343,              /**< CAMERAMIX MU Ored of all */
  Reserved360_IRQn             = 344,              /**< CAMERAMIX ISI interrupt Channel 1 */
  Reserved361_IRQn             = 345,              /**< CAMERAMIX ISI interrupt Channel 2 */
  Reserved362_IRQn             = 346,              /**< CAMERAMIX ISI interrupt Channel 3 */
  Reserved363_IRQn             = 347,              /**< CAMERAMIX ISI interrupt Channel 4 */
  Reserved364_IRQn             = 348,              /**< CAMERAMIX ISI interrupt Channel 5 */
  Reserved365_IRQn             = 349,              /**< CAMERAMIX ISI interrupt Channel 6 */
  Reserved366_IRQn             = 350,              /**< CAMERAMIX ISI interrupt Channel 7 */
  Reserved367_IRQn             = 351,              /**< CAMERAMIX EDMA error interrupt */
  Reserved368_IRQn             = 352,              /**< CAMERAMIX EDMA channel 0 interrupt */
  Reserved369_IRQn             = 353,              /**< CAMERAMIX EDMA channel 2 interrupt */
  Reserved370_IRQn             = 354,              /**< CAMERAMIX EDMA channel 4 interrupt */
  Reserved371_IRQn             = 355,              /**< CAMERAMIX EDMA channel 6 interrupt */
  Reserved372_IRQn             = 356,              /**< CAMERAMIX EDMA channel 8 interrupt */
  Reserved373_IRQn             = 357,              /**< CAMERAMIX EDMA channel 10 interrupt */
  Reserved374_IRQn             = 358,              /**< CAMERAMIX EDMA channel 12 interrupt */
  Reserved375_IRQn             = 359,              /**< CAMERAMIX EDMA channel 14 interrupt */
  Reserved376_IRQn             = 360,              /**< CAMERAMIX EDMA channel 16 interrupt */
  Reserved377_IRQn             = 361,              /**< CAMERAMIX EDMA channel 18 interrupt */
  Reserved378_IRQn             = 362,              /**< CAMERAMIX EDMA channel 20 interrupt */
  Reserved379_IRQn             = 363,              /**< CAMERAMIX EDMA channel 22 interrupt */
  Reserved380_IRQn             = 364,              /**< CAMERAMIX EDMA channel 24 interrupt */
  Reserved381_IRQn             = 365,              /**< CAMERAMIX EDMA channel 26 interrupt */
  Reserved382_IRQn             = 366,              /**< CAMERAMIX EDMA channel 28 interrupt */
  Reserved383_IRQn             = 367,              /**< CAMERAMIX EDMA channel 30 interrupt */
  Reserved384_IRQn             = 368,              /**< CAMERAMIX CSI Formatting Unit 1: Buffer overflow */
  Reserved385_IRQn             = 369,              /**< CAMERAMIX CSI Formatting Unit 1: Interlaced Error */
  Reserved386_IRQn             = 370,              /**< CAMERAMIX CSI Formatting Unit 1: Pixel Data Type Error */
  Reserved387_IRQn             = 371,              /**< CAMERAMIX CSI Formatting Unit 2: Buffer overflow */
  Reserved388_IRQn             = 372,              /**< CAMERAMIX CSI Formatting Unit 2: Interlaced Error */
  Reserved389_IRQn             = 373,              /**< CAMERAMIX CSI Formatting Unit 2: Pixel Data Type Error */
  Reserved390_IRQn             = 374,              /**< CAMERAMIX CSI1 */
  Reserved391_IRQn             = 375               /**< CAMERAMIX CSI2 */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M33 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M33 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */
#define __DSP_PRESENT                  1         /**< Defines if Armv8-M Mainline core supports DSP instructions */
#define __SAUREGION_PRESENT            1         /**< Defines if an SAU is present or not */

#include "core_cm33.h"                 /* Core Peripheral Access Layer */
#include "system_MIMX9596_cm33.h"      /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


#ifndef MIMX9596_cm33_SERIES
#define MIMX9596_cm33_SERIES
#endif
/* CPU specific feature definitions */
#include "MIMX9596_cm33_features.h"

/* ADC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ADC base address */
  #define ADC_BASE                                 (0x54530000u)
  /** Peripheral ADC base address */
  #define ADC_BASE_NS                              (0x44530000u)
  /** Peripheral ADC base pointer */
  #define ADC                                      ((ADC_Type *)ADC_BASE)
  /** Peripheral ADC base pointer */
  #define ADC_NS                                   ((ADC_Type *)ADC_BASE_NS)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC }
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS_NS                        { ADC_BASE_NS }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS_NS                         { ADC_NS }
#else
  /** Peripheral ADC base address */
  #define ADC_BASE                                 (0x44530000u)
  /** Peripheral ADC base pointer */
  #define ADC                                      ((ADC_Type *)ADC_BASE)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC }
#endif

/* ANALOG_AGDET - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__AGDET base address */
  #define ANALOG__AGDET_BASE                       (0x54487000u)
  /** Peripheral ANALOG__AGDET base address */
  #define ANALOG__AGDET_BASE_NS                    (0x44487000u)
  /** Peripheral ANALOG__AGDET base pointer */
  #define ANALOG__AGDET                            ((ANALOG_AGDET_Type *)ANALOG__AGDET_BASE)
  /** Peripheral ANALOG__AGDET base pointer */
  #define ANALOG__AGDET_NS                         ((ANALOG_AGDET_Type *)ANALOG__AGDET_BASE_NS)
  /** Array initializer of ANALOG_AGDET peripheral base addresses */
  #define ANALOG_AGDET_BASE_ADDRS                  { ANALOG__AGDET_BASE }
  /** Array initializer of ANALOG_AGDET peripheral base pointers */
  #define ANALOG_AGDET_BASE_PTRS                   { ANALOG__AGDET }
  /** Array initializer of ANALOG_AGDET peripheral base addresses */
  #define ANALOG_AGDET_BASE_ADDRS_NS               { ANALOG__AGDET_BASE_NS }
  /** Array initializer of ANALOG_AGDET peripheral base pointers */
  #define ANALOG_AGDET_BASE_PTRS_NS                { ANALOG__AGDET_NS }
#else
  /** Peripheral ANALOG__AGDET base address */
  #define ANALOG__AGDET_BASE                       (0x44487000u)
  /** Peripheral ANALOG__AGDET base pointer */
  #define ANALOG__AGDET                            ((ANALOG_AGDET_Type *)ANALOG__AGDET_BASE)
  /** Array initializer of ANALOG_AGDET peripheral base addresses */
  #define ANALOG_AGDET_BASE_ADDRS                  { ANALOG__AGDET_BASE }
  /** Array initializer of ANALOG_AGDET peripheral base pointers */
  #define ANALOG_AGDET_BASE_PTRS                   { ANALOG__AGDET }
#endif

/* ANALOG_FRO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__FRO base address */
  #define ANALOG__FRO_BASE                         (0x54485000u)
  /** Peripheral ANALOG__FRO base address */
  #define ANALOG__FRO_BASE_NS                      (0x44485000u)
  /** Peripheral ANALOG__FRO base pointer */
  #define ANALOG__FRO                              ((ANALOG_FRO_Type *)ANALOG__FRO_BASE)
  /** Peripheral ANALOG__FRO base pointer */
  #define ANALOG__FRO_NS                           ((ANALOG_FRO_Type *)ANALOG__FRO_BASE_NS)
  /** Array initializer of ANALOG_FRO peripheral base addresses */
  #define ANALOG_FRO_BASE_ADDRS                    { ANALOG__FRO_BASE }
  /** Array initializer of ANALOG_FRO peripheral base pointers */
  #define ANALOG_FRO_BASE_PTRS                     { ANALOG__FRO }
  /** Array initializer of ANALOG_FRO peripheral base addresses */
  #define ANALOG_FRO_BASE_ADDRS_NS                 { ANALOG__FRO_BASE_NS }
  /** Array initializer of ANALOG_FRO peripheral base pointers */
  #define ANALOG_FRO_BASE_PTRS_NS                  { ANALOG__FRO_NS }
#else
  /** Peripheral ANALOG__FRO base address */
  #define ANALOG__FRO_BASE                         (0x44485000u)
  /** Peripheral ANALOG__FRO base pointer */
  #define ANALOG__FRO                              ((ANALOG_FRO_Type *)ANALOG__FRO_BASE)
  /** Array initializer of ANALOG_FRO peripheral base addresses */
  #define ANALOG_FRO_BASE_ADDRS                    { ANALOG__FRO_BASE }
  /** Array initializer of ANALOG_FRO peripheral base pointers */
  #define ANALOG_FRO_BASE_PTRS                     { ANALOG__FRO }
#endif

/* ANALOG_OSC24M - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__OSC24M base address */
  #define ANALOG__OSC24M_BASE                      (0x54480000u)
  /** Peripheral ANALOG__OSC24M base address */
  #define ANALOG__OSC24M_BASE_NS                   (0x44480000u)
  /** Peripheral ANALOG__OSC24M base pointer */
  #define ANALOG__OSC24M                           ((ANALOG_OSC24M_Type *)ANALOG__OSC24M_BASE)
  /** Peripheral ANALOG__OSC24M base pointer */
  #define ANALOG__OSC24M_NS                        ((ANALOG_OSC24M_Type *)ANALOG__OSC24M_BASE_NS)
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define ANALOG_OSC24M_BASE_ADDRS                 { ANALOG__OSC24M_BASE }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define ANALOG_OSC24M_BASE_PTRS                  { ANALOG__OSC24M }
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define ANALOG_OSC24M_BASE_ADDRS_NS              { ANALOG__OSC24M_BASE_NS }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define ANALOG_OSC24M_BASE_PTRS_NS               { ANALOG__OSC24M_NS }
#else
  /** Peripheral ANALOG__OSC24M base address */
  #define ANALOG__OSC24M_BASE                      (0x44480000u)
  /** Peripheral ANALOG__OSC24M base pointer */
  #define ANALOG__OSC24M                           ((ANALOG_OSC24M_Type *)ANALOG__OSC24M_BASE)
  /** Array initializer of ANALOG_OSC24M peripheral base addresses */
  #define ANALOG_OSC24M_BASE_ADDRS                 { ANALOG__OSC24M_BASE }
  /** Array initializer of ANALOG_OSC24M peripheral base pointers */
  #define ANALOG_OSC24M_BASE_PTRS                  { ANALOG__OSC24M }
#endif

/* ANALOG_PMRO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__PMRO base address */
  #define ANALOG__PMRO_BASE                        (0x54484000u)
  /** Peripheral ANALOG__PMRO base address */
  #define ANALOG__PMRO_BASE_NS                     (0x44484000u)
  /** Peripheral ANALOG__PMRO base pointer */
  #define ANALOG__PMRO                             ((ANALOG_PMRO_Type *)ANALOG__PMRO_BASE)
  /** Peripheral ANALOG__PMRO base pointer */
  #define ANALOG__PMRO_NS                          ((ANALOG_PMRO_Type *)ANALOG__PMRO_BASE_NS)
  /** Array initializer of ANALOG_PMRO peripheral base addresses */
  #define ANALOG_PMRO_BASE_ADDRS                   { ANALOG__PMRO_BASE }
  /** Array initializer of ANALOG_PMRO peripheral base pointers */
  #define ANALOG_PMRO_BASE_PTRS                    { ANALOG__PMRO }
  /** Array initializer of ANALOG_PMRO peripheral base addresses */
  #define ANALOG_PMRO_BASE_ADDRS_NS                { ANALOG__PMRO_BASE_NS }
  /** Array initializer of ANALOG_PMRO peripheral base pointers */
  #define ANALOG_PMRO_BASE_PTRS_NS                 { ANALOG__PMRO_NS }
#else
  /** Peripheral ANALOG__PMRO base address */
  #define ANALOG__PMRO_BASE                        (0x44484000u)
  /** Peripheral ANALOG__PMRO base pointer */
  #define ANALOG__PMRO                             ((ANALOG_PMRO_Type *)ANALOG__PMRO_BASE)
  /** Array initializer of ANALOG_PMRO peripheral base addresses */
  #define ANALOG_PMRO_BASE_ADDRS                   { ANALOG__PMRO_BASE }
  /** Array initializer of ANALOG_PMRO peripheral base pointers */
  #define ANALOG_PMRO_BASE_PTRS                    { ANALOG__PMRO }
#endif

/* ANALOG_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__TCU base address */
  #define ANALOG__TCU_BASE                         (0x544C0000u)
  /** Peripheral ANALOG__TCU base address */
  #define ANALOG__TCU_BASE_NS                      (0x444C0000u)
  /** Peripheral ANALOG__TCU base pointer */
  #define ANALOG__TCU                              ((ANALOG_TCU_Type *)ANALOG__TCU_BASE)
  /** Peripheral ANALOG__TCU base pointer */
  #define ANALOG__TCU_NS                           ((ANALOG_TCU_Type *)ANALOG__TCU_BASE_NS)
  /** Array initializer of ANALOG_TCU peripheral base addresses */
  #define ANALOG_TCU_BASE_ADDRS                    { ANALOG__TCU_BASE }
  /** Array initializer of ANALOG_TCU peripheral base pointers */
  #define ANALOG_TCU_BASE_PTRS                     { ANALOG__TCU }
  /** Array initializer of ANALOG_TCU peripheral base addresses */
  #define ANALOG_TCU_BASE_ADDRS_NS                 { ANALOG__TCU_BASE_NS }
  /** Array initializer of ANALOG_TCU peripheral base pointers */
  #define ANALOG_TCU_BASE_PTRS_NS                  { ANALOG__TCU_NS }
#else
  /** Peripheral ANALOG__TCU base address */
  #define ANALOG__TCU_BASE                         (0x444C0000u)
  /** Peripheral ANALOG__TCU base pointer */
  #define ANALOG__TCU                              ((ANALOG_TCU_Type *)ANALOG__TCU_BASE)
  /** Array initializer of ANALOG_TCU peripheral base addresses */
  #define ANALOG_TCU_BASE_ADDRS                    { ANALOG__TCU_BASE }
  /** Array initializer of ANALOG_TCU peripheral base pointers */
  #define ANALOG_TCU_BASE_PTRS                     { ANALOG__TCU }
#endif

/* ANALOG_TRGMUX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__TRGMUX base address */
  #define ANALOG__TRGMUX_BASE                      (0x54531000u)
  /** Peripheral ANALOG__TRGMUX base address */
  #define ANALOG__TRGMUX_BASE_NS                   (0x44531000u)
  /** Peripheral ANALOG__TRGMUX base pointer */
  #define ANALOG__TRGMUX                           ((ANALOG_TRGMUX_Type *)ANALOG__TRGMUX_BASE)
  /** Peripheral ANALOG__TRGMUX base pointer */
  #define ANALOG__TRGMUX_NS                        ((ANALOG_TRGMUX_Type *)ANALOG__TRGMUX_BASE_NS)
  /** Array initializer of ANALOG_TRGMUX peripheral base addresses */
  #define ANALOG_TRGMUX_BASE_ADDRS                 { ANALOG__TRGMUX_BASE }
  /** Array initializer of ANALOG_TRGMUX peripheral base pointers */
  #define ANALOG_TRGMUX_BASE_PTRS                  { ANALOG__TRGMUX }
  /** Array initializer of ANALOG_TRGMUX peripheral base addresses */
  #define ANALOG_TRGMUX_BASE_ADDRS_NS              { ANALOG__TRGMUX_BASE_NS }
  /** Array initializer of ANALOG_TRGMUX peripheral base pointers */
  #define ANALOG_TRGMUX_BASE_PTRS_NS               { ANALOG__TRGMUX_NS }
#else
  /** Peripheral ANALOG__TRGMUX base address */
  #define ANALOG__TRGMUX_BASE                      (0x44531000u)
  /** Peripheral ANALOG__TRGMUX base pointer */
  #define ANALOG__TRGMUX                           ((ANALOG_TRGMUX_Type *)ANALOG__TRGMUX_BASE)
  /** Array initializer of ANALOG_TRGMUX peripheral base addresses */
  #define ANALOG_TRGMUX_BASE_ADDRS                 { ANALOG__TRGMUX_BASE }
  /** Array initializer of ANALOG_TRGMUX peripheral base pointers */
  #define ANALOG_TRGMUX_BASE_PTRS                  { ANALOG__TRGMUX }
#endif

/* ANALOG_VDET - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__VDET base address */
  #define ANALOG__VDET_BASE                        (0x54486000u)
  /** Peripheral ANALOG__VDET base address */
  #define ANALOG__VDET_BASE_NS                     (0x44486000u)
  /** Peripheral ANALOG__VDET base pointer */
  #define ANALOG__VDET                             ((ANALOG_VDET_Type *)ANALOG__VDET_BASE)
  /** Peripheral ANALOG__VDET base pointer */
  #define ANALOG__VDET_NS                          ((ANALOG_VDET_Type *)ANALOG__VDET_BASE_NS)
  /** Array initializer of ANALOG_VDET peripheral base addresses */
  #define ANALOG_VDET_BASE_ADDRS                   { ANALOG__VDET_BASE }
  /** Array initializer of ANALOG_VDET peripheral base pointers */
  #define ANALOG_VDET_BASE_PTRS                    { ANALOG__VDET }
  /** Array initializer of ANALOG_VDET peripheral base addresses */
  #define ANALOG_VDET_BASE_ADDRS_NS                { ANALOG__VDET_BASE_NS }
  /** Array initializer of ANALOG_VDET peripheral base pointers */
  #define ANALOG_VDET_BASE_PTRS_NS                 { ANALOG__VDET_NS }
#else
  /** Peripheral ANALOG__VDET base address */
  #define ANALOG__VDET_BASE                        (0x44486000u)
  /** Peripheral ANALOG__VDET base pointer */
  #define ANALOG__VDET                             ((ANALOG_VDET_Type *)ANALOG__VDET_BASE)
  /** Array initializer of ANALOG_VDET peripheral base addresses */
  #define ANALOG_VDET_BASE_ADDRS                   { ANALOG__VDET_BASE }
  /** Array initializer of ANALOG_VDET peripheral base pointers */
  #define ANALOG_VDET_BASE_PTRS                    { ANALOG__VDET }
#endif

/* AON_BLK_CTRL_NS_AONMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base address */
  #define AON__BLK_CTRL_NS_AONMIX1_BASE            (0x54210000u)
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base address */
  #define AON__BLK_CTRL_NS_AONMIX1_BASE_NS         (0x44210000u)
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base pointer */
  #define AON__BLK_CTRL_NS_AONMIX1                 ((AON_BLK_CTRL_NS_AONMIX_Type *)AON__BLK_CTRL_NS_AONMIX1_BASE)
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base pointer */
  #define AON__BLK_CTRL_NS_AONMIX1_NS              ((AON_BLK_CTRL_NS_AONMIX_Type *)AON__BLK_CTRL_NS_AONMIX1_BASE_NS)
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_ADDRS        { AON__BLK_CTRL_NS_AONMIX1_BASE }
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_PTRS         { AON__BLK_CTRL_NS_AONMIX1 }
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_ADDRS_NS     { AON__BLK_CTRL_NS_AONMIX1_BASE_NS }
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_PTRS_NS      { AON__BLK_CTRL_NS_AONMIX1_NS }
#else
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base address */
  #define AON__BLK_CTRL_NS_AONMIX1_BASE            (0x44210000u)
  /** Peripheral AON__BLK_CTRL_NS_AONMIX1 base pointer */
  #define AON__BLK_CTRL_NS_AONMIX1                 ((AON_BLK_CTRL_NS_AONMIX_Type *)AON__BLK_CTRL_NS_AONMIX1_BASE)
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_ADDRS        { AON__BLK_CTRL_NS_AONMIX1_BASE }
  /** Array initializer of AON_BLK_CTRL_NS_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_NS_AONMIX_BASE_PTRS         { AON__BLK_CTRL_NS_AONMIX1 }
#endif

/* AON_BLK_CTRL_S_AONMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base address */
  #define AON__BLK_CTRL_S_AONMIX2_BASE             (0x544F0000u)
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base address */
  #define AON__BLK_CTRL_S_AONMIX2_BASE_NS          (0x444F0000u)
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base pointer */
  #define AON__BLK_CTRL_S_AONMIX2                  ((AON_BLK_CTRL_S_AONMIX_Type *)AON__BLK_CTRL_S_AONMIX2_BASE)
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base pointer */
  #define AON__BLK_CTRL_S_AONMIX2_NS               ((AON_BLK_CTRL_S_AONMIX_Type *)AON__BLK_CTRL_S_AONMIX2_BASE_NS)
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_S_AONMIX_BASE_ADDRS         { AON__BLK_CTRL_S_AONMIX2_BASE }
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_S_AONMIX_BASE_PTRS          { AON__BLK_CTRL_S_AONMIX2 }
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_S_AONMIX_BASE_ADDRS_NS      { AON__BLK_CTRL_S_AONMIX2_BASE_NS }
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_S_AONMIX_BASE_PTRS_NS       { AON__BLK_CTRL_S_AONMIX2_NS }
#else
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base address */
  #define AON__BLK_CTRL_S_AONMIX2_BASE             (0x444F0000u)
  /** Peripheral AON__BLK_CTRL_S_AONMIX2 base pointer */
  #define AON__BLK_CTRL_S_AONMIX2                  ((AON_BLK_CTRL_S_AONMIX_Type *)AON__BLK_CTRL_S_AONMIX2_BASE)
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base addresses */
  #define AON_BLK_CTRL_S_AONMIX_BASE_ADDRS         { AON__BLK_CTRL_S_AONMIX2_BASE }
  /** Array initializer of AON_BLK_CTRL_S_AONMIX peripheral base pointers */
  #define AON_BLK_CTRL_S_AONMIX_BASE_PTRS          { AON__BLK_CTRL_S_AONMIX2 }
#endif

/* AON_CMU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON_CMUA1 base address */
  #define AON_CMUA1_BASE                           (0x54540000u)
  /** Peripheral AON_CMUA1 base address */
  #define AON_CMUA1_BASE_NS                        (0x44540000u)
  /** Peripheral AON_CMUA1 base pointer */
  #define AON_CMUA1                                ((AON_CMU_Type *)AON_CMUA1_BASE)
  /** Peripheral AON_CMUA1 base pointer */
  #define AON_CMUA1_NS                             ((AON_CMU_Type *)AON_CMUA1_BASE_NS)
  /** Peripheral AON_CMUA2 base address */
  #define AON_CMUA2_BASE                           (0x54650000u)
  /** Peripheral AON_CMUA2 base address */
  #define AON_CMUA2_BASE_NS                        (0x44650000u)
  /** Peripheral AON_CMUA2 base pointer */
  #define AON_CMUA2                                ((AON_CMU_Type *)AON_CMUA2_BASE)
  /** Peripheral AON_CMUA2 base pointer */
  #define AON_CMUA2_NS                             ((AON_CMU_Type *)AON_CMUA2_BASE_NS)
  /** Array initializer of AON_CMU peripheral base addresses */
  #define AON_CMU_BASE_ADDRS                       { AON_CMUA1_BASE, AON_CMUA2_BASE }
  /** Array initializer of AON_CMU peripheral base pointers */
  #define AON_CMU_BASE_PTRS                        { AON_CMUA1, AON_CMUA2 }
  /** Array initializer of AON_CMU peripheral base addresses */
  #define AON_CMU_BASE_ADDRS_NS                    { AON_CMUA1_BASE_NS, AON_CMUA2_BASE_NS }
  /** Array initializer of AON_CMU peripheral base pointers */
  #define AON_CMU_BASE_PTRS_NS                     { AON_CMUA1_NS, AON_CMUA2_NS }
#else
  /** Peripheral AON_CMUA1 base address */
  #define AON_CMUA1_BASE                           (0x44540000u)
  /** Peripheral AON_CMUA1 base pointer */
  #define AON_CMUA1                                ((AON_CMU_Type *)AON_CMUA1_BASE)
  /** Peripheral AON_CMUA2 base address */
  #define AON_CMUA2_BASE                           (0x44650000u)
  /** Peripheral AON_CMUA2 base pointer */
  #define AON_CMUA2                                ((AON_CMU_Type *)AON_CMUA2_BASE)
  /** Array initializer of AON_CMU peripheral base addresses */
  #define AON_CMU_BASE_ADDRS                       { AON_CMUA1_BASE, AON_CMUA2_BASE }
  /** Array initializer of AON_CMU peripheral base pointers */
  #define AON_CMU_BASE_PTRS                        { AON_CMUA1, AON_CMUA2 }
#endif

/* AON_FCCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__FCCU base address */
  #define AON__FCCU_BASE                           (0x54570000u)
  /** Peripheral AON__FCCU base address */
  #define AON__FCCU_BASE_NS                        (0x44570000u)
  /** Peripheral AON__FCCU base pointer */
  #define AON__FCCU                                ((AON_FCCU_Type *)AON__FCCU_BASE)
  /** Peripheral AON__FCCU base pointer */
  #define AON__FCCU_NS                             ((AON_FCCU_Type *)AON__FCCU_BASE_NS)
  /** Array initializer of AON_FCCU peripheral base addresses */
  #define AON_FCCU_BASE_ADDRS                      { AON__FCCU_BASE }
  /** Array initializer of AON_FCCU peripheral base pointers */
  #define AON_FCCU_BASE_PTRS                       { AON__FCCU }
  /** Array initializer of AON_FCCU peripheral base addresses */
  #define AON_FCCU_BASE_ADDRS_NS                   { AON__FCCU_BASE_NS }
  /** Array initializer of AON_FCCU peripheral base pointers */
  #define AON_FCCU_BASE_PTRS_NS                    { AON__FCCU_NS }
#else
  /** Peripheral AON__FCCU base address */
  #define AON__FCCU_BASE                           (0x44570000u)
  /** Peripheral AON__FCCU base pointer */
  #define AON__FCCU                                ((AON_FCCU_Type *)AON__FCCU_BASE)
  /** Array initializer of AON_FCCU peripheral base addresses */
  #define AON_FCCU_BASE_ADDRS                      { AON__FCCU_BASE }
  /** Array initializer of AON_FCCU peripheral base pointers */
  #define AON_FCCU_BASE_PTRS                       { AON__FCCU }
#endif

/* AON_MCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE                            (0xF0080000u)
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE_NS                         (0xE0080000u)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM                                 ((AON_MCM_Type *)AON__MCM_BASE)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM_NS                              ((AON_MCM_Type *)AON__MCM_BASE_NS)
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS                       { AON__MCM_BASE }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS                        { AON__MCM }
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS_NS                    { AON__MCM_BASE_NS }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS_NS                     { AON__MCM_NS }
#else
  /** Peripheral AON__MCM base address */
  #define AON__MCM_BASE                            (0xE0080000u)
  /** Peripheral AON__MCM base pointer */
  #define AON__MCM                                 ((AON_MCM_Type *)AON__MCM_BASE)
  /** Array initializer of AON_MCM peripheral base addresses */
  #define AON_MCM_BASE_ADDRS                       { AON__MCM_BASE }
  /** Array initializer of AON_MCM peripheral base pointers */
  #define AON_MCM_BASE_PTRS                        { AON__MCM }
#endif

/* AON_ROMCP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__ROMCP1 base address */
  #define AON__ROMCP1_BASE                         (0x54430000u)
  /** Peripheral AON__ROMCP1 base address */
  #define AON__ROMCP1_BASE_NS                      (0x44430000u)
  /** Peripheral AON__ROMCP1 base pointer */
  #define AON__ROMCP1                              ((AON_ROMCP_Type *)AON__ROMCP1_BASE)
  /** Peripheral AON__ROMCP1 base pointer */
  #define AON__ROMCP1_NS                           ((AON_ROMCP_Type *)AON__ROMCP1_BASE_NS)
  /** Array initializer of AON_ROMCP peripheral base addresses */
  #define AON_ROMCP_BASE_ADDRS                     { AON__ROMCP1_BASE }
  /** Array initializer of AON_ROMCP peripheral base pointers */
  #define AON_ROMCP_BASE_PTRS                      { AON__ROMCP1 }
  /** Array initializer of AON_ROMCP peripheral base addresses */
  #define AON_ROMCP_BASE_ADDRS_NS                  { AON__ROMCP1_BASE_NS }
  /** Array initializer of AON_ROMCP peripheral base pointers */
  #define AON_ROMCP_BASE_PTRS_NS                   { AON__ROMCP1_NS }
#else
  /** Peripheral AON__ROMCP1 base address */
  #define AON__ROMCP1_BASE                         (0x44430000u)
  /** Peripheral AON__ROMCP1 base pointer */
  #define AON__ROMCP1                              ((AON_ROMCP_Type *)AON__ROMCP1_BASE)
  /** Array initializer of AON_ROMCP peripheral base addresses */
  #define AON_ROMCP_BASE_ADDRS                     { AON__ROMCP1_BASE }
  /** Array initializer of AON_ROMCP peripheral base pointers */
  #define AON_ROMCP_BASE_PTRS                      { AON__ROMCP1 }
#endif

/* AON_SYSPM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__M33_PCF1 base address */
  #define AON__M33_PCF1_BASE                       (0x543E0000u)
  /** Peripheral AON__M33_PCF1 base address */
  #define AON__M33_PCF1_BASE_NS                    (0x443E0000u)
  /** Peripheral AON__M33_PCF1 base pointer */
  #define AON__M33_PCF1                            ((AON_SYSPM_Type *)AON__M33_PCF1_BASE)
  /** Peripheral AON__M33_PCF1 base pointer */
  #define AON__M33_PCF1_NS                         ((AON_SYSPM_Type *)AON__M33_PCF1_BASE_NS)
  /** Peripheral AON__M33_PSF1 base address */
  #define AON__M33_PSF1_BASE                       (0x543F0000u)
  /** Peripheral AON__M33_PSF1 base address */
  #define AON__M33_PSF1_BASE_NS                    (0x443F0000u)
  /** Peripheral AON__M33_PSF1 base pointer */
  #define AON__M33_PSF1                            ((AON_SYSPM_Type *)AON__M33_PSF1_BASE)
  /** Peripheral AON__M33_PSF1 base pointer */
  #define AON__M33_PSF1_NS                         ((AON_SYSPM_Type *)AON__M33_PSF1_BASE_NS)
  /** Array initializer of AON_SYSPM peripheral base addresses */
  #define AON_SYSPM_BASE_ADDRS                     { AON__M33_PCF1_BASE, AON__M33_PSF1_BASE }
  /** Array initializer of AON_SYSPM peripheral base pointers */
  #define AON_SYSPM_BASE_PTRS                      { AON__M33_PCF1, AON__M33_PSF1 }
  /** Array initializer of AON_SYSPM peripheral base addresses */
  #define AON_SYSPM_BASE_ADDRS_NS                  { AON__M33_PCF1_BASE_NS, AON__M33_PSF1_BASE_NS }
  /** Array initializer of AON_SYSPM peripheral base pointers */
  #define AON_SYSPM_BASE_PTRS_NS                   { AON__M33_PCF1_NS, AON__M33_PSF1_NS }
#else
  /** Peripheral AON__M33_PCF1 base address */
  #define AON__M33_PCF1_BASE                       (0x443E0000u)
  /** Peripheral AON__M33_PCF1 base pointer */
  #define AON__M33_PCF1                            ((AON_SYSPM_Type *)AON__M33_PCF1_BASE)
  /** Peripheral AON__M33_PSF1 base address */
  #define AON__M33_PSF1_BASE                       (0x443F0000u)
  /** Peripheral AON__M33_PSF1 base pointer */
  #define AON__M33_PSF1                            ((AON_SYSPM_Type *)AON__M33_PSF1_BASE)
  /** Array initializer of AON_SYSPM peripheral base addresses */
  #define AON_SYSPM_BASE_ADDRS                     { AON__M33_PCF1_BASE, AON__M33_PSF1_BASE }
  /** Array initializer of AON_SYSPM peripheral base pointers */
  #define AON_SYSPM_BASE_PTRS                      { AON__M33_PCF1, AON__M33_PSF1 }
#endif

/* AON_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__TCU base address */
  #define AON__TCU_BASE                            (0x544B0000u)
  /** Peripheral AON__TCU base address */
  #define AON__TCU_BASE_NS                         (0x444B0000u)
  /** Peripheral AON__TCU base pointer */
  #define AON__TCU                                 ((AON_TCU_Type *)AON__TCU_BASE)
  /** Peripheral AON__TCU base pointer */
  #define AON__TCU_NS                              ((AON_TCU_Type *)AON__TCU_BASE_NS)
  /** Array initializer of AON_TCU peripheral base addresses */
  #define AON_TCU_BASE_ADDRS                       { AON__TCU_BASE }
  /** Array initializer of AON_TCU peripheral base pointers */
  #define AON_TCU_BASE_PTRS                        { AON__TCU }
  /** Array initializer of AON_TCU peripheral base addresses */
  #define AON_TCU_BASE_ADDRS_NS                    { AON__TCU_BASE_NS }
  /** Array initializer of AON_TCU peripheral base pointers */
  #define AON_TCU_BASE_PTRS_NS                     { AON__TCU_NS }
#else
  /** Peripheral AON__TCU base address */
  #define AON__TCU_BASE                            (0x444B0000u)
  /** Peripheral AON__TCU base pointer */
  #define AON__TCU                                 ((AON_TCU_Type *)AON__TCU_BASE)
  /** Array initializer of AON_TCU peripheral base addresses */
  #define AON_TCU_BASE_ADDRS                       { AON__TCU_BASE }
  /** Array initializer of AON_TCU peripheral base pointers */
  #define AON_TCU_BASE_PTRS                        { AON__TCU }
#endif

/* AUDIO_XCVR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__AUDIO_XCVR base address */
  #define WAKEUP__AUDIO_XCVR_BASE                  (0x52680000u)
  /** Peripheral WAKEUP__AUDIO_XCVR base address */
  #define WAKEUP__AUDIO_XCVR_BASE_NS               (0x42680000u)
  /** Peripheral WAKEUP__AUDIO_XCVR base pointer */
  #define WAKEUP__AUDIO_XCVR                       ((AUDIO_XCVR_Type *)WAKEUP__AUDIO_XCVR_BASE)
  /** Peripheral WAKEUP__AUDIO_XCVR base pointer */
  #define WAKEUP__AUDIO_XCVR_NS                    ((AUDIO_XCVR_Type *)WAKEUP__AUDIO_XCVR_BASE_NS)
  /** Array initializer of AUDIO_XCVR peripheral base addresses */
  #define AUDIO_XCVR_BASE_ADDRS                    { WAKEUP__AUDIO_XCVR_BASE }
  /** Array initializer of AUDIO_XCVR peripheral base pointers */
  #define AUDIO_XCVR_BASE_PTRS                     { WAKEUP__AUDIO_XCVR }
  /** Array initializer of AUDIO_XCVR peripheral base addresses */
  #define AUDIO_XCVR_BASE_ADDRS_NS                 { WAKEUP__AUDIO_XCVR_BASE_NS }
  /** Array initializer of AUDIO_XCVR peripheral base pointers */
  #define AUDIO_XCVR_BASE_PTRS_NS                  { WAKEUP__AUDIO_XCVR_NS }
#else
  /** Peripheral WAKEUP__AUDIO_XCVR base address */
  #define WAKEUP__AUDIO_XCVR_BASE                  (0x42680000u)
  /** Peripheral WAKEUP__AUDIO_XCVR base pointer */
  #define WAKEUP__AUDIO_XCVR                       ((AUDIO_XCVR_Type *)WAKEUP__AUDIO_XCVR_BASE)
  /** Array initializer of AUDIO_XCVR peripheral base addresses */
  #define AUDIO_XCVR_BASE_ADDRS                    { WAKEUP__AUDIO_XCVR_BASE }
  /** Array initializer of AUDIO_XCVR peripheral base pointers */
  #define AUDIO_XCVR_BASE_PTRS                     { WAKEUP__AUDIO_XCVR }
#endif

/* AUTOFOCUS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__AUTOFOCUS base address */
  #define CAMERA__ISP__AUTOFOCUS_BASE              (0x5AE01700u)
  /** Peripheral CAMERA__ISP__AUTOFOCUS base address */
  #define CAMERA__ISP__AUTOFOCUS_BASE_NS           (0x4AE01700u)
  /** Peripheral CAMERA__ISP__AUTOFOCUS base pointer */
  #define CAMERA__ISP__AUTOFOCUS                   ((AUTOFOCUS_Type *)CAMERA__ISP__AUTOFOCUS_BASE)
  /** Peripheral CAMERA__ISP__AUTOFOCUS base pointer */
  #define CAMERA__ISP__AUTOFOCUS_NS                ((AUTOFOCUS_Type *)CAMERA__ISP__AUTOFOCUS_BASE_NS)
  /** Array initializer of AUTOFOCUS peripheral base addresses */
  #define AUTOFOCUS_BASE_ADDRS                     { CAMERA__ISP__AUTOFOCUS_BASE }
  /** Array initializer of AUTOFOCUS peripheral base pointers */
  #define AUTOFOCUS_BASE_PTRS                      { CAMERA__ISP__AUTOFOCUS }
  /** Array initializer of AUTOFOCUS peripheral base addresses */
  #define AUTOFOCUS_BASE_ADDRS_NS                  { CAMERA__ISP__AUTOFOCUS_BASE_NS }
  /** Array initializer of AUTOFOCUS peripheral base pointers */
  #define AUTOFOCUS_BASE_PTRS_NS                   { CAMERA__ISP__AUTOFOCUS_NS }
#else
  /** Peripheral CAMERA__ISP__AUTOFOCUS base address */
  #define CAMERA__ISP__AUTOFOCUS_BASE              (0x4AE01700u)
  /** Peripheral CAMERA__ISP__AUTOFOCUS base pointer */
  #define CAMERA__ISP__AUTOFOCUS                   ((AUTOFOCUS_Type *)CAMERA__ISP__AUTOFOCUS_BASE)
  /** Array initializer of AUTOFOCUS peripheral base addresses */
  #define AUTOFOCUS_BASE_ADDRS                     { CAMERA__ISP__AUTOFOCUS_BASE }
  /** Array initializer of AUTOFOCUS peripheral base pointers */
  #define AUTOFOCUS_BASE_PTRS                      { CAMERA__ISP__AUTOFOCUS }
#endif

/* AXBS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__AXBS base address */
  #define AON__AXBS_BASE                           (0x54510000u)
  /** Peripheral AON__AXBS base address */
  #define AON__AXBS_BASE_NS                        (0x44510000u)
  /** Peripheral AON__AXBS base pointer */
  #define AON__AXBS                                ((AXBS_Type *)AON__AXBS_BASE)
  /** Peripheral AON__AXBS base pointer */
  #define AON__AXBS_NS                             ((AXBS_Type *)AON__AXBS_BASE_NS)
  /** Array initializer of AXBS peripheral base addresses */
  #define AXBS_BASE_ADDRS                          { AON__AXBS_BASE }
  /** Array initializer of AXBS peripheral base pointers */
  #define AXBS_BASE_PTRS                           { AON__AXBS }
  /** Array initializer of AXBS peripheral base addresses */
  #define AXBS_BASE_ADDRS_NS                       { AON__AXBS_BASE_NS }
  /** Array initializer of AXBS peripheral base pointers */
  #define AXBS_BASE_PTRS_NS                        { AON__AXBS_NS }
#else
  /** Peripheral AON__AXBS base address */
  #define AON__AXBS_BASE                           (0x44510000u)
  /** Peripheral AON__AXBS base pointer */
  #define AON__AXBS                                ((AXBS_Type *)AON__AXBS_BASE)
  /** Array initializer of AXBS peripheral base addresses */
  #define AXBS_BASE_ADDRS                          { AON__AXBS_BASE }
  /** Array initializer of AXBS peripheral base pointers */
  #define AXBS_BASE_PTRS                           { AON__AXBS }
#endif

/* BBNSM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BBSM__BBNSM base address */
  #define BBSM__BBNSM_BASE                         (0x54440000u)
  /** Peripheral BBSM__BBNSM base address */
  #define BBSM__BBNSM_BASE_NS                      (0x44440000u)
  /** Peripheral BBSM__BBNSM base pointer */
  #define BBSM__BBNSM                              ((BBNSM_Type *)BBSM__BBNSM_BASE)
  /** Peripheral BBSM__BBNSM base pointer */
  #define BBSM__BBNSM_NS                           ((BBNSM_Type *)BBSM__BBNSM_BASE_NS)
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS                         { BBSM__BBNSM_BASE }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS                          { BBSM__BBNSM }
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS_NS                      { BBSM__BBNSM_BASE_NS }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS_NS                       { BBSM__BBNSM_NS }
#else
  /** Peripheral BBSM__BBNSM base address */
  #define BBSM__BBNSM_BASE                         (0x44440000u)
  /** Peripheral BBSM__BBNSM base pointer */
  #define BBSM__BBNSM                              ((BBNSM_Type *)BBSM__BBNSM_BASE)
  /** Array initializer of BBNSM peripheral base addresses */
  #define BBNSM_BASE_ADDRS                         { BBSM__BBNSM_BASE }
  /** Array initializer of BBNSM peripheral base pointers */
  #define BBNSM_BASE_PTRS                          { BBSM__BBNSM }
#endif

/* BBSM_BLK_CTRL_BBSMMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base address */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE     (0x54410000u)
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base address */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE_NS  (0x44410000u)
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base pointer */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1          ((BBSM_BLK_CTRL_BBSMMIX_Type *)BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE)
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base pointer */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_NS       ((BBSM_BLK_CTRL_BBSMMIX_Type *)BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE_NS)
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base addresses */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_ADDRS         { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE }
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base pointers */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_PTRS          { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 }
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base addresses */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_ADDRS_NS      { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE_NS }
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base pointers */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_PTRS_NS       { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_NS }
#else
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base address */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE     (0x44410000u)
  /** Peripheral BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 base pointer */
  #define BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1          ((BBSM_BLK_CTRL_BBSMMIX_Type *)BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE)
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base addresses */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_ADDRS         { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1_BASE }
  /** Array initializer of BBSM_BLK_CTRL_BBSMMIX peripheral base pointers */
  #define BBSM_BLK_CTRL_BBSMMIX_BASE_PTRS          { BBSM__BLK_CTRL_BBSMMIX_BBSMMIX1 }
#endif

/* BBSM_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BBSM__TCU_BBSMMIX base address */
  #define BBSM__TCU_BBSMMIX_BASE                   (0x544E0000u)
  /** Peripheral BBSM__TCU_BBSMMIX base address */
  #define BBSM__TCU_BBSMMIX_BASE_NS                (0x444E0000u)
  /** Peripheral BBSM__TCU_BBSMMIX base pointer */
  #define BBSM__TCU_BBSMMIX                        ((BBSM_TCU_Type *)BBSM__TCU_BBSMMIX_BASE)
  /** Peripheral BBSM__TCU_BBSMMIX base pointer */
  #define BBSM__TCU_BBSMMIX_NS                     ((BBSM_TCU_Type *)BBSM__TCU_BBSMMIX_BASE_NS)
  /** Array initializer of BBSM_TCU peripheral base addresses */
  #define BBSM_TCU_BASE_ADDRS                      { BBSM__TCU_BBSMMIX_BASE }
  /** Array initializer of BBSM_TCU peripheral base pointers */
  #define BBSM_TCU_BASE_PTRS                       { BBSM__TCU_BBSMMIX }
  /** Array initializer of BBSM_TCU peripheral base addresses */
  #define BBSM_TCU_BASE_ADDRS_NS                   { BBSM__TCU_BBSMMIX_BASE_NS }
  /** Array initializer of BBSM_TCU peripheral base pointers */
  #define BBSM_TCU_BASE_PTRS_NS                    { BBSM__TCU_BBSMMIX_NS }
#else
  /** Peripheral BBSM__TCU_BBSMMIX base address */
  #define BBSM__TCU_BBSMMIX_BASE                   (0x444E0000u)
  /** Peripheral BBSM__TCU_BBSMMIX base pointer */
  #define BBSM__TCU_BBSMMIX                        ((BBSM_TCU_Type *)BBSM__TCU_BBSMMIX_BASE)
  /** Array initializer of BBSM_TCU peripheral base addresses */
  #define BBSM_TCU_BASE_ADDRS                      { BBSM__TCU_BBSMMIX_BASE }
  /** Array initializer of BBSM_TCU peripheral base pointers */
  #define BBSM_TCU_BASE_PTRS                       { BBSM__TCU_BBSMMIX }
#endif

/* BLK_CTRL_CAMERAMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BLK_CTRL_CAMERAMIX base address */
  #define BLK_CTRL_CAMERAMIX_BASE                  (0x5AC10000u)
  /** Peripheral BLK_CTRL_CAMERAMIX base address */
  #define BLK_CTRL_CAMERAMIX_BASE_NS               (0x4AC10000u)
  /** Peripheral BLK_CTRL_CAMERAMIX base pointer */
  #define BLK_CTRL_CAMERAMIX                       ((BLK_CTRL_CAMERAMIX_Type *)BLK_CTRL_CAMERAMIX_BASE)
  /** Peripheral BLK_CTRL_CAMERAMIX base pointer */
  #define BLK_CTRL_CAMERAMIX_NS                    ((BLK_CTRL_CAMERAMIX_Type *)BLK_CTRL_CAMERAMIX_BASE_NS)
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base addresses */
  #define BLK_CTRL_CAMERAMIX_BASE_ADDRS            { BLK_CTRL_CAMERAMIX_BASE }
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base pointers */
  #define BLK_CTRL_CAMERAMIX_BASE_PTRS             { BLK_CTRL_CAMERAMIX }
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base addresses */
  #define BLK_CTRL_CAMERAMIX_BASE_ADDRS_NS         { BLK_CTRL_CAMERAMIX_BASE_NS }
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base pointers */
  #define BLK_CTRL_CAMERAMIX_BASE_PTRS_NS          { BLK_CTRL_CAMERAMIX_NS }
#else
  /** Peripheral BLK_CTRL_CAMERAMIX base address */
  #define BLK_CTRL_CAMERAMIX_BASE                  (0x4AC10000u)
  /** Peripheral BLK_CTRL_CAMERAMIX base pointer */
  #define BLK_CTRL_CAMERAMIX                       ((BLK_CTRL_CAMERAMIX_Type *)BLK_CTRL_CAMERAMIX_BASE)
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base addresses */
  #define BLK_CTRL_CAMERAMIX_BASE_ADDRS            { BLK_CTRL_CAMERAMIX_BASE }
  /** Array initializer of BLK_CTRL_CAMERAMIX peripheral base pointers */
  #define BLK_CTRL_CAMERAMIX_BASE_PTRS             { BLK_CTRL_CAMERAMIX }
#endif

/* BLK_CTRL_NETCMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral BLK_CTRL_NETCMIX base address */
  #define BLK_CTRL_NETCMIX_BASE                    (0x5C810000u)
  /** Peripheral BLK_CTRL_NETCMIX base address */
  #define BLK_CTRL_NETCMIX_BASE_NS                 (0x4C810000u)
  /** Peripheral BLK_CTRL_NETCMIX base pointer */
  #define BLK_CTRL_NETCMIX                         ((BLK_CTRL_NETCMIX_Type *)BLK_CTRL_NETCMIX_BASE)
  /** Peripheral BLK_CTRL_NETCMIX base pointer */
  #define BLK_CTRL_NETCMIX_NS                      ((BLK_CTRL_NETCMIX_Type *)BLK_CTRL_NETCMIX_BASE_NS)
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base addresses */
  #define BLK_CTRL_NETCMIX_BASE_ADDRS              { BLK_CTRL_NETCMIX_BASE }
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base pointers */
  #define BLK_CTRL_NETCMIX_BASE_PTRS               { BLK_CTRL_NETCMIX }
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base addresses */
  #define BLK_CTRL_NETCMIX_BASE_ADDRS_NS           { BLK_CTRL_NETCMIX_BASE_NS }
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base pointers */
  #define BLK_CTRL_NETCMIX_BASE_PTRS_NS            { BLK_CTRL_NETCMIX_NS }
#else
  /** Peripheral BLK_CTRL_NETCMIX base address */
  #define BLK_CTRL_NETCMIX_BASE                    (0x4C810000u)
  /** Peripheral BLK_CTRL_NETCMIX base pointer */
  #define BLK_CTRL_NETCMIX                         ((BLK_CTRL_NETCMIX_Type *)BLK_CTRL_NETCMIX_BASE)
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base addresses */
  #define BLK_CTRL_NETCMIX_BASE_ADDRS              { BLK_CTRL_NETCMIX_BASE }
  /** Array initializer of BLK_CTRL_NETCMIX peripheral base pointers */
  #define BLK_CTRL_NETCMIX_BASE_PTRS               { BLK_CTRL_NETCMIX }
#endif

/* BLK_CTRL_WAKEUPMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base address */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX_BASE          (0x52420000u)
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base address */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX_BASE_NS       (0x42420000u)
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base pointer */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX               ((BLK_CTRL_WAKEUPMIX_Type *)WAKEUP__BLK_CTRL_WAKEUPMIX_BASE)
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base pointer */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX_NS            ((BLK_CTRL_WAKEUPMIX_Type *)WAKEUP__BLK_CTRL_WAKEUPMIX_BASE_NS)
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base addresses */
  #define BLK_CTRL_WAKEUPMIX_BASE_ADDRS            { WAKEUP__BLK_CTRL_WAKEUPMIX_BASE }
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base pointers */
  #define BLK_CTRL_WAKEUPMIX_BASE_PTRS             { WAKEUP__BLK_CTRL_WAKEUPMIX }
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base addresses */
  #define BLK_CTRL_WAKEUPMIX_BASE_ADDRS_NS         { WAKEUP__BLK_CTRL_WAKEUPMIX_BASE_NS }
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base pointers */
  #define BLK_CTRL_WAKEUPMIX_BASE_PTRS_NS          { WAKEUP__BLK_CTRL_WAKEUPMIX_NS }
#else
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base address */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX_BASE          (0x42420000u)
  /** Peripheral WAKEUP__BLK_CTRL_WAKEUPMIX base pointer */
  #define WAKEUP__BLK_CTRL_WAKEUPMIX               ((BLK_CTRL_WAKEUPMIX_Type *)WAKEUP__BLK_CTRL_WAKEUPMIX_BASE)
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base addresses */
  #define BLK_CTRL_WAKEUPMIX_BASE_ADDRS            { WAKEUP__BLK_CTRL_WAKEUPMIX_BASE }
  /** Array initializer of BLK_CTRL_WAKEUPMIX peripheral base pointers */
  #define BLK_CTRL_WAKEUPMIX_BASE_PTRS             { WAKEUP__BLK_CTRL_WAKEUPMIX }
#endif

/* BNR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__BNR base address */
  #define CAMERA__ISP__BNR_BASE                    (0x5AE00800u)
  /** Peripheral CAMERA__ISP__BNR base address */
  #define CAMERA__ISP__BNR_BASE_NS                 (0x4AE00800u)
  /** Peripheral CAMERA__ISP__BNR base pointer */
  #define CAMERA__ISP__BNR                         ((BNR_Type *)CAMERA__ISP__BNR_BASE)
  /** Peripheral CAMERA__ISP__BNR base pointer */
  #define CAMERA__ISP__BNR_NS                      ((BNR_Type *)CAMERA__ISP__BNR_BASE_NS)
  /** Array initializer of BNR peripheral base addresses */
  #define BNR_BASE_ADDRS                           { CAMERA__ISP__BNR_BASE }
  /** Array initializer of BNR peripheral base pointers */
  #define BNR_BASE_PTRS                            { CAMERA__ISP__BNR }
  /** Array initializer of BNR peripheral base addresses */
  #define BNR_BASE_ADDRS_NS                        { CAMERA__ISP__BNR_BASE_NS }
  /** Array initializer of BNR peripheral base pointers */
  #define BNR_BASE_PTRS_NS                         { CAMERA__ISP__BNR_NS }
#else
  /** Peripheral CAMERA__ISP__BNR base address */
  #define CAMERA__ISP__BNR_BASE                    (0x4AE00800u)
  /** Peripheral CAMERA__ISP__BNR base pointer */
  #define CAMERA__ISP__BNR                         ((BNR_Type *)CAMERA__ISP__BNR_BASE)
  /** Array initializer of BNR peripheral base addresses */
  #define BNR_BASE_ADDRS                           { CAMERA__ISP__BNR_BASE }
  /** Array initializer of BNR peripheral base pointers */
  #define BNR_BASE_PTRS                            { CAMERA__ISP__BNR }
#endif

/* CACHE_ECC_MCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE (0x54401000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE_NS (0x44401000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM ((CACHE_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_NS ((CACHE_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE_NS)
  /** Array initializer of CACHE_ECC_MCM peripheral base addresses */
  #define CACHE_ECC_MCM_BASE_ADDRS                 { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE }
  /** Array initializer of CACHE_ECC_MCM peripheral base pointers */
  #define CACHE_ECC_MCM_BASE_PTRS                  { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM }
  /** Array initializer of CACHE_ECC_MCM peripheral base addresses */
  #define CACHE_ECC_MCM_BASE_ADDRS_NS              { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE_NS }
  /** Array initializer of CACHE_ECC_MCM peripheral base pointers */
  #define CACHE_ECC_MCM_BASE_PTRS_NS               { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_NS }
#else
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE (0x44401000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM ((CACHE_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE)
  /** Array initializer of CACHE_ECC_MCM peripheral base addresses */
  #define CACHE_ECC_MCM_BASE_ADDRS                 { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM_BASE }
  /** Array initializer of CACHE_ECC_MCM peripheral base pointers */
  #define CACHE_ECC_MCM_BASE_PTRS                  { AON__M33_CACHE_CTRL_ECC0__CM33_CACHE_ECC_MCM }
#endif

/* CAMERA_DSI_CAMID_CSR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__DSI_CAMID_CSR base address */
  #define CAMERA__DSI_CAMID_CSR_BASE               (0x5ADE0000u)
  /** Peripheral CAMERA__DSI_CAMID_CSR base address */
  #define CAMERA__DSI_CAMID_CSR_BASE_NS            (0x4ADE0000u)
  /** Peripheral CAMERA__DSI_CAMID_CSR base pointer */
  #define CAMERA__DSI_CAMID_CSR                    ((CAMERA_DSI_CAMID_CSR_Type *)CAMERA__DSI_CAMID_CSR_BASE)
  /** Peripheral CAMERA__DSI_CAMID_CSR base pointer */
  #define CAMERA__DSI_CAMID_CSR_NS                 ((CAMERA_DSI_CAMID_CSR_Type *)CAMERA__DSI_CAMID_CSR_BASE_NS)
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base addresses */
  #define CAMERA_DSI_CAMID_CSR_BASE_ADDRS          { CAMERA__DSI_CAMID_CSR_BASE }
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base pointers */
  #define CAMERA_DSI_CAMID_CSR_BASE_PTRS           { CAMERA__DSI_CAMID_CSR }
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base addresses */
  #define CAMERA_DSI_CAMID_CSR_BASE_ADDRS_NS       { CAMERA__DSI_CAMID_CSR_BASE_NS }
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base pointers */
  #define CAMERA_DSI_CAMID_CSR_BASE_PTRS_NS        { CAMERA__DSI_CAMID_CSR_NS }
#else
  /** Peripheral CAMERA__DSI_CAMID_CSR base address */
  #define CAMERA__DSI_CAMID_CSR_BASE               (0x4ADE0000u)
  /** Peripheral CAMERA__DSI_CAMID_CSR base pointer */
  #define CAMERA__DSI_CAMID_CSR                    ((CAMERA_DSI_CAMID_CSR_Type *)CAMERA__DSI_CAMID_CSR_BASE)
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base addresses */
  #define CAMERA_DSI_CAMID_CSR_BASE_ADDRS          { CAMERA__DSI_CAMID_CSR_BASE }
  /** Array initializer of CAMERA_DSI_CAMID_CSR peripheral base pointers */
  #define CAMERA_DSI_CAMID_CSR_BASE_PTRS           { CAMERA__DSI_CAMID_CSR }
#endif

/* CAMERA_DSI_MASTER_CSR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__DSI_MASTER_CSR base address */
  #define CAMERA__DSI_MASTER_CSR_BASE              (0x5AD10000u)
  /** Peripheral CAMERA__DSI_MASTER_CSR base address */
  #define CAMERA__DSI_MASTER_CSR_BASE_NS           (0x4AD10000u)
  /** Peripheral CAMERA__DSI_MASTER_CSR base pointer */
  #define CAMERA__DSI_MASTER_CSR                   ((CAMERA_DSI_MASTER_CSR_Type *)CAMERA__DSI_MASTER_CSR_BASE)
  /** Peripheral CAMERA__DSI_MASTER_CSR base pointer */
  #define CAMERA__DSI_MASTER_CSR_NS                ((CAMERA_DSI_MASTER_CSR_Type *)CAMERA__DSI_MASTER_CSR_BASE_NS)
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base addresses */
  #define CAMERA_DSI_MASTER_CSR_BASE_ADDRS         { CAMERA__DSI_MASTER_CSR_BASE }
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base pointers */
  #define CAMERA_DSI_MASTER_CSR_BASE_PTRS          { CAMERA__DSI_MASTER_CSR }
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base addresses */
  #define CAMERA_DSI_MASTER_CSR_BASE_ADDRS_NS      { CAMERA__DSI_MASTER_CSR_BASE_NS }
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base pointers */
  #define CAMERA_DSI_MASTER_CSR_BASE_PTRS_NS       { CAMERA__DSI_MASTER_CSR_NS }
#else
  /** Peripheral CAMERA__DSI_MASTER_CSR base address */
  #define CAMERA__DSI_MASTER_CSR_BASE              (0x4AD10000u)
  /** Peripheral CAMERA__DSI_MASTER_CSR base pointer */
  #define CAMERA__DSI_MASTER_CSR                   ((CAMERA_DSI_MASTER_CSR_Type *)CAMERA__DSI_MASTER_CSR_BASE)
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base addresses */
  #define CAMERA_DSI_MASTER_CSR_BASE_ADDRS         { CAMERA__DSI_MASTER_CSR_BASE }
  /** Array initializer of CAMERA_DSI_MASTER_CSR peripheral base pointers */
  #define CAMERA_DSI_MASTER_CSR_BASE_PTRS          { CAMERA__DSI_MASTER_CSR }
#endif

/* CAMERA_DSI_OR_CSI_PHY_CSR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base address */
  #define CAMERA__DSI_OR_CSI_PHY_CSR_BASE          (0x5AD20000u)
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base address */
  #define CAMERA__DSI_OR_CSI_PHY_CSR_BASE_NS       (0x4AD20000u)
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base pointer */
  #define CAMERA__DSI_OR_CSI_PHY_CSR               ((CAMERA_DSI_OR_CSI_PHY_CSR_Type *)CAMERA__DSI_OR_CSI_PHY_CSR_BASE)
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base pointer */
  #define CAMERA__DSI_OR_CSI_PHY_CSR_NS            ((CAMERA_DSI_OR_CSI_PHY_CSR_Type *)CAMERA__DSI_OR_CSI_PHY_CSR_BASE_NS)
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base addresses */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_ADDRS     { CAMERA__DSI_OR_CSI_PHY_CSR_BASE }
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base pointers */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_PTRS      { CAMERA__DSI_OR_CSI_PHY_CSR }
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base addresses */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_ADDRS_NS  { CAMERA__DSI_OR_CSI_PHY_CSR_BASE_NS }
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base pointers */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_PTRS_NS   { CAMERA__DSI_OR_CSI_PHY_CSR_NS }
#else
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base address */
  #define CAMERA__DSI_OR_CSI_PHY_CSR_BASE          (0x4AD20000u)
  /** Peripheral CAMERA__DSI_OR_CSI_PHY_CSR base pointer */
  #define CAMERA__DSI_OR_CSI_PHY_CSR               ((CAMERA_DSI_OR_CSI_PHY_CSR_Type *)CAMERA__DSI_OR_CSI_PHY_CSR_BASE)
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base addresses */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_ADDRS     { CAMERA__DSI_OR_CSI_PHY_CSR_BASE }
  /** Array initializer of CAMERA_DSI_OR_CSI_PHY_CSR peripheral base pointers */
  #define CAMERA_DSI_OR_CSI_PHY_CSR_BASE_PTRS      { CAMERA__DSI_OR_CSI_PHY_CSR }
#endif

/* CAMERA_DSI_STREAM_CSR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__DSI_STREAM_CSR base address */
  #define CAMERA__DSI_STREAM_CSR_BASE              (0x5AD00000u)
  /** Peripheral CAMERA__DSI_STREAM_CSR base address */
  #define CAMERA__DSI_STREAM_CSR_BASE_NS           (0x4AD00000u)
  /** Peripheral CAMERA__DSI_STREAM_CSR base pointer */
  #define CAMERA__DSI_STREAM_CSR                   ((CAMERA_DSI_STREAM_CSR_Type *)CAMERA__DSI_STREAM_CSR_BASE)
  /** Peripheral CAMERA__DSI_STREAM_CSR base pointer */
  #define CAMERA__DSI_STREAM_CSR_NS                ((CAMERA_DSI_STREAM_CSR_Type *)CAMERA__DSI_STREAM_CSR_BASE_NS)
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base addresses */
  #define CAMERA_DSI_STREAM_CSR_BASE_ADDRS         { CAMERA__DSI_STREAM_CSR_BASE }
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base pointers */
  #define CAMERA_DSI_STREAM_CSR_BASE_PTRS          { CAMERA__DSI_STREAM_CSR }
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base addresses */
  #define CAMERA_DSI_STREAM_CSR_BASE_ADDRS_NS      { CAMERA__DSI_STREAM_CSR_BASE_NS }
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base pointers */
  #define CAMERA_DSI_STREAM_CSR_BASE_PTRS_NS       { CAMERA__DSI_STREAM_CSR_NS }
#else
  /** Peripheral CAMERA__DSI_STREAM_CSR base address */
  #define CAMERA__DSI_STREAM_CSR_BASE              (0x4AD00000u)
  /** Peripheral CAMERA__DSI_STREAM_CSR base pointer */
  #define CAMERA__DSI_STREAM_CSR                   ((CAMERA_DSI_STREAM_CSR_Type *)CAMERA__DSI_STREAM_CSR_BASE)
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base addresses */
  #define CAMERA_DSI_STREAM_CSR_BASE_ADDRS         { CAMERA__DSI_STREAM_CSR_BASE }
  /** Array initializer of CAMERA_DSI_STREAM_CSR peripheral base pointers */
  #define CAMERA_DSI_STREAM_CSR_BASE_PTRS          { CAMERA__DSI_STREAM_CSR }
#endif

/* CAMERA_MIPI_CSI2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MIPI_CSI2 base address */
  #define MIPI_CSI2_BASE                           (0x5AD30000u)
  /** Peripheral MIPI_CSI2 base address */
  #define MIPI_CSI2_BASE_NS                        (0x4AD30000u)
  /** Peripheral MIPI_CSI2 base pointer */
  #define MIPI_CSI2                                ((CAMERA_MIPI_CSI2_Type *)MIPI_CSI2_BASE)
  /** Peripheral MIPI_CSI2 base pointer */
  #define MIPI_CSI2_NS                             ((CAMERA_MIPI_CSI2_Type *)MIPI_CSI2_BASE_NS)
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base addresses */
  #define CAMERA_MIPI_CSI2_BASE_ADDRS              { MIPI_CSI2_BASE }
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base pointers */
  #define CAMERA_MIPI_CSI2_BASE_PTRS               { MIPI_CSI2 }
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base addresses */
  #define CAMERA_MIPI_CSI2_BASE_ADDRS_NS           { MIPI_CSI2_BASE_NS }
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base pointers */
  #define CAMERA_MIPI_CSI2_BASE_PTRS_NS            { MIPI_CSI2_NS }
#else
  /** Peripheral MIPI_CSI2 base address */
  #define MIPI_CSI2_BASE                           (0x4AD30000u)
  /** Peripheral MIPI_CSI2 base pointer */
  #define MIPI_CSI2                                ((CAMERA_MIPI_CSI2_Type *)MIPI_CSI2_BASE)
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base addresses */
  #define CAMERA_MIPI_CSI2_BASE_ADDRS              { MIPI_CSI2_BASE }
  /** Array initializer of CAMERA_MIPI_CSI2 peripheral base pointers */
  #define CAMERA_MIPI_CSI2_BASE_PTRS               { MIPI_CSI2 }
#endif

/* CAMERA_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__TCU base address */
  #define CAMERA__TCU_BASE                         (0x5AC00000u)
  /** Peripheral CAMERA__TCU base address */
  #define CAMERA__TCU_BASE_NS                      (0x4AC00000u)
  /** Peripheral CAMERA__TCU base pointer */
  #define CAMERA__TCU                              ((CAMERA_TCU_Type *)CAMERA__TCU_BASE)
  /** Peripheral CAMERA__TCU base pointer */
  #define CAMERA__TCU_NS                           ((CAMERA_TCU_Type *)CAMERA__TCU_BASE_NS)
  /** Array initializer of CAMERA_TCU peripheral base addresses */
  #define CAMERA_TCU_BASE_ADDRS                    { CAMERA__TCU_BASE }
  /** Array initializer of CAMERA_TCU peripheral base pointers */
  #define CAMERA_TCU_BASE_PTRS                     { CAMERA__TCU }
  /** Array initializer of CAMERA_TCU peripheral base addresses */
  #define CAMERA_TCU_BASE_ADDRS_NS                 { CAMERA__TCU_BASE_NS }
  /** Array initializer of CAMERA_TCU peripheral base pointers */
  #define CAMERA_TCU_BASE_PTRS_NS                  { CAMERA__TCU_NS }
#else
  /** Peripheral CAMERA__TCU base address */
  #define CAMERA__TCU_BASE                         (0x4AC00000u)
  /** Peripheral CAMERA__TCU base pointer */
  #define CAMERA__TCU                              ((CAMERA_TCU_Type *)CAMERA__TCU_BASE)
  /** Array initializer of CAMERA_TCU peripheral base addresses */
  #define CAMERA_TCU_BASE_ADDRS                    { CAMERA__TCU_BASE }
  /** Array initializer of CAMERA_TCU peripheral base pointers */
  #define CAMERA_TCU_BASE_PTRS                     { CAMERA__TCU }
#endif

/* CAN - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAN1 base address */
  #define CAN1_BASE                                (0x543A0000u)
  /** Peripheral CAN1 base address */
  #define CAN1_BASE_NS                             (0x443A0000u)
  /** Peripheral CAN1 base pointer */
  #define CAN1                                     ((CAN_Type *)CAN1_BASE)
  /** Peripheral CAN1 base pointer */
  #define CAN1_NS                                  ((CAN_Type *)CAN1_BASE_NS)
  /** Peripheral CAN2 base address */
  #define CAN2_BASE                                (0x525B0000u)
  /** Peripheral CAN2 base address */
  #define CAN2_BASE_NS                             (0x425B0000u)
  /** Peripheral CAN2 base pointer */
  #define CAN2                                     ((CAN_Type *)CAN2_BASE)
  /** Peripheral CAN2 base pointer */
  #define CAN2_NS                                  ((CAN_Type *)CAN2_BASE_NS)
  /** Peripheral CAN3 base address */
  #define CAN3_BASE                                (0x52600000u)
  /** Peripheral CAN3 base address */
  #define CAN3_BASE_NS                             (0x42600000u)
  /** Peripheral CAN3 base pointer */
  #define CAN3                                     ((CAN_Type *)CAN3_BASE)
  /** Peripheral CAN3 base pointer */
  #define CAN3_NS                                  ((CAN_Type *)CAN3_BASE_NS)
  /** Peripheral CAN4 base address */
  #define CAN4_BASE                                (0x527C0000u)
  /** Peripheral CAN4 base address */
  #define CAN4_BASE_NS                             (0x427C0000u)
  /** Peripheral CAN4 base pointer */
  #define CAN4                                     ((CAN_Type *)CAN4_BASE)
  /** Peripheral CAN4 base pointer */
  #define CAN4_NS                                  ((CAN_Type *)CAN4_BASE_NS)
  /** Peripheral CAN5 base address */
  #define CAN5_BASE                                (0x527D0000u)
  /** Peripheral CAN5 base address */
  #define CAN5_BASE_NS                             (0x427D0000u)
  /** Peripheral CAN5 base pointer */
  #define CAN5                                     ((CAN_Type *)CAN5_BASE)
  /** Peripheral CAN5 base pointer */
  #define CAN5_NS                                  ((CAN_Type *)CAN5_BASE_NS)
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS                           { 0u, CAN1_BASE, CAN2_BASE, CAN3_BASE, CAN4_BASE, CAN5_BASE }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS                            { (CAN_Type *)0u, CAN1, CAN2, CAN3, CAN4, CAN5 }
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS_NS                        { 0u, CAN1_BASE_NS, CAN2_BASE_NS, CAN3_BASE_NS, CAN4_BASE_NS, CAN5_BASE_NS }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS_NS                         { (CAN_Type *)0u, CAN1_NS, CAN2_NS, CAN3_NS, CAN4_NS, CAN5_NS }
#else
  /** Peripheral CAN1 base address */
  #define CAN1_BASE                                (0x443A0000u)
  /** Peripheral CAN1 base pointer */
  #define CAN1                                     ((CAN_Type *)CAN1_BASE)
  /** Peripheral CAN2 base address */
  #define CAN2_BASE                                (0x425B0000u)
  /** Peripheral CAN2 base pointer */
  #define CAN2                                     ((CAN_Type *)CAN2_BASE)
  /** Peripheral CAN3 base address */
  #define CAN3_BASE                                (0x42600000u)
  /** Peripheral CAN3 base pointer */
  #define CAN3                                     ((CAN_Type *)CAN3_BASE)
  /** Peripheral CAN4 base address */
  #define CAN4_BASE                                (0x427C0000u)
  /** Peripheral CAN4 base pointer */
  #define CAN4                                     ((CAN_Type *)CAN4_BASE)
  /** Peripheral CAN5 base address */
  #define CAN5_BASE                                (0x427D0000u)
  /** Peripheral CAN5 base pointer */
  #define CAN5                                     ((CAN_Type *)CAN5_BASE)
  /** Array initializer of CAN peripheral base addresses */
  #define CAN_BASE_ADDRS                           { 0u, CAN1_BASE, CAN2_BASE, CAN3_BASE, CAN4_BASE, CAN5_BASE }
  /** Array initializer of CAN peripheral base pointers */
  #define CAN_BASE_PTRS                            { (CAN_Type *)0u, CAN1, CAN2, CAN3, CAN4, CAN5 }
#endif
/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }
#define CAN_Tx_Warning_IRQS                      { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }
#define CAN_Wake_Up_IRQS                         { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }
#define CAN_Error_IRQS                           { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }
#define CAN_Bus_Off_IRQS                         { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }
#define CAN_ORed_Message_buffer_IRQS             { NotAvail_IRQn, CAN1_IRQn, CAN2_IRQn, CAN3_IRQn, CAN4_IRQn, CAN5_IRQn }

/* CAS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__CAS base address */
  #define CAMERA__ISP__CAS_BASE                    (0x5AE01500u)
  /** Peripheral CAMERA__ISP__CAS base address */
  #define CAMERA__ISP__CAS_BASE_NS                 (0x4AE01500u)
  /** Peripheral CAMERA__ISP__CAS base pointer */
  #define CAMERA__ISP__CAS                         ((CAS_Type *)CAMERA__ISP__CAS_BASE)
  /** Peripheral CAMERA__ISP__CAS base pointer */
  #define CAMERA__ISP__CAS_NS                      ((CAS_Type *)CAMERA__ISP__CAS_BASE_NS)
  /** Array initializer of CAS peripheral base addresses */
  #define CAS_BASE_ADDRS                           { CAMERA__ISP__CAS_BASE }
  /** Array initializer of CAS peripheral base pointers */
  #define CAS_BASE_PTRS                            { CAMERA__ISP__CAS }
  /** Array initializer of CAS peripheral base addresses */
  #define CAS_BASE_ADDRS_NS                        { CAMERA__ISP__CAS_BASE_NS }
  /** Array initializer of CAS peripheral base pointers */
  #define CAS_BASE_PTRS_NS                         { CAMERA__ISP__CAS_NS }
#else
  /** Peripheral CAMERA__ISP__CAS base address */
  #define CAMERA__ISP__CAS_BASE                    (0x4AE01500u)
  /** Peripheral CAMERA__ISP__CAS base pointer */
  #define CAMERA__ISP__CAS                         ((CAS_Type *)CAMERA__ISP__CAS_BASE)
  /** Array initializer of CAS peripheral base addresses */
  #define CAS_BASE_ADDRS                           { CAMERA__ISP__CAS_BASE }
  /** Array initializer of CAS peripheral base pointers */
  #define CAS_BASE_PTRS                            { CAMERA__ISP__CAS }
#endif

/* CCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCM_CTRL base address */
  #define CCM_CTRL_BASE                            (0x54450000u)
  /** Peripheral CCM_CTRL base address */
  #define CCM_CTRL_BASE_NS                         (0x44450000u)
  /** Peripheral CCM_CTRL base pointer */
  #define CCM_CTRL                                 ((CCM_Type *)CCM_CTRL_BASE)
  /** Peripheral CCM_CTRL base pointer */
  #define CCM_CTRL_NS                              ((CCM_Type *)CCM_CTRL_BASE_NS)
  /** Array initializer of CCM peripheral base addresses */
  #define CCM_BASE_ADDRS                           { CCM_CTRL_BASE }
  /** Array initializer of CCM peripheral base pointers */
  #define CCM_BASE_PTRS                            { CCM_CTRL }
  /** Array initializer of CCM peripheral base addresses */
  #define CCM_BASE_ADDRS_NS                        { CCM_CTRL_BASE_NS }
  /** Array initializer of CCM peripheral base pointers */
  #define CCM_BASE_PTRS_NS                         { CCM_CTRL_NS }
#else
  /** Peripheral CCM_CTRL base address */
  #define CCM_CTRL_BASE                            (0x44450000u)
  /** Peripheral CCM_CTRL base pointer */
  #define CCM_CTRL                                 ((CCM_Type *)CCM_CTRL_BASE)
  /** Array initializer of CCM peripheral base addresses */
  #define CCM_BASE_ADDRS                           { CCM_CTRL_BASE }
  /** Array initializer of CCM peripheral base pointers */
  #define CCM_BASE_PTRS                            { CCM_CTRL }
#endif

/* CCMSRCGPC_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCMSRCGPC__TCU base address */
  #define CCMSRCGPC__TCU_BASE                      (0x544D0000u)
  /** Peripheral CCMSRCGPC__TCU base address */
  #define CCMSRCGPC__TCU_BASE_NS                   (0x444D0000u)
  /** Peripheral CCMSRCGPC__TCU base pointer */
  #define CCMSRCGPC__TCU                           ((CCMSRCGPC_TCU_Type *)CCMSRCGPC__TCU_BASE)
  /** Peripheral CCMSRCGPC__TCU base pointer */
  #define CCMSRCGPC__TCU_NS                        ((CCMSRCGPC_TCU_Type *)CCMSRCGPC__TCU_BASE_NS)
  /** Array initializer of CCMSRCGPC_TCU peripheral base addresses */
  #define CCMSRCGPC_TCU_BASE_ADDRS                 { CCMSRCGPC__TCU_BASE }
  /** Array initializer of CCMSRCGPC_TCU peripheral base pointers */
  #define CCMSRCGPC_TCU_BASE_PTRS                  { CCMSRCGPC__TCU }
  /** Array initializer of CCMSRCGPC_TCU peripheral base addresses */
  #define CCMSRCGPC_TCU_BASE_ADDRS_NS              { CCMSRCGPC__TCU_BASE_NS }
  /** Array initializer of CCMSRCGPC_TCU peripheral base pointers */
  #define CCMSRCGPC_TCU_BASE_PTRS_NS               { CCMSRCGPC__TCU_NS }
#else
  /** Peripheral CCMSRCGPC__TCU base address */
  #define CCMSRCGPC__TCU_BASE                      (0x444D0000u)
  /** Peripheral CCMSRCGPC__TCU base pointer */
  #define CCMSRCGPC__TCU                           ((CCMSRCGPC_TCU_Type *)CCMSRCGPC__TCU_BASE)
  /** Array initializer of CCMSRCGPC_TCU peripheral base addresses */
  #define CCMSRCGPC_TCU_BASE_ADDRS                 { CCMSRCGPC__TCU_BASE }
  /** Array initializer of CCMSRCGPC_TCU peripheral base pointers */
  #define CCMSRCGPC_TCU_BASE_PTRS                  { CCMSRCGPC__TCU }
#endif

/* CCONVMED - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__CCONVMED base address */
  #define CAMERA__ISP__CCONVMED_BASE               (0x5AE014C0u)
  /** Peripheral CAMERA__ISP__CCONVMED base address */
  #define CAMERA__ISP__CCONVMED_BASE_NS            (0x4AE014C0u)
  /** Peripheral CAMERA__ISP__CCONVMED base pointer */
  #define CAMERA__ISP__CCONVMED                    ((CCONVMED_Type *)CAMERA__ISP__CCONVMED_BASE)
  /** Peripheral CAMERA__ISP__CCONVMED base pointer */
  #define CAMERA__ISP__CCONVMED_NS                 ((CCONVMED_Type *)CAMERA__ISP__CCONVMED_BASE_NS)
  /** Array initializer of CCONVMED peripheral base addresses */
  #define CCONVMED_BASE_ADDRS                      { CAMERA__ISP__CCONVMED_BASE }
  /** Array initializer of CCONVMED peripheral base pointers */
  #define CCONVMED_BASE_PTRS                       { CAMERA__ISP__CCONVMED }
  /** Array initializer of CCONVMED peripheral base addresses */
  #define CCONVMED_BASE_ADDRS_NS                   { CAMERA__ISP__CCONVMED_BASE_NS }
  /** Array initializer of CCONVMED peripheral base pointers */
  #define CCONVMED_BASE_PTRS_NS                    { CAMERA__ISP__CCONVMED_NS }
#else
  /** Peripheral CAMERA__ISP__CCONVMED base address */
  #define CAMERA__ISP__CCONVMED_BASE               (0x4AE014C0u)
  /** Peripheral CAMERA__ISP__CCONVMED base pointer */
  #define CAMERA__ISP__CCONVMED                    ((CCONVMED_Type *)CAMERA__ISP__CCONVMED_BASE)
  /** Array initializer of CCONVMED peripheral base addresses */
  #define CCONVMED_BASE_ADDRS                      { CAMERA__ISP__CCONVMED_BASE }
  /** Array initializer of CCONVMED peripheral base pointers */
  #define CCONVMED_BASE_PTRS                       { CAMERA__ISP__CCONVMED }
#endif

/* CMU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG_CMU0 base address */
  #define ANALOG_CMU0_BASE                         (0x54670000u)
  /** Peripheral ANALOG_CMU0 base address */
  #define ANALOG_CMU0_BASE_NS                      (0x44670000u)
  /** Peripheral ANALOG_CMU0 base pointer */
  #define ANALOG_CMU0                              ((CMU_Type *)ANALOG_CMU0_BASE)
  /** Peripheral ANALOG_CMU0 base pointer */
  #define ANALOG_CMU0_NS                           ((CMU_Type *)ANALOG_CMU0_BASE_NS)
  /** Peripheral DDRC_CMU1 base address */
  #define DDRC_CMU1_BASE                           (0x5E060000u)
  /** Peripheral DDRC_CMU1 base address */
  #define DDRC_CMU1_BASE_NS                        (0x4E060000u)
  /** Peripheral DDRC_CMU1 base pointer */
  #define DDRC_CMU1                                ((CMU_Type *)DDRC_CMU1_BASE)
  /** Peripheral DDRC_CMU1 base pointer */
  #define DDRC_CMU1_NS                             ((CMU_Type *)DDRC_CMU1_BASE_NS)
  /** Peripheral DDRC_CMU2 base address */
  #define DDRC_CMU2_BASE                           (0x5E070000u)
  /** Peripheral DDRC_CMU2 base address */
  #define DDRC_CMU2_BASE_NS                        (0x4E070000u)
  /** Peripheral DDRC_CMU2 base pointer */
  #define DDRC_CMU2                                ((CMU_Type *)DDRC_CMU2_BASE)
  /** Peripheral DDRC_CMU2 base pointer */
  #define DDRC_CMU2_NS                             ((CMU_Type *)DDRC_CMU2_BASE_NS)
  /** Peripheral M7_CMUM0 base address */
  #define M7_CMUM0_BASE                            (0x5A080000u)
  /** Peripheral M7_CMUM0 base address */
  #define M7_CMUM0_BASE_NS                         (0x4A080000u)
  /** Peripheral M7_CMUM0 base pointer */
  #define M7_CMUM0                                 ((CMU_Type *)M7_CMUM0_BASE)
  /** Peripheral M7_CMUM0 base pointer */
  #define M7_CMUM0_NS                              ((CMU_Type *)M7_CMUM0_BASE_NS)
  /** Peripheral M7_CMUM1 base address */
  #define M7_CMUM1_BASE                            (0x5A090000u)
  /** Peripheral M7_CMUM1 base address */
  #define M7_CMUM1_BASE_NS                         (0x4A090000u)
  /** Peripheral M7_CMUM1 base pointer */
  #define M7_CMUM1                                 ((CMU_Type *)M7_CMUM1_BASE)
  /** Peripheral M7_CMUM1 base pointer */
  #define M7_CMUM1_NS                              ((CMU_Type *)M7_CMUM1_BASE_NS)
  /** Peripheral WAKEUP_CMU1 base address */
  #define WAKEUP_CMU1_BASE                         (0x52750000u)
  /** Peripheral WAKEUP_CMU1 base address */
  #define WAKEUP_CMU1_BASE_NS                      (0x42750000u)
  /** Peripheral WAKEUP_CMU1 base pointer */
  #define WAKEUP_CMU1                              ((CMU_Type *)WAKEUP_CMU1_BASE)
  /** Peripheral WAKEUP_CMU1 base pointer */
  #define WAKEUP_CMU1_NS                           ((CMU_Type *)WAKEUP_CMU1_BASE_NS)
  /** Peripheral WAKEUP_CMU2 base address */
  #define WAKEUP_CMU2_BASE                         (0x527A0000u)
  /** Peripheral WAKEUP_CMU2 base address */
  #define WAKEUP_CMU2_BASE_NS                      (0x427A0000u)
  /** Peripheral WAKEUP_CMU2 base pointer */
  #define WAKEUP_CMU2                              ((CMU_Type *)WAKEUP_CMU2_BASE)
  /** Peripheral WAKEUP_CMU2 base pointer */
  #define WAKEUP_CMU2_NS                           ((CMU_Type *)WAKEUP_CMU2_BASE_NS)
  /** Array initializer of CMU peripheral base addresses */
  #define CMU_BASE_ADDRS                           { ANALOG_CMU0_BASE, DDRC_CMU1_BASE, DDRC_CMU2_BASE, M7_CMUM0_BASE, M7_CMUM1_BASE, WAKEUP_CMU1_BASE, WAKEUP_CMU2_BASE }
  /** Array initializer of CMU peripheral base pointers */
  #define CMU_BASE_PTRS                            { ANALOG_CMU0, DDRC_CMU1, DDRC_CMU2, M7_CMUM0, M7_CMUM1, WAKEUP_CMU1, WAKEUP_CMU2 }
  /** Array initializer of CMU peripheral base addresses */
  #define CMU_BASE_ADDRS_NS                        { ANALOG_CMU0_BASE_NS, DDRC_CMU1_BASE_NS, DDRC_CMU2_BASE_NS, M7_CMUM0_BASE_NS, M7_CMUM1_BASE_NS, WAKEUP_CMU1_BASE_NS, WAKEUP_CMU2_BASE_NS }
  /** Array initializer of CMU peripheral base pointers */
  #define CMU_BASE_PTRS_NS                         { ANALOG_CMU0_NS, DDRC_CMU1_NS, DDRC_CMU2_NS, M7_CMUM0_NS, M7_CMUM1_NS, WAKEUP_CMU1_NS, WAKEUP_CMU2_NS }
#else
  /** Peripheral ANALOG_CMU0 base address */
  #define ANALOG_CMU0_BASE                         (0x44670000u)
  /** Peripheral ANALOG_CMU0 base pointer */
  #define ANALOG_CMU0                              ((CMU_Type *)ANALOG_CMU0_BASE)
  /** Peripheral DDRC_CMU1 base address */
  #define DDRC_CMU1_BASE                           (0x4E060000u)
  /** Peripheral DDRC_CMU1 base pointer */
  #define DDRC_CMU1                                ((CMU_Type *)DDRC_CMU1_BASE)
  /** Peripheral DDRC_CMU2 base address */
  #define DDRC_CMU2_BASE                           (0x4E070000u)
  /** Peripheral DDRC_CMU2 base pointer */
  #define DDRC_CMU2                                ((CMU_Type *)DDRC_CMU2_BASE)
  /** Peripheral M7_CMUM0 base address */
  #define M7_CMUM0_BASE                            (0x4A080000u)
  /** Peripheral M7_CMUM0 base pointer */
  #define M7_CMUM0                                 ((CMU_Type *)M7_CMUM0_BASE)
  /** Peripheral M7_CMUM1 base address */
  #define M7_CMUM1_BASE                            (0x4A090000u)
  /** Peripheral M7_CMUM1 base pointer */
  #define M7_CMUM1                                 ((CMU_Type *)M7_CMUM1_BASE)
  /** Peripheral WAKEUP_CMU1 base address */
  #define WAKEUP_CMU1_BASE                         (0x42750000u)
  /** Peripheral WAKEUP_CMU1 base pointer */
  #define WAKEUP_CMU1                              ((CMU_Type *)WAKEUP_CMU1_BASE)
  /** Peripheral WAKEUP_CMU2 base address */
  #define WAKEUP_CMU2_BASE                         (0x427A0000u)
  /** Peripheral WAKEUP_CMU2 base pointer */
  #define WAKEUP_CMU2                              ((CMU_Type *)WAKEUP_CMU2_BASE)
  /** Array initializer of CMU peripheral base addresses */
  #define CMU_BASE_ADDRS                           { ANALOG_CMU0_BASE, DDRC_CMU1_BASE, DDRC_CMU2_BASE, M7_CMUM0_BASE, M7_CMUM1_BASE, WAKEUP_CMU1_BASE, WAKEUP_CMU2_BASE }
  /** Array initializer of CMU peripheral base pointers */
  #define CMU_BASE_PTRS                            { ANALOG_CMU0, DDRC_CMU1, DDRC_CMU2, M7_CMUM0, M7_CMUM1, WAKEUP_CMU1, WAKEUP_CMU2 }
#endif

/* COLOR_TEMP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__COLOR_TEMP base address */
  #define CAMERA__ISP__COLOR_TEMP_BASE             (0x5AE00400u)
  /** Peripheral CAMERA__ISP__COLOR_TEMP base address */
  #define CAMERA__ISP__COLOR_TEMP_BASE_NS          (0x4AE00400u)
  /** Peripheral CAMERA__ISP__COLOR_TEMP base pointer */
  #define CAMERA__ISP__COLOR_TEMP                  ((COLOR_TEMP_Type *)CAMERA__ISP__COLOR_TEMP_BASE)
  /** Peripheral CAMERA__ISP__COLOR_TEMP base pointer */
  #define CAMERA__ISP__COLOR_TEMP_NS               ((COLOR_TEMP_Type *)CAMERA__ISP__COLOR_TEMP_BASE_NS)
  /** Array initializer of COLOR_TEMP peripheral base addresses */
  #define COLOR_TEMP_BASE_ADDRS                    { CAMERA__ISP__COLOR_TEMP_BASE }
  /** Array initializer of COLOR_TEMP peripheral base pointers */
  #define COLOR_TEMP_BASE_PTRS                     { CAMERA__ISP__COLOR_TEMP }
  /** Array initializer of COLOR_TEMP peripheral base addresses */
  #define COLOR_TEMP_BASE_ADDRS_NS                 { CAMERA__ISP__COLOR_TEMP_BASE_NS }
  /** Array initializer of COLOR_TEMP peripheral base pointers */
  #define COLOR_TEMP_BASE_PTRS_NS                  { CAMERA__ISP__COLOR_TEMP_NS }
#else
  /** Peripheral CAMERA__ISP__COLOR_TEMP base address */
  #define CAMERA__ISP__COLOR_TEMP_BASE             (0x4AE00400u)
  /** Peripheral CAMERA__ISP__COLOR_TEMP base pointer */
  #define CAMERA__ISP__COLOR_TEMP                  ((COLOR_TEMP_Type *)CAMERA__ISP__COLOR_TEMP_BASE)
  /** Array initializer of COLOR_TEMP peripheral base addresses */
  #define COLOR_TEMP_BASE_ADDRS                    { CAMERA__ISP__COLOR_TEMP_BASE }
  /** Array initializer of COLOR_TEMP peripheral base pointers */
  #define COLOR_TEMP_BASE_PTRS                     { CAMERA__ISP__COLOR_TEMP }
#endif

/* COREMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CORTEX_A55_CORE base address */
  #define CORTEX_A55_CORE_BASE                     (0x54461800u)
  /** Peripheral CORTEX_A55_CORE base address */
  #define CORTEX_A55_CORE_BASE_NS                  (0x44461800u)
  /** Peripheral CORTEX_A55_CORE base pointer */
  #define CORTEX_A55_CORE                          ((COREMIX_Type *)CORTEX_A55_CORE_BASE)
  /** Peripheral CORTEX_A55_CORE base pointer */
  #define CORTEX_A55_CORE_NS                       ((COREMIX_Type *)CORTEX_A55_CORE_BASE_NS)
  /** Array initializer of COREMIX peripheral base addresses */
  #define COREMIX_BASE_ADDRS                       { CORTEX_A55_CORE_BASE }
  /** Array initializer of COREMIX peripheral base pointers */
  #define COREMIX_BASE_PTRS                        { CORTEX_A55_CORE }
  /** Array initializer of COREMIX peripheral base addresses */
  #define COREMIX_BASE_ADDRS_NS                    { CORTEX_A55_CORE_BASE_NS }
  /** Array initializer of COREMIX peripheral base pointers */
  #define COREMIX_BASE_PTRS_NS                     { CORTEX_A55_CORE_NS }
#else
  /** Peripheral CORTEX_A55_CORE base address */
  #define CORTEX_A55_CORE_BASE                     (0x44461800u)
  /** Peripheral CORTEX_A55_CORE base pointer */
  #define CORTEX_A55_CORE                          ((COREMIX_Type *)CORTEX_A55_CORE_BASE)
  /** Array initializer of COREMIX peripheral base addresses */
  #define COREMIX_BASE_ADDRS                       { CORTEX_A55_CORE_BASE }
  /** Array initializer of COREMIX peripheral base pointers */
  #define COREMIX_BASE_PTRS                        { CORTEX_A55_CORE }
#endif

/* CORE_CLK - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPC_CTRL_CM33 base address */
  #define GPC_CTRL_CM33_BASE                       (0x54470000u)
  /** Peripheral GPC_CTRL_CM33 base address */
  #define GPC_CTRL_CM33_BASE_NS                    (0x44470000u)
  /** Peripheral GPC_CTRL_CM33 base pointer */
  #define GPC_CTRL_CM33                            ((CORE_CLK_Type *)GPC_CTRL_CM33_BASE)
  /** Peripheral GPC_CTRL_CM33 base pointer */
  #define GPC_CTRL_CM33_NS                         ((CORE_CLK_Type *)GPC_CTRL_CM33_BASE_NS)
  /** Peripheral GPC_CTRL_CM7 base address */
  #define GPC_CTRL_CM7_BASE                        (0x54470800u)
  /** Peripheral GPC_CTRL_CM7 base address */
  #define GPC_CTRL_CM7_BASE_NS                     (0x44470800u)
  /** Peripheral GPC_CTRL_CM7 base pointer */
  #define GPC_CTRL_CM7                             ((CORE_CLK_Type *)GPC_CTRL_CM7_BASE)
  /** Peripheral GPC_CTRL_CM7 base pointer */
  #define GPC_CTRL_CM7_NS                          ((CORE_CLK_Type *)GPC_CTRL_CM7_BASE_NS)
  /** Array initializer of CORE_CLK peripheral base addresses */
  #define CORE_CLK_BASE_ADDRS                      { GPC_CTRL_CM33_BASE, GPC_CTRL_CM7_BASE }
  /** Array initializer of CORE_CLK peripheral base pointers */
  #define CORE_CLK_BASE_PTRS                       { GPC_CTRL_CM33, GPC_CTRL_CM7 }
  /** Array initializer of CORE_CLK peripheral base addresses */
  #define CORE_CLK_BASE_ADDRS_NS                   { GPC_CTRL_CM33_BASE_NS, GPC_CTRL_CM7_BASE_NS }
  /** Array initializer of CORE_CLK peripheral base pointers */
  #define CORE_CLK_BASE_PTRS_NS                    { GPC_CTRL_CM33_NS, GPC_CTRL_CM7_NS }
#else
  /** Peripheral GPC_CTRL_CM33 base address */
  #define GPC_CTRL_CM33_BASE                       (0x44470000u)
  /** Peripheral GPC_CTRL_CM33 base pointer */
  #define GPC_CTRL_CM33                            ((CORE_CLK_Type *)GPC_CTRL_CM33_BASE)
  /** Peripheral GPC_CTRL_CM7 base address */
  #define GPC_CTRL_CM7_BASE                        (0x44470800u)
  /** Peripheral GPC_CTRL_CM7 base pointer */
  #define GPC_CTRL_CM7                             ((CORE_CLK_Type *)GPC_CTRL_CM7_BASE)
  /** Array initializer of CORE_CLK peripheral base addresses */
  #define CORE_CLK_BASE_ADDRS                      { GPC_CTRL_CM33_BASE, GPC_CTRL_CM7_BASE }
  /** Array initializer of CORE_CLK peripheral base pointers */
  #define CORE_CLK_BASE_PTRS                       { GPC_CTRL_CM33, GPC_CTRL_CM7 }
#endif

/* CORE_PLATFORM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CORTEX_A55_PLATFORM base address */
  #define CORTEX_A55_PLATFORM_BASE                 (0x54463000u)
  /** Peripheral CORTEX_A55_PLATFORM base address */
  #define CORTEX_A55_PLATFORM_BASE_NS              (0x44463000u)
  /** Peripheral CORTEX_A55_PLATFORM base pointer */
  #define CORTEX_A55_PLATFORM                      ((CORE_PLATFORM_Type *)CORTEX_A55_PLATFORM_BASE)
  /** Peripheral CORTEX_A55_PLATFORM base pointer */
  #define CORTEX_A55_PLATFORM_NS                   ((CORE_PLATFORM_Type *)CORTEX_A55_PLATFORM_BASE_NS)
  /** Array initializer of CORE_PLATFORM peripheral base addresses */
  #define CORE_PLATFORM_BASE_ADDRS                 { CORTEX_A55_PLATFORM_BASE }
  /** Array initializer of CORE_PLATFORM peripheral base pointers */
  #define CORE_PLATFORM_BASE_PTRS                  { CORTEX_A55_PLATFORM }
  /** Array initializer of CORE_PLATFORM peripheral base addresses */
  #define CORE_PLATFORM_BASE_ADDRS_NS              { CORTEX_A55_PLATFORM_BASE_NS }
  /** Array initializer of CORE_PLATFORM peripheral base pointers */
  #define CORE_PLATFORM_BASE_PTRS_NS               { CORTEX_A55_PLATFORM_NS }
#else
  /** Peripheral CORTEX_A55_PLATFORM base address */
  #define CORTEX_A55_PLATFORM_BASE                 (0x44463000u)
  /** Peripheral CORTEX_A55_PLATFORM base pointer */
  #define CORTEX_A55_PLATFORM                      ((CORE_PLATFORM_Type *)CORTEX_A55_PLATFORM_BASE)
  /** Array initializer of CORE_PLATFORM peripheral base addresses */
  #define CORE_PLATFORM_BASE_ADDRS                 { CORTEX_A55_PLATFORM_BASE }
  /** Array initializer of CORE_PLATFORM peripheral base pointers */
  #define CORE_PLATFORM_BASE_PTRS                  { CORTEX_A55_PLATFORM }
#endif

/* CORTEXA_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CORTEXA__TCU base address */
  #define CORTEXA__TCU_BASE                        (0x5A400000u)
  /** Peripheral CORTEXA__TCU base address */
  #define CORTEXA__TCU_BASE_NS                     (0x4A400000u)
  /** Peripheral CORTEXA__TCU base pointer */
  #define CORTEXA__TCU                             ((CORTEXA_TCU_Type *)CORTEXA__TCU_BASE)
  /** Peripheral CORTEXA__TCU base pointer */
  #define CORTEXA__TCU_NS                          ((CORTEXA_TCU_Type *)CORTEXA__TCU_BASE_NS)
  /** Array initializer of CORTEXA_TCU peripheral base addresses */
  #define CORTEXA_TCU_BASE_ADDRS                   { CORTEXA__TCU_BASE }
  /** Array initializer of CORTEXA_TCU peripheral base pointers */
  #define CORTEXA_TCU_BASE_PTRS                    { CORTEXA__TCU }
  /** Array initializer of CORTEXA_TCU peripheral base addresses */
  #define CORTEXA_TCU_BASE_ADDRS_NS                { CORTEXA__TCU_BASE_NS }
  /** Array initializer of CORTEXA_TCU peripheral base pointers */
  #define CORTEXA_TCU_BASE_PTRS_NS                 { CORTEXA__TCU_NS }
#else
  /** Peripheral CORTEXA__TCU base address */
  #define CORTEXA__TCU_BASE                        (0x4A400000u)
  /** Peripheral CORTEXA__TCU base pointer */
  #define CORTEXA__TCU                             ((CORTEXA_TCU_Type *)CORTEXA__TCU_BASE)
  /** Array initializer of CORTEXA_TCU peripheral base addresses */
  #define CORTEXA_TCU_BASE_ADDRS                   { CORTEXA__TCU_BASE }
  /** Array initializer of CORTEXA_TCU peripheral base pointers */
  #define CORTEXA_TCU_BASE_PTRS                    { CORTEXA__TCU }
#endif

/* CRCA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__CRCA base address */
  #define AON__CRCA_BASE                           (0x54660000u)
  /** Peripheral AON__CRCA base address */
  #define AON__CRCA_BASE_NS                        (0x44660000u)
  /** Peripheral AON__CRCA base pointer */
  #define AON__CRCA                                ((CRCA_Type *)AON__CRCA_BASE)
  /** Peripheral AON__CRCA base pointer */
  #define AON__CRCA_NS                             ((CRCA_Type *)AON__CRCA_BASE_NS)
  /** Array initializer of CRCA peripheral base addresses */
  #define CRCA_BASE_ADDRS                          { AON__CRCA_BASE }
  /** Array initializer of CRCA peripheral base pointers */
  #define CRCA_BASE_PTRS                           { AON__CRCA }
  /** Array initializer of CRCA peripheral base addresses */
  #define CRCA_BASE_ADDRS_NS                       { AON__CRCA_BASE_NS }
  /** Array initializer of CRCA peripheral base pointers */
  #define CRCA_BASE_PTRS_NS                        { AON__CRCA_NS }
#else
  /** Peripheral AON__CRCA base address */
  #define AON__CRCA_BASE                           (0x44660000u)
  /** Peripheral AON__CRCA base pointer */
  #define AON__CRCA                                ((CRCA_Type *)AON__CRCA_BASE)
  /** Array initializer of CRCA peripheral base addresses */
  #define CRCA_BASE_ADDRS                          { AON__CRCA_BASE }
  /** Array initializer of CRCA peripheral base pointers */
  #define CRCA_BASE_PTRS                           { AON__CRCA }
#endif

/* CSI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base address */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE (0x5AD40000u)
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base address */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE_NS (0x4AD40000u)
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base pointer */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI  ((CSI_Type *)CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE)
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base pointer */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_NS ((CSI_Type *)CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE_NS)
  /** Array initializer of CSI peripheral base addresses */
  #define CSI_BASE_ADDRS                           { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE }
  /** Array initializer of CSI peripheral base pointers */
  #define CSI_BASE_PTRS                            { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI }
  /** Array initializer of CSI peripheral base addresses */
  #define CSI_BASE_ADDRS_NS                        { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE_NS }
  /** Array initializer of CSI peripheral base pointers */
  #define CSI_BASE_PTRS_NS                         { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_NS }
#else
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base address */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE (0x4AD40000u)
  /** Peripheral CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI base pointer */
  #define CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI  ((CSI_Type *)CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE)
  /** Array initializer of CSI peripheral base addresses */
  #define CSI_BASE_ADDRS                           { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI_BASE }
  /** Array initializer of CSI peripheral base pointers */
  #define CSI_BASE_PTRS                            { CAMERA__DSI_CSI_COMBO_COMPLEX_CSI1__CSI }
#endif

/* CSTCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__CSTCU base address */
  #define AON__CSTCU_BASE                          (0x54590000u)
  /** Peripheral AON__CSTCU base address */
  #define AON__CSTCU_BASE_NS                       (0x44590000u)
  /** Peripheral AON__CSTCU base pointer */
  #define AON__CSTCU                               ((CSTCU_Type *)AON__CSTCU_BASE)
  /** Peripheral AON__CSTCU base pointer */
  #define AON__CSTCU_NS                            ((CSTCU_Type *)AON__CSTCU_BASE_NS)
  /** Array initializer of CSTCU peripheral base addresses */
  #define CSTCU_BASE_ADDRS                         { AON__CSTCU_BASE }
  /** Array initializer of CSTCU peripheral base pointers */
  #define CSTCU_BASE_PTRS                          { AON__CSTCU }
  /** Array initializer of CSTCU peripheral base addresses */
  #define CSTCU_BASE_ADDRS_NS                      { AON__CSTCU_BASE_NS }
  /** Array initializer of CSTCU peripheral base pointers */
  #define CSTCU_BASE_PTRS_NS                       { AON__CSTCU_NS }
#else
  /** Peripheral AON__CSTCU base address */
  #define AON__CSTCU_BASE                          (0x44590000u)
  /** Peripheral AON__CSTCU base pointer */
  #define AON__CSTCU                               ((CSTCU_Type *)AON__CSTCU_BASE)
  /** Array initializer of CSTCU peripheral base addresses */
  #define CSTCU_BASE_ADDRS                         { AON__CSTCU_BASE }
  /** Array initializer of CSTCU peripheral base pointers */
  #define CSTCU_BASE_PTRS                          { AON__CSTCU }
#endif

/* DDRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DDRC base address */
  #define DDRC_BASE                                (0x5E080000u)
  /** Peripheral DDRC base address */
  #define DDRC_BASE_NS                             (0x4E080000u)
  /** Peripheral DDRC base pointer */
  #define DDRC                                     ((DDRC_Type *)DDRC_BASE)
  /** Peripheral DDRC base pointer */
  #define DDRC_NS                                  ((DDRC_Type *)DDRC_BASE_NS)
  /** Array initializer of DDRC peripheral base addresses */
  #define DDRC_BASE_ADDRS                          { DDRC_BASE }
  /** Array initializer of DDRC peripheral base pointers */
  #define DDRC_BASE_PTRS                           { DDRC }
  /** Array initializer of DDRC peripheral base addresses */
  #define DDRC_BASE_ADDRS_NS                       { DDRC_BASE_NS }
  /** Array initializer of DDRC peripheral base pointers */
  #define DDRC_BASE_PTRS_NS                        { DDRC_NS }
#else
  /** Peripheral DDRC base address */
  #define DDRC_BASE                                (0x4E080000u)
  /** Peripheral DDRC base pointer */
  #define DDRC                                     ((DDRC_Type *)DDRC_BASE)
  /** Array initializer of DDRC peripheral base addresses */
  #define DDRC_BASE_ADDRS                          { DDRC_BASE }
  /** Array initializer of DDRC peripheral base pointers */
  #define DDRC_BASE_PTRS                           { DDRC }
#endif

/* DDR_BLK_CTRL_DDRMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base address */
  #define DDRC__BLK_CTRL_DDRMIX_BASE               (0x5E010000u)
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base address */
  #define DDRC__BLK_CTRL_DDRMIX_BASE_NS            (0x4E010000u)
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base pointer */
  #define DDRC__BLK_CTRL_DDRMIX                    ((DDR_BLK_CTRL_DDRMIX_Type *)DDRC__BLK_CTRL_DDRMIX_BASE)
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base pointer */
  #define DDRC__BLK_CTRL_DDRMIX_NS                 ((DDR_BLK_CTRL_DDRMIX_Type *)DDRC__BLK_CTRL_DDRMIX_BASE_NS)
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base addresses */
  #define DDR_BLK_CTRL_DDRMIX_BASE_ADDRS           { DDRC__BLK_CTRL_DDRMIX_BASE }
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base pointers */
  #define DDR_BLK_CTRL_DDRMIX_BASE_PTRS            { DDRC__BLK_CTRL_DDRMIX }
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base addresses */
  #define DDR_BLK_CTRL_DDRMIX_BASE_ADDRS_NS        { DDRC__BLK_CTRL_DDRMIX_BASE_NS }
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base pointers */
  #define DDR_BLK_CTRL_DDRMIX_BASE_PTRS_NS         { DDRC__BLK_CTRL_DDRMIX_NS }
#else
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base address */
  #define DDRC__BLK_CTRL_DDRMIX_BASE               (0x4E010000u)
  /** Peripheral DDRC__BLK_CTRL_DDRMIX base pointer */
  #define DDRC__BLK_CTRL_DDRMIX                    ((DDR_BLK_CTRL_DDRMIX_Type *)DDRC__BLK_CTRL_DDRMIX_BASE)
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base addresses */
  #define DDR_BLK_CTRL_DDRMIX_BASE_ADDRS           { DDRC__BLK_CTRL_DDRMIX_BASE }
  /** Array initializer of DDR_BLK_CTRL_DDRMIX peripheral base pointers */
  #define DDR_BLK_CTRL_DDRMIX_BASE_PTRS            { DDRC__BLK_CTRL_DDRMIX }
#endif

/* DDR_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DDRC__TCU base address */
  #define DDRC__TCU_BASE                           (0x5E000000u)
  /** Peripheral DDRC__TCU base address */
  #define DDRC__TCU_BASE_NS                        (0x4E000000u)
  /** Peripheral DDRC__TCU base pointer */
  #define DDRC__TCU                                ((DDR_TCU_Type *)DDRC__TCU_BASE)
  /** Peripheral DDRC__TCU base pointer */
  #define DDRC__TCU_NS                             ((DDR_TCU_Type *)DDRC__TCU_BASE_NS)
  /** Array initializer of DDR_TCU peripheral base addresses */
  #define DDR_TCU_BASE_ADDRS                       { DDRC__TCU_BASE }
  /** Array initializer of DDR_TCU peripheral base pointers */
  #define DDR_TCU_BASE_PTRS                        { DDRC__TCU }
  /** Array initializer of DDR_TCU peripheral base addresses */
  #define DDR_TCU_BASE_ADDRS_NS                    { DDRC__TCU_BASE_NS }
  /** Array initializer of DDR_TCU peripheral base pointers */
  #define DDR_TCU_BASE_PTRS_NS                     { DDRC__TCU_NS }
#else
  /** Peripheral DDRC__TCU base address */
  #define DDRC__TCU_BASE                           (0x4E000000u)
  /** Peripheral DDRC__TCU base pointer */
  #define DDRC__TCU                                ((DDR_TCU_Type *)DDRC__TCU_BASE)
  /** Array initializer of DDR_TCU peripheral base addresses */
  #define DDR_TCU_BASE_ADDRS                       { DDRC__TCU_BASE }
  /** Array initializer of DDR_TCU peripheral base pointers */
  #define DDR_TCU_BASE_PTRS                        { DDRC__TCU }
#endif

/* DEMOSAIC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__DEMOSAIC base address */
  #define CAMERA__ISP__DEMOSAIC_BASE               (0x5AE01180u)
  /** Peripheral CAMERA__ISP__DEMOSAIC base address */
  #define CAMERA__ISP__DEMOSAIC_BASE_NS            (0x4AE01180u)
  /** Peripheral CAMERA__ISP__DEMOSAIC base pointer */
  #define CAMERA__ISP__DEMOSAIC                    ((DEMOSAIC_Type *)CAMERA__ISP__DEMOSAIC_BASE)
  /** Peripheral CAMERA__ISP__DEMOSAIC base pointer */
  #define CAMERA__ISP__DEMOSAIC_NS                 ((DEMOSAIC_Type *)CAMERA__ISP__DEMOSAIC_BASE_NS)
  /** Array initializer of DEMOSAIC peripheral base addresses */
  #define DEMOSAIC_BASE_ADDRS                      { CAMERA__ISP__DEMOSAIC_BASE }
  /** Array initializer of DEMOSAIC peripheral base pointers */
  #define DEMOSAIC_BASE_PTRS                       { CAMERA__ISP__DEMOSAIC }
  /** Array initializer of DEMOSAIC peripheral base addresses */
  #define DEMOSAIC_BASE_ADDRS_NS                   { CAMERA__ISP__DEMOSAIC_BASE_NS }
  /** Array initializer of DEMOSAIC peripheral base pointers */
  #define DEMOSAIC_BASE_PTRS_NS                    { CAMERA__ISP__DEMOSAIC_NS }
#else
  /** Peripheral CAMERA__ISP__DEMOSAIC base address */
  #define CAMERA__ISP__DEMOSAIC_BASE               (0x4AE01180u)
  /** Peripheral CAMERA__ISP__DEMOSAIC base pointer */
  #define CAMERA__ISP__DEMOSAIC                    ((DEMOSAIC_Type *)CAMERA__ISP__DEMOSAIC_BASE)
  /** Array initializer of DEMOSAIC peripheral base addresses */
  #define DEMOSAIC_BASE_ADDRS                      { CAMERA__ISP__DEMOSAIC_BASE }
  /** Array initializer of DEMOSAIC peripheral base pointers */
  #define DEMOSAIC_BASE_PTRS                       { CAMERA__ISP__DEMOSAIC }
#endif

/* DF - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__DF base address */
  #define CAMERA__ISP__DF_BASE                     (0x5AE01440u)
  /** Peripheral CAMERA__ISP__DF base address */
  #define CAMERA__ISP__DF_BASE_NS                  (0x4AE01440u)
  /** Peripheral CAMERA__ISP__DF base pointer */
  #define CAMERA__ISP__DF                          ((DF_Type *)CAMERA__ISP__DF_BASE)
  /** Peripheral CAMERA__ISP__DF base pointer */
  #define CAMERA__ISP__DF_NS                       ((DF_Type *)CAMERA__ISP__DF_BASE_NS)
  /** Array initializer of DF peripheral base addresses */
  #define DF_BASE_ADDRS                            { CAMERA__ISP__DF_BASE }
  /** Array initializer of DF peripheral base pointers */
  #define DF_BASE_PTRS                             { CAMERA__ISP__DF }
  /** Array initializer of DF peripheral base addresses */
  #define DF_BASE_ADDRS_NS                         { CAMERA__ISP__DF_BASE_NS }
  /** Array initializer of DF peripheral base pointers */
  #define DF_BASE_PTRS_NS                          { CAMERA__ISP__DF_NS }
#else
  /** Peripheral CAMERA__ISP__DF base address */
  #define CAMERA__ISP__DF_BASE                     (0x4AE01440u)
  /** Peripheral CAMERA__ISP__DF base pointer */
  #define CAMERA__ISP__DF                          ((DF_Type *)CAMERA__ISP__DF_BASE)
  /** Array initializer of DF peripheral base addresses */
  #define DF_BASE_ADDRS                            { CAMERA__ISP__DF_BASE }
  /** Array initializer of DF peripheral base pointers */
  #define DF_BASE_PTRS                             { CAMERA__ISP__DF }
#endif

/* DISPLAY_BLK_CTRL_DISPLAYMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base address */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX_BASE        (0x5B010000u)
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base address */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX_BASE_NS     (0x4B010000u)
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base pointer */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX             ((DISPLAY_BLK_CTRL_DISPLAYMIX_Type *)DISPLAY__BLK_CTRL_DISPLAYMIX_BASE)
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base pointer */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX_NS          ((DISPLAY_BLK_CTRL_DISPLAYMIX_Type *)DISPLAY__BLK_CTRL_DISPLAYMIX_BASE_NS)
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base addresses */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_ADDRS   { DISPLAY__BLK_CTRL_DISPLAYMIX_BASE }
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base pointers */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_PTRS    { DISPLAY__BLK_CTRL_DISPLAYMIX }
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base addresses */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_ADDRS_NS { DISPLAY__BLK_CTRL_DISPLAYMIX_BASE_NS }
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base pointers */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_PTRS_NS { DISPLAY__BLK_CTRL_DISPLAYMIX_NS }
#else
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base address */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX_BASE        (0x4B010000u)
  /** Peripheral DISPLAY__BLK_CTRL_DISPLAYMIX base pointer */
  #define DISPLAY__BLK_CTRL_DISPLAYMIX             ((DISPLAY_BLK_CTRL_DISPLAYMIX_Type *)DISPLAY__BLK_CTRL_DISPLAYMIX_BASE)
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base addresses */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_ADDRS   { DISPLAY__BLK_CTRL_DISPLAYMIX_BASE }
  /** Array initializer of DISPLAY_BLK_CTRL_DISPLAYMIX peripheral base pointers */
  #define DISPLAY_BLK_CTRL_DISPLAYMIX_BASE_PTRS    { DISPLAY__BLK_CTRL_DISPLAYMIX }
#endif

/* DISPLAY_INTERLEAVER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base address */
  #define DISPLAY__PIXEL_INTERLEAVER1_BASE         (0x5B0D0000u)
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base address */
  #define DISPLAY__PIXEL_INTERLEAVER1_BASE_NS      (0x4B0D0000u)
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base pointer */
  #define DISPLAY__PIXEL_INTERLEAVER1              ((DISPLAY_INTERLEAVER_Type *)DISPLAY__PIXEL_INTERLEAVER1_BASE)
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base pointer */
  #define DISPLAY__PIXEL_INTERLEAVER1_NS           ((DISPLAY_INTERLEAVER_Type *)DISPLAY__PIXEL_INTERLEAVER1_BASE_NS)
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base addresses */
  #define DISPLAY_INTERLEAVER_BASE_ADDRS           { DISPLAY__PIXEL_INTERLEAVER1_BASE }
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base pointers */
  #define DISPLAY_INTERLEAVER_BASE_PTRS            { DISPLAY__PIXEL_INTERLEAVER1 }
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base addresses */
  #define DISPLAY_INTERLEAVER_BASE_ADDRS_NS        { DISPLAY__PIXEL_INTERLEAVER1_BASE_NS }
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base pointers */
  #define DISPLAY_INTERLEAVER_BASE_PTRS_NS         { DISPLAY__PIXEL_INTERLEAVER1_NS }
#else
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base address */
  #define DISPLAY__PIXEL_INTERLEAVER1_BASE         (0x4B0D0000u)
  /** Peripheral DISPLAY__PIXEL_INTERLEAVER1 base pointer */
  #define DISPLAY__PIXEL_INTERLEAVER1              ((DISPLAY_INTERLEAVER_Type *)DISPLAY__PIXEL_INTERLEAVER1_BASE)
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base addresses */
  #define DISPLAY_INTERLEAVER_BASE_ADDRS           { DISPLAY__PIXEL_INTERLEAVER1_BASE }
  /** Array initializer of DISPLAY_INTERLEAVER peripheral base pointers */
  #define DISPLAY_INTERLEAVER_BASE_PTRS            { DISPLAY__PIXEL_INTERLEAVER1 }
#endif

/* DISPLAY_PIXEL_MAPPER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DISPLAY__PIXEL_MAPPER base address */
  #define DISPLAY__PIXEL_MAPPER_BASE               (0x5B000000u)
  /** Peripheral DISPLAY__PIXEL_MAPPER base address */
  #define DISPLAY__PIXEL_MAPPER_BASE_NS            (0x4B000000u)
  /** Peripheral DISPLAY__PIXEL_MAPPER base pointer */
  #define DISPLAY__PIXEL_MAPPER                    ((DISPLAY_PIXEL_MAPPER_Type *)DISPLAY__PIXEL_MAPPER_BASE)
  /** Peripheral DISPLAY__PIXEL_MAPPER base pointer */
  #define DISPLAY__PIXEL_MAPPER_NS                 ((DISPLAY_PIXEL_MAPPER_Type *)DISPLAY__PIXEL_MAPPER_BASE_NS)
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base addresses */
  #define DISPLAY_PIXEL_MAPPER_BASE_ADDRS          { DISPLAY__PIXEL_MAPPER_BASE }
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base pointers */
  #define DISPLAY_PIXEL_MAPPER_BASE_PTRS           { DISPLAY__PIXEL_MAPPER }
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base addresses */
  #define DISPLAY_PIXEL_MAPPER_BASE_ADDRS_NS       { DISPLAY__PIXEL_MAPPER_BASE_NS }
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base pointers */
  #define DISPLAY_PIXEL_MAPPER_BASE_PTRS_NS        { DISPLAY__PIXEL_MAPPER_NS }
#else
  /** Peripheral DISPLAY__PIXEL_MAPPER base address */
  #define DISPLAY__PIXEL_MAPPER_BASE               (0x4B000000u)
  /** Peripheral DISPLAY__PIXEL_MAPPER base pointer */
  #define DISPLAY__PIXEL_MAPPER                    ((DISPLAY_PIXEL_MAPPER_Type *)DISPLAY__PIXEL_MAPPER_BASE)
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base addresses */
  #define DISPLAY_PIXEL_MAPPER_BASE_ADDRS          { DISPLAY__PIXEL_MAPPER_BASE }
  /** Array initializer of DISPLAY_PIXEL_MAPPER peripheral base pointers */
  #define DISPLAY_PIXEL_MAPPER_BASE_PTRS           { DISPLAY__PIXEL_MAPPER }
#endif

/* DISPLAY_SEERIS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DISPLAY_SEERIS base address */
  #define DISPLAY_SEERIS_BASE                      (0x5B400000u)
  /** Peripheral DISPLAY_SEERIS base address */
  #define DISPLAY_SEERIS_BASE_NS                   (0x4B400000u)
  /** Peripheral DISPLAY_SEERIS base pointer */
  #define DISPLAY_SEERIS                           ((DISPLAY_SEERIS_Type *)DISPLAY_SEERIS_BASE)
  /** Peripheral DISPLAY_SEERIS base pointer */
  #define DISPLAY_SEERIS_NS                        ((DISPLAY_SEERIS_Type *)DISPLAY_SEERIS_BASE_NS)
  /** Array initializer of DISPLAY_SEERIS peripheral base addresses */
  #define DISPLAY_SEERIS_BASE_ADDRS                { DISPLAY_SEERIS_BASE }
  /** Array initializer of DISPLAY_SEERIS peripheral base pointers */
  #define DISPLAY_SEERIS_BASE_PTRS                 { DISPLAY_SEERIS }
  /** Array initializer of DISPLAY_SEERIS peripheral base addresses */
  #define DISPLAY_SEERIS_BASE_ADDRS_NS             { DISPLAY_SEERIS_BASE_NS }
  /** Array initializer of DISPLAY_SEERIS peripheral base pointers */
  #define DISPLAY_SEERIS_BASE_PTRS_NS              { DISPLAY_SEERIS_NS }
#else
  /** Peripheral DISPLAY_SEERIS base address */
  #define DISPLAY_SEERIS_BASE                      (0x4B400000u)
  /** Peripheral DISPLAY_SEERIS base pointer */
  #define DISPLAY_SEERIS                           ((DISPLAY_SEERIS_Type *)DISPLAY_SEERIS_BASE)
  /** Array initializer of DISPLAY_SEERIS peripheral base addresses */
  #define DISPLAY_SEERIS_BASE_ADDRS                { DISPLAY_SEERIS_BASE }
  /** Array initializer of DISPLAY_SEERIS peripheral base pointers */
  #define DISPLAY_SEERIS_BASE_PTRS                 { DISPLAY_SEERIS }
#endif

/* DISPLAY_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DISPLAY__TCU base address */
  #define DISPLAY__TCU_BASE                        (0x5B000000u)
  /** Peripheral DISPLAY__TCU base address */
  #define DISPLAY__TCU_BASE_NS                     (0x4B000000u)
  /** Peripheral DISPLAY__TCU base pointer */
  #define DISPLAY__TCU                             ((DISPLAY_TCU_Type *)DISPLAY__TCU_BASE)
  /** Peripheral DISPLAY__TCU base pointer */
  #define DISPLAY__TCU_NS                          ((DISPLAY_TCU_Type *)DISPLAY__TCU_BASE_NS)
  /** Array initializer of DISPLAY_TCU peripheral base addresses */
  #define DISPLAY_TCU_BASE_ADDRS                   { DISPLAY__TCU_BASE }
  /** Array initializer of DISPLAY_TCU peripheral base pointers */
  #define DISPLAY_TCU_BASE_PTRS                    { DISPLAY__TCU }
  /** Array initializer of DISPLAY_TCU peripheral base addresses */
  #define DISPLAY_TCU_BASE_ADDRS_NS                { DISPLAY__TCU_BASE_NS }
  /** Array initializer of DISPLAY_TCU peripheral base pointers */
  #define DISPLAY_TCU_BASE_PTRS_NS                 { DISPLAY__TCU_NS }
#else
  /** Peripheral DISPLAY__TCU base address */
  #define DISPLAY__TCU_BASE                        (0x4B000000u)
  /** Peripheral DISPLAY__TCU base pointer */
  #define DISPLAY__TCU                             ((DISPLAY_TCU_Type *)DISPLAY__TCU_BASE)
  /** Array initializer of DISPLAY_TCU peripheral base addresses */
  #define DISPLAY_TCU_BASE_ADDRS                   { DISPLAY__TCU_BASE }
  /** Array initializer of DISPLAY_TCU peripheral base pointers */
  #define DISPLAY_TCU_BASE_PTRS                    { DISPLAY__TCU }
#endif

/* DMA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DMA3 base address */
  #define DMA3_BASE                                (0x54000000u)
  /** Peripheral DMA3 base address */
  #define DMA3_BASE_NS                             (0x44000000u)
  /** Peripheral DMA3 base pointer */
  #define DMA3                                     ((DMA_Type *)DMA3_BASE)
  /** Peripheral DMA3 base pointer */
  #define DMA3_NS                                  ((DMA_Type *)DMA3_BASE_NS)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { DMA3_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { DMA3 }
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS_NS                        { DMA3_BASE_NS }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS_NS                         { DMA3_NS }
#else
  /** Peripheral DMA3 base address */
  #define DMA3_BASE                                (0x44000000u)
  /** Peripheral DMA3 base pointer */
  #define DMA3                                     ((DMA_Type *)DMA3_BASE)
  /** Array initializer of DMA peripheral base addresses */
  #define DMA_BASE_ADDRS                           { DMA3_BASE }
  /** Array initializer of DMA peripheral base pointers */
  #define DMA_BASE_PTRS                            { DMA3 }
#endif

/* DMA5 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EDMA5_2 base address */
  #define EDMA5_2_BASE                             (0x52000000u)
  /** Peripheral EDMA5_2 base address */
  #define EDMA5_2_BASE_NS                          (0x42000000u)
  /** Peripheral EDMA5_2 base pointer */
  #define EDMA5_2                                  ((DMA5_Type *)EDMA5_2_BASE)
  /** Peripheral EDMA5_2 base pointer */
  #define EDMA5_2_NS                               ((DMA5_Type *)EDMA5_2_BASE_NS)
  /** Peripheral EDMA5_3 base address */
  #define EDMA5_3_BASE                             (0x52210000u)
  /** Peripheral EDMA5_3 base address */
  #define EDMA5_3_BASE_NS                          (0x42210000u)
  /** Peripheral EDMA5_3 base pointer */
  #define EDMA5_3                                  ((DMA5_Type *)EDMA5_3_BASE)
  /** Peripheral EDMA5_3 base pointer */
  #define EDMA5_3_NS                               ((DMA5_Type *)EDMA5_3_BASE_NS)
  /** Peripheral EDMA5_4 base address */
  #define EDMA5_4_BASE                             (0x5AE10000u)
  /** Peripheral EDMA5_4 base address */
  #define EDMA5_4_BASE_NS                          (0x4AE10000u)
  /** Peripheral EDMA5_4 base pointer */
  #define EDMA5_4                                  ((DMA5_Type *)EDMA5_4_BASE)
  /** Peripheral EDMA5_4 base pointer */
  #define EDMA5_4_NS                               ((DMA5_Type *)EDMA5_4_BASE_NS)
  /** Array initializer of DMA5 peripheral base addresses */
  #define DMA5_BASE_ADDRS                          { 0u, 0u, EDMA5_2_BASE, EDMA5_3_BASE, EDMA5_4_BASE }
  /** Array initializer of DMA5 peripheral base pointers */
  #define DMA5_BASE_PTRS                           { (DMA5_Type *)0u, (DMA5_Type *)0u, EDMA5_2, EDMA5_3, EDMA5_4 }
  /** Array initializer of DMA5 peripheral base addresses */
  #define DMA5_BASE_ADDRS_NS                       { 0u, 0u, EDMA5_2_BASE_NS, EDMA5_3_BASE_NS, EDMA5_4_BASE_NS }
  /** Array initializer of DMA5 peripheral base pointers */
  #define DMA5_BASE_PTRS_NS                        { (DMA5_Type *)0u, (DMA5_Type *)0u, EDMA5_2_NS, EDMA5_3_NS, EDMA5_4_NS }
#else
  /** Peripheral EDMA5_2 base address */
  #define EDMA5_2_BASE                             (0x42000000u)
  /** Peripheral EDMA5_2 base pointer */
  #define EDMA5_2                                  ((DMA5_Type *)EDMA5_2_BASE)
  /** Peripheral EDMA5_3 base address */
  #define EDMA5_3_BASE                             (0x42210000u)
  /** Peripheral EDMA5_3 base pointer */
  #define EDMA5_3                                  ((DMA5_Type *)EDMA5_3_BASE)
  /** Peripheral EDMA5_4 base address */
  #define EDMA5_4_BASE                             (0x4AE10000u)
  /** Peripheral EDMA5_4 base pointer */
  #define EDMA5_4                                  ((DMA5_Type *)EDMA5_4_BASE)
  /** Array initializer of DMA5 peripheral base addresses */
  #define DMA5_BASE_ADDRS                          { 0u, 0u, EDMA5_2_BASE, EDMA5_3_BASE, EDMA5_4_BASE }
  /** Array initializer of DMA5 peripheral base pointers */
  #define DMA5_BASE_PTRS                           { (DMA5_Type *)0u, (DMA5_Type *)0u, EDMA5_2, EDMA5_3, EDMA5_4 }
#endif

/* DOORBELLS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__REG__DOORBELLS base address */
  #define GPU__REG__DOORBELLS_BASE                 (0x5D980000u)
  /** Peripheral GPU__REG__DOORBELLS base address */
  #define GPU__REG__DOORBELLS_BASE_NS              (0x4D980000u)
  /** Peripheral GPU__REG__DOORBELLS base pointer */
  #define GPU__REG__DOORBELLS                      ((DOORBELLS_Type *)GPU__REG__DOORBELLS_BASE)
  /** Peripheral GPU__REG__DOORBELLS base pointer */
  #define GPU__REG__DOORBELLS_NS                   ((DOORBELLS_Type *)GPU__REG__DOORBELLS_BASE_NS)
  /** Array initializer of DOORBELLS peripheral base addresses */
  #define DOORBELLS_BASE_ADDRS                     { GPU__REG__DOORBELLS_BASE }
  /** Array initializer of DOORBELLS peripheral base pointers */
  #define DOORBELLS_BASE_PTRS                      { GPU__REG__DOORBELLS }
  /** Array initializer of DOORBELLS peripheral base addresses */
  #define DOORBELLS_BASE_ADDRS_NS                  { GPU__REG__DOORBELLS_BASE_NS }
  /** Array initializer of DOORBELLS peripheral base pointers */
  #define DOORBELLS_BASE_PTRS_NS                   { GPU__REG__DOORBELLS_NS }
#else
  /** Peripheral GPU__REG__DOORBELLS base address */
  #define GPU__REG__DOORBELLS_BASE                 (0x4D980000u)
  /** Peripheral GPU__REG__DOORBELLS base pointer */
  #define GPU__REG__DOORBELLS                      ((DOORBELLS_Type *)GPU__REG__DOORBELLS_BASE)
  /** Array initializer of DOORBELLS peripheral base addresses */
  #define DOORBELLS_BASE_ADDRS                     { GPU__REG__DOORBELLS_BASE }
  /** Array initializer of DOORBELLS peripheral base pointers */
  #define DOORBELLS_BASE_PTRS                      { GPU__REG__DOORBELLS }
#endif

/* DPU_IRQSTEER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral DPU_IRQSTEER base address */
  #define DPU_IRQSTEER_BASE                        (0x5B0B0000u)
  /** Peripheral DPU_IRQSTEER base address */
  #define DPU_IRQSTEER_BASE_NS                     (0x4B0B0000u)
  /** Peripheral DPU_IRQSTEER base pointer */
  #define DPU_IRQSTEER                             ((DPU_IRQSTEER_Type *)DPU_IRQSTEER_BASE)
  /** Peripheral DPU_IRQSTEER base pointer */
  #define DPU_IRQSTEER_NS                          ((DPU_IRQSTEER_Type *)DPU_IRQSTEER_BASE_NS)
  /** Array initializer of DPU_IRQSTEER peripheral base addresses */
  #define DPU_IRQSTEER_BASE_ADDRS                  { DPU_IRQSTEER_BASE }
  /** Array initializer of DPU_IRQSTEER peripheral base pointers */
  #define DPU_IRQSTEER_BASE_PTRS                   { DPU_IRQSTEER }
  /** Array initializer of DPU_IRQSTEER peripheral base addresses */
  #define DPU_IRQSTEER_BASE_ADDRS_NS               { DPU_IRQSTEER_BASE_NS }
  /** Array initializer of DPU_IRQSTEER peripheral base pointers */
  #define DPU_IRQSTEER_BASE_PTRS_NS                { DPU_IRQSTEER_NS }
#else
  /** Peripheral DPU_IRQSTEER base address */
  #define DPU_IRQSTEER_BASE                        (0x4B0B0000u)
  /** Peripheral DPU_IRQSTEER base pointer */
  #define DPU_IRQSTEER                             ((DPU_IRQSTEER_Type *)DPU_IRQSTEER_BASE)
  /** Array initializer of DPU_IRQSTEER peripheral base addresses */
  #define DPU_IRQSTEER_BASE_ADDRS                  { DPU_IRQSTEER_BASE }
  /** Array initializer of DPU_IRQSTEER peripheral base pointers */
  #define DPU_IRQSTEER_BASE_PTRS                   { DPU_IRQSTEER }
#endif

/* DRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__DRC base address */
  #define CAMERA__ISP__DRC_BASE                    (0x5AE01300u)
  /** Peripheral CAMERA__ISP__DRC base address */
  #define CAMERA__ISP__DRC_BASE_NS                 (0x4AE01300u)
  /** Peripheral CAMERA__ISP__DRC base pointer */
  #define CAMERA__ISP__DRC                         ((DRC_Type *)CAMERA__ISP__DRC_BASE)
  /** Peripheral CAMERA__ISP__DRC base pointer */
  #define CAMERA__ISP__DRC_NS                      ((DRC_Type *)CAMERA__ISP__DRC_BASE_NS)
  /** Array initializer of DRC peripheral base addresses */
  #define DRC_BASE_ADDRS                           { CAMERA__ISP__DRC_BASE }
  /** Array initializer of DRC peripheral base pointers */
  #define DRC_BASE_PTRS                            { CAMERA__ISP__DRC }
  /** Array initializer of DRC peripheral base addresses */
  #define DRC_BASE_ADDRS_NS                        { CAMERA__ISP__DRC_BASE_NS }
  /** Array initializer of DRC peripheral base pointers */
  #define DRC_BASE_PTRS_NS                         { CAMERA__ISP__DRC_NS }
#else
  /** Peripheral CAMERA__ISP__DRC base address */
  #define CAMERA__ISP__DRC_BASE                    (0x4AE01300u)
  /** Peripheral CAMERA__ISP__DRC base pointer */
  #define CAMERA__ISP__DRC                         ((DRC_Type *)CAMERA__ISP__DRC_BASE)
  /** Array initializer of DRC peripheral base addresses */
  #define DRC_BASE_ADDRS                           { CAMERA__ISP__DRC_BASE }
  /** Array initializer of DRC peripheral base pointers */
  #define DRC_BASE_PTRS                            { CAMERA__ISP__DRC }
#endif

/* EE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__EE base address */
  #define CAMERA__ISP__EE_BASE                     (0x5AE01480u)
  /** Peripheral CAMERA__ISP__EE base address */
  #define CAMERA__ISP__EE_BASE_NS                  (0x4AE01480u)
  /** Peripheral CAMERA__ISP__EE base pointer */
  #define CAMERA__ISP__EE                          ((EE_Type *)CAMERA__ISP__EE_BASE)
  /** Peripheral CAMERA__ISP__EE base pointer */
  #define CAMERA__ISP__EE_NS                       ((EE_Type *)CAMERA__ISP__EE_BASE_NS)
  /** Array initializer of EE peripheral base addresses */
  #define EE_BASE_ADDRS                            { CAMERA__ISP__EE_BASE }
  /** Array initializer of EE peripheral base pointers */
  #define EE_BASE_PTRS                             { CAMERA__ISP__EE }
  /** Array initializer of EE peripheral base addresses */
  #define EE_BASE_ADDRS_NS                         { CAMERA__ISP__EE_BASE_NS }
  /** Array initializer of EE peripheral base pointers */
  #define EE_BASE_PTRS_NS                          { CAMERA__ISP__EE_NS }
#else
  /** Peripheral CAMERA__ISP__EE base address */
  #define CAMERA__ISP__EE_BASE                     (0x4AE01480u)
  /** Peripheral CAMERA__ISP__EE base pointer */
  #define CAMERA__ISP__EE                          ((EE_Type *)CAMERA__ISP__EE_BASE)
  /** Array initializer of EE peripheral base addresses */
  #define EE_BASE_ADDRS                            { CAMERA__ISP__EE_BASE }
  /** Array initializer of EE peripheral base pointers */
  #define EE_BASE_PTRS                             { CAMERA__ISP__EE }
#endif

/* EIM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__EIMA base address */
  #define AON__EIMA_BASE                           (0x54550000u)
  /** Peripheral AON__EIMA base address */
  #define AON__EIMA_BASE_NS                        (0x44550000u)
  /** Peripheral AON__EIMA base pointer */
  #define AON__EIMA                                ((EIM_Type *)AON__EIMA_BASE)
  /** Peripheral AON__EIMA base pointer */
  #define AON__EIMA_NS                             ((EIM_Type *)AON__EIMA_BASE_NS)
  /** Peripheral M7__EIM base address */
  #define M7__EIM_BASE                             (0x5A060000u)
  /** Peripheral M7__EIM base address */
  #define M7__EIM_BASE_NS                          (0x4A060000u)
  /** Peripheral M7__EIM base pointer */
  #define M7__EIM                                  ((EIM_Type *)M7__EIM_BASE)
  /** Peripheral M7__EIM base pointer */
  #define M7__EIM_NS                               ((EIM_Type *)M7__EIM_BASE_NS)
  /** Peripheral NOC__EIMN base address */
  #define NOC__EIMN_BASE                           (0x59270000u)
  /** Peripheral NOC__EIMN base address */
  #define NOC__EIMN_BASE_NS                        (0x49270000u)
  /** Peripheral NOC__EIMN base pointer */
  #define NOC__EIMN                                ((EIM_Type *)NOC__EIMN_BASE)
  /** Peripheral NOC__EIMN base pointer */
  #define NOC__EIMN_NS                             ((EIM_Type *)NOC__EIMN_BASE_NS)
  /** Peripheral NPU__EIM_NPUMIX base address */
  #define NPU__EIM_NPUMIX_BASE                     (0x5A860000u)
  /** Peripheral NPU__EIM_NPUMIX base address */
  #define NPU__EIM_NPUMIX_BASE_NS                  (0x4A860000u)
  /** Peripheral NPU__EIM_NPUMIX base pointer */
  #define NPU__EIM_NPUMIX                          ((EIM_Type *)NPU__EIM_NPUMIX_BASE)
  /** Peripheral NPU__EIM_NPUMIX base pointer */
  #define NPU__EIM_NPUMIX_NS                       ((EIM_Type *)NPU__EIM_NPUMIX_BASE_NS)
  /** Peripheral WAKEUP__EIMW base address */
  #define WAKEUP__EIMW_BASE                        (0x52780000u)
  /** Peripheral WAKEUP__EIMW base address */
  #define WAKEUP__EIMW_BASE_NS                     (0x42780000u)
  /** Peripheral WAKEUP__EIMW base pointer */
  #define WAKEUP__EIMW                             ((EIM_Type *)WAKEUP__EIMW_BASE)
  /** Peripheral WAKEUP__EIMW base pointer */
  #define WAKEUP__EIMW_NS                          ((EIM_Type *)WAKEUP__EIMW_BASE_NS)
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS                           { AON__EIMA_BASE, M7__EIM_BASE, NOC__EIMN_BASE, NPU__EIM_NPUMIX_BASE, WAKEUP__EIMW_BASE }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS                            { AON__EIMA, M7__EIM, NOC__EIMN, NPU__EIM_NPUMIX, WAKEUP__EIMW }
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS_NS                        { AON__EIMA_BASE_NS, M7__EIM_BASE_NS, NOC__EIMN_BASE_NS, NPU__EIM_NPUMIX_BASE_NS, WAKEUP__EIMW_BASE_NS }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS_NS                         { AON__EIMA_NS, M7__EIM_NS, NOC__EIMN_NS, NPU__EIM_NPUMIX_NS, WAKEUP__EIMW_NS }
#else
  /** Peripheral AON__EIMA base address */
  #define AON__EIMA_BASE                           (0x44550000u)
  /** Peripheral AON__EIMA base pointer */
  #define AON__EIMA                                ((EIM_Type *)AON__EIMA_BASE)
  /** Peripheral M7__EIM base address */
  #define M7__EIM_BASE                             (0x4A060000u)
  /** Peripheral M7__EIM base pointer */
  #define M7__EIM                                  ((EIM_Type *)M7__EIM_BASE)
  /** Peripheral NOC__EIMN base address */
  #define NOC__EIMN_BASE                           (0x49270000u)
  /** Peripheral NOC__EIMN base pointer */
  #define NOC__EIMN                                ((EIM_Type *)NOC__EIMN_BASE)
  /** Peripheral NPU__EIM_NPUMIX base address */
  #define NPU__EIM_NPUMIX_BASE                     (0x4A860000u)
  /** Peripheral NPU__EIM_NPUMIX base pointer */
  #define NPU__EIM_NPUMIX                          ((EIM_Type *)NPU__EIM_NPUMIX_BASE)
  /** Peripheral WAKEUP__EIMW base address */
  #define WAKEUP__EIMW_BASE                        (0x42780000u)
  /** Peripheral WAKEUP__EIMW base pointer */
  #define WAKEUP__EIMW                             ((EIM_Type *)WAKEUP__EIMW_BASE)
  /** Array initializer of EIM peripheral base addresses */
  #define EIM_BASE_ADDRS                           { AON__EIMA_BASE, M7__EIM_BASE, NOC__EIMN_BASE, NPU__EIM_NPUMIX_BASE, WAKEUP__EIMW_BASE }
  /** Array initializer of EIM peripheral base pointers */
  #define EIM_BASE_PTRS                            { AON__EIMA, M7__EIM, NOC__EIMN, NPU__EIM_NPUMIX, WAKEUP__EIMW }
#endif

/* ENETC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_GLOBAL base address */
  #define ENETC0_GLOBAL_BASE                       (0x5CC20000u)
  /** Peripheral ENETC0_GLOBAL base address */
  #define ENETC0_GLOBAL_BASE_NS                    (0x4CC20000u)
  /** Peripheral ENETC0_GLOBAL base pointer */
  #define ENETC0_GLOBAL                            ((ENETC_Type *)ENETC0_GLOBAL_BASE)
  /** Peripheral ENETC0_GLOBAL base pointer */
  #define ENETC0_GLOBAL_NS                         ((ENETC_Type *)ENETC0_GLOBAL_BASE_NS)
  /** Array initializer of ENETC peripheral base addresses */
  #define ENETC_BASE_ADDRS                         { ENETC0_GLOBAL_BASE }
  /** Array initializer of ENETC peripheral base pointers */
  #define ENETC_BASE_PTRS                          { ENETC0_GLOBAL }
  /** Array initializer of ENETC peripheral base addresses */
  #define ENETC_BASE_ADDRS_NS                      { ENETC0_GLOBAL_BASE_NS }
  /** Array initializer of ENETC peripheral base pointers */
  #define ENETC_BASE_PTRS_NS                       { ENETC0_GLOBAL_NS }
#else
  /** Peripheral ENETC0_GLOBAL base address */
  #define ENETC0_GLOBAL_BASE                       (0x4CC20000u)
  /** Peripheral ENETC0_GLOBAL base pointer */
  #define ENETC0_GLOBAL                            ((ENETC_Type *)ENETC0_GLOBAL_BASE)
  /** Array initializer of ENETC peripheral base addresses */
  #define ENETC_BASE_ADDRS                         { ENETC0_GLOBAL_BASE }
  /** Array initializer of ENETC peripheral base pointers */
  #define ENETC_BASE_PTRS                          { ENETC0_GLOBAL }
#endif

/* ENETC_GLOBAL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EMDIO_GLOBAL base address */
  #define EMDIO_GLOBAL_BASE                        (0x5CCF0000u)
  /** Peripheral EMDIO_GLOBAL base address */
  #define EMDIO_GLOBAL_BASE_NS                     (0x4CCF0000u)
  /** Peripheral EMDIO_GLOBAL base pointer */
  #define EMDIO_GLOBAL                             ((ENETC_GLOBAL_Type *)EMDIO_GLOBAL_BASE)
  /** Peripheral EMDIO_GLOBAL base pointer */
  #define EMDIO_GLOBAL_NS                          ((ENETC_GLOBAL_Type *)EMDIO_GLOBAL_BASE_NS)
  /** Peripheral ENETC1_GLOBAL base address */
  #define ENETC1_GLOBAL_BASE                       (0x5CC60000u)
  /** Peripheral ENETC1_GLOBAL base address */
  #define ENETC1_GLOBAL_BASE_NS                    (0x4CC60000u)
  /** Peripheral ENETC1_GLOBAL base pointer */
  #define ENETC1_GLOBAL                            ((ENETC_GLOBAL_Type *)ENETC1_GLOBAL_BASE)
  /** Peripheral ENETC1_GLOBAL base pointer */
  #define ENETC1_GLOBAL_NS                         ((ENETC_GLOBAL_Type *)ENETC1_GLOBAL_BASE_NS)
  /** Peripheral ENETC2_GLOBAL base address */
  #define ENETC2_GLOBAL_BASE                       (0x5CCA0000u)
  /** Peripheral ENETC2_GLOBAL base address */
  #define ENETC2_GLOBAL_BASE_NS                    (0x4CCA0000u)
  /** Peripheral ENETC2_GLOBAL base pointer */
  #define ENETC2_GLOBAL                            ((ENETC_GLOBAL_Type *)ENETC2_GLOBAL_BASE)
  /** Peripheral ENETC2_GLOBAL base pointer */
  #define ENETC2_GLOBAL_NS                         ((ENETC_GLOBAL_Type *)ENETC2_GLOBAL_BASE_NS)
  /** Peripheral TMR0_GLOBAL base address */
  #define TMR0_GLOBAL_BASE                         (0x5CCD0000u)
  /** Peripheral TMR0_GLOBAL base address */
  #define TMR0_GLOBAL_BASE_NS                      (0x4CCD0000u)
  /** Peripheral TMR0_GLOBAL base pointer */
  #define TMR0_GLOBAL                              ((ENETC_GLOBAL_Type *)TMR0_GLOBAL_BASE)
  /** Peripheral TMR0_GLOBAL base pointer */
  #define TMR0_GLOBAL_NS                           ((ENETC_GLOBAL_Type *)TMR0_GLOBAL_BASE_NS)
  /** Array initializer of ENETC_GLOBAL peripheral base addresses */
  #define ENETC_GLOBAL_BASE_ADDRS                  { EMDIO_GLOBAL_BASE, ENETC1_GLOBAL_BASE, ENETC2_GLOBAL_BASE, TMR0_GLOBAL_BASE }
  /** Array initializer of ENETC_GLOBAL peripheral base pointers */
  #define ENETC_GLOBAL_BASE_PTRS                   { EMDIO_GLOBAL, ENETC1_GLOBAL, ENETC2_GLOBAL, TMR0_GLOBAL }
  /** Array initializer of ENETC_GLOBAL peripheral base addresses */
  #define ENETC_GLOBAL_BASE_ADDRS_NS               { EMDIO_GLOBAL_BASE_NS, ENETC1_GLOBAL_BASE_NS, ENETC2_GLOBAL_BASE_NS, TMR0_GLOBAL_BASE_NS }
  /** Array initializer of ENETC_GLOBAL peripheral base pointers */
  #define ENETC_GLOBAL_BASE_PTRS_NS                { EMDIO_GLOBAL_NS, ENETC1_GLOBAL_NS, ENETC2_GLOBAL_NS, TMR0_GLOBAL_NS }
#else
  /** Peripheral EMDIO_GLOBAL base address */
  #define EMDIO_GLOBAL_BASE                        (0x4CCF0000u)
  /** Peripheral EMDIO_GLOBAL base pointer */
  #define EMDIO_GLOBAL                             ((ENETC_GLOBAL_Type *)EMDIO_GLOBAL_BASE)
  /** Peripheral ENETC1_GLOBAL base address */
  #define ENETC1_GLOBAL_BASE                       (0x4CC60000u)
  /** Peripheral ENETC1_GLOBAL base pointer */
  #define ENETC1_GLOBAL                            ((ENETC_GLOBAL_Type *)ENETC1_GLOBAL_BASE)
  /** Peripheral ENETC2_GLOBAL base address */
  #define ENETC2_GLOBAL_BASE                       (0x4CCA0000u)
  /** Peripheral ENETC2_GLOBAL base pointer */
  #define ENETC2_GLOBAL                            ((ENETC_GLOBAL_Type *)ENETC2_GLOBAL_BASE)
  /** Peripheral TMR0_GLOBAL base address */
  #define TMR0_GLOBAL_BASE                         (0x4CCD0000u)
  /** Peripheral TMR0_GLOBAL base pointer */
  #define TMR0_GLOBAL                              ((ENETC_GLOBAL_Type *)TMR0_GLOBAL_BASE)
  /** Array initializer of ENETC_GLOBAL peripheral base addresses */
  #define ENETC_GLOBAL_BASE_ADDRS                  { EMDIO_GLOBAL_BASE, ENETC1_GLOBAL_BASE, ENETC2_GLOBAL_BASE, TMR0_GLOBAL_BASE }
  /** Array initializer of ENETC_GLOBAL peripheral base pointers */
  #define ENETC_GLOBAL_BASE_PTRS                   { EMDIO_GLOBAL, ENETC1_GLOBAL, ENETC2_GLOBAL, TMR0_GLOBAL }
#endif

/* ENETC_PCI_TYPE0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base address */
  #define EMDIO0_PCI_HDR_TYPE0_BASE                (0x5CB00000u)
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base address */
  #define EMDIO0_PCI_HDR_TYPE0_BASE_NS             (0x4CB00000u)
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base pointer */
  #define EMDIO0_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)EMDIO0_PCI_HDR_TYPE0_BASE)
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base pointer */
  #define EMDIO0_PCI_HDR_TYPE0_NS                  ((ENETC_PCI_TYPE0_Type *)EMDIO0_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base address */
  #define ENETC0_PCI_HDR_TYPE0_BASE                (0x5CA00000u)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base address */
  #define ENETC0_PCI_HDR_TYPE0_BASE_NS             (0x4CA00000u)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base pointer */
  #define ENETC0_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC0_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base pointer */
  #define ENETC0_PCI_HDR_TYPE0_NS                  ((ENETC_PCI_TYPE0_Type *)ENETC0_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base address */
  #define ENETC1_PCI_HDR_TYPE0_BASE                (0x5CA40000u)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base address */
  #define ENETC1_PCI_HDR_TYPE0_BASE_NS             (0x4CA40000u)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base pointer */
  #define ENETC1_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC1_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base pointer */
  #define ENETC1_PCI_HDR_TYPE0_NS                  ((ENETC_PCI_TYPE0_Type *)ENETC1_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base address */
  #define ENETC2_PCI_HDR_TYPE0_BASE                (0x5CA80000u)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base address */
  #define ENETC2_PCI_HDR_TYPE0_BASE_NS             (0x4CA80000u)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base pointer */
  #define ENETC2_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC2_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base pointer */
  #define ENETC2_PCI_HDR_TYPE0_NS                  ((ENETC_PCI_TYPE0_Type *)ENETC2_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base address */
  #define TMR0_PCI_HDR_TYPE0_BASE                  (0x5CAC0000u)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base address */
  #define TMR0_PCI_HDR_TYPE0_BASE_NS               (0x4CAC0000u)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base pointer */
  #define TMR0_PCI_HDR_TYPE0                       ((ENETC_PCI_TYPE0_Type *)TMR0_PCI_HDR_TYPE0_BASE)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base pointer */
  #define TMR0_PCI_HDR_TYPE0_NS                    ((ENETC_PCI_TYPE0_Type *)TMR0_PCI_HDR_TYPE0_BASE_NS)
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base addresses */
  #define ENETC_PCI_TYPE0_BASE_ADDRS               { EMDIO0_PCI_HDR_TYPE0_BASE, ENETC0_PCI_HDR_TYPE0_BASE, ENETC1_PCI_HDR_TYPE0_BASE, ENETC2_PCI_HDR_TYPE0_BASE, TMR0_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base pointers */
  #define ENETC_PCI_TYPE0_BASE_PTRS                { EMDIO0_PCI_HDR_TYPE0, ENETC0_PCI_HDR_TYPE0, ENETC1_PCI_HDR_TYPE0, ENETC2_PCI_HDR_TYPE0, TMR0_PCI_HDR_TYPE0 }
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base addresses */
  #define ENETC_PCI_TYPE0_BASE_ADDRS_NS            { EMDIO0_PCI_HDR_TYPE0_BASE_NS, ENETC0_PCI_HDR_TYPE0_BASE_NS, ENETC1_PCI_HDR_TYPE0_BASE_NS, ENETC2_PCI_HDR_TYPE0_BASE_NS, TMR0_PCI_HDR_TYPE0_BASE_NS }
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base pointers */
  #define ENETC_PCI_TYPE0_BASE_PTRS_NS             { EMDIO0_PCI_HDR_TYPE0_NS, ENETC0_PCI_HDR_TYPE0_NS, ENETC1_PCI_HDR_TYPE0_NS, ENETC2_PCI_HDR_TYPE0_NS, TMR0_PCI_HDR_TYPE0_NS }
#else
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base address */
  #define EMDIO0_PCI_HDR_TYPE0_BASE                (0x4CB00000u)
  /** Peripheral EMDIO0_PCI_HDR_TYPE0 base pointer */
  #define EMDIO0_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)EMDIO0_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base address */
  #define ENETC0_PCI_HDR_TYPE0_BASE                (0x4CA00000u)
  /** Peripheral ENETC0_PCI_HDR_TYPE0 base pointer */
  #define ENETC0_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC0_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base address */
  #define ENETC1_PCI_HDR_TYPE0_BASE                (0x4CA40000u)
  /** Peripheral ENETC1_PCI_HDR_TYPE0 base pointer */
  #define ENETC1_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC1_PCI_HDR_TYPE0_BASE)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base address */
  #define ENETC2_PCI_HDR_TYPE0_BASE                (0x4CA80000u)
  /** Peripheral ENETC2_PCI_HDR_TYPE0 base pointer */
  #define ENETC2_PCI_HDR_TYPE0                     ((ENETC_PCI_TYPE0_Type *)ENETC2_PCI_HDR_TYPE0_BASE)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base address */
  #define TMR0_PCI_HDR_TYPE0_BASE                  (0x4CAC0000u)
  /** Peripheral TMR0_PCI_HDR_TYPE0 base pointer */
  #define TMR0_PCI_HDR_TYPE0                       ((ENETC_PCI_TYPE0_Type *)TMR0_PCI_HDR_TYPE0_BASE)
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base addresses */
  #define ENETC_PCI_TYPE0_BASE_ADDRS               { EMDIO0_PCI_HDR_TYPE0_BASE, ENETC0_PCI_HDR_TYPE0_BASE, ENETC1_PCI_HDR_TYPE0_BASE, ENETC2_PCI_HDR_TYPE0_BASE, TMR0_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ENETC_PCI_TYPE0 peripheral base pointers */
  #define ENETC_PCI_TYPE0_BASE_PTRS                { EMDIO0_PCI_HDR_TYPE0, ENETC0_PCI_HDR_TYPE0, ENETC1_PCI_HDR_TYPE0, ENETC2_PCI_HDR_TYPE0, TMR0_PCI_HDR_TYPE0 }
#endif

/* ENETC_PF_EMDIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral EMDIO_BASE base address */
  #define EMDIO_BASE_BASE                          (0x5CCE0000u)
  /** Peripheral EMDIO_BASE base address */
  #define EMDIO_BASE_BASE_NS                       (0x4CCE0000u)
  /** Peripheral EMDIO_BASE base pointer */
  #define EMDIO_BASE                               ((ENETC_PF_EMDIO_Type *)EMDIO_BASE_BASE)
  /** Peripheral EMDIO_BASE base pointer */
  #define EMDIO_BASE_NS                            ((ENETC_PF_EMDIO_Type *)EMDIO_BASE_BASE_NS)
  /** Array initializer of ENETC_PF_EMDIO peripheral base addresses */
  #define ENETC_PF_EMDIO_BASE_ADDRS                { EMDIO_BASE_BASE }
  /** Array initializer of ENETC_PF_EMDIO peripheral base pointers */
  #define ENETC_PF_EMDIO_BASE_PTRS                 { EMDIO_BASE }
  /** Array initializer of ENETC_PF_EMDIO peripheral base addresses */
  #define ENETC_PF_EMDIO_BASE_ADDRS_NS             { EMDIO_BASE_BASE_NS }
  /** Array initializer of ENETC_PF_EMDIO peripheral base pointers */
  #define ENETC_PF_EMDIO_BASE_PTRS_NS              { EMDIO_BASE_NS }
#else
  /** Peripheral EMDIO_BASE base address */
  #define EMDIO_BASE_BASE                          (0x4CCE0000u)
  /** Peripheral EMDIO_BASE base pointer */
  #define EMDIO_BASE                               ((ENETC_PF_EMDIO_Type *)EMDIO_BASE_BASE)
  /** Array initializer of ENETC_PF_EMDIO peripheral base addresses */
  #define ENETC_PF_EMDIO_BASE_ADDRS                { EMDIO_BASE_BASE }
  /** Array initializer of ENETC_PF_EMDIO peripheral base pointers */
  #define ENETC_PF_EMDIO_BASE_PTRS                 { EMDIO_BASE }
#endif

/* ENETC_PF_TMR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TMR0_BASE base address */
  #define TMR0_BASE_BASE                           (0x5CCC0000u)
  /** Peripheral TMR0_BASE base address */
  #define TMR0_BASE_BASE_NS                        (0x4CCC0000u)
  /** Peripheral TMR0_BASE base pointer */
  #define TMR0_BASE                                ((ENETC_PF_TMR_Type *)TMR0_BASE_BASE)
  /** Peripheral TMR0_BASE base pointer */
  #define TMR0_BASE_NS                             ((ENETC_PF_TMR_Type *)TMR0_BASE_BASE_NS)
  /** Array initializer of ENETC_PF_TMR peripheral base addresses */
  #define ENETC_PF_TMR_BASE_ADDRS                  { TMR0_BASE_BASE }
  /** Array initializer of ENETC_PF_TMR peripheral base pointers */
  #define ENETC_PF_TMR_BASE_PTRS                   { TMR0_BASE }
  /** Array initializer of ENETC_PF_TMR peripheral base addresses */
  #define ENETC_PF_TMR_BASE_ADDRS_NS               { TMR0_BASE_BASE_NS }
  /** Array initializer of ENETC_PF_TMR peripheral base pointers */
  #define ENETC_PF_TMR_BASE_PTRS_NS                { TMR0_BASE_NS }
#else
  /** Peripheral TMR0_BASE base address */
  #define TMR0_BASE_BASE                           (0x4CCC0000u)
  /** Peripheral TMR0_BASE base pointer */
  #define TMR0_BASE                                ((ENETC_PF_TMR_Type *)TMR0_BASE_BASE)
  /** Array initializer of ENETC_PF_TMR peripheral base addresses */
  #define ENETC_PF_TMR_BASE_ADDRS                  { TMR0_BASE_BASE }
  /** Array initializer of ENETC_PF_TMR peripheral base pointers */
  #define ENETC_PF_TMR_BASE_PTRS                   { TMR0_BASE }
#endif

/* ENETC_SI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_PSI base address */
  #define ENETC0_PSI_BASE                          (0x5CC00000u)
  /** Peripheral ENETC0_PSI base address */
  #define ENETC0_PSI_BASE_NS                       (0x4CC00000u)
  /** Peripheral ENETC0_PSI base pointer */
  #define ENETC0_PSI                               ((ENETC_SI_Type *)ENETC0_PSI_BASE)
  /** Peripheral ENETC0_PSI base pointer */
  #define ENETC0_PSI_NS                            ((ENETC_SI_Type *)ENETC0_PSI_BASE_NS)
  /** Peripheral ENETC1_PSI base address */
  #define ENETC1_PSI_BASE                          (0x5CC40000u)
  /** Peripheral ENETC1_PSI base address */
  #define ENETC1_PSI_BASE_NS                       (0x4CC40000u)
  /** Peripheral ENETC1_PSI base pointer */
  #define ENETC1_PSI                               ((ENETC_SI_Type *)ENETC1_PSI_BASE)
  /** Peripheral ENETC1_PSI base pointer */
  #define ENETC1_PSI_NS                            ((ENETC_SI_Type *)ENETC1_PSI_BASE_NS)
  /** Peripheral ENETC2_PSI base address */
  #define ENETC2_PSI_BASE                          (0x5CC80000u)
  /** Peripheral ENETC2_PSI base address */
  #define ENETC2_PSI_BASE_NS                       (0x4CC80000u)
  /** Peripheral ENETC2_PSI base pointer */
  #define ENETC2_PSI                               ((ENETC_SI_Type *)ENETC2_PSI_BASE)
  /** Peripheral ENETC2_PSI base pointer */
  #define ENETC2_PSI_NS                            ((ENETC_SI_Type *)ENETC2_PSI_BASE_NS)
  /** Peripheral ENETC_VSI0 base address */
  #define ENETC_VSI0_BASE                          (0x5CD20000u)
  /** Peripheral ENETC_VSI0 base address */
  #define ENETC_VSI0_BASE_NS                       (0x4CD20000u)
  /** Peripheral ENETC_VSI0 base pointer */
  #define ENETC_VSI0                               ((ENETC_SI_Type *)ENETC_VSI0_BASE)
  /** Peripheral ENETC_VSI0 base pointer */
  #define ENETC_VSI0_NS                            ((ENETC_SI_Type *)ENETC_VSI0_BASE_NS)
  /** Peripheral ENETC_VSI1 base address */
  #define ENETC_VSI1_BASE                          (0x5CD30000u)
  /** Peripheral ENETC_VSI1 base address */
  #define ENETC_VSI1_BASE_NS                       (0x4CD30000u)
  /** Peripheral ENETC_VSI1 base pointer */
  #define ENETC_VSI1                               ((ENETC_SI_Type *)ENETC_VSI1_BASE)
  /** Peripheral ENETC_VSI1 base pointer */
  #define ENETC_VSI1_NS                            ((ENETC_SI_Type *)ENETC_VSI1_BASE_NS)
  /** Peripheral ENETC_VSI2 base address */
  #define ENETC_VSI2_BASE                          (0x5CD40000u)
  /** Peripheral ENETC_VSI2 base address */
  #define ENETC_VSI2_BASE_NS                       (0x4CD40000u)
  /** Peripheral ENETC_VSI2 base pointer */
  #define ENETC_VSI2                               ((ENETC_SI_Type *)ENETC_VSI2_BASE)
  /** Peripheral ENETC_VSI2 base pointer */
  #define ENETC_VSI2_NS                            ((ENETC_SI_Type *)ENETC_VSI2_BASE_NS)
  /** Peripheral ENETC_VSI3 base address */
  #define ENETC_VSI3_BASE                          (0x5CD50000u)
  /** Peripheral ENETC_VSI3 base address */
  #define ENETC_VSI3_BASE_NS                       (0x4CD50000u)
  /** Peripheral ENETC_VSI3 base pointer */
  #define ENETC_VSI3                               ((ENETC_SI_Type *)ENETC_VSI3_BASE)
  /** Peripheral ENETC_VSI3 base pointer */
  #define ENETC_VSI3_NS                            ((ENETC_SI_Type *)ENETC_VSI3_BASE_NS)
  /** Peripheral ENETC_VSI4 base address */
  #define ENETC_VSI4_BASE                          (0x5CD60000u)
  /** Peripheral ENETC_VSI4 base address */
  #define ENETC_VSI4_BASE_NS                       (0x4CD60000u)
  /** Peripheral ENETC_VSI4 base pointer */
  #define ENETC_VSI4                               ((ENETC_SI_Type *)ENETC_VSI4_BASE)
  /** Peripheral ENETC_VSI4 base pointer */
  #define ENETC_VSI4_NS                            ((ENETC_SI_Type *)ENETC_VSI4_BASE_NS)
  /** Peripheral ENETC_VSI5 base address */
  #define ENETC_VSI5_BASE                          (0x5CD70000u)
  /** Peripheral ENETC_VSI5 base address */
  #define ENETC_VSI5_BASE_NS                       (0x4CD70000u)
  /** Peripheral ENETC_VSI5 base pointer */
  #define ENETC_VSI5                               ((ENETC_SI_Type *)ENETC_VSI5_BASE)
  /** Peripheral ENETC_VSI5 base pointer */
  #define ENETC_VSI5_NS                            ((ENETC_SI_Type *)ENETC_VSI5_BASE_NS)
  /** Array initializer of ENETC_SI peripheral base addresses */
  #define ENETC_SI_BASE_ADDRS                      { ENETC0_PSI_BASE, ENETC1_PSI_BASE, ENETC2_PSI_BASE, ENETC_VSI0_BASE, ENETC_VSI1_BASE, ENETC_VSI2_BASE, ENETC_VSI3_BASE, ENETC_VSI4_BASE, ENETC_VSI5_BASE }
  /** Array initializer of ENETC_SI peripheral base pointers */
  #define ENETC_SI_BASE_PTRS                       { ENETC0_PSI, ENETC1_PSI, ENETC2_PSI, ENETC_VSI0, ENETC_VSI1, ENETC_VSI2, ENETC_VSI3, ENETC_VSI4, ENETC_VSI5 }
  /** Array initializer of ENETC_SI peripheral base addresses */
  #define ENETC_SI_BASE_ADDRS_NS                   { ENETC0_PSI_BASE_NS, ENETC1_PSI_BASE_NS, ENETC2_PSI_BASE_NS, ENETC_VSI0_BASE_NS, ENETC_VSI1_BASE_NS, ENETC_VSI2_BASE_NS, ENETC_VSI3_BASE_NS, ENETC_VSI4_BASE_NS, ENETC_VSI5_BASE_NS }
  /** Array initializer of ENETC_SI peripheral base pointers */
  #define ENETC_SI_BASE_PTRS_NS                    { ENETC0_PSI_NS, ENETC1_PSI_NS, ENETC2_PSI_NS, ENETC_VSI0_NS, ENETC_VSI1_NS, ENETC_VSI2_NS, ENETC_VSI3_NS, ENETC_VSI4_NS, ENETC_VSI5_NS }
#else
  /** Peripheral ENETC0_PSI base address */
  #define ENETC0_PSI_BASE                          (0x4CC00000u)
  /** Peripheral ENETC0_PSI base pointer */
  #define ENETC0_PSI                               ((ENETC_SI_Type *)ENETC0_PSI_BASE)
  /** Peripheral ENETC1_PSI base address */
  #define ENETC1_PSI_BASE                          (0x4CC40000u)
  /** Peripheral ENETC1_PSI base pointer */
  #define ENETC1_PSI                               ((ENETC_SI_Type *)ENETC1_PSI_BASE)
  /** Peripheral ENETC2_PSI base address */
  #define ENETC2_PSI_BASE                          (0x4CC80000u)
  /** Peripheral ENETC2_PSI base pointer */
  #define ENETC2_PSI                               ((ENETC_SI_Type *)ENETC2_PSI_BASE)
  /** Peripheral ENETC_VSI0 base address */
  #define ENETC_VSI0_BASE                          (0x4CD20000u)
  /** Peripheral ENETC_VSI0 base pointer */
  #define ENETC_VSI0                               ((ENETC_SI_Type *)ENETC_VSI0_BASE)
  /** Peripheral ENETC_VSI1 base address */
  #define ENETC_VSI1_BASE                          (0x4CD30000u)
  /** Peripheral ENETC_VSI1 base pointer */
  #define ENETC_VSI1                               ((ENETC_SI_Type *)ENETC_VSI1_BASE)
  /** Peripheral ENETC_VSI2 base address */
  #define ENETC_VSI2_BASE                          (0x4CD40000u)
  /** Peripheral ENETC_VSI2 base pointer */
  #define ENETC_VSI2                               ((ENETC_SI_Type *)ENETC_VSI2_BASE)
  /** Peripheral ENETC_VSI3 base address */
  #define ENETC_VSI3_BASE                          (0x4CD50000u)
  /** Peripheral ENETC_VSI3 base pointer */
  #define ENETC_VSI3                               ((ENETC_SI_Type *)ENETC_VSI3_BASE)
  /** Peripheral ENETC_VSI4 base address */
  #define ENETC_VSI4_BASE                          (0x4CD60000u)
  /** Peripheral ENETC_VSI4 base pointer */
  #define ENETC_VSI4                               ((ENETC_SI_Type *)ENETC_VSI4_BASE)
  /** Peripheral ENETC_VSI5 base address */
  #define ENETC_VSI5_BASE                          (0x4CD70000u)
  /** Peripheral ENETC_VSI5 base pointer */
  #define ENETC_VSI5                               ((ENETC_SI_Type *)ENETC_VSI5_BASE)
  /** Array initializer of ENETC_SI peripheral base addresses */
  #define ENETC_SI_BASE_ADDRS                      { ENETC0_PSI_BASE, ENETC1_PSI_BASE, ENETC2_PSI_BASE, ENETC_VSI0_BASE, ENETC_VSI1_BASE, ENETC_VSI2_BASE, ENETC_VSI3_BASE, ENETC_VSI4_BASE, ENETC_VSI5_BASE }
  /** Array initializer of ENETC_SI peripheral base pointers */
  #define ENETC_SI_BASE_PTRS                       { ENETC0_PSI, ENETC1_PSI, ENETC2_PSI, ENETC_VSI0, ENETC_VSI1, ENETC_VSI2, ENETC_VSI3, ENETC_VSI4, ENETC_VSI5 }
#endif

/* ENETC_VF_PCI_TYPE0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base address */
  #define NETC_VF1_PCI_HDR_TYPE0_BASE              (0x5CA10000u)
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base address */
  #define NETC_VF1_PCI_HDR_TYPE0_BASE_NS           (0x4CA10000u)
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF1_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF1_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF1_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF1_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base address */
  #define NETC_VF2_PCI_HDR_TYPE0_BASE              (0x5CA20000u)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base address */
  #define NETC_VF2_PCI_HDR_TYPE0_BASE_NS           (0x4CA20000u)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF2_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF2_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF2_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF2_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base address */
  #define NETC_VF3_PCI_HDR_TYPE0_BASE              (0x5CA50000u)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base address */
  #define NETC_VF3_PCI_HDR_TYPE0_BASE_NS           (0x4CA50000u)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF3_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF3_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF3_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF3_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base address */
  #define NETC_VF4_PCI_HDR_TYPE0_BASE              (0x5CA60000u)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base address */
  #define NETC_VF4_PCI_HDR_TYPE0_BASE_NS           (0x4CA60000u)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF4_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF4_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF4_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF4_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base address */
  #define NETC_VF5_PCI_HDR_TYPE0_BASE              (0x5CA90000u)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base address */
  #define NETC_VF5_PCI_HDR_TYPE0_BASE_NS           (0x4CA90000u)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF5_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF5_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF5_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF5_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base address */
  #define NETC_VF6_PCI_HDR_TYPE0_BASE              (0x5CAA0000u)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base address */
  #define NETC_VF6_PCI_HDR_TYPE0_BASE_NS           (0x4CAA0000u)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF6_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF6_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF6_PCI_HDR_TYPE0_NS                ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF6_PCI_HDR_TYPE0_BASE_NS)
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base addresses */
  #define ENETC_VF_PCI_TYPE0_BASE_ADDRS            { NETC_VF1_PCI_HDR_TYPE0_BASE, NETC_VF2_PCI_HDR_TYPE0_BASE, NETC_VF3_PCI_HDR_TYPE0_BASE, NETC_VF4_PCI_HDR_TYPE0_BASE, NETC_VF5_PCI_HDR_TYPE0_BASE, NETC_VF6_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base pointers */
  #define ENETC_VF_PCI_TYPE0_BASE_PTRS             { NETC_VF1_PCI_HDR_TYPE0, NETC_VF2_PCI_HDR_TYPE0, NETC_VF3_PCI_HDR_TYPE0, NETC_VF4_PCI_HDR_TYPE0, NETC_VF5_PCI_HDR_TYPE0, NETC_VF6_PCI_HDR_TYPE0 }
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base addresses */
  #define ENETC_VF_PCI_TYPE0_BASE_ADDRS_NS         { NETC_VF1_PCI_HDR_TYPE0_BASE_NS, NETC_VF2_PCI_HDR_TYPE0_BASE_NS, NETC_VF3_PCI_HDR_TYPE0_BASE_NS, NETC_VF4_PCI_HDR_TYPE0_BASE_NS, NETC_VF5_PCI_HDR_TYPE0_BASE_NS, NETC_VF6_PCI_HDR_TYPE0_BASE_NS }
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base pointers */
  #define ENETC_VF_PCI_TYPE0_BASE_PTRS_NS          { NETC_VF1_PCI_HDR_TYPE0_NS, NETC_VF2_PCI_HDR_TYPE0_NS, NETC_VF3_PCI_HDR_TYPE0_NS, NETC_VF4_PCI_HDR_TYPE0_NS, NETC_VF5_PCI_HDR_TYPE0_NS, NETC_VF6_PCI_HDR_TYPE0_NS }
#else
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base address */
  #define NETC_VF1_PCI_HDR_TYPE0_BASE              (0x4CA10000u)
  /** Peripheral NETC_VF1_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF1_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF1_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base address */
  #define NETC_VF2_PCI_HDR_TYPE0_BASE              (0x4CA20000u)
  /** Peripheral NETC_VF2_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF2_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF2_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base address */
  #define NETC_VF3_PCI_HDR_TYPE0_BASE              (0x4CA50000u)
  /** Peripheral NETC_VF3_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF3_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF3_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base address */
  #define NETC_VF4_PCI_HDR_TYPE0_BASE              (0x4CA60000u)
  /** Peripheral NETC_VF4_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF4_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF4_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base address */
  #define NETC_VF5_PCI_HDR_TYPE0_BASE              (0x4CA90000u)
  /** Peripheral NETC_VF5_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF5_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF5_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base address */
  #define NETC_VF6_PCI_HDR_TYPE0_BASE              (0x4CAA0000u)
  /** Peripheral NETC_VF6_PCI_HDR_TYPE0 base pointer */
  #define NETC_VF6_PCI_HDR_TYPE0                   ((ENETC_VF_PCI_TYPE0_Type *)NETC_VF6_PCI_HDR_TYPE0_BASE)
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base addresses */
  #define ENETC_VF_PCI_TYPE0_BASE_ADDRS            { NETC_VF1_PCI_HDR_TYPE0_BASE, NETC_VF2_PCI_HDR_TYPE0_BASE, NETC_VF3_PCI_HDR_TYPE0_BASE, NETC_VF4_PCI_HDR_TYPE0_BASE, NETC_VF5_PCI_HDR_TYPE0_BASE, NETC_VF6_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ENETC_VF_PCI_TYPE0 peripheral base pointers */
  #define ENETC_VF_PCI_TYPE0_BASE_PTRS             { NETC_VF1_PCI_HDR_TYPE0, NETC_VF2_PCI_HDR_TYPE0, NETC_VF3_PCI_HDR_TYPE0, NETC_VF4_PCI_HDR_TYPE0, NETC_VF5_PCI_HDR_TYPE0, NETC_VF6_PCI_HDR_TYPE0 }
#endif

/* ENET_PHY_MAC_ADAPTER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENET_PHY_MAC_ADAPTER base address */
  #define ENET_PHY_MAC_ADAPTER_BASE                (0x103E0000u)
  /** Peripheral ENET_PHY_MAC_ADAPTER base address */
  #define ENET_PHY_MAC_ADAPTER_BASE_NS             (0x3E0000u)
  /** Peripheral ENET_PHY_MAC_ADAPTER base pointer */
  #define ENET_PHY_MAC_ADAPTER                     ((ENET_PHY_MAC_ADAPTER_Type *)ENET_PHY_MAC_ADAPTER_BASE)
  /** Peripheral ENET_PHY_MAC_ADAPTER base pointer */
  #define ENET_PHY_MAC_ADAPTER_NS                  ((ENET_PHY_MAC_ADAPTER_Type *)ENET_PHY_MAC_ADAPTER_BASE_NS)
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base addresses */
  #define ENET_PHY_MAC_ADAPTER_BASE_ADDRS          { ENET_PHY_MAC_ADAPTER_BASE }
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base pointers */
  #define ENET_PHY_MAC_ADAPTER_BASE_PTRS           { ENET_PHY_MAC_ADAPTER }
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base addresses */
  #define ENET_PHY_MAC_ADAPTER_BASE_ADDRS_NS       { ENET_PHY_MAC_ADAPTER_BASE_NS }
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base pointers */
  #define ENET_PHY_MAC_ADAPTER_BASE_PTRS_NS        { ENET_PHY_MAC_ADAPTER_NS }
#else
  /** Peripheral ENET_PHY_MAC_ADAPTER base address */
  #define ENET_PHY_MAC_ADAPTER_BASE                (0x3E0000u)
  /** Peripheral ENET_PHY_MAC_ADAPTER base pointer */
  #define ENET_PHY_MAC_ADAPTER                     ((ENET_PHY_MAC_ADAPTER_Type *)ENET_PHY_MAC_ADAPTER_BASE)
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base addresses */
  #define ENET_PHY_MAC_ADAPTER_BASE_ADDRS          { ENET_PHY_MAC_ADAPTER_BASE }
  /** Array initializer of ENET_PHY_MAC_ADAPTER peripheral base pointers */
  #define ENET_PHY_MAC_ADAPTER_BASE_PTRS           { ENET_PHY_MAC_ADAPTER }
#endif

/* ENET_PHY_PMA_MMD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENET_PHY_PMA_MMD base address */
  #define ENET_PHY_PMA_MMD_BASE                    (0x10020000u)
  /** Peripheral ENET_PHY_PMA_MMD base address */
  #define ENET_PHY_PMA_MMD_BASE_NS                 (0x20000u)
  /** Peripheral ENET_PHY_PMA_MMD base pointer */
  #define ENET_PHY_PMA_MMD                         ((ENET_PHY_PMA_MMD_Type *)ENET_PHY_PMA_MMD_BASE)
  /** Peripheral ENET_PHY_PMA_MMD base pointer */
  #define ENET_PHY_PMA_MMD_NS                      ((ENET_PHY_PMA_MMD_Type *)ENET_PHY_PMA_MMD_BASE_NS)
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base addresses */
  #define ENET_PHY_PMA_MMD_BASE_ADDRS              { ENET_PHY_PMA_MMD_BASE }
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base pointers */
  #define ENET_PHY_PMA_MMD_BASE_PTRS               { ENET_PHY_PMA_MMD }
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base addresses */
  #define ENET_PHY_PMA_MMD_BASE_ADDRS_NS           { ENET_PHY_PMA_MMD_BASE_NS }
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base pointers */
  #define ENET_PHY_PMA_MMD_BASE_PTRS_NS            { ENET_PHY_PMA_MMD_NS }
#else
  /** Peripheral ENET_PHY_PMA_MMD base address */
  #define ENET_PHY_PMA_MMD_BASE                    (0x20000u)
  /** Peripheral ENET_PHY_PMA_MMD base pointer */
  #define ENET_PHY_PMA_MMD                         ((ENET_PHY_PMA_MMD_Type *)ENET_PHY_PMA_MMD_BASE)
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base addresses */
  #define ENET_PHY_PMA_MMD_BASE_ADDRS              { ENET_PHY_PMA_MMD_BASE }
  /** Array initializer of ENET_PHY_PMA_MMD peripheral base pointers */
  #define ENET_PHY_PMA_MMD_BASE_PTRS               { ENET_PHY_PMA_MMD }
#endif

/* ENET_PHY_VS_MII_MMD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENET_PHY_VS_MII_MMD base address */
  #define ENET_PHY_VS_MII_MMD_BASE                 (0x103E0000u)
  /** Peripheral ENET_PHY_VS_MII_MMD base address */
  #define ENET_PHY_VS_MII_MMD_BASE_NS              (0x3E0000u)
  /** Peripheral ENET_PHY_VS_MII_MMD base pointer */
  #define ENET_PHY_VS_MII_MMD                      ((ENET_PHY_VS_MII_MMD_Type *)ENET_PHY_VS_MII_MMD_BASE)
  /** Peripheral ENET_PHY_VS_MII_MMD base pointer */
  #define ENET_PHY_VS_MII_MMD_NS                   ((ENET_PHY_VS_MII_MMD_Type *)ENET_PHY_VS_MII_MMD_BASE_NS)
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base addresses */
  #define ENET_PHY_VS_MII_MMD_BASE_ADDRS           { ENET_PHY_VS_MII_MMD_BASE }
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base pointers */
  #define ENET_PHY_VS_MII_MMD_BASE_PTRS            { ENET_PHY_VS_MII_MMD }
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base addresses */
  #define ENET_PHY_VS_MII_MMD_BASE_ADDRS_NS        { ENET_PHY_VS_MII_MMD_BASE_NS }
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base pointers */
  #define ENET_PHY_VS_MII_MMD_BASE_PTRS_NS         { ENET_PHY_VS_MII_MMD_NS }
#else
  /** Peripheral ENET_PHY_VS_MII_MMD base address */
  #define ENET_PHY_VS_MII_MMD_BASE                 (0x3E0000u)
  /** Peripheral ENET_PHY_VS_MII_MMD base pointer */
  #define ENET_PHY_VS_MII_MMD                      ((ENET_PHY_VS_MII_MMD_Type *)ENET_PHY_VS_MII_MMD_BASE)
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base addresses */
  #define ENET_PHY_VS_MII_MMD_BASE_ADDRS           { ENET_PHY_VS_MII_MMD_BASE }
  /** Array initializer of ENET_PHY_VS_MII_MMD peripheral base pointers */
  #define ENET_PHY_VS_MII_MMD_BASE_PTRS            { ENET_PHY_VS_MII_MMD }
#endif

/* ENET_PHY_XS_PCS_MMD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENET_PHY_XS_PCS_MMD base address */
  #define ENET_PHY_XS_PCS_MMD_BASE                 (0x10060000u)
  /** Peripheral ENET_PHY_XS_PCS_MMD base address */
  #define ENET_PHY_XS_PCS_MMD_BASE_NS              (0x60000u)
  /** Peripheral ENET_PHY_XS_PCS_MMD base pointer */
  #define ENET_PHY_XS_PCS_MMD                      ((ENET_PHY_XS_PCS_MMD_Type *)ENET_PHY_XS_PCS_MMD_BASE)
  /** Peripheral ENET_PHY_XS_PCS_MMD base pointer */
  #define ENET_PHY_XS_PCS_MMD_NS                   ((ENET_PHY_XS_PCS_MMD_Type *)ENET_PHY_XS_PCS_MMD_BASE_NS)
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base addresses */
  #define ENET_PHY_XS_PCS_MMD_BASE_ADDRS           { ENET_PHY_XS_PCS_MMD_BASE }
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base pointers */
  #define ENET_PHY_XS_PCS_MMD_BASE_PTRS            { ENET_PHY_XS_PCS_MMD }
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base addresses */
  #define ENET_PHY_XS_PCS_MMD_BASE_ADDRS_NS        { ENET_PHY_XS_PCS_MMD_BASE_NS }
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base pointers */
  #define ENET_PHY_XS_PCS_MMD_BASE_PTRS_NS         { ENET_PHY_XS_PCS_MMD_NS }
#else
  /** Peripheral ENET_PHY_XS_PCS_MMD base address */
  #define ENET_PHY_XS_PCS_MMD_BASE                 (0x60000u)
  /** Peripheral ENET_PHY_XS_PCS_MMD base pointer */
  #define ENET_PHY_XS_PCS_MMD                      ((ENET_PHY_XS_PCS_MMD_Type *)ENET_PHY_XS_PCS_MMD_BASE)
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base addresses */
  #define ENET_PHY_XS_PCS_MMD_BASE_ADDRS           { ENET_PHY_XS_PCS_MMD_BASE }
  /** Array initializer of ENET_PHY_XS_PCS_MMD peripheral base pointers */
  #define ENET_PHY_XS_PCS_MMD_BASE_PTRS            { ENET_PHY_XS_PCS_MMD }
#endif

/* ERM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral M7__ERM base address */
  #define M7__ERM_BASE                             (0x5A070000u)
  /** Peripheral M7__ERM base address */
  #define M7__ERM_BASE_NS                          (0x4A070000u)
  /** Peripheral M7__ERM base pointer */
  #define M7__ERM                                  ((ERM_Type *)M7__ERM_BASE)
  /** Peripheral M7__ERM base pointer */
  #define M7__ERM_NS                               ((ERM_Type *)M7__ERM_BASE_NS)
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS                           { M7__ERM_BASE }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS                            { M7__ERM }
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS_NS                        { M7__ERM_BASE_NS }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS_NS                         { M7__ERM_NS }
#else
  /** Peripheral M7__ERM base address */
  #define M7__ERM_BASE                             (0x4A070000u)
  /** Peripheral M7__ERM base pointer */
  #define M7__ERM                                  ((ERM_Type *)M7__ERM_BASE)
  /** Array initializer of ERM peripheral base addresses */
  #define ERM_BASE_ADDRS                           { M7__ERM_BASE }
  /** Array initializer of ERM peripheral base pointers */
  #define ERM_BASE_PTRS                            { M7__ERM }
#endif

/* FLEXIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FLEXIO1 base address */
  #define FLEXIO1_BASE                             (0x525C0000u)
  /** Peripheral FLEXIO1 base address */
  #define FLEXIO1_BASE_NS                          (0x425C0000u)
  /** Peripheral FLEXIO1 base pointer */
  #define FLEXIO1                                  ((FLEXIO_Type *)FLEXIO1_BASE)
  /** Peripheral FLEXIO1 base pointer */
  #define FLEXIO1_NS                               ((FLEXIO_Type *)FLEXIO1_BASE_NS)
  /** Peripheral FLEXIO2 base address */
  #define FLEXIO2_BASE                             (0x525D0000u)
  /** Peripheral FLEXIO2 base address */
  #define FLEXIO2_BASE_NS                          (0x425D0000u)
  /** Peripheral FLEXIO2 base pointer */
  #define FLEXIO2                                  ((FLEXIO_Type *)FLEXIO2_BASE)
  /** Peripheral FLEXIO2 base pointer */
  #define FLEXIO2_NS                               ((FLEXIO_Type *)FLEXIO2_BASE_NS)
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS                        { 0u, FLEXIO1_BASE, FLEXIO2_BASE }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS                         { (FLEXIO_Type *)0u, FLEXIO1, FLEXIO2 }
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS_NS                     { 0u, FLEXIO1_BASE_NS, FLEXIO2_BASE_NS }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS_NS                      { (FLEXIO_Type *)0u, FLEXIO1_NS, FLEXIO2_NS }
#else
  /** Peripheral FLEXIO1 base address */
  #define FLEXIO1_BASE                             (0x425C0000u)
  /** Peripheral FLEXIO1 base pointer */
  #define FLEXIO1                                  ((FLEXIO_Type *)FLEXIO1_BASE)
  /** Peripheral FLEXIO2 base address */
  #define FLEXIO2_BASE                             (0x425D0000u)
  /** Peripheral FLEXIO2 base pointer */
  #define FLEXIO2                                  ((FLEXIO_Type *)FLEXIO2_BASE)
  /** Array initializer of FLEXIO peripheral base addresses */
  #define FLEXIO_BASE_ADDRS                        { 0u, FLEXIO1_BASE, FLEXIO2_BASE }
  /** Array initializer of FLEXIO peripheral base pointers */
  #define FLEXIO_BASE_PTRS                         { (FLEXIO_Type *)0u, FLEXIO1, FLEXIO2 }
#endif
/** Interrupt vectors for the FLEXIO peripheral type */
#define FLEXIO_IRQS                              { NotAvail_IRQn, FLEXIO1_IRQn, FLEXIO2_IRQn }

/* FLEXSPI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral FLEXSPI base address */
  #define FLEXSPI_BASE                             (0x525E0000u)
  /** Peripheral FLEXSPI base address */
  #define FLEXSPI_BASE_NS                          (0x425E0000u)
  /** Peripheral FLEXSPI base pointer */
  #define FLEXSPI                                  ((FLEXSPI_Type *)FLEXSPI_BASE)
  /** Peripheral FLEXSPI base pointer */
  #define FLEXSPI_NS                               ((FLEXSPI_Type *)FLEXSPI_BASE_NS)
  /** Array initializer of FLEXSPI peripheral base addresses */
  #define FLEXSPI_BASE_ADDRS                       { FLEXSPI_BASE }
  /** Array initializer of FLEXSPI peripheral base pointers */
  #define FLEXSPI_BASE_PTRS                        { FLEXSPI }
  /** Array initializer of FLEXSPI peripheral base addresses */
  #define FLEXSPI_BASE_ADDRS_NS                    { FLEXSPI_BASE_NS }
  /** Array initializer of FLEXSPI peripheral base pointers */
  #define FLEXSPI_BASE_PTRS_NS                     { FLEXSPI_NS }
#else
  /** Peripheral FLEXSPI base address */
  #define FLEXSPI_BASE                             (0x425E0000u)
  /** Peripheral FLEXSPI base pointer */
  #define FLEXSPI                                  ((FLEXSPI_Type *)FLEXSPI_BASE)
  /** Array initializer of FLEXSPI peripheral base addresses */
  #define FLEXSPI_BASE_ADDRS                       { FLEXSPI_BASE }
  /** Array initializer of FLEXSPI peripheral base pointers */
  #define FLEXSPI_BASE_PTRS                        { FLEXSPI }
#endif
/** Interrupt vectors for the FLEXSPI peripheral type */
#define FLEXSPI_IRQS                             { FlexSPI1_IRQn }
/** FlexSPI AMBA memory base alias count */
#define FLEXSPI_AMBA_BASE_ALIAS_COUNT     (1)
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** FlexSPI AMBA base address array */
  #define FlexSPI_AMBA_BASE_ARRAY                  { {0x38000000u} }
  #define FlexSPI_AMBA_BASE_ARRAY_NS               { {0x28000000u} }
  /** FlexSPI AMBA end address array */
  #define FlexSPI_AMBA_END_ARRAY                   { {0x3FFFFFFFu} }
  #define FlexSPI_AMBA_END_ARRAY_NS                { {0x2FFFFFFFu} }
  /* FlexSPI AMBA address. */
  #define FlexSPI_AMBA_BASE                        (0x38000000u)
  #define FlexSPI_AMBA_BASE_NS                     (0x28000000u)
  /* FlexSPI ASFM address. */
  #define FlexSPI_ASFM_BASE                        (0x38000000u)
  #define FlexSPI_ASFM_BASE_NS                     (0x28000000u)
  /* Base Address of AHB address space mapped to IP RX FIFO. */
  #define FlexSPI_ARDF_BASE                        (0x57420000u)
  #define FlexSPI_ARDF_BASE_NS                     (0x47420000u)
  /* Base Address of AHB address space mapped to IP TX FIFO. */
  #define FlexSPI_ATDF_BASE                        (0x57430000u)
  #define FlexSPI_ATDF_BASE_NS                     (0x47430000u)
#else
  /** FlexSPI AMBA base address array */
  #define FlexSPI_AMBA_BASE_ARRAY                  { {0x28000000u} }
  /** FlexSPI AMBA end address array */
  #define FlexSPI_AMBA_END_ARRAY                   { {0x2FFFFFFFu} }
  /* FlexSPI AMBA address. */
  #define FlexSPI_AMBA_BASE                        (0x28000000u)
  /* FlexSPI ASFM address. */
  #define FlexSPI_ASFM_BASE                        (0x28000000u)
  /* Base Address of AHB address space mapped to IP RX FIFO. */
  #define FlexSPI_ARDF_BASE                        (0x47420000u)
  /* Base Address of AHB address space mapped to IP TX FIFO. */
  #define FlexSPI_ATDF_BASE                        (0x47430000u)
#endif


/* GCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__GCM base address */
  #define CAMERA__ISP__GCM_BASE                    (0x5AE01600u)
  /** Peripheral CAMERA__ISP__GCM base address */
  #define CAMERA__ISP__GCM_BASE_NS                 (0x4AE01600u)
  /** Peripheral CAMERA__ISP__GCM base pointer */
  #define CAMERA__ISP__GCM                         ((GCM_Type *)CAMERA__ISP__GCM_BASE)
  /** Peripheral CAMERA__ISP__GCM base pointer */
  #define CAMERA__ISP__GCM_NS                      ((GCM_Type *)CAMERA__ISP__GCM_BASE_NS)
  /** Array initializer of GCM peripheral base addresses */
  #define GCM_BASE_ADDRS                           { CAMERA__ISP__GCM_BASE }
  /** Array initializer of GCM peripheral base pointers */
  #define GCM_BASE_PTRS                            { CAMERA__ISP__GCM }
  /** Array initializer of GCM peripheral base addresses */
  #define GCM_BASE_ADDRS_NS                        { CAMERA__ISP__GCM_BASE_NS }
  /** Array initializer of GCM peripheral base pointers */
  #define GCM_BASE_PTRS_NS                         { CAMERA__ISP__GCM_NS }
#else
  /** Peripheral CAMERA__ISP__GCM base address */
  #define CAMERA__ISP__GCM_BASE                    (0x4AE01600u)
  /** Peripheral CAMERA__ISP__GCM base pointer */
  #define CAMERA__ISP__GCM                         ((GCM_Type *)CAMERA__ISP__GCM_BASE)
  /** Array initializer of GCM peripheral base addresses */
  #define GCM_BASE_ADDRS                           { CAMERA__ISP__GCM_BASE }
  /** Array initializer of GCM peripheral base pointers */
  #define GCM_BASE_PTRS                            { CAMERA__ISP__GCM }
#endif

/* GPC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPC_CTRL_CA55_0 base address */
  #define GPC_CTRL_CA55_0_BASE                     (0x54471000u)
  /** Peripheral GPC_CTRL_CA55_0 base address */
  #define GPC_CTRL_CA55_0_BASE_NS                  (0x44471000u)
  /** Peripheral GPC_CTRL_CA55_0 base pointer */
  #define GPC_CTRL_CA55_0                          ((GPC_Type *)GPC_CTRL_CA55_0_BASE)
  /** Peripheral GPC_CTRL_CA55_0 base pointer */
  #define GPC_CTRL_CA55_0_NS                       ((GPC_Type *)GPC_CTRL_CA55_0_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_1 base address */
  #define GPC_CTRL_CA55_1_BASE                     (0x54471800u)
  /** Peripheral GPC_CTRL_CA55_1 base address */
  #define GPC_CTRL_CA55_1_BASE_NS                  (0x44471800u)
  /** Peripheral GPC_CTRL_CA55_1 base pointer */
  #define GPC_CTRL_CA55_1                          ((GPC_Type *)GPC_CTRL_CA55_1_BASE)
  /** Peripheral GPC_CTRL_CA55_1 base pointer */
  #define GPC_CTRL_CA55_1_NS                       ((GPC_Type *)GPC_CTRL_CA55_1_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_2 base address */
  #define GPC_CTRL_CA55_2_BASE                     (0x54472000u)
  /** Peripheral GPC_CTRL_CA55_2 base address */
  #define GPC_CTRL_CA55_2_BASE_NS                  (0x44472000u)
  /** Peripheral GPC_CTRL_CA55_2 base pointer */
  #define GPC_CTRL_CA55_2                          ((GPC_Type *)GPC_CTRL_CA55_2_BASE)
  /** Peripheral GPC_CTRL_CA55_2 base pointer */
  #define GPC_CTRL_CA55_2_NS                       ((GPC_Type *)GPC_CTRL_CA55_2_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_3 base address */
  #define GPC_CTRL_CA55_3_BASE                     (0x54472800u)
  /** Peripheral GPC_CTRL_CA55_3 base address */
  #define GPC_CTRL_CA55_3_BASE_NS                  (0x44472800u)
  /** Peripheral GPC_CTRL_CA55_3 base pointer */
  #define GPC_CTRL_CA55_3                          ((GPC_Type *)GPC_CTRL_CA55_3_BASE)
  /** Peripheral GPC_CTRL_CA55_3 base pointer */
  #define GPC_CTRL_CA55_3_NS                       ((GPC_Type *)GPC_CTRL_CA55_3_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_4 base address */
  #define GPC_CTRL_CA55_4_BASE                     (0x54473000u)
  /** Peripheral GPC_CTRL_CA55_4 base address */
  #define GPC_CTRL_CA55_4_BASE_NS                  (0x44473000u)
  /** Peripheral GPC_CTRL_CA55_4 base pointer */
  #define GPC_CTRL_CA55_4                          ((GPC_Type *)GPC_CTRL_CA55_4_BASE)
  /** Peripheral GPC_CTRL_CA55_4 base pointer */
  #define GPC_CTRL_CA55_4_NS                       ((GPC_Type *)GPC_CTRL_CA55_4_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_5 base address */
  #define GPC_CTRL_CA55_5_BASE                     (0x54473800u)
  /** Peripheral GPC_CTRL_CA55_5 base address */
  #define GPC_CTRL_CA55_5_BASE_NS                  (0x44473800u)
  /** Peripheral GPC_CTRL_CA55_5 base pointer */
  #define GPC_CTRL_CA55_5                          ((GPC_Type *)GPC_CTRL_CA55_5_BASE)
  /** Peripheral GPC_CTRL_CA55_5 base pointer */
  #define GPC_CTRL_CA55_5_NS                       ((GPC_Type *)GPC_CTRL_CA55_5_BASE_NS)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base address */
  #define GPC_CTRL_CA55_CLUSTER_BASE               (0x54474000u)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base address */
  #define GPC_CTRL_CA55_CLUSTER_BASE_NS            (0x44474000u)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base pointer */
  #define GPC_CTRL_CA55_CLUSTER                    ((GPC_Type *)GPC_CTRL_CA55_CLUSTER_BASE)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base pointer */
  #define GPC_CTRL_CA55_CLUSTER_NS                 ((GPC_Type *)GPC_CTRL_CA55_CLUSTER_BASE_NS)
  /** Array initializer of GPC peripheral base addresses */
  #define GPC_BASE_ADDRS                           { 0u, 0u, GPC_CTRL_CA55_0_BASE, GPC_CTRL_CA55_1_BASE, GPC_CTRL_CA55_2_BASE, GPC_CTRL_CA55_3_BASE, GPC_CTRL_CA55_4_BASE, GPC_CTRL_CA55_5_BASE, GPC_CTRL_CA55_CLUSTER_BASE }
  /** Array initializer of GPC peripheral base pointers */
  #define GPC_BASE_PTRS                            { (GPC_Type *)0u, (GPC_Type *)0u, GPC_CTRL_CA55_0, GPC_CTRL_CA55_1, GPC_CTRL_CA55_2, GPC_CTRL_CA55_3, GPC_CTRL_CA55_4, GPC_CTRL_CA55_5, GPC_CTRL_CA55_CLUSTER }
  /** Array initializer of GPC peripheral base addresses */
  #define GPC_BASE_ADDRS_NS                        { 0u, 0u, GPC_CTRL_CA55_0_BASE_NS, GPC_CTRL_CA55_1_BASE_NS, GPC_CTRL_CA55_2_BASE_NS, GPC_CTRL_CA55_3_BASE_NS, GPC_CTRL_CA55_4_BASE_NS, GPC_CTRL_CA55_5_BASE_NS, GPC_CTRL_CA55_CLUSTER_BASE_NS }
  /** Array initializer of GPC peripheral base pointers */
  #define GPC_BASE_PTRS_NS                         { (GPC_Type *)0u, (GPC_Type *)0u, GPC_CTRL_CA55_0_NS, GPC_CTRL_CA55_1_NS, GPC_CTRL_CA55_2_NS, GPC_CTRL_CA55_3_NS, GPC_CTRL_CA55_4_NS, GPC_CTRL_CA55_5_NS, GPC_CTRL_CA55_CLUSTER_NS }
#else
  /** Peripheral GPC_CTRL_CA55_0 base address */
  #define GPC_CTRL_CA55_0_BASE                     (0x44471000u)
  /** Peripheral GPC_CTRL_CA55_0 base pointer */
  #define GPC_CTRL_CA55_0                          ((GPC_Type *)GPC_CTRL_CA55_0_BASE)
  /** Peripheral GPC_CTRL_CA55_1 base address */
  #define GPC_CTRL_CA55_1_BASE                     (0x44471800u)
  /** Peripheral GPC_CTRL_CA55_1 base pointer */
  #define GPC_CTRL_CA55_1                          ((GPC_Type *)GPC_CTRL_CA55_1_BASE)
  /** Peripheral GPC_CTRL_CA55_2 base address */
  #define GPC_CTRL_CA55_2_BASE                     (0x44472000u)
  /** Peripheral GPC_CTRL_CA55_2 base pointer */
  #define GPC_CTRL_CA55_2                          ((GPC_Type *)GPC_CTRL_CA55_2_BASE)
  /** Peripheral GPC_CTRL_CA55_3 base address */
  #define GPC_CTRL_CA55_3_BASE                     (0x44472800u)
  /** Peripheral GPC_CTRL_CA55_3 base pointer */
  #define GPC_CTRL_CA55_3                          ((GPC_Type *)GPC_CTRL_CA55_3_BASE)
  /** Peripheral GPC_CTRL_CA55_4 base address */
  #define GPC_CTRL_CA55_4_BASE                     (0x44473000u)
  /** Peripheral GPC_CTRL_CA55_4 base pointer */
  #define GPC_CTRL_CA55_4                          ((GPC_Type *)GPC_CTRL_CA55_4_BASE)
  /** Peripheral GPC_CTRL_CA55_5 base address */
  #define GPC_CTRL_CA55_5_BASE                     (0x44473800u)
  /** Peripheral GPC_CTRL_CA55_5 base pointer */
  #define GPC_CTRL_CA55_5                          ((GPC_Type *)GPC_CTRL_CA55_5_BASE)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base address */
  #define GPC_CTRL_CA55_CLUSTER_BASE               (0x44474000u)
  /** Peripheral GPC_CTRL_CA55_CLUSTER base pointer */
  #define GPC_CTRL_CA55_CLUSTER                    ((GPC_Type *)GPC_CTRL_CA55_CLUSTER_BASE)
  /** Array initializer of GPC peripheral base addresses */
  #define GPC_BASE_ADDRS                           { 0u, 0u, GPC_CTRL_CA55_0_BASE, GPC_CTRL_CA55_1_BASE, GPC_CTRL_CA55_2_BASE, GPC_CTRL_CA55_3_BASE, GPC_CTRL_CA55_4_BASE, GPC_CTRL_CA55_5_BASE, GPC_CTRL_CA55_CLUSTER_BASE }
  /** Array initializer of GPC peripheral base pointers */
  #define GPC_BASE_PTRS                            { (GPC_Type *)0u, (GPC_Type *)0u, GPC_CTRL_CA55_0, GPC_CTRL_CA55_1, GPC_CTRL_CA55_2, GPC_CTRL_CA55_3, GPC_CTRL_CA55_4, GPC_CTRL_CA55_5, GPC_CTRL_CA55_CLUSTER }
#endif

/* GPC_GLOBAL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base address */
  #define CCMSRCGPC__GPC__GPC_GLOBAL_BASE          (0x54474800u)
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base address */
  #define CCMSRCGPC__GPC__GPC_GLOBAL_BASE_NS       (0x44474800u)
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base pointer */
  #define CCMSRCGPC__GPC__GPC_GLOBAL               ((GPC_GLOBAL_Type *)CCMSRCGPC__GPC__GPC_GLOBAL_BASE)
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base pointer */
  #define CCMSRCGPC__GPC__GPC_GLOBAL_NS            ((GPC_GLOBAL_Type *)CCMSRCGPC__GPC__GPC_GLOBAL_BASE_NS)
  /** Array initializer of GPC_GLOBAL peripheral base addresses */
  #define GPC_GLOBAL_BASE_ADDRS                    { CCMSRCGPC__GPC__GPC_GLOBAL_BASE }
  /** Array initializer of GPC_GLOBAL peripheral base pointers */
  #define GPC_GLOBAL_BASE_PTRS                     { CCMSRCGPC__GPC__GPC_GLOBAL }
  /** Array initializer of GPC_GLOBAL peripheral base addresses */
  #define GPC_GLOBAL_BASE_ADDRS_NS                 { CCMSRCGPC__GPC__GPC_GLOBAL_BASE_NS }
  /** Array initializer of GPC_GLOBAL peripheral base pointers */
  #define GPC_GLOBAL_BASE_PTRS_NS                  { CCMSRCGPC__GPC__GPC_GLOBAL_NS }
#else
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base address */
  #define CCMSRCGPC__GPC__GPC_GLOBAL_BASE          (0x44474800u)
  /** Peripheral CCMSRCGPC__GPC__GPC_GLOBAL base pointer */
  #define CCMSRCGPC__GPC__GPC_GLOBAL               ((GPC_GLOBAL_Type *)CCMSRCGPC__GPC__GPC_GLOBAL_BASE)
  /** Array initializer of GPC_GLOBAL peripheral base addresses */
  #define GPC_GLOBAL_BASE_ADDRS                    { CCMSRCGPC__GPC__GPC_GLOBAL_BASE }
  /** Array initializer of GPC_GLOBAL peripheral base pointers */
  #define GPC_GLOBAL_BASE_PTRS                     { CCMSRCGPC__GPC__GPC_GLOBAL }
#endif

/* GPU_BLK_CTRL_GPUMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__BLK_CTRL_GPUMIX base address */
  #define GPU__BLK_CTRL_GPUMIX_BASE                (0x5D810000u)
  /** Peripheral GPU__BLK_CTRL_GPUMIX base address */
  #define GPU__BLK_CTRL_GPUMIX_BASE_NS             (0x4D810000u)
  /** Peripheral GPU__BLK_CTRL_GPUMIX base pointer */
  #define GPU__BLK_CTRL_GPUMIX                     ((GPU_BLK_CTRL_GPUMIX_Type *)GPU__BLK_CTRL_GPUMIX_BASE)
  /** Peripheral GPU__BLK_CTRL_GPUMIX base pointer */
  #define GPU__BLK_CTRL_GPUMIX_NS                  ((GPU_BLK_CTRL_GPUMIX_Type *)GPU__BLK_CTRL_GPUMIX_BASE_NS)
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base addresses */
  #define GPU_BLK_CTRL_GPUMIX_BASE_ADDRS           { GPU__BLK_CTRL_GPUMIX_BASE }
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base pointers */
  #define GPU_BLK_CTRL_GPUMIX_BASE_PTRS            { GPU__BLK_CTRL_GPUMIX }
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base addresses */
  #define GPU_BLK_CTRL_GPUMIX_BASE_ADDRS_NS        { GPU__BLK_CTRL_GPUMIX_BASE_NS }
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base pointers */
  #define GPU_BLK_CTRL_GPUMIX_BASE_PTRS_NS         { GPU__BLK_CTRL_GPUMIX_NS }
#else
  /** Peripheral GPU__BLK_CTRL_GPUMIX base address */
  #define GPU__BLK_CTRL_GPUMIX_BASE                (0x4D810000u)
  /** Peripheral GPU__BLK_CTRL_GPUMIX base pointer */
  #define GPU__BLK_CTRL_GPUMIX                     ((GPU_BLK_CTRL_GPUMIX_Type *)GPU__BLK_CTRL_GPUMIX_BASE)
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base addresses */
  #define GPU_BLK_CTRL_GPUMIX_BASE_ADDRS           { GPU__BLK_CTRL_GPUMIX_BASE }
  /** Array initializer of GPU_BLK_CTRL_GPUMIX peripheral base pointers */
  #define GPU_BLK_CTRL_GPUMIX_BASE_PTRS            { GPU__BLK_CTRL_GPUMIX }
#endif

/* GPU_REGISTERS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__REG__GPU_REGISTERS base address */
  #define GPU__REG__GPU_REGISTERS_BASE             (0x5D900000u)
  /** Peripheral GPU__REG__GPU_REGISTERS base address */
  #define GPU__REG__GPU_REGISTERS_BASE_NS          (0x4D900000u)
  /** Peripheral GPU__REG__GPU_REGISTERS base pointer */
  #define GPU__REG__GPU_REGISTERS                  ((GPU_REGISTERS_Type *)GPU__REG__GPU_REGISTERS_BASE)
  /** Peripheral GPU__REG__GPU_REGISTERS base pointer */
  #define GPU__REG__GPU_REGISTERS_NS               ((GPU_REGISTERS_Type *)GPU__REG__GPU_REGISTERS_BASE_NS)
  /** Array initializer of GPU_REGISTERS peripheral base addresses */
  #define GPU_REGISTERS_BASE_ADDRS                 { GPU__REG__GPU_REGISTERS_BASE }
  /** Array initializer of GPU_REGISTERS peripheral base pointers */
  #define GPU_REGISTERS_BASE_PTRS                  { GPU__REG__GPU_REGISTERS }
  /** Array initializer of GPU_REGISTERS peripheral base addresses */
  #define GPU_REGISTERS_BASE_ADDRS_NS              { GPU__REG__GPU_REGISTERS_BASE_NS }
  /** Array initializer of GPU_REGISTERS peripheral base pointers */
  #define GPU_REGISTERS_BASE_PTRS_NS               { GPU__REG__GPU_REGISTERS_NS }
#else
  /** Peripheral GPU__REG__GPU_REGISTERS base address */
  #define GPU__REG__GPU_REGISTERS_BASE             (0x4D900000u)
  /** Peripheral GPU__REG__GPU_REGISTERS base pointer */
  #define GPU__REG__GPU_REGISTERS                  ((GPU_REGISTERS_Type *)GPU__REG__GPU_REGISTERS_BASE)
  /** Array initializer of GPU_REGISTERS peripheral base addresses */
  #define GPU_REGISTERS_BASE_ADDRS                 { GPU__REG__GPU_REGISTERS_BASE }
  /** Array initializer of GPU_REGISTERS peripheral base pointers */
  #define GPU_REGISTERS_BASE_PTRS                  { GPU__REG__GPU_REGISTERS }
#endif

/* GPU_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__TCU base address */
  #define GPU__TCU_BASE                            (0x5D800000u)
  /** Peripheral GPU__TCU base address */
  #define GPU__TCU_BASE_NS                         (0x4D800000u)
  /** Peripheral GPU__TCU base pointer */
  #define GPU__TCU                                 ((GPU_TCU_Type *)GPU__TCU_BASE)
  /** Peripheral GPU__TCU base pointer */
  #define GPU__TCU_NS                              ((GPU_TCU_Type *)GPU__TCU_BASE_NS)
  /** Array initializer of GPU_TCU peripheral base addresses */
  #define GPU_TCU_BASE_ADDRS                       { GPU__TCU_BASE }
  /** Array initializer of GPU_TCU peripheral base pointers */
  #define GPU_TCU_BASE_PTRS                        { GPU__TCU }
  /** Array initializer of GPU_TCU peripheral base addresses */
  #define GPU_TCU_BASE_ADDRS_NS                    { GPU__TCU_BASE_NS }
  /** Array initializer of GPU_TCU peripheral base pointers */
  #define GPU_TCU_BASE_PTRS_NS                     { GPU__TCU_NS }
#else
  /** Peripheral GPU__TCU base address */
  #define GPU__TCU_BASE                            (0x4D800000u)
  /** Peripheral GPU__TCU base pointer */
  #define GPU__TCU                                 ((GPU_TCU_Type *)GPU__TCU_BASE)
  /** Array initializer of GPU_TCU peripheral base addresses */
  #define GPU_TCU_BASE_ADDRS                       { GPU__TCU_BASE }
  /** Array initializer of GPU_TCU peripheral base pointers */
  #define GPU_TCU_BASE_PTRS                        { GPU__TCU }
#endif

/* HC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__HC base address */
  #define CAMERA__ISP__HC_BASE                     (0x5AE000C0u)
  /** Peripheral CAMERA__ISP__HC base address */
  #define CAMERA__ISP__HC_BASE_NS                  (0x4AE000C0u)
  /** Peripheral CAMERA__ISP__HC base pointer */
  #define CAMERA__ISP__HC                          ((HC_Type *)CAMERA__ISP__HC_BASE)
  /** Peripheral CAMERA__ISP__HC base pointer */
  #define CAMERA__ISP__HC_NS                       ((HC_Type *)CAMERA__ISP__HC_BASE_NS)
  /** Array initializer of HC peripheral base addresses */
  #define HC_BASE_ADDRS                            { CAMERA__ISP__HC_BASE }
  /** Array initializer of HC peripheral base pointers */
  #define HC_BASE_PTRS                             { CAMERA__ISP__HC }
  /** Array initializer of HC peripheral base addresses */
  #define HC_BASE_ADDRS_NS                         { CAMERA__ISP__HC_BASE_NS }
  /** Array initializer of HC peripheral base pointers */
  #define HC_BASE_PTRS_NS                          { CAMERA__ISP__HC_NS }
#else
  /** Peripheral CAMERA__ISP__HC base address */
  #define CAMERA__ISP__HC_BASE                     (0x4AE000C0u)
  /** Peripheral CAMERA__ISP__HC base pointer */
  #define CAMERA__ISP__HC                          ((HC_Type *)CAMERA__ISP__HC_BASE)
  /** Array initializer of HC peripheral base addresses */
  #define HC_BASE_ADDRS                            { CAMERA__ISP__HC_BASE }
  /** Array initializer of HC peripheral base pointers */
  #define HC_BASE_PTRS                             { CAMERA__ISP__HC }
#endif

/* HDR_DECOMPRESS0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS0_BASE        (0x5AE00100u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS0_BASE_NS     (0x4AE00100u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS0             ((HDR_DECOMPRESS0_Type *)CAMERA__ISP__HDR_DECOMPRESS0_BASE)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS0_NS          ((HDR_DECOMPRESS0_Type *)CAMERA__ISP__HDR_DECOMPRESS0_BASE_NS)
  /** Array initializer of HDR_DECOMPRESS0 peripheral base addresses */
  #define HDR_DECOMPRESS0_BASE_ADDRS               { CAMERA__ISP__HDR_DECOMPRESS0_BASE }
  /** Array initializer of HDR_DECOMPRESS0 peripheral base pointers */
  #define HDR_DECOMPRESS0_BASE_PTRS                { CAMERA__ISP__HDR_DECOMPRESS0 }
  /** Array initializer of HDR_DECOMPRESS0 peripheral base addresses */
  #define HDR_DECOMPRESS0_BASE_ADDRS_NS            { CAMERA__ISP__HDR_DECOMPRESS0_BASE_NS }
  /** Array initializer of HDR_DECOMPRESS0 peripheral base pointers */
  #define HDR_DECOMPRESS0_BASE_PTRS_NS             { CAMERA__ISP__HDR_DECOMPRESS0_NS }
#else
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS0_BASE        (0x4AE00100u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS0 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS0             ((HDR_DECOMPRESS0_Type *)CAMERA__ISP__HDR_DECOMPRESS0_BASE)
  /** Array initializer of HDR_DECOMPRESS0 peripheral base addresses */
  #define HDR_DECOMPRESS0_BASE_ADDRS               { CAMERA__ISP__HDR_DECOMPRESS0_BASE }
  /** Array initializer of HDR_DECOMPRESS0 peripheral base pointers */
  #define HDR_DECOMPRESS0_BASE_PTRS                { CAMERA__ISP__HDR_DECOMPRESS0 }
#endif

/* HDR_DECOMPRESS1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS1_BASE        (0x5AE00180u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS1_BASE_NS     (0x4AE00180u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS1             ((HDR_DECOMPRESS1_Type *)CAMERA__ISP__HDR_DECOMPRESS1_BASE)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS1_NS          ((HDR_DECOMPRESS1_Type *)CAMERA__ISP__HDR_DECOMPRESS1_BASE_NS)
  /** Array initializer of HDR_DECOMPRESS1 peripheral base addresses */
  #define HDR_DECOMPRESS1_BASE_ADDRS               { CAMERA__ISP__HDR_DECOMPRESS1_BASE }
  /** Array initializer of HDR_DECOMPRESS1 peripheral base pointers */
  #define HDR_DECOMPRESS1_BASE_PTRS                { CAMERA__ISP__HDR_DECOMPRESS1 }
  /** Array initializer of HDR_DECOMPRESS1 peripheral base addresses */
  #define HDR_DECOMPRESS1_BASE_ADDRS_NS            { CAMERA__ISP__HDR_DECOMPRESS1_BASE_NS }
  /** Array initializer of HDR_DECOMPRESS1 peripheral base pointers */
  #define HDR_DECOMPRESS1_BASE_PTRS_NS             { CAMERA__ISP__HDR_DECOMPRESS1_NS }
#else
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base address */
  #define CAMERA__ISP__HDR_DECOMPRESS1_BASE        (0x4AE00180u)
  /** Peripheral CAMERA__ISP__HDR_DECOMPRESS1 base pointer */
  #define CAMERA__ISP__HDR_DECOMPRESS1             ((HDR_DECOMPRESS1_Type *)CAMERA__ISP__HDR_DECOMPRESS1_BASE)
  /** Array initializer of HDR_DECOMPRESS1 peripheral base addresses */
  #define HDR_DECOMPRESS1_BASE_ADDRS               { CAMERA__ISP__HDR_DECOMPRESS1_BASE }
  /** Array initializer of HDR_DECOMPRESS1 peripheral base pointers */
  #define HDR_DECOMPRESS1_BASE_PTRS                { CAMERA__ISP__HDR_DECOMPRESS1 }
#endif

/* HDR_MERGE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__HDR_MERGE base address */
  #define CAMERA__ISP__HDR_MERGE_BASE              (0x5AE00300u)
  /** Peripheral CAMERA__ISP__HDR_MERGE base address */
  #define CAMERA__ISP__HDR_MERGE_BASE_NS           (0x4AE00300u)
  /** Peripheral CAMERA__ISP__HDR_MERGE base pointer */
  #define CAMERA__ISP__HDR_MERGE                   ((HDR_MERGE_Type *)CAMERA__ISP__HDR_MERGE_BASE)
  /** Peripheral CAMERA__ISP__HDR_MERGE base pointer */
  #define CAMERA__ISP__HDR_MERGE_NS                ((HDR_MERGE_Type *)CAMERA__ISP__HDR_MERGE_BASE_NS)
  /** Array initializer of HDR_MERGE peripheral base addresses */
  #define HDR_MERGE_BASE_ADDRS                     { CAMERA__ISP__HDR_MERGE_BASE }
  /** Array initializer of HDR_MERGE peripheral base pointers */
  #define HDR_MERGE_BASE_PTRS                      { CAMERA__ISP__HDR_MERGE }
  /** Array initializer of HDR_MERGE peripheral base addresses */
  #define HDR_MERGE_BASE_ADDRS_NS                  { CAMERA__ISP__HDR_MERGE_BASE_NS }
  /** Array initializer of HDR_MERGE peripheral base pointers */
  #define HDR_MERGE_BASE_PTRS_NS                   { CAMERA__ISP__HDR_MERGE_NS }
#else
  /** Peripheral CAMERA__ISP__HDR_MERGE base address */
  #define CAMERA__ISP__HDR_MERGE_BASE              (0x4AE00300u)
  /** Peripheral CAMERA__ISP__HDR_MERGE base pointer */
  #define CAMERA__ISP__HDR_MERGE                   ((HDR_MERGE_Type *)CAMERA__ISP__HDR_MERGE_BASE)
  /** Array initializer of HDR_MERGE peripheral base addresses */
  #define HDR_MERGE_BASE_ADDRS                     { CAMERA__ISP__HDR_MERGE_BASE }
  /** Array initializer of HDR_MERGE peripheral base pointers */
  #define HDR_MERGE_BASE_PTRS                      { CAMERA__ISP__HDR_MERGE }
#endif

/* HSIO_BLK_CTRL_HSIOMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base address */
  #define HSIO__BLK_CTRL_HSIOMIX_BASE              (0x5C010000u)
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base address */
  #define HSIO__BLK_CTRL_HSIOMIX_BASE_NS           (0x4C010000u)
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base pointer */
  #define HSIO__BLK_CTRL_HSIOMIX                   ((HSIO_BLK_CTRL_HSIOMIX_Type *)HSIO__BLK_CTRL_HSIOMIX_BASE)
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base pointer */
  #define HSIO__BLK_CTRL_HSIOMIX_NS                ((HSIO_BLK_CTRL_HSIOMIX_Type *)HSIO__BLK_CTRL_HSIOMIX_BASE_NS)
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base addresses */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_ADDRS         { HSIO__BLK_CTRL_HSIOMIX_BASE }
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base pointers */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_PTRS          { HSIO__BLK_CTRL_HSIOMIX }
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base addresses */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_ADDRS_NS      { HSIO__BLK_CTRL_HSIOMIX_BASE_NS }
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base pointers */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_PTRS_NS       { HSIO__BLK_CTRL_HSIOMIX_NS }
#else
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base address */
  #define HSIO__BLK_CTRL_HSIOMIX_BASE              (0x4C010000u)
  /** Peripheral HSIO__BLK_CTRL_HSIOMIX base pointer */
  #define HSIO__BLK_CTRL_HSIOMIX                   ((HSIO_BLK_CTRL_HSIOMIX_Type *)HSIO__BLK_CTRL_HSIOMIX_BASE)
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base addresses */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_ADDRS         { HSIO__BLK_CTRL_HSIOMIX_BASE }
  /** Array initializer of HSIO_BLK_CTRL_HSIOMIX peripheral base pointers */
  #define HSIO_BLK_CTRL_HSIOMIX_BASE_PTRS          { HSIO__BLK_CTRL_HSIOMIX }
#endif

/* HSIO_GHZ_LN_PLL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__GHZ_LN_PLL base address */
  #define HSIO__GHZ_LN_PLL_BASE                    (0x54481800u)
  /** Peripheral HSIO__GHZ_LN_PLL base address */
  #define HSIO__GHZ_LN_PLL_BASE_NS                 (0x44481800u)
  /** Peripheral HSIO__GHZ_LN_PLL base pointer */
  #define HSIO__GHZ_LN_PLL                         ((HSIO_GHZ_LN_PLL_Type *)HSIO__GHZ_LN_PLL_BASE)
  /** Peripheral HSIO__GHZ_LN_PLL base pointer */
  #define HSIO__GHZ_LN_PLL_NS                      ((HSIO_GHZ_LN_PLL_Type *)HSIO__GHZ_LN_PLL_BASE_NS)
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base addresses */
  #define HSIO_GHZ_LN_PLL_BASE_ADDRS               { HSIO__GHZ_LN_PLL_BASE }
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base pointers */
  #define HSIO_GHZ_LN_PLL_BASE_PTRS                { HSIO__GHZ_LN_PLL }
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base addresses */
  #define HSIO_GHZ_LN_PLL_BASE_ADDRS_NS            { HSIO__GHZ_LN_PLL_BASE_NS }
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base pointers */
  #define HSIO_GHZ_LN_PLL_BASE_PTRS_NS             { HSIO__GHZ_LN_PLL_NS }
#else
  /** Peripheral HSIO__GHZ_LN_PLL base address */
  #define HSIO__GHZ_LN_PLL_BASE                    (0x44481800u)
  /** Peripheral HSIO__GHZ_LN_PLL base pointer */
  #define HSIO__GHZ_LN_PLL                         ((HSIO_GHZ_LN_PLL_Type *)HSIO__GHZ_LN_PLL_BASE)
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base addresses */
  #define HSIO_GHZ_LN_PLL_BASE_ADDRS               { HSIO__GHZ_LN_PLL_BASE }
  /** Array initializer of HSIO_GHZ_LN_PLL peripheral base pointers */
  #define HSIO_GHZ_LN_PLL_BASE_PTRS                { HSIO__GHZ_LN_PLL }
#endif

/* HSIO_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__TCU base address */
  #define HSIO__TCU_BASE                           (0x5C000000u)
  /** Peripheral HSIO__TCU base address */
  #define HSIO__TCU_BASE_NS                        (0x4C000000u)
  /** Peripheral HSIO__TCU base pointer */
  #define HSIO__TCU                                ((HSIO_TCU_Type *)HSIO__TCU_BASE)
  /** Peripheral HSIO__TCU base pointer */
  #define HSIO__TCU_NS                             ((HSIO_TCU_Type *)HSIO__TCU_BASE_NS)
  /** Array initializer of HSIO_TCU peripheral base addresses */
  #define HSIO_TCU_BASE_ADDRS                      { HSIO__TCU_BASE }
  /** Array initializer of HSIO_TCU peripheral base pointers */
  #define HSIO_TCU_BASE_PTRS                       { HSIO__TCU }
  /** Array initializer of HSIO_TCU peripheral base addresses */
  #define HSIO_TCU_BASE_ADDRS_NS                   { HSIO__TCU_BASE_NS }
  /** Array initializer of HSIO_TCU peripheral base pointers */
  #define HSIO_TCU_BASE_PTRS_NS                    { HSIO__TCU_NS }
#else
  /** Peripheral HSIO__TCU base address */
  #define HSIO__TCU_BASE                           (0x4C000000u)
  /** Peripheral HSIO__TCU base pointer */
  #define HSIO__TCU                                ((HSIO_TCU_Type *)HSIO__TCU_BASE)
  /** Array initializer of HSIO_TCU peripheral base addresses */
  #define HSIO_TCU_BASE_ADDRS                      { HSIO__TCU_BASE }
  /** Array initializer of HSIO_TCU peripheral base pointers */
  #define HSIO_TCU_BASE_PTRS                       { HSIO__TCU }
#endif

/* I2S - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SAI1 base address */
  #define SAI1_BASE                                (0x543B0000u)
  /** Peripheral SAI1 base address */
  #define SAI1_BASE_NS                             (0x443B0000u)
  /** Peripheral SAI1 base pointer */
  #define SAI1                                     ((I2S_Type *)SAI1_BASE)
  /** Peripheral SAI1 base pointer */
  #define SAI1_NS                                  ((I2S_Type *)SAI1_BASE_NS)
  /** Peripheral SAI2 base address */
  #define SAI2_BASE                                (0x5C880000u)
  /** Peripheral SAI2 base address */
  #define SAI2_BASE_NS                             (0x4C880000u)
  /** Peripheral SAI2 base pointer */
  #define SAI2                                     ((I2S_Type *)SAI2_BASE)
  /** Peripheral SAI2 base pointer */
  #define SAI2_NS                                  ((I2S_Type *)SAI2_BASE_NS)
  /** Peripheral SAI3 base address */
  #define SAI3_BASE                                (0x52650000u)
  /** Peripheral SAI3 base address */
  #define SAI3_BASE_NS                             (0x42650000u)
  /** Peripheral SAI3 base pointer */
  #define SAI3                                     ((I2S_Type *)SAI3_BASE)
  /** Peripheral SAI3 base pointer */
  #define SAI3_NS                                  ((I2S_Type *)SAI3_BASE_NS)
  /** Peripheral SAI4 base address */
  #define SAI4_BASE                                (0x52660000u)
  /** Peripheral SAI4 base address */
  #define SAI4_BASE_NS                             (0x42660000u)
  /** Peripheral SAI4 base pointer */
  #define SAI4                                     ((I2S_Type *)SAI4_BASE)
  /** Peripheral SAI4 base pointer */
  #define SAI4_NS                                  ((I2S_Type *)SAI4_BASE_NS)
  /** Peripheral SAI5 base address */
  #define SAI5_BASE                                (0x52670000u)
  /** Peripheral SAI5 base address */
  #define SAI5_BASE_NS                             (0x42670000u)
  /** Peripheral SAI5 base pointer */
  #define SAI5                                     ((I2S_Type *)SAI5_BASE)
  /** Peripheral SAI5 base pointer */
  #define SAI5_NS                                  ((I2S_Type *)SAI5_BASE_NS)
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS                           { 0u, SAI1_BASE, SAI2_BASE, SAI3_BASE, SAI4_BASE, SAI5_BASE }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS                            { (I2S_Type *)0u, SAI1, SAI2, SAI3, SAI4, SAI5 }
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS_NS                        { 0u, SAI1_BASE_NS, SAI2_BASE_NS, SAI3_BASE_NS, SAI4_BASE_NS, SAI5_BASE_NS }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS_NS                         { (I2S_Type *)0u, SAI1_NS, SAI2_NS, SAI3_NS, SAI4_NS, SAI5_NS }
#else
  /** Peripheral SAI1 base address */
  #define SAI1_BASE                                (0x443B0000u)
  /** Peripheral SAI1 base pointer */
  #define SAI1                                     ((I2S_Type *)SAI1_BASE)
  /** Peripheral SAI2 base address */
  #define SAI2_BASE                                (0x4C880000u)
  /** Peripheral SAI2 base pointer */
  #define SAI2                                     ((I2S_Type *)SAI2_BASE)
  /** Peripheral SAI3 base address */
  #define SAI3_BASE                                (0x42650000u)
  /** Peripheral SAI3 base pointer */
  #define SAI3                                     ((I2S_Type *)SAI3_BASE)
  /** Peripheral SAI4 base address */
  #define SAI4_BASE                                (0x42660000u)
  /** Peripheral SAI4 base pointer */
  #define SAI4                                     ((I2S_Type *)SAI4_BASE)
  /** Peripheral SAI5 base address */
  #define SAI5_BASE                                (0x42670000u)
  /** Peripheral SAI5 base pointer */
  #define SAI5                                     ((I2S_Type *)SAI5_BASE)
  /** Array initializer of I2S peripheral base addresses */
  #define I2S_BASE_ADDRS                           { 0u, SAI1_BASE, SAI2_BASE, SAI3_BASE, SAI4_BASE, SAI5_BASE }
  /** Array initializer of I2S peripheral base pointers */
  #define I2S_BASE_PTRS                            { (I2S_Type *)0u, SAI1, SAI2, SAI3, SAI4, SAI5 }
#endif
/** Interrupt vectors for the I2S peripheral type */
#define I2S_RX_IRQS                              { NotAvail_IRQn, SAI1_IRQn, SAI2_IRQn, SAI3_IRQn, SAI4_IRQn, SAI5_IRQn }
#define I2S_TX_IRQS                              { NotAvail_IRQn, SAI1_IRQn, SAI2_IRQn, SAI3_IRQn, SAI4_IRQn, SAI5_IRQn }

/* I3C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral I3C1 base address */
  #define I3C1_BASE                                (0x54330000u)
  /** Peripheral I3C1 base address */
  #define I3C1_BASE_NS                             (0x44330000u)
  /** Peripheral I3C1 base pointer */
  #define I3C1                                     ((I3C_Type *)I3C1_BASE)
  /** Peripheral I3C1 base pointer */
  #define I3C1_NS                                  ((I3C_Type *)I3C1_BASE_NS)
  /** Peripheral I3C2 base address */
  #define I3C2_BASE                                (0x52520000u)
  /** Peripheral I3C2 base address */
  #define I3C2_BASE_NS                             (0x42520000u)
  /** Peripheral I3C2 base pointer */
  #define I3C2                                     ((I3C_Type *)I3C2_BASE)
  /** Peripheral I3C2 base pointer */
  #define I3C2_NS                                  ((I3C_Type *)I3C2_BASE_NS)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { 0u, I3C1_BASE, I3C2_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { (I3C_Type *)0u, I3C1, I3C2 }
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS_NS                        { 0u, I3C1_BASE_NS, I3C2_BASE_NS }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS_NS                         { (I3C_Type *)0u, I3C1_NS, I3C2_NS }
#else
  /** Peripheral I3C1 base address */
  #define I3C1_BASE                                (0x44330000u)
  /** Peripheral I3C1 base pointer */
  #define I3C1                                     ((I3C_Type *)I3C1_BASE)
  /** Peripheral I3C2 base address */
  #define I3C2_BASE                                (0x42520000u)
  /** Peripheral I3C2 base pointer */
  #define I3C2                                     ((I3C_Type *)I3C2_BASE)
  /** Array initializer of I3C peripheral base addresses */
  #define I3C_BASE_ADDRS                           { 0u, I3C1_BASE, I3C2_BASE }
  /** Array initializer of I3C peripheral base pointers */
  #define I3C_BASE_PTRS                            { (I3C_Type *)0u, I3C1, I3C2 }
#endif
/** Interrupt vectors for the I3C peripheral type */
#define I3C_IRQS                                 { NotAvail_IRQn, I3C1_IRQn, I3C2_IRQn }

/* IDBG1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__IDBG1 base address */
  #define CAMERA__ISP__IDBG1_BASE                  (0x5AE00FC0u)
  /** Peripheral CAMERA__ISP__IDBG1 base address */
  #define CAMERA__ISP__IDBG1_BASE_NS               (0x4AE00FC0u)
  /** Peripheral CAMERA__ISP__IDBG1 base pointer */
  #define CAMERA__ISP__IDBG1                       ((IDBG1_Type *)CAMERA__ISP__IDBG1_BASE)
  /** Peripheral CAMERA__ISP__IDBG1 base pointer */
  #define CAMERA__ISP__IDBG1_NS                    ((IDBG1_Type *)CAMERA__ISP__IDBG1_BASE_NS)
  /** Array initializer of IDBG1 peripheral base addresses */
  #define IDBG1_BASE_ADDRS                         { CAMERA__ISP__IDBG1_BASE }
  /** Array initializer of IDBG1 peripheral base pointers */
  #define IDBG1_BASE_PTRS                          { CAMERA__ISP__IDBG1 }
  /** Array initializer of IDBG1 peripheral base addresses */
  #define IDBG1_BASE_ADDRS_NS                      { CAMERA__ISP__IDBG1_BASE_NS }
  /** Array initializer of IDBG1 peripheral base pointers */
  #define IDBG1_BASE_PTRS_NS                       { CAMERA__ISP__IDBG1_NS }
#else
  /** Peripheral CAMERA__ISP__IDBG1 base address */
  #define CAMERA__ISP__IDBG1_BASE                  (0x4AE00FC0u)
  /** Peripheral CAMERA__ISP__IDBG1 base pointer */
  #define CAMERA__ISP__IDBG1                       ((IDBG1_Type *)CAMERA__ISP__IDBG1_BASE)
  /** Array initializer of IDBG1 peripheral base addresses */
  #define IDBG1_BASE_ADDRS                         { CAMERA__ISP__IDBG1_BASE }
  /** Array initializer of IDBG1 peripheral base pointers */
  #define IDBG1_BASE_PTRS                          { CAMERA__ISP__IDBG1 }
#endif

/* IDBG2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__IDBG2 base address */
  #define CAMERA__ISP__IDBG2_BASE                  (0x5AE01FC0u)
  /** Peripheral CAMERA__ISP__IDBG2 base address */
  #define CAMERA__ISP__IDBG2_BASE_NS               (0x4AE01FC0u)
  /** Peripheral CAMERA__ISP__IDBG2 base pointer */
  #define CAMERA__ISP__IDBG2                       ((IDBG2_Type *)CAMERA__ISP__IDBG2_BASE)
  /** Peripheral CAMERA__ISP__IDBG2 base pointer */
  #define CAMERA__ISP__IDBG2_NS                    ((IDBG2_Type *)CAMERA__ISP__IDBG2_BASE_NS)
  /** Array initializer of IDBG2 peripheral base addresses */
  #define IDBG2_BASE_ADDRS                         { CAMERA__ISP__IDBG2_BASE }
  /** Array initializer of IDBG2 peripheral base pointers */
  #define IDBG2_BASE_PTRS                          { CAMERA__ISP__IDBG2 }
  /** Array initializer of IDBG2 peripheral base addresses */
  #define IDBG2_BASE_ADDRS_NS                      { CAMERA__ISP__IDBG2_BASE_NS }
  /** Array initializer of IDBG2 peripheral base pointers */
  #define IDBG2_BASE_PTRS_NS                       { CAMERA__ISP__IDBG2_NS }
#else
  /** Peripheral CAMERA__ISP__IDBG2 base address */
  #define CAMERA__ISP__IDBG2_BASE                  (0x4AE01FC0u)
  /** Peripheral CAMERA__ISP__IDBG2 base pointer */
  #define CAMERA__ISP__IDBG2                       ((IDBG2_Type *)CAMERA__ISP__IDBG2_BASE)
  /** Array initializer of IDBG2 peripheral base addresses */
  #define IDBG2_BASE_ADDRS                         { CAMERA__ISP__IDBG2_BASE }
  /** Array initializer of IDBG2 peripheral base pointers */
  #define IDBG2_BASE_PTRS                          { CAMERA__ISP__IDBG2 }
#endif

/* INTM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral INTM base address */
  #define INTM_BASE                                (0x54580000u)
  /** Peripheral INTM base address */
  #define INTM_BASE_NS                             (0x44580000u)
  /** Peripheral INTM base pointer */
  #define INTM                                     ((INTM_Type *)INTM_BASE)
  /** Peripheral INTM base pointer */
  #define INTM_NS                                  ((INTM_Type *)INTM_BASE_NS)
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS                          { INTM_BASE }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS                           { INTM }
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS_NS                       { INTM_BASE_NS }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS_NS                        { INTM_NS }
#else
  /** Peripheral INTM base address */
  #define INTM_BASE                                (0x44580000u)
  /** Peripheral INTM base pointer */
  #define INTM                                     ((INTM_Type *)INTM_BASE)
  /** Array initializer of INTM peripheral base addresses */
  #define INTM_BASE_ADDRS                          { INTM_BASE }
  /** Array initializer of INTM peripheral base pointers */
  #define INTM_BASE_PTRS                           { INTM }
#endif

/* IOMUXC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral IOMUXC base address */
  #define IOMUXC_BASE                              (0x543C0000u)
  /** Peripheral IOMUXC base address */
  #define IOMUXC_BASE_NS                           (0x443C0000u)
  /** Peripheral IOMUXC base pointer */
  #define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)
  /** Peripheral IOMUXC base pointer */
  #define IOMUXC_NS                                ((IOMUXC_Type *)IOMUXC_BASE_NS)
  /** Array initializer of IOMUXC peripheral base addresses */
  #define IOMUXC_BASE_ADDRS                        { IOMUXC_BASE }
  /** Array initializer of IOMUXC peripheral base pointers */
  #define IOMUXC_BASE_PTRS                         { IOMUXC }
  /** Array initializer of IOMUXC peripheral base addresses */
  #define IOMUXC_BASE_ADDRS_NS                     { IOMUXC_BASE_NS }
  /** Array initializer of IOMUXC peripheral base pointers */
  #define IOMUXC_BASE_PTRS_NS                      { IOMUXC_NS }
#else
  /** Peripheral IOMUXC base address */
  #define IOMUXC_BASE                              (0x443C0000u)
  /** Peripheral IOMUXC base pointer */
  #define IOMUXC                                   ((IOMUXC_Type *)IOMUXC_BASE)
  /** Array initializer of IOMUXC peripheral base addresses */
  #define IOMUXC_BASE_ADDRS                        { IOMUXC_BASE }
  /** Array initializer of IOMUXC peripheral base pointers */
  #define IOMUXC_BASE_PTRS                         { IOMUXC }
#endif

/* IOMUXC_GPR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base address */
  #define AON__IOMUXC0__IOMUXC_GPR_BASE            (0x543D0000u)
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base address */
  #define AON__IOMUXC0__IOMUXC_GPR_BASE_NS         (0x443D0000u)
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base pointer */
  #define AON__IOMUXC0__IOMUXC_GPR                 ((IOMUXC_GPR_Type *)AON__IOMUXC0__IOMUXC_GPR_BASE)
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base pointer */
  #define AON__IOMUXC0__IOMUXC_GPR_NS              ((IOMUXC_GPR_Type *)AON__IOMUXC0__IOMUXC_GPR_BASE_NS)
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS                    { AON__IOMUXC0__IOMUXC_GPR_BASE }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS                     { AON__IOMUXC0__IOMUXC_GPR }
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS_NS                 { AON__IOMUXC0__IOMUXC_GPR_BASE_NS }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS_NS                  { AON__IOMUXC0__IOMUXC_GPR_NS }
#else
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base address */
  #define AON__IOMUXC0__IOMUXC_GPR_BASE            (0x443D0000u)
  /** Peripheral AON__IOMUXC0__IOMUXC_GPR base pointer */
  #define AON__IOMUXC0__IOMUXC_GPR                 ((IOMUXC_GPR_Type *)AON__IOMUXC0__IOMUXC_GPR_BASE)
  /** Array initializer of IOMUXC_GPR peripheral base addresses */
  #define IOMUXC_GPR_BASE_ADDRS                    { AON__IOMUXC0__IOMUXC_GPR_BASE }
  /** Array initializer of IOMUXC_GPR peripheral base pointers */
  #define IOMUXC_GPR_BASE_PTRS                     { AON__IOMUXC0__IOMUXC_GPR }
#endif

/* IPA_CONTROL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__REG__IPA_CONTROL base address */
  #define GPU__REG__IPA_CONTROL_BASE               (0x5D940000u)
  /** Peripheral GPU__REG__IPA_CONTROL base address */
  #define GPU__REG__IPA_CONTROL_BASE_NS            (0x4D940000u)
  /** Peripheral GPU__REG__IPA_CONTROL base pointer */
  #define GPU__REG__IPA_CONTROL                    ((IPA_CONTROL_Type *)GPU__REG__IPA_CONTROL_BASE)
  /** Peripheral GPU__REG__IPA_CONTROL base pointer */
  #define GPU__REG__IPA_CONTROL_NS                 ((IPA_CONTROL_Type *)GPU__REG__IPA_CONTROL_BASE_NS)
  /** Array initializer of IPA_CONTROL peripheral base addresses */
  #define IPA_CONTROL_BASE_ADDRS                   { GPU__REG__IPA_CONTROL_BASE }
  /** Array initializer of IPA_CONTROL peripheral base pointers */
  #define IPA_CONTROL_BASE_PTRS                    { GPU__REG__IPA_CONTROL }
  /** Array initializer of IPA_CONTROL peripheral base addresses */
  #define IPA_CONTROL_BASE_ADDRS_NS                { GPU__REG__IPA_CONTROL_BASE_NS }
  /** Array initializer of IPA_CONTROL peripheral base pointers */
  #define IPA_CONTROL_BASE_PTRS_NS                 { GPU__REG__IPA_CONTROL_NS }
#else
  /** Peripheral GPU__REG__IPA_CONTROL base address */
  #define GPU__REG__IPA_CONTROL_BASE               (0x4D940000u)
  /** Peripheral GPU__REG__IPA_CONTROL base pointer */
  #define GPU__REG__IPA_CONTROL                    ((IPA_CONTROL_Type *)GPU__REG__IPA_CONTROL_BASE)
  /** Array initializer of IPA_CONTROL peripheral base addresses */
  #define IPA_CONTROL_BASE_ADDRS                   { GPU__REG__IPA_CONTROL_BASE }
  /** Array initializer of IPA_CONTROL peripheral base pointers */
  #define IPA_CONTROL_BASE_PTRS                    { GPU__REG__IPA_CONTROL }
#endif

/* IR_COMPRESS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__IR_COMPRESS base address */
  #define CAMERA__ISP__IR_COMPRESS_BASE            (0x5AE00780u)
  /** Peripheral CAMERA__ISP__IR_COMPRESS base address */
  #define CAMERA__ISP__IR_COMPRESS_BASE_NS         (0x4AE00780u)
  /** Peripheral CAMERA__ISP__IR_COMPRESS base pointer */
  #define CAMERA__ISP__IR_COMPRESS                 ((IR_COMPRESS_Type *)CAMERA__ISP__IR_COMPRESS_BASE)
  /** Peripheral CAMERA__ISP__IR_COMPRESS base pointer */
  #define CAMERA__ISP__IR_COMPRESS_NS              ((IR_COMPRESS_Type *)CAMERA__ISP__IR_COMPRESS_BASE_NS)
  /** Array initializer of IR_COMPRESS peripheral base addresses */
  #define IR_COMPRESS_BASE_ADDRS                   { CAMERA__ISP__IR_COMPRESS_BASE }
  /** Array initializer of IR_COMPRESS peripheral base pointers */
  #define IR_COMPRESS_BASE_PTRS                    { CAMERA__ISP__IR_COMPRESS }
  /** Array initializer of IR_COMPRESS peripheral base addresses */
  #define IR_COMPRESS_BASE_ADDRS_NS                { CAMERA__ISP__IR_COMPRESS_BASE_NS }
  /** Array initializer of IR_COMPRESS peripheral base pointers */
  #define IR_COMPRESS_BASE_PTRS_NS                 { CAMERA__ISP__IR_COMPRESS_NS }
#else
  /** Peripheral CAMERA__ISP__IR_COMPRESS base address */
  #define CAMERA__ISP__IR_COMPRESS_BASE            (0x4AE00780u)
  /** Peripheral CAMERA__ISP__IR_COMPRESS base pointer */
  #define CAMERA__ISP__IR_COMPRESS                 ((IR_COMPRESS_Type *)CAMERA__ISP__IR_COMPRESS_BASE)
  /** Array initializer of IR_COMPRESS peripheral base addresses */
  #define IR_COMPRESS_BASE_ADDRS                   { CAMERA__ISP__IR_COMPRESS_BASE }
  /** Array initializer of IR_COMPRESS peripheral base pointers */
  #define IR_COMPRESS_BASE_PTRS                    { CAMERA__ISP__IR_COMPRESS }
#endif

/* ISI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISI base address */
  #define CAMERA__ISI_BASE                         (0x5AD50000u)
  /** Peripheral CAMERA__ISI base address */
  #define CAMERA__ISI_BASE_NS                      (0x4AD50000u)
  /** Peripheral CAMERA__ISI base pointer */
  #define CAMERA__ISI                              ((ISI_Type *)CAMERA__ISI_BASE)
  /** Peripheral CAMERA__ISI base pointer */
  #define CAMERA__ISI_NS                           ((ISI_Type *)CAMERA__ISI_BASE_NS)
  /** Array initializer of ISI peripheral base addresses */
  #define ISI_BASE_ADDRS                           { CAMERA__ISI_BASE }
  /** Array initializer of ISI peripheral base pointers */
  #define ISI_BASE_PTRS                            { CAMERA__ISI }
  /** Array initializer of ISI peripheral base addresses */
  #define ISI_BASE_ADDRS_NS                        { CAMERA__ISI_BASE_NS }
  /** Array initializer of ISI peripheral base pointers */
  #define ISI_BASE_PTRS_NS                         { CAMERA__ISI_NS }
#else
  /** Peripheral CAMERA__ISI base address */
  #define CAMERA__ISI_BASE                         (0x4AD50000u)
  /** Peripheral CAMERA__ISI base pointer */
  #define CAMERA__ISI                              ((ISI_Type *)CAMERA__ISI_BASE)
  /** Array initializer of ISI peripheral base addresses */
  #define ISI_BASE_ADDRS                           { CAMERA__ISI_BASE }
  /** Array initializer of ISI peripheral base pointers */
  #define ISI_BASE_PTRS                            { CAMERA__ISI }
#endif

/* ISP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__ALIAS base address */
  #define CAMERA__ISP__ALIAS_BASE                  (0x5AE02000u)
  /** Peripheral CAMERA__ISP__ALIAS base address */
  #define CAMERA__ISP__ALIAS_BASE_NS               (0x4AE02000u)
  /** Peripheral CAMERA__ISP__ALIAS base pointer */
  #define CAMERA__ISP__ALIAS                       ((ISP_Type *)CAMERA__ISP__ALIAS_BASE)
  /** Peripheral CAMERA__ISP__ALIAS base pointer */
  #define CAMERA__ISP__ALIAS_NS                    ((ISP_Type *)CAMERA__ISP__ALIAS_BASE_NS)
  /** Array initializer of ISP peripheral base addresses */
  #define ISP_BASE_ADDRS                           { CAMERA__ISP__ALIAS_BASE }
  /** Array initializer of ISP peripheral base pointers */
  #define ISP_BASE_PTRS                            { CAMERA__ISP__ALIAS }
  /** Array initializer of ISP peripheral base addresses */
  #define ISP_BASE_ADDRS_NS                        { CAMERA__ISP__ALIAS_BASE_NS }
  /** Array initializer of ISP peripheral base pointers */
  #define ISP_BASE_PTRS_NS                         { CAMERA__ISP__ALIAS_NS }
#else
  /** Peripheral CAMERA__ISP__ALIAS base address */
  #define CAMERA__ISP__ALIAS_BASE                  (0x4AE02000u)
  /** Peripheral CAMERA__ISP__ALIAS base pointer */
  #define CAMERA__ISP__ALIAS                       ((ISP_Type *)CAMERA__ISP__ALIAS_BASE)
  /** Array initializer of ISP peripheral base addresses */
  #define ISP_BASE_ADDRS                           { CAMERA__ISP__ALIAS_BASE }
  /** Array initializer of ISP peripheral base pointers */
  #define ISP_BASE_PTRS                            { CAMERA__ISP__ALIAS }
#endif

/* JPEG_DEC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__JPEG_DEC1 base address */
  #define VPU__JPEG_DEC1_BASE                      (0x5C500100u)
  /** Peripheral VPU__JPEG_DEC1 base address */
  #define VPU__JPEG_DEC1_BASE_NS                   (0x4C500100u)
  /** Peripheral VPU__JPEG_DEC1 base pointer */
  #define VPU__JPEG_DEC1                           ((JPEG_DEC_Type *)VPU__JPEG_DEC1_BASE)
  /** Peripheral VPU__JPEG_DEC1 base pointer */
  #define VPU__JPEG_DEC1_NS                        ((JPEG_DEC_Type *)VPU__JPEG_DEC1_BASE_NS)
  /** Array initializer of JPEG_DEC peripheral base addresses */
  #define JPEG_DEC_BASE_ADDRS                      { VPU__JPEG_DEC1_BASE }
  /** Array initializer of JPEG_DEC peripheral base pointers */
  #define JPEG_DEC_BASE_PTRS                       { VPU__JPEG_DEC1 }
  /** Array initializer of JPEG_DEC peripheral base addresses */
  #define JPEG_DEC_BASE_ADDRS_NS                   { VPU__JPEG_DEC1_BASE_NS }
  /** Array initializer of JPEG_DEC peripheral base pointers */
  #define JPEG_DEC_BASE_PTRS_NS                    { VPU__JPEG_DEC1_NS }
#else
  /** Peripheral VPU__JPEG_DEC1 base address */
  #define VPU__JPEG_DEC1_BASE                      (0x4C500100u)
  /** Peripheral VPU__JPEG_DEC1 base pointer */
  #define VPU__JPEG_DEC1                           ((JPEG_DEC_Type *)VPU__JPEG_DEC1_BASE)
  /** Array initializer of JPEG_DEC peripheral base addresses */
  #define JPEG_DEC_BASE_ADDRS                      { VPU__JPEG_DEC1_BASE }
  /** Array initializer of JPEG_DEC peripheral base pointers */
  #define JPEG_DEC_BASE_PTRS                       { VPU__JPEG_DEC1 }
#endif

/* JPEG_DEC_WRAP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__JPEG_DEC_WRAP0 base address */
  #define VPU__JPEG_DEC_WRAP0_BASE                 (0x5C500000u)
  /** Peripheral VPU__JPEG_DEC_WRAP0 base address */
  #define VPU__JPEG_DEC_WRAP0_BASE_NS              (0x4C500000u)
  /** Peripheral VPU__JPEG_DEC_WRAP0 base pointer */
  #define VPU__JPEG_DEC_WRAP0                      ((JPEG_DEC_WRAP_Type *)VPU__JPEG_DEC_WRAP0_BASE)
  /** Peripheral VPU__JPEG_DEC_WRAP0 base pointer */
  #define VPU__JPEG_DEC_WRAP0_NS                   ((JPEG_DEC_WRAP_Type *)VPU__JPEG_DEC_WRAP0_BASE_NS)
  /** Array initializer of JPEG_DEC_WRAP peripheral base addresses */
  #define JPEG_DEC_WRAP_BASE_ADDRS                 { VPU__JPEG_DEC_WRAP0_BASE }
  /** Array initializer of JPEG_DEC_WRAP peripheral base pointers */
  #define JPEG_DEC_WRAP_BASE_PTRS                  { VPU__JPEG_DEC_WRAP0 }
  /** Array initializer of JPEG_DEC_WRAP peripheral base addresses */
  #define JPEG_DEC_WRAP_BASE_ADDRS_NS              { VPU__JPEG_DEC_WRAP0_BASE_NS }
  /** Array initializer of JPEG_DEC_WRAP peripheral base pointers */
  #define JPEG_DEC_WRAP_BASE_PTRS_NS               { VPU__JPEG_DEC_WRAP0_NS }
#else
  /** Peripheral VPU__JPEG_DEC_WRAP0 base address */
  #define VPU__JPEG_DEC_WRAP0_BASE                 (0x4C500000u)
  /** Peripheral VPU__JPEG_DEC_WRAP0 base pointer */
  #define VPU__JPEG_DEC_WRAP0                      ((JPEG_DEC_WRAP_Type *)VPU__JPEG_DEC_WRAP0_BASE)
  /** Array initializer of JPEG_DEC_WRAP peripheral base addresses */
  #define JPEG_DEC_WRAP_BASE_ADDRS                 { VPU__JPEG_DEC_WRAP0_BASE }
  /** Array initializer of JPEG_DEC_WRAP peripheral base pointers */
  #define JPEG_DEC_WRAP_BASE_PTRS                  { VPU__JPEG_DEC_WRAP0 }
#endif

/* JPEG_ENC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__JPEG_ENC base address */
  #define VPU__JPEG_ENC_BASE                       (0x5C550100u)
  /** Peripheral VPU__JPEG_ENC base address */
  #define VPU__JPEG_ENC_BASE_NS                    (0x4C550100u)
  /** Peripheral VPU__JPEG_ENC base pointer */
  #define VPU__JPEG_ENC                            ((JPEG_ENC_Type *)VPU__JPEG_ENC_BASE)
  /** Peripheral VPU__JPEG_ENC base pointer */
  #define VPU__JPEG_ENC_NS                         ((JPEG_ENC_Type *)VPU__JPEG_ENC_BASE_NS)
  /** Array initializer of JPEG_ENC peripheral base addresses */
  #define JPEG_ENC_BASE_ADDRS                      { VPU__JPEG_ENC_BASE }
  /** Array initializer of JPEG_ENC peripheral base pointers */
  #define JPEG_ENC_BASE_PTRS                       { VPU__JPEG_ENC }
  /** Array initializer of JPEG_ENC peripheral base addresses */
  #define JPEG_ENC_BASE_ADDRS_NS                   { VPU__JPEG_ENC_BASE_NS }
  /** Array initializer of JPEG_ENC peripheral base pointers */
  #define JPEG_ENC_BASE_PTRS_NS                    { VPU__JPEG_ENC_NS }
#else
  /** Peripheral VPU__JPEG_ENC base address */
  #define VPU__JPEG_ENC_BASE                       (0x4C550100u)
  /** Peripheral VPU__JPEG_ENC base pointer */
  #define VPU__JPEG_ENC                            ((JPEG_ENC_Type *)VPU__JPEG_ENC_BASE)
  /** Array initializer of JPEG_ENC peripheral base addresses */
  #define JPEG_ENC_BASE_ADDRS                      { VPU__JPEG_ENC_BASE }
  /** Array initializer of JPEG_ENC peripheral base pointers */
  #define JPEG_ENC_BASE_PTRS                       { VPU__JPEG_ENC }
#endif

/* LDB - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LVDS base address */
  #define LVDS_BASE                                (0x5B0C0000u)
  /** Peripheral LVDS base address */
  #define LVDS_BASE_NS                             (0x4B0C0000u)
  /** Peripheral LVDS base pointer */
  #define LVDS                                     ((LDB_Type *)LVDS_BASE)
  /** Peripheral LVDS base pointer */
  #define LVDS_NS                                  ((LDB_Type *)LVDS_BASE_NS)
  /** Array initializer of LDB peripheral base addresses */
  #define LDB_BASE_ADDRS                           { LVDS_BASE }
  /** Array initializer of LDB peripheral base pointers */
  #define LDB_BASE_PTRS                            { LVDS }
  /** Array initializer of LDB peripheral base addresses */
  #define LDB_BASE_ADDRS_NS                        { LVDS_BASE_NS }
  /** Array initializer of LDB peripheral base pointers */
  #define LDB_BASE_PTRS_NS                         { LVDS_NS }
#else
  /** Peripheral LVDS base address */
  #define LVDS_BASE                                (0x4B0C0000u)
  /** Peripheral LVDS base pointer */
  #define LVDS                                     ((LDB_Type *)LVDS_BASE)
  /** Array initializer of LDB peripheral base addresses */
  #define LDB_BASE_ADDRS                           { LVDS_BASE }
  /** Array initializer of LDB peripheral base pointers */
  #define LDB_BASE_PTRS                            { LVDS }
#endif

/* LPI2C - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE                              (0x54340000u)
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE_NS                           (0x44340000u)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1_NS                                ((LPI2C_Type *)LPI2C1_BASE_NS)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE                              (0x54350000u)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE_NS                           (0x44350000u)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2                                   ((LPI2C_Type *)LPI2C2_BASE)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2_NS                                ((LPI2C_Type *)LPI2C2_BASE_NS)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE                              (0x52530000u)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE_NS                           (0x42530000u)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3                                   ((LPI2C_Type *)LPI2C3_BASE)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3_NS                                ((LPI2C_Type *)LPI2C3_BASE_NS)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE                              (0x52540000u)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE_NS                           (0x42540000u)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4                                   ((LPI2C_Type *)LPI2C4_BASE)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4_NS                                ((LPI2C_Type *)LPI2C4_BASE_NS)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE                              (0x526B0000u)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE_NS                           (0x426B0000u)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5                                   ((LPI2C_Type *)LPI2C5_BASE)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5_NS                                ((LPI2C_Type *)LPI2C5_BASE_NS)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE                              (0x526C0000u)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE_NS                           (0x426C0000u)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6                                   ((LPI2C_Type *)LPI2C6_BASE)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6_NS                                ((LPI2C_Type *)LPI2C6_BASE_NS)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE                              (0x526D0000u)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE_NS                           (0x426D0000u)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7                                   ((LPI2C_Type *)LPI2C7_BASE)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7_NS                                ((LPI2C_Type *)LPI2C7_BASE_NS)
  /** Peripheral LPI2C8 base address */
  #define LPI2C8_BASE                              (0x526E0000u)
  /** Peripheral LPI2C8 base address */
  #define LPI2C8_BASE_NS                           (0x426E0000u)
  /** Peripheral LPI2C8 base pointer */
  #define LPI2C8                                   ((LPI2C_Type *)LPI2C8_BASE)
  /** Peripheral LPI2C8 base pointer */
  #define LPI2C8_NS                                ((LPI2C_Type *)LPI2C8_BASE_NS)
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS                         { 0u, LPI2C1_BASE, LPI2C2_BASE, LPI2C3_BASE, LPI2C4_BASE, LPI2C5_BASE, LPI2C6_BASE, LPI2C7_BASE, LPI2C8_BASE }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS                          { (LPI2C_Type *)0u, LPI2C1, LPI2C2, LPI2C3, LPI2C4, LPI2C5, LPI2C6, LPI2C7, LPI2C8 }
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS_NS                      { 0u, LPI2C1_BASE_NS, LPI2C2_BASE_NS, LPI2C3_BASE_NS, LPI2C4_BASE_NS, LPI2C5_BASE_NS, LPI2C6_BASE_NS, LPI2C7_BASE_NS, LPI2C8_BASE_NS }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS_NS                       { (LPI2C_Type *)0u, LPI2C1_NS, LPI2C2_NS, LPI2C3_NS, LPI2C4_NS, LPI2C5_NS, LPI2C6_NS, LPI2C7_NS, LPI2C8_NS }
#else
  /** Peripheral LPI2C1 base address */
  #define LPI2C1_BASE                              (0x44340000u)
  /** Peripheral LPI2C1 base pointer */
  #define LPI2C1                                   ((LPI2C_Type *)LPI2C1_BASE)
  /** Peripheral LPI2C2 base address */
  #define LPI2C2_BASE                              (0x44350000u)
  /** Peripheral LPI2C2 base pointer */
  #define LPI2C2                                   ((LPI2C_Type *)LPI2C2_BASE)
  /** Peripheral LPI2C3 base address */
  #define LPI2C3_BASE                              (0x42530000u)
  /** Peripheral LPI2C3 base pointer */
  #define LPI2C3                                   ((LPI2C_Type *)LPI2C3_BASE)
  /** Peripheral LPI2C4 base address */
  #define LPI2C4_BASE                              (0x42540000u)
  /** Peripheral LPI2C4 base pointer */
  #define LPI2C4                                   ((LPI2C_Type *)LPI2C4_BASE)
  /** Peripheral LPI2C5 base address */
  #define LPI2C5_BASE                              (0x426B0000u)
  /** Peripheral LPI2C5 base pointer */
  #define LPI2C5                                   ((LPI2C_Type *)LPI2C5_BASE)
  /** Peripheral LPI2C6 base address */
  #define LPI2C6_BASE                              (0x426C0000u)
  /** Peripheral LPI2C6 base pointer */
  #define LPI2C6                                   ((LPI2C_Type *)LPI2C6_BASE)
  /** Peripheral LPI2C7 base address */
  #define LPI2C7_BASE                              (0x426D0000u)
  /** Peripheral LPI2C7 base pointer */
  #define LPI2C7                                   ((LPI2C_Type *)LPI2C7_BASE)
  /** Peripheral LPI2C8 base address */
  #define LPI2C8_BASE                              (0x426E0000u)
  /** Peripheral LPI2C8 base pointer */
  #define LPI2C8                                   ((LPI2C_Type *)LPI2C8_BASE)
  /** Array initializer of LPI2C peripheral base addresses */
  #define LPI2C_BASE_ADDRS                         { 0u, LPI2C1_BASE, LPI2C2_BASE, LPI2C3_BASE, LPI2C4_BASE, LPI2C5_BASE, LPI2C6_BASE, LPI2C7_BASE, LPI2C8_BASE }
  /** Array initializer of LPI2C peripheral base pointers */
  #define LPI2C_BASE_PTRS                          { (LPI2C_Type *)0u, LPI2C1, LPI2C2, LPI2C3, LPI2C4, LPI2C5, LPI2C6, LPI2C7, LPI2C8 }
#endif
/** Interrupt vectors for the LPI2C peripheral type */
#define LPI2C_IRQS                               { NotAvail_IRQn, LPI2C1_IRQn, LPI2C2_IRQn, LPI2C3_IRQn, LPI2C4_IRQn, LPI2C5_IRQn, LPI2C6_IRQn, LPI2C7_IRQn, LPI2C8_IRQn }

/* LPIT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPIT1 base address */
  #define LPIT1_BASE                               (0x542F0000u)
  /** Peripheral LPIT1 base address */
  #define LPIT1_BASE_NS                            (0x442F0000u)
  /** Peripheral LPIT1 base pointer */
  #define LPIT1                                    ((LPIT_Type *)LPIT1_BASE)
  /** Peripheral LPIT1 base pointer */
  #define LPIT1_NS                                 ((LPIT_Type *)LPIT1_BASE_NS)
  /** Peripheral LPIT2 base address */
  #define LPIT2_BASE                               (0x524C0000u)
  /** Peripheral LPIT2 base address */
  #define LPIT2_BASE_NS                            (0x424C0000u)
  /** Peripheral LPIT2 base pointer */
  #define LPIT2                                    ((LPIT_Type *)LPIT2_BASE)
  /** Peripheral LPIT2 base pointer */
  #define LPIT2_NS                                 ((LPIT_Type *)LPIT2_BASE_NS)
  /** Array initializer of LPIT peripheral base addresses */
  #define LPIT_BASE_ADDRS                          { 0u, LPIT1_BASE, LPIT2_BASE }
  /** Array initializer of LPIT peripheral base pointers */
  #define LPIT_BASE_PTRS                           { (LPIT_Type *)0u, LPIT1, LPIT2 }
  /** Array initializer of LPIT peripheral base addresses */
  #define LPIT_BASE_ADDRS_NS                       { 0u, LPIT1_BASE_NS, LPIT2_BASE_NS }
  /** Array initializer of LPIT peripheral base pointers */
  #define LPIT_BASE_PTRS_NS                        { (LPIT_Type *)0u, LPIT1_NS, LPIT2_NS }
#else
  /** Peripheral LPIT1 base address */
  #define LPIT1_BASE                               (0x442F0000u)
  /** Peripheral LPIT1 base pointer */
  #define LPIT1                                    ((LPIT_Type *)LPIT1_BASE)
  /** Peripheral LPIT2 base address */
  #define LPIT2_BASE                               (0x424C0000u)
  /** Peripheral LPIT2 base pointer */
  #define LPIT2                                    ((LPIT_Type *)LPIT2_BASE)
  /** Array initializer of LPIT peripheral base addresses */
  #define LPIT_BASE_ADDRS                          { 0u, LPIT1_BASE, LPIT2_BASE }
  /** Array initializer of LPIT peripheral base pointers */
  #define LPIT_BASE_PTRS                           { (LPIT_Type *)0u, LPIT1, LPIT2 }
#endif

/* LPSPI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE                              (0x54360000u)
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE_NS                           (0x44360000u)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1_NS                                ((LPSPI_Type *)LPSPI1_BASE_NS)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE                              (0x54370000u)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE_NS                           (0x44370000u)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2_NS                                ((LPSPI_Type *)LPSPI2_BASE_NS)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE                              (0x52550000u)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE_NS                           (0x42550000u)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3_NS                                ((LPSPI_Type *)LPSPI3_BASE_NS)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE                              (0x52560000u)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE_NS                           (0x42560000u)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4                                   ((LPSPI_Type *)LPSPI4_BASE)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4_NS                                ((LPSPI_Type *)LPSPI4_BASE_NS)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE                              (0x526F0000u)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE_NS                           (0x426F0000u)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5                                   ((LPSPI_Type *)LPSPI5_BASE)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5_NS                                ((LPSPI_Type *)LPSPI5_BASE_NS)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE                              (0x52700000u)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE_NS                           (0x42700000u)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6                                   ((LPSPI_Type *)LPSPI6_BASE)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6_NS                                ((LPSPI_Type *)LPSPI6_BASE_NS)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE                              (0x52710000u)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE_NS                           (0x42710000u)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7                                   ((LPSPI_Type *)LPSPI7_BASE)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7_NS                                ((LPSPI_Type *)LPSPI7_BASE_NS)
  /** Peripheral LPSPI8 base address */
  #define LPSPI8_BASE                              (0x52720000u)
  /** Peripheral LPSPI8 base address */
  #define LPSPI8_BASE_NS                           (0x42720000u)
  /** Peripheral LPSPI8 base pointer */
  #define LPSPI8                                   ((LPSPI_Type *)LPSPI8_BASE)
  /** Peripheral LPSPI8 base pointer */
  #define LPSPI8_NS                                ((LPSPI_Type *)LPSPI8_BASE_NS)
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS                         { 0u, LPSPI1_BASE, LPSPI2_BASE, LPSPI3_BASE, LPSPI4_BASE, LPSPI5_BASE, LPSPI6_BASE, LPSPI7_BASE, LPSPI8_BASE }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS                          { (LPSPI_Type *)0u, LPSPI1, LPSPI2, LPSPI3, LPSPI4, LPSPI5, LPSPI6, LPSPI7, LPSPI8 }
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS_NS                      { 0u, LPSPI1_BASE_NS, LPSPI2_BASE_NS, LPSPI3_BASE_NS, LPSPI4_BASE_NS, LPSPI5_BASE_NS, LPSPI6_BASE_NS, LPSPI7_BASE_NS, LPSPI8_BASE_NS }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS_NS                       { (LPSPI_Type *)0u, LPSPI1_NS, LPSPI2_NS, LPSPI3_NS, LPSPI4_NS, LPSPI5_NS, LPSPI6_NS, LPSPI7_NS, LPSPI8_NS }
#else
  /** Peripheral LPSPI1 base address */
  #define LPSPI1_BASE                              (0x44360000u)
  /** Peripheral LPSPI1 base pointer */
  #define LPSPI1                                   ((LPSPI_Type *)LPSPI1_BASE)
  /** Peripheral LPSPI2 base address */
  #define LPSPI2_BASE                              (0x44370000u)
  /** Peripheral LPSPI2 base pointer */
  #define LPSPI2                                   ((LPSPI_Type *)LPSPI2_BASE)
  /** Peripheral LPSPI3 base address */
  #define LPSPI3_BASE                              (0x42550000u)
  /** Peripheral LPSPI3 base pointer */
  #define LPSPI3                                   ((LPSPI_Type *)LPSPI3_BASE)
  /** Peripheral LPSPI4 base address */
  #define LPSPI4_BASE                              (0x42560000u)
  /** Peripheral LPSPI4 base pointer */
  #define LPSPI4                                   ((LPSPI_Type *)LPSPI4_BASE)
  /** Peripheral LPSPI5 base address */
  #define LPSPI5_BASE                              (0x426F0000u)
  /** Peripheral LPSPI5 base pointer */
  #define LPSPI5                                   ((LPSPI_Type *)LPSPI5_BASE)
  /** Peripheral LPSPI6 base address */
  #define LPSPI6_BASE                              (0x42700000u)
  /** Peripheral LPSPI6 base pointer */
  #define LPSPI6                                   ((LPSPI_Type *)LPSPI6_BASE)
  /** Peripheral LPSPI7 base address */
  #define LPSPI7_BASE                              (0x42710000u)
  /** Peripheral LPSPI7 base pointer */
  #define LPSPI7                                   ((LPSPI_Type *)LPSPI7_BASE)
  /** Peripheral LPSPI8 base address */
  #define LPSPI8_BASE                              (0x42720000u)
  /** Peripheral LPSPI8 base pointer */
  #define LPSPI8                                   ((LPSPI_Type *)LPSPI8_BASE)
  /** Array initializer of LPSPI peripheral base addresses */
  #define LPSPI_BASE_ADDRS                         { 0u, LPSPI1_BASE, LPSPI2_BASE, LPSPI3_BASE, LPSPI4_BASE, LPSPI5_BASE, LPSPI6_BASE, LPSPI7_BASE, LPSPI8_BASE }
  /** Array initializer of LPSPI peripheral base pointers */
  #define LPSPI_BASE_PTRS                          { (LPSPI_Type *)0u, LPSPI1, LPSPI2, LPSPI3, LPSPI4, LPSPI5, LPSPI6, LPSPI7, LPSPI8 }
#endif
/** Interrupt vectors for the LPSPI peripheral type */
#define LPSPI_IRQS                               { NotAvail_IRQn, LPSPI1_IRQn, LPSPI2_IRQn, LPSPI3_IRQn, LPSPI4_IRQn, LPSPI5_IRQn, LPSPI6_IRQn, LPSPI7_IRQn, LPSPI8_IRQn }

/* LPTMR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE                              (0x54300000u)
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE_NS                           (0x44300000u)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1                                   ((LPTMR_Type *)LPTMR1_BASE)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1_NS                                ((LPTMR_Type *)LPTMR1_BASE_NS)
  /** Peripheral LPTMR2 base address */
  #define LPTMR2_BASE                              (0x524D0000u)
  /** Peripheral LPTMR2 base address */
  #define LPTMR2_BASE_NS                           (0x424D0000u)
  /** Peripheral LPTMR2 base pointer */
  #define LPTMR2                                   ((LPTMR_Type *)LPTMR2_BASE)
  /** Peripheral LPTMR2 base pointer */
  #define LPTMR2_NS                                ((LPTMR_Type *)LPTMR2_BASE_NS)
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS                         { 0u, LPTMR1_BASE, LPTMR2_BASE }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS                          { (LPTMR_Type *)0u, LPTMR1, LPTMR2 }
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS_NS                      { 0u, LPTMR1_BASE_NS, LPTMR2_BASE_NS }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS_NS                       { (LPTMR_Type *)0u, LPTMR1_NS, LPTMR2_NS }
#else
  /** Peripheral LPTMR1 base address */
  #define LPTMR1_BASE                              (0x44300000u)
  /** Peripheral LPTMR1 base pointer */
  #define LPTMR1                                   ((LPTMR_Type *)LPTMR1_BASE)
  /** Peripheral LPTMR2 base address */
  #define LPTMR2_BASE                              (0x424D0000u)
  /** Peripheral LPTMR2 base pointer */
  #define LPTMR2                                   ((LPTMR_Type *)LPTMR2_BASE)
  /** Array initializer of LPTMR peripheral base addresses */
  #define LPTMR_BASE_ADDRS                         { 0u, LPTMR1_BASE, LPTMR2_BASE }
  /** Array initializer of LPTMR peripheral base pointers */
  #define LPTMR_BASE_PTRS                          { (LPTMR_Type *)0u, LPTMR1, LPTMR2 }
#endif

/* LPUART - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE                             (0x54380000u)
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE_NS                          (0x44380000u)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1_NS                               ((LPUART_Type *)LPUART1_BASE_NS)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE                             (0x54390000u)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE_NS                          (0x44390000u)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2_NS                               ((LPUART_Type *)LPUART2_BASE_NS)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE                             (0x52570000u)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE_NS                          (0x42570000u)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3                                  ((LPUART_Type *)LPUART3_BASE)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3_NS                               ((LPUART_Type *)LPUART3_BASE_NS)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE                             (0x52580000u)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE_NS                          (0x42580000u)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4                                  ((LPUART_Type *)LPUART4_BASE)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4_NS                               ((LPUART_Type *)LPUART4_BASE_NS)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE                             (0x52590000u)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE_NS                          (0x42590000u)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5                                  ((LPUART_Type *)LPUART5_BASE)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5_NS                               ((LPUART_Type *)LPUART5_BASE_NS)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE                             (0x525A0000u)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE_NS                          (0x425A0000u)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6                                  ((LPUART_Type *)LPUART6_BASE)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6_NS                               ((LPUART_Type *)LPUART6_BASE_NS)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE                             (0x52690000u)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE_NS                          (0x42690000u)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7                                  ((LPUART_Type *)LPUART7_BASE)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7_NS                               ((LPUART_Type *)LPUART7_BASE_NS)
  /** Peripheral LPUART8 base address */
  #define LPUART8_BASE                             (0x526A0000u)
  /** Peripheral LPUART8 base address */
  #define LPUART8_BASE_NS                          (0x426A0000u)
  /** Peripheral LPUART8 base pointer */
  #define LPUART8                                  ((LPUART_Type *)LPUART8_BASE)
  /** Peripheral LPUART8 base pointer */
  #define LPUART8_NS                               ((LPUART_Type *)LPUART8_BASE_NS)
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS                        { 0u, LPUART1_BASE, LPUART2_BASE, LPUART3_BASE, LPUART4_BASE, LPUART5_BASE, LPUART6_BASE, LPUART7_BASE, LPUART8_BASE }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS                         { (LPUART_Type *)0u, LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7, LPUART8 }
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS_NS                     { 0u, LPUART1_BASE_NS, LPUART2_BASE_NS, LPUART3_BASE_NS, LPUART4_BASE_NS, LPUART5_BASE_NS, LPUART6_BASE_NS, LPUART7_BASE_NS, LPUART8_BASE_NS }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS_NS                      { (LPUART_Type *)0u, LPUART1_NS, LPUART2_NS, LPUART3_NS, LPUART4_NS, LPUART5_NS, LPUART6_NS, LPUART7_NS, LPUART8_NS }
#else
  /** Peripheral LPUART1 base address */
  #define LPUART1_BASE                             (0x44380000u)
  /** Peripheral LPUART1 base pointer */
  #define LPUART1                                  ((LPUART_Type *)LPUART1_BASE)
  /** Peripheral LPUART2 base address */
  #define LPUART2_BASE                             (0x44390000u)
  /** Peripheral LPUART2 base pointer */
  #define LPUART2                                  ((LPUART_Type *)LPUART2_BASE)
  /** Peripheral LPUART3 base address */
  #define LPUART3_BASE                             (0x42570000u)
  /** Peripheral LPUART3 base pointer */
  #define LPUART3                                  ((LPUART_Type *)LPUART3_BASE)
  /** Peripheral LPUART4 base address */
  #define LPUART4_BASE                             (0x42580000u)
  /** Peripheral LPUART4 base pointer */
  #define LPUART4                                  ((LPUART_Type *)LPUART4_BASE)
  /** Peripheral LPUART5 base address */
  #define LPUART5_BASE                             (0x42590000u)
  /** Peripheral LPUART5 base pointer */
  #define LPUART5                                  ((LPUART_Type *)LPUART5_BASE)
  /** Peripheral LPUART6 base address */
  #define LPUART6_BASE                             (0x425A0000u)
  /** Peripheral LPUART6 base pointer */
  #define LPUART6                                  ((LPUART_Type *)LPUART6_BASE)
  /** Peripheral LPUART7 base address */
  #define LPUART7_BASE                             (0x42690000u)
  /** Peripheral LPUART7 base pointer */
  #define LPUART7                                  ((LPUART_Type *)LPUART7_BASE)
  /** Peripheral LPUART8 base address */
  #define LPUART8_BASE                             (0x426A0000u)
  /** Peripheral LPUART8 base pointer */
  #define LPUART8                                  ((LPUART_Type *)LPUART8_BASE)
  /** Array initializer of LPUART peripheral base addresses */
  #define LPUART_BASE_ADDRS                        { 0u, LPUART1_BASE, LPUART2_BASE, LPUART3_BASE, LPUART4_BASE, LPUART5_BASE, LPUART6_BASE, LPUART7_BASE, LPUART8_BASE }
  /** Array initializer of LPUART peripheral base pointers */
  #define LPUART_BASE_PTRS                         { (LPUART_Type *)0u, LPUART1, LPUART2, LPUART3, LPUART4, LPUART5, LPUART6, LPUART7, LPUART8 }
#endif
/** Interrupt vectors for the LPUART peripheral type */
#define LPUART_RX_TX_IRQS                        { NotAvail_IRQn, LPUART1_IRQn, LPUART2_IRQn, LPUART3_IRQn, LPUART4_IRQn, LPUART5_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn }

/* LSTCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__LSTCUA base address */
  #define AON__LSTCUA_BASE                         (0x545A0000u)
  /** Peripheral AON__LSTCUA base address */
  #define AON__LSTCUA_BASE_NS                      (0x445A0000u)
  /** Peripheral AON__LSTCUA base pointer */
  #define AON__LSTCUA                              ((LSTCU_Type *)AON__LSTCUA_BASE)
  /** Peripheral AON__LSTCUA base pointer */
  #define AON__LSTCUA_NS                           ((LSTCU_Type *)AON__LSTCUA_BASE_NS)
  /** Peripheral DDRC__LSTCU base address */
  #define DDRC__LSTCU_BASE                         (0x5E050000u)
  /** Peripheral DDRC__LSTCU base address */
  #define DDRC__LSTCU_BASE_NS                      (0x4E050000u)
  /** Peripheral DDRC__LSTCU base pointer */
  #define DDRC__LSTCU                              ((LSTCU_Type *)DDRC__LSTCU_BASE)
  /** Peripheral DDRC__LSTCU base pointer */
  #define DDRC__LSTCU_NS                           ((LSTCU_Type *)DDRC__LSTCU_BASE_NS)
  /** Peripheral M7__LSTCU_M7MIX base address */
  #define M7__LSTCU_M7MIX_BASE                     (0x5A050000u)
  /** Peripheral M7__LSTCU_M7MIX base address */
  #define M7__LSTCU_M7MIX_BASE_NS                  (0x4A050000u)
  /** Peripheral M7__LSTCU_M7MIX base pointer */
  #define M7__LSTCU_M7MIX                          ((LSTCU_Type *)M7__LSTCU_M7MIX_BASE)
  /** Peripheral M7__LSTCU_M7MIX base pointer */
  #define M7__LSTCU_M7MIX_NS                       ((LSTCU_Type *)M7__LSTCU_M7MIX_BASE_NS)
  /** Peripheral NPU__LSTCU_NPUMIX base address */
  #define NPU__LSTCU_NPUMIX_BASE                   (0x5A850000u)
  /** Peripheral NPU__LSTCU_NPUMIX base address */
  #define NPU__LSTCU_NPUMIX_BASE_NS                (0x4A850000u)
  /** Peripheral NPU__LSTCU_NPUMIX base pointer */
  #define NPU__LSTCU_NPUMIX                        ((LSTCU_Type *)NPU__LSTCU_NPUMIX_BASE)
  /** Peripheral NPU__LSTCU_NPUMIX base pointer */
  #define NPU__LSTCU_NPUMIX_NS                     ((LSTCU_Type *)NPU__LSTCU_NPUMIX_BASE_NS)
  /** Array initializer of LSTCU peripheral base addresses */
  #define LSTCU_BASE_ADDRS                         { AON__LSTCUA_BASE, DDRC__LSTCU_BASE, M7__LSTCU_M7MIX_BASE, NPU__LSTCU_NPUMIX_BASE }
  /** Array initializer of LSTCU peripheral base pointers */
  #define LSTCU_BASE_PTRS                          { AON__LSTCUA, DDRC__LSTCU, M7__LSTCU_M7MIX, NPU__LSTCU_NPUMIX }
  /** Array initializer of LSTCU peripheral base addresses */
  #define LSTCU_BASE_ADDRS_NS                      { AON__LSTCUA_BASE_NS, DDRC__LSTCU_BASE_NS, M7__LSTCU_M7MIX_BASE_NS, NPU__LSTCU_NPUMIX_BASE_NS }
  /** Array initializer of LSTCU peripheral base pointers */
  #define LSTCU_BASE_PTRS_NS                       { AON__LSTCUA_NS, DDRC__LSTCU_NS, M7__LSTCU_M7MIX_NS, NPU__LSTCU_NPUMIX_NS }
#else
  /** Peripheral AON__LSTCUA base address */
  #define AON__LSTCUA_BASE                         (0x445A0000u)
  /** Peripheral AON__LSTCUA base pointer */
  #define AON__LSTCUA                              ((LSTCU_Type *)AON__LSTCUA_BASE)
  /** Peripheral DDRC__LSTCU base address */
  #define DDRC__LSTCU_BASE                         (0x4E050000u)
  /** Peripheral DDRC__LSTCU base pointer */
  #define DDRC__LSTCU                              ((LSTCU_Type *)DDRC__LSTCU_BASE)
  /** Peripheral M7__LSTCU_M7MIX base address */
  #define M7__LSTCU_M7MIX_BASE                     (0x4A050000u)
  /** Peripheral M7__LSTCU_M7MIX base pointer */
  #define M7__LSTCU_M7MIX                          ((LSTCU_Type *)M7__LSTCU_M7MIX_BASE)
  /** Peripheral NPU__LSTCU_NPUMIX base address */
  #define NPU__LSTCU_NPUMIX_BASE                   (0x4A850000u)
  /** Peripheral NPU__LSTCU_NPUMIX base pointer */
  #define NPU__LSTCU_NPUMIX                        ((LSTCU_Type *)NPU__LSTCU_NPUMIX_BASE)
  /** Array initializer of LSTCU peripheral base addresses */
  #define LSTCU_BASE_ADDRS                         { AON__LSTCUA_BASE, DDRC__LSTCU_BASE, M7__LSTCU_M7MIX_BASE, NPU__LSTCU_NPUMIX_BASE }
  /** Array initializer of LSTCU peripheral base pointers */
  #define LSTCU_BASE_PTRS                          { AON__LSTCUA, DDRC__LSTCU, M7__LSTCU_M7MIX, NPU__LSTCU_NPUMIX }
#endif

/* M7_A7_APB_MCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral M7__A7_APB_MCM1 base address */
  #define M7__A7_APB_MCM1_BASE                     (0x5A0A0000u)
  /** Peripheral M7__A7_APB_MCM1 base address */
  #define M7__A7_APB_MCM1_BASE_NS                  (0x4A0A0000u)
  /** Peripheral M7__A7_APB_MCM1 base pointer */
  #define M7__A7_APB_MCM1                          ((M7_A7_APB_MCM_Type *)M7__A7_APB_MCM1_BASE)
  /** Peripheral M7__A7_APB_MCM1 base pointer */
  #define M7__A7_APB_MCM1_NS                       ((M7_A7_APB_MCM_Type *)M7__A7_APB_MCM1_BASE_NS)
  /** Array initializer of M7_A7_APB_MCM peripheral base addresses */
  #define M7_A7_APB_MCM_BASE_ADDRS                 { M7__A7_APB_MCM1_BASE }
  /** Array initializer of M7_A7_APB_MCM peripheral base pointers */
  #define M7_A7_APB_MCM_BASE_PTRS                  { M7__A7_APB_MCM1 }
  /** Array initializer of M7_A7_APB_MCM peripheral base addresses */
  #define M7_A7_APB_MCM_BASE_ADDRS_NS              { M7__A7_APB_MCM1_BASE_NS }
  /** Array initializer of M7_A7_APB_MCM peripheral base pointers */
  #define M7_A7_APB_MCM_BASE_PTRS_NS               { M7__A7_APB_MCM1_NS }
#else
  /** Peripheral M7__A7_APB_MCM1 base address */
  #define M7__A7_APB_MCM1_BASE                     (0x4A0A0000u)
  /** Peripheral M7__A7_APB_MCM1 base pointer */
  #define M7__A7_APB_MCM1                          ((M7_A7_APB_MCM_Type *)M7__A7_APB_MCM1_BASE)
  /** Array initializer of M7_A7_APB_MCM peripheral base addresses */
  #define M7_A7_APB_MCM_BASE_ADDRS                 { M7__A7_APB_MCM1_BASE }
  /** Array initializer of M7_A7_APB_MCM peripheral base pointers */
  #define M7_A7_APB_MCM_BASE_PTRS                  { M7__A7_APB_MCM1 }
#endif

/* M7_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral M7__TCU base address */
  #define M7__TCU_BASE                             (0x5A000000u)
  /** Peripheral M7__TCU base address */
  #define M7__TCU_BASE_NS                          (0x4A000000u)
  /** Peripheral M7__TCU base pointer */
  #define M7__TCU                                  ((M7_TCU_Type *)M7__TCU_BASE)
  /** Peripheral M7__TCU base pointer */
  #define M7__TCU_NS                               ((M7_TCU_Type *)M7__TCU_BASE_NS)
  /** Array initializer of M7_TCU peripheral base addresses */
  #define M7_TCU_BASE_ADDRS                        { M7__TCU_BASE }
  /** Array initializer of M7_TCU peripheral base pointers */
  #define M7_TCU_BASE_PTRS                         { M7__TCU }
  /** Array initializer of M7_TCU peripheral base addresses */
  #define M7_TCU_BASE_ADDRS_NS                     { M7__TCU_BASE_NS }
  /** Array initializer of M7_TCU peripheral base pointers */
  #define M7_TCU_BASE_PTRS_NS                      { M7__TCU_NS }
#else
  /** Peripheral M7__TCU base address */
  #define M7__TCU_BASE                             (0x4A000000u)
  /** Peripheral M7__TCU base pointer */
  #define M7__TCU                                  ((M7_TCU_Type *)M7__TCU_BASE)
  /** Array initializer of M7_TCU peripheral base addresses */
  #define M7_TCU_BASE_ADDRS                        { M7__TCU_BASE }
  /** Array initializer of M7_TCU peripheral base pointers */
  #define M7_TCU_BASE_PTRS                         { M7__TCU }
#endif

/* MIPI_DSI - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MIPI_DSI base address */
  #define MIPI_DSI_BASE                            (0x5ACF0000u)
  /** Peripheral MIPI_DSI base address */
  #define MIPI_DSI_BASE_NS                         (0x4ACF0000u)
  /** Peripheral MIPI_DSI base pointer */
  #define MIPI_DSI                                 ((MIPI_DSI_Type *)MIPI_DSI_BASE)
  /** Peripheral MIPI_DSI base pointer */
  #define MIPI_DSI_NS                              ((MIPI_DSI_Type *)MIPI_DSI_BASE_NS)
  /** Array initializer of MIPI_DSI peripheral base addresses */
  #define MIPI_DSI_BASE_ADDRS                      { MIPI_DSI_BASE }
  /** Array initializer of MIPI_DSI peripheral base pointers */
  #define MIPI_DSI_BASE_PTRS                       { MIPI_DSI }
  /** Array initializer of MIPI_DSI peripheral base addresses */
  #define MIPI_DSI_BASE_ADDRS_NS                   { MIPI_DSI_BASE_NS }
  /** Array initializer of MIPI_DSI peripheral base pointers */
  #define MIPI_DSI_BASE_PTRS_NS                    { MIPI_DSI_NS }
#else
  /** Peripheral MIPI_DSI base address */
  #define MIPI_DSI_BASE                            (0x4ACF0000u)
  /** Peripheral MIPI_DSI base pointer */
  #define MIPI_DSI                                 ((MIPI_DSI_Type *)MIPI_DSI_BASE)
  /** Array initializer of MIPI_DSI peripheral base addresses */
  #define MIPI_DSI_BASE_ADDRS                      { MIPI_DSI_BASE }
  /** Array initializer of MIPI_DSI peripheral base pointers */
  #define MIPI_DSI_BASE_PTRS                       { MIPI_DSI }
#endif

/* MMU_TBU0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base address */
  #define NOC__MMU_TBU_TCU__TBU0_BASE              (0x59110000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base address */
  #define NOC__MMU_TBU_TCU__TBU0_BASE_NS           (0x49110000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base pointer */
  #define NOC__MMU_TBU_TCU__TBU0                   ((MMU_TBU0_Type *)NOC__MMU_TBU_TCU__TBU0_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base pointer */
  #define NOC__MMU_TBU_TCU__TBU0_NS                ((MMU_TBU0_Type *)NOC__MMU_TBU_TCU__TBU0_BASE_NS)
  /** Array initializer of MMU_TBU0 peripheral base addresses */
  #define MMU_TBU0_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU0_BASE }
  /** Array initializer of MMU_TBU0 peripheral base pointers */
  #define MMU_TBU0_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU0 }
  /** Array initializer of MMU_TBU0 peripheral base addresses */
  #define MMU_TBU0_BASE_ADDRS_NS                   { NOC__MMU_TBU_TCU__TBU0_BASE_NS }
  /** Array initializer of MMU_TBU0 peripheral base pointers */
  #define MMU_TBU0_BASE_PTRS_NS                    { NOC__MMU_TBU_TCU__TBU0_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base address */
  #define NOC__MMU_TBU_TCU__TBU0_BASE              (0x49110000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU0 base pointer */
  #define NOC__MMU_TBU_TCU__TBU0                   ((MMU_TBU0_Type *)NOC__MMU_TBU_TCU__TBU0_BASE)
  /** Array initializer of MMU_TBU0 peripheral base addresses */
  #define MMU_TBU0_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU0_BASE }
  /** Array initializer of MMU_TBU0 peripheral base pointers */
  #define MMU_TBU0_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU0 }
#endif

/* MMU_TBU1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base address */
  #define NOC__MMU_TBU_TCU__TBU1_BASE              (0x59130000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base address */
  #define NOC__MMU_TBU_TCU__TBU1_BASE_NS           (0x49130000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base pointer */
  #define NOC__MMU_TBU_TCU__TBU1                   ((MMU_TBU1_Type *)NOC__MMU_TBU_TCU__TBU1_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base pointer */
  #define NOC__MMU_TBU_TCU__TBU1_NS                ((MMU_TBU1_Type *)NOC__MMU_TBU_TCU__TBU1_BASE_NS)
  /** Array initializer of MMU_TBU1 peripheral base addresses */
  #define MMU_TBU1_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU1_BASE }
  /** Array initializer of MMU_TBU1 peripheral base pointers */
  #define MMU_TBU1_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU1 }
  /** Array initializer of MMU_TBU1 peripheral base addresses */
  #define MMU_TBU1_BASE_ADDRS_NS                   { NOC__MMU_TBU_TCU__TBU1_BASE_NS }
  /** Array initializer of MMU_TBU1 peripheral base pointers */
  #define MMU_TBU1_BASE_PTRS_NS                    { NOC__MMU_TBU_TCU__TBU1_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base address */
  #define NOC__MMU_TBU_TCU__TBU1_BASE              (0x49130000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU1 base pointer */
  #define NOC__MMU_TBU_TCU__TBU1                   ((MMU_TBU1_Type *)NOC__MMU_TBU_TCU__TBU1_BASE)
  /** Array initializer of MMU_TBU1 peripheral base addresses */
  #define MMU_TBU1_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU1_BASE }
  /** Array initializer of MMU_TBU1 peripheral base pointers */
  #define MMU_TBU1_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU1 }
#endif

/* MMU_TBU2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base address */
  #define NOC__MMU_TBU_TCU__TBU2_BASE              (0x59150000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base address */
  #define NOC__MMU_TBU_TCU__TBU2_BASE_NS           (0x49150000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base pointer */
  #define NOC__MMU_TBU_TCU__TBU2                   ((MMU_TBU2_Type *)NOC__MMU_TBU_TCU__TBU2_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base pointer */
  #define NOC__MMU_TBU_TCU__TBU2_NS                ((MMU_TBU2_Type *)NOC__MMU_TBU_TCU__TBU2_BASE_NS)
  /** Array initializer of MMU_TBU2 peripheral base addresses */
  #define MMU_TBU2_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU2_BASE }
  /** Array initializer of MMU_TBU2 peripheral base pointers */
  #define MMU_TBU2_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU2 }
  /** Array initializer of MMU_TBU2 peripheral base addresses */
  #define MMU_TBU2_BASE_ADDRS_NS                   { NOC__MMU_TBU_TCU__TBU2_BASE_NS }
  /** Array initializer of MMU_TBU2 peripheral base pointers */
  #define MMU_TBU2_BASE_PTRS_NS                    { NOC__MMU_TBU_TCU__TBU2_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base address */
  #define NOC__MMU_TBU_TCU__TBU2_BASE              (0x49150000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU2 base pointer */
  #define NOC__MMU_TBU_TCU__TBU2                   ((MMU_TBU2_Type *)NOC__MMU_TBU_TCU__TBU2_BASE)
  /** Array initializer of MMU_TBU2 peripheral base addresses */
  #define MMU_TBU2_BASE_ADDRS                      { NOC__MMU_TBU_TCU__TBU2_BASE }
  /** Array initializer of MMU_TBU2 peripheral base pointers */
  #define MMU_TBU2_BASE_PTRS                       { NOC__MMU_TBU_TCU__TBU2 }
#endif

/* MMU_TBU_ME10 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base address */
  #define NOC__MMU_TBU_TCU__TBU10_BASE             (0x59230000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base address */
  #define NOC__MMU_TBU_TCU__TBU10_BASE_NS          (0x49230000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base pointer */
  #define NOC__MMU_TBU_TCU__TBU10                  ((MMU_TBU_ME10_Type *)NOC__MMU_TBU_TCU__TBU10_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base pointer */
  #define NOC__MMU_TBU_TCU__TBU10_NS               ((MMU_TBU_ME10_Type *)NOC__MMU_TBU_TCU__TBU10_BASE_NS)
  /** Array initializer of MMU_TBU_ME10 peripheral base addresses */
  #define MMU_TBU_ME10_BASE_ADDRS                  { NOC__MMU_TBU_TCU__TBU10_BASE }
  /** Array initializer of MMU_TBU_ME10 peripheral base pointers */
  #define MMU_TBU_ME10_BASE_PTRS                   { NOC__MMU_TBU_TCU__TBU10 }
  /** Array initializer of MMU_TBU_ME10 peripheral base addresses */
  #define MMU_TBU_ME10_BASE_ADDRS_NS               { NOC__MMU_TBU_TCU__TBU10_BASE_NS }
  /** Array initializer of MMU_TBU_ME10 peripheral base pointers */
  #define MMU_TBU_ME10_BASE_PTRS_NS                { NOC__MMU_TBU_TCU__TBU10_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base address */
  #define NOC__MMU_TBU_TCU__TBU10_BASE             (0x49230000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU10 base pointer */
  #define NOC__MMU_TBU_TCU__TBU10                  ((MMU_TBU_ME10_Type *)NOC__MMU_TBU_TCU__TBU10_BASE)
  /** Array initializer of MMU_TBU_ME10 peripheral base addresses */
  #define MMU_TBU_ME10_BASE_ADDRS                  { NOC__MMU_TBU_TCU__TBU10_BASE }
  /** Array initializer of MMU_TBU_ME10 peripheral base pointers */
  #define MMU_TBU_ME10_BASE_PTRS                   { NOC__MMU_TBU_TCU__TBU10 }
#endif

/* MMU_TBU_ME11 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base address */
  #define NOC__MMU_TBU_TCU__TBU11_BASE             (0x59250000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base address */
  #define NOC__MMU_TBU_TCU__TBU11_BASE_NS          (0x49250000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base pointer */
  #define NOC__MMU_TBU_TCU__TBU11                  ((MMU_TBU_ME11_Type *)NOC__MMU_TBU_TCU__TBU11_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base pointer */
  #define NOC__MMU_TBU_TCU__TBU11_NS               ((MMU_TBU_ME11_Type *)NOC__MMU_TBU_TCU__TBU11_BASE_NS)
  /** Array initializer of MMU_TBU_ME11 peripheral base addresses */
  #define MMU_TBU_ME11_BASE_ADDRS                  { NOC__MMU_TBU_TCU__TBU11_BASE }
  /** Array initializer of MMU_TBU_ME11 peripheral base pointers */
  #define MMU_TBU_ME11_BASE_PTRS                   { NOC__MMU_TBU_TCU__TBU11 }
  /** Array initializer of MMU_TBU_ME11 peripheral base addresses */
  #define MMU_TBU_ME11_BASE_ADDRS_NS               { NOC__MMU_TBU_TCU__TBU11_BASE_NS }
  /** Array initializer of MMU_TBU_ME11 peripheral base pointers */
  #define MMU_TBU_ME11_BASE_PTRS_NS                { NOC__MMU_TBU_TCU__TBU11_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base address */
  #define NOC__MMU_TBU_TCU__TBU11_BASE             (0x49250000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU11 base pointer */
  #define NOC__MMU_TBU_TCU__TBU11                  ((MMU_TBU_ME11_Type *)NOC__MMU_TBU_TCU__TBU11_BASE)
  /** Array initializer of MMU_TBU_ME11 peripheral base addresses */
  #define MMU_TBU_ME11_BASE_ADDRS                  { NOC__MMU_TBU_TCU__TBU11_BASE }
  /** Array initializer of MMU_TBU_ME11 peripheral base pointers */
  #define MMU_TBU_ME11_BASE_PTRS                   { NOC__MMU_TBU_TCU__TBU11 }
#endif

/* MMU_TBU_ME3 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base address */
  #define NOC__MMU_TBU_TCU__TBU3_BASE              (0x59170000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base address */
  #define NOC__MMU_TBU_TCU__TBU3_BASE_NS           (0x49170000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base pointer */
  #define NOC__MMU_TBU_TCU__TBU3                   ((MMU_TBU_ME3_Type *)NOC__MMU_TBU_TCU__TBU3_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base pointer */
  #define NOC__MMU_TBU_TCU__TBU3_NS                ((MMU_TBU_ME3_Type *)NOC__MMU_TBU_TCU__TBU3_BASE_NS)
  /** Array initializer of MMU_TBU_ME3 peripheral base addresses */
  #define MMU_TBU_ME3_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU3_BASE }
  /** Array initializer of MMU_TBU_ME3 peripheral base pointers */
  #define MMU_TBU_ME3_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU3 }
  /** Array initializer of MMU_TBU_ME3 peripheral base addresses */
  #define MMU_TBU_ME3_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU3_BASE_NS }
  /** Array initializer of MMU_TBU_ME3 peripheral base pointers */
  #define MMU_TBU_ME3_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU3_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base address */
  #define NOC__MMU_TBU_TCU__TBU3_BASE              (0x49170000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU3 base pointer */
  #define NOC__MMU_TBU_TCU__TBU3                   ((MMU_TBU_ME3_Type *)NOC__MMU_TBU_TCU__TBU3_BASE)
  /** Array initializer of MMU_TBU_ME3 peripheral base addresses */
  #define MMU_TBU_ME3_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU3_BASE }
  /** Array initializer of MMU_TBU_ME3 peripheral base pointers */
  #define MMU_TBU_ME3_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU3 }
#endif

/* MMU_TBU_ME4 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base address */
  #define NOC__MMU_TBU_TCU__TBU4_BASE              (0x59190000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base address */
  #define NOC__MMU_TBU_TCU__TBU4_BASE_NS           (0x49190000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base pointer */
  #define NOC__MMU_TBU_TCU__TBU4                   ((MMU_TBU_ME4_Type *)NOC__MMU_TBU_TCU__TBU4_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base pointer */
  #define NOC__MMU_TBU_TCU__TBU4_NS                ((MMU_TBU_ME4_Type *)NOC__MMU_TBU_TCU__TBU4_BASE_NS)
  /** Array initializer of MMU_TBU_ME4 peripheral base addresses */
  #define MMU_TBU_ME4_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU4_BASE }
  /** Array initializer of MMU_TBU_ME4 peripheral base pointers */
  #define MMU_TBU_ME4_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU4 }
  /** Array initializer of MMU_TBU_ME4 peripheral base addresses */
  #define MMU_TBU_ME4_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU4_BASE_NS }
  /** Array initializer of MMU_TBU_ME4 peripheral base pointers */
  #define MMU_TBU_ME4_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU4_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base address */
  #define NOC__MMU_TBU_TCU__TBU4_BASE              (0x49190000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU4 base pointer */
  #define NOC__MMU_TBU_TCU__TBU4                   ((MMU_TBU_ME4_Type *)NOC__MMU_TBU_TCU__TBU4_BASE)
  /** Array initializer of MMU_TBU_ME4 peripheral base addresses */
  #define MMU_TBU_ME4_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU4_BASE }
  /** Array initializer of MMU_TBU_ME4 peripheral base pointers */
  #define MMU_TBU_ME4_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU4 }
#endif

/* MMU_TBU_ME5 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base address */
  #define NOC__MMU_TBU_TCU__TBU5_BASE              (0x591B0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base address */
  #define NOC__MMU_TBU_TCU__TBU5_BASE_NS           (0x491B0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base pointer */
  #define NOC__MMU_TBU_TCU__TBU5                   ((MMU_TBU_ME5_Type *)NOC__MMU_TBU_TCU__TBU5_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base pointer */
  #define NOC__MMU_TBU_TCU__TBU5_NS                ((MMU_TBU_ME5_Type *)NOC__MMU_TBU_TCU__TBU5_BASE_NS)
  /** Array initializer of MMU_TBU_ME5 peripheral base addresses */
  #define MMU_TBU_ME5_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU5_BASE }
  /** Array initializer of MMU_TBU_ME5 peripheral base pointers */
  #define MMU_TBU_ME5_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU5 }
  /** Array initializer of MMU_TBU_ME5 peripheral base addresses */
  #define MMU_TBU_ME5_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU5_BASE_NS }
  /** Array initializer of MMU_TBU_ME5 peripheral base pointers */
  #define MMU_TBU_ME5_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU5_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base address */
  #define NOC__MMU_TBU_TCU__TBU5_BASE              (0x491B0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU5 base pointer */
  #define NOC__MMU_TBU_TCU__TBU5                   ((MMU_TBU_ME5_Type *)NOC__MMU_TBU_TCU__TBU5_BASE)
  /** Array initializer of MMU_TBU_ME5 peripheral base addresses */
  #define MMU_TBU_ME5_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU5_BASE }
  /** Array initializer of MMU_TBU_ME5 peripheral base pointers */
  #define MMU_TBU_ME5_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU5 }
#endif

/* MMU_TBU_ME6 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base address */
  #define NOC__MMU_TBU_TCU__TBU6_BASE              (0x591D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base address */
  #define NOC__MMU_TBU_TCU__TBU6_BASE_NS           (0x491D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base pointer */
  #define NOC__MMU_TBU_TCU__TBU6                   ((MMU_TBU_ME6_Type *)NOC__MMU_TBU_TCU__TBU6_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base pointer */
  #define NOC__MMU_TBU_TCU__TBU6_NS                ((MMU_TBU_ME6_Type *)NOC__MMU_TBU_TCU__TBU6_BASE_NS)
  /** Array initializer of MMU_TBU_ME6 peripheral base addresses */
  #define MMU_TBU_ME6_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU6_BASE }
  /** Array initializer of MMU_TBU_ME6 peripheral base pointers */
  #define MMU_TBU_ME6_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU6 }
  /** Array initializer of MMU_TBU_ME6 peripheral base addresses */
  #define MMU_TBU_ME6_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU6_BASE_NS }
  /** Array initializer of MMU_TBU_ME6 peripheral base pointers */
  #define MMU_TBU_ME6_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU6_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base address */
  #define NOC__MMU_TBU_TCU__TBU6_BASE              (0x491D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU6 base pointer */
  #define NOC__MMU_TBU_TCU__TBU6                   ((MMU_TBU_ME6_Type *)NOC__MMU_TBU_TCU__TBU6_BASE)
  /** Array initializer of MMU_TBU_ME6 peripheral base addresses */
  #define MMU_TBU_ME6_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU6_BASE }
  /** Array initializer of MMU_TBU_ME6 peripheral base pointers */
  #define MMU_TBU_ME6_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU6 }
#endif

/* MMU_TBU_ME7 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base address */
  #define NOC__MMU_TBU_TCU__TBU7_BASE              (0x591F0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base address */
  #define NOC__MMU_TBU_TCU__TBU7_BASE_NS           (0x491F0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base pointer */
  #define NOC__MMU_TBU_TCU__TBU7                   ((MMU_TBU_ME7_Type *)NOC__MMU_TBU_TCU__TBU7_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base pointer */
  #define NOC__MMU_TBU_TCU__TBU7_NS                ((MMU_TBU_ME7_Type *)NOC__MMU_TBU_TCU__TBU7_BASE_NS)
  /** Array initializer of MMU_TBU_ME7 peripheral base addresses */
  #define MMU_TBU_ME7_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU7_BASE }
  /** Array initializer of MMU_TBU_ME7 peripheral base pointers */
  #define MMU_TBU_ME7_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU7 }
  /** Array initializer of MMU_TBU_ME7 peripheral base addresses */
  #define MMU_TBU_ME7_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU7_BASE_NS }
  /** Array initializer of MMU_TBU_ME7 peripheral base pointers */
  #define MMU_TBU_ME7_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU7_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base address */
  #define NOC__MMU_TBU_TCU__TBU7_BASE              (0x491F0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU7 base pointer */
  #define NOC__MMU_TBU_TCU__TBU7                   ((MMU_TBU_ME7_Type *)NOC__MMU_TBU_TCU__TBU7_BASE)
  /** Array initializer of MMU_TBU_ME7 peripheral base addresses */
  #define MMU_TBU_ME7_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU7_BASE }
  /** Array initializer of MMU_TBU_ME7 peripheral base pointers */
  #define MMU_TBU_ME7_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU7 }
#endif

/* MMU_TBU_ME9 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base address */
  #define NOC__MMU_TBU_TCU__TBU9_BASE              (0x59210000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base address */
  #define NOC__MMU_TBU_TCU__TBU9_BASE_NS           (0x49210000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base pointer */
  #define NOC__MMU_TBU_TCU__TBU9                   ((MMU_TBU_ME9_Type *)NOC__MMU_TBU_TCU__TBU9_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base pointer */
  #define NOC__MMU_TBU_TCU__TBU9_NS                ((MMU_TBU_ME9_Type *)NOC__MMU_TBU_TCU__TBU9_BASE_NS)
  /** Array initializer of MMU_TBU_ME9 peripheral base addresses */
  #define MMU_TBU_ME9_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU9_BASE }
  /** Array initializer of MMU_TBU_ME9 peripheral base pointers */
  #define MMU_TBU_ME9_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU9 }
  /** Array initializer of MMU_TBU_ME9 peripheral base addresses */
  #define MMU_TBU_ME9_BASE_ADDRS_NS                { NOC__MMU_TBU_TCU__TBU9_BASE_NS }
  /** Array initializer of MMU_TBU_ME9 peripheral base pointers */
  #define MMU_TBU_ME9_BASE_PTRS_NS                 { NOC__MMU_TBU_TCU__TBU9_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base address */
  #define NOC__MMU_TBU_TCU__TBU9_BASE              (0x49210000u)
  /** Peripheral NOC__MMU_TBU_TCU__TBU9 base pointer */
  #define NOC__MMU_TBU_TCU__TBU9                   ((MMU_TBU_ME9_Type *)NOC__MMU_TBU_TCU__TBU9_BASE)
  /** Array initializer of MMU_TBU_ME9 peripheral base addresses */
  #define MMU_TBU_ME9_BASE_ADDRS                   { NOC__MMU_TBU_TCU__TBU9_BASE }
  /** Array initializer of MMU_TBU_ME9 peripheral base pointers */
  #define MMU_TBU_ME9_BASE_PTRS                    { NOC__MMU_TBU_TCU__TBU9 }
#endif

/* MMU_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__MMU_TBU_TCU__TCU base address */
  #define NOC__MMU_TBU_TCU__TCU_BASE               (0x590D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TCU base address */
  #define NOC__MMU_TBU_TCU__TCU_BASE_NS            (0x490D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TCU base pointer */
  #define NOC__MMU_TBU_TCU__TCU                    ((MMU_TCU_Type *)NOC__MMU_TBU_TCU__TCU_BASE)
  /** Peripheral NOC__MMU_TBU_TCU__TCU base pointer */
  #define NOC__MMU_TBU_TCU__TCU_NS                 ((MMU_TCU_Type *)NOC__MMU_TBU_TCU__TCU_BASE_NS)
  /** Array initializer of MMU_TCU peripheral base addresses */
  #define MMU_TCU_BASE_ADDRS                       { NOC__MMU_TBU_TCU__TCU_BASE }
  /** Array initializer of MMU_TCU peripheral base pointers */
  #define MMU_TCU_BASE_PTRS                        { NOC__MMU_TBU_TCU__TCU }
  /** Array initializer of MMU_TCU peripheral base addresses */
  #define MMU_TCU_BASE_ADDRS_NS                    { NOC__MMU_TBU_TCU__TCU_BASE_NS }
  /** Array initializer of MMU_TCU peripheral base pointers */
  #define MMU_TCU_BASE_PTRS_NS                     { NOC__MMU_TBU_TCU__TCU_NS }
#else
  /** Peripheral NOC__MMU_TBU_TCU__TCU base address */
  #define NOC__MMU_TBU_TCU__TCU_BASE               (0x490D0000u)
  /** Peripheral NOC__MMU_TBU_TCU__TCU base pointer */
  #define NOC__MMU_TBU_TCU__TCU                    ((MMU_TCU_Type *)NOC__MMU_TBU_TCU__TCU_BASE)
  /** Array initializer of MMU_TCU peripheral base addresses */
  #define MMU_TCU_BASE_ADDRS                       { NOC__MMU_TBU_TCU__TCU_BASE }
  /** Array initializer of MMU_TCU peripheral base pointers */
  #define MMU_TCU_BASE_PTRS                        { NOC__MMU_TBU_TCU__TCU }
#endif

/* MSGINTR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MSGINTR1 base address */
  #define MSGINTR1_BASE                            (0x54690000u)
  /** Peripheral MSGINTR1 base address */
  #define MSGINTR1_BASE_NS                         (0x44690000u)
  /** Peripheral MSGINTR1 base pointer */
  #define MSGINTR1                                 ((MSGINTR_Type *)MSGINTR1_BASE)
  /** Peripheral MSGINTR1 base pointer */
  #define MSGINTR1_NS                              ((MSGINTR_Type *)MSGINTR1_BASE_NS)
  /** Peripheral MSGINTR2 base address */
  #define MSGINTR2_BASE                            (0x546A0000u)
  /** Peripheral MSGINTR2 base address */
  #define MSGINTR2_BASE_NS                         (0x446A0000u)
  /** Peripheral MSGINTR2 base pointer */
  #define MSGINTR2                                 ((MSGINTR_Type *)MSGINTR2_BASE)
  /** Peripheral MSGINTR2 base pointer */
  #define MSGINTR2_NS                              ((MSGINTR_Type *)MSGINTR2_BASE_NS)
  /** Array initializer of MSGINTR peripheral base addresses */
  #define MSGINTR_BASE_ADDRS                       { 0u, MSGINTR1_BASE, MSGINTR2_BASE }
  /** Array initializer of MSGINTR peripheral base pointers */
  #define MSGINTR_BASE_PTRS                        { (MSGINTR_Type *)0u, MSGINTR1, MSGINTR2 }
  /** Array initializer of MSGINTR peripheral base addresses */
  #define MSGINTR_BASE_ADDRS_NS                    { 0u, MSGINTR1_BASE_NS, MSGINTR2_BASE_NS }
  /** Array initializer of MSGINTR peripheral base pointers */
  #define MSGINTR_BASE_PTRS_NS                     { (MSGINTR_Type *)0u, MSGINTR1_NS, MSGINTR2_NS }
#else
  /** Peripheral MSGINTR1 base address */
  #define MSGINTR1_BASE                            (0x44690000u)
  /** Peripheral MSGINTR1 base pointer */
  #define MSGINTR1                                 ((MSGINTR_Type *)MSGINTR1_BASE)
  /** Peripheral MSGINTR2 base address */
  #define MSGINTR2_BASE                            (0x446A0000u)
  /** Peripheral MSGINTR2 base pointer */
  #define MSGINTR2                                 ((MSGINTR_Type *)MSGINTR2_BASE)
  /** Array initializer of MSGINTR peripheral base addresses */
  #define MSGINTR_BASE_ADDRS                       { 0u, MSGINTR1_BASE, MSGINTR2_BASE }
  /** Array initializer of MSGINTR peripheral base pointers */
  #define MSGINTR_BASE_PTRS                        { (MSGINTR_Type *)0u, MSGINTR1, MSGINTR2 }
#endif
/** Interrupt vectors for the MSGINTR peripheral type */
#define MSGINTR_IRQS                             { NotAvail_IRQn, MSGINTR1_IRQn, MSGINTR2_IRQn }

/* MU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral MU5_MUA base address */
  #define MU5_MUA_BASE                             (0x54610000u)
  /** Peripheral MU5_MUA base address */
  #define MU5_MUA_BASE_NS                          (0x44610000u)
  /** Peripheral MU5_MUA base pointer */
  #define MU5_MUA                                  ((MU_Type *)MU5_MUA_BASE)
  /** Peripheral MU5_MUA base pointer */
  #define MU5_MUA_NS                               ((MU_Type *)MU5_MUA_BASE_NS)
  /** Peripheral MU7_MUB base address */
  #define MU7_MUB_BASE                             (0x52440000u)
  /** Peripheral MU7_MUB base address */
  #define MU7_MUB_BASE_NS                          (0x42440000u)
  /** Peripheral MU7_MUB base pointer */
  #define MU7_MUB                                  ((MU_Type *)MU7_MUB_BASE)
  /** Peripheral MU7_MUB base pointer */
  #define MU7_MUB_NS                               ((MU_Type *)MU7_MUB_BASE_NS)
  /** Peripheral MU8_MUB base address */
  #define MU8_MUB_BASE                             (0x52740000u)
  /** Peripheral MU8_MUB base address */
  #define MU8_MUB_BASE_NS                          (0x42740000u)
  /** Peripheral MU8_MUB base pointer */
  #define MU8_MUB                                  ((MU_Type *)MU8_MUB_BASE)
  /** Peripheral MU8_MUB base pointer */
  #define MU8_MUB_NS                               ((MU_Type *)MU8_MUB_BASE_NS)
  /** Peripheral AON__MUI_A1__MUA base address */
  #define AON__MUI_A1__MUA_BASE                    (0x54220000u)
  /** Peripheral AON__MUI_A1__MUA base address */
  #define AON__MUI_A1__MUA_BASE_NS                 (0x44220000u)
  /** Peripheral AON__MUI_A1__MUA base pointer */
  #define AON__MUI_A1__MUA                         ((MU_Type *)AON__MUI_A1__MUA_BASE)
  /** Peripheral AON__MUI_A1__MUA base pointer */
  #define AON__MUI_A1__MUA_NS                      ((MU_Type *)AON__MUI_A1__MUA_BASE_NS)
  /** Peripheral AON__MUI_A1__MUB base address */
  #define AON__MUI_A1__MUB_BASE                    (0x54230000u)
  /** Peripheral AON__MUI_A1__MUB base address */
  #define AON__MUI_A1__MUB_BASE_NS                 (0x44230000u)
  /** Peripheral AON__MUI_A1__MUB base pointer */
  #define AON__MUI_A1__MUB                         ((MU_Type *)AON__MUI_A1__MUB_BASE)
  /** Peripheral AON__MUI_A1__MUB base pointer */
  #define AON__MUI_A1__MUB_NS                      ((MU_Type *)AON__MUI_A1__MUB_BASE_NS)
  /** Peripheral AON__MUI_A2__MUA base address */
  #define AON__MUI_A2__MUA_BASE                    (0x545B0000u)
  /** Peripheral AON__MUI_A2__MUA base address */
  #define AON__MUI_A2__MUA_BASE_NS                 (0x445B0000u)
  /** Peripheral AON__MUI_A2__MUA base pointer */
  #define AON__MUI_A2__MUA                         ((MU_Type *)AON__MUI_A2__MUA_BASE)
  /** Peripheral AON__MUI_A2__MUA base pointer */
  #define AON__MUI_A2__MUA_NS                      ((MU_Type *)AON__MUI_A2__MUA_BASE_NS)
  /** Peripheral AON__MUI_A2__MUB base address */
  #define AON__MUI_A2__MUB_BASE                    (0x545C0000u)
  /** Peripheral AON__MUI_A2__MUB base address */
  #define AON__MUI_A2__MUB_BASE_NS                 (0x445C0000u)
  /** Peripheral AON__MUI_A2__MUB base pointer */
  #define AON__MUI_A2__MUB                         ((MU_Type *)AON__MUI_A2__MUB_BASE)
  /** Peripheral AON__MUI_A2__MUB base pointer */
  #define AON__MUI_A2__MUB_NS                      ((MU_Type *)AON__MUI_A2__MUB_BASE_NS)
  /** Peripheral AON__MUI_A3__MUA base address */
  #define AON__MUI_A3__MUA_BASE                    (0x545D0000u)
  /** Peripheral AON__MUI_A3__MUA base address */
  #define AON__MUI_A3__MUA_BASE_NS                 (0x445D0000u)
  /** Peripheral AON__MUI_A3__MUA base pointer */
  #define AON__MUI_A3__MUA                         ((MU_Type *)AON__MUI_A3__MUA_BASE)
  /** Peripheral AON__MUI_A3__MUA base pointer */
  #define AON__MUI_A3__MUA_NS                      ((MU_Type *)AON__MUI_A3__MUA_BASE_NS)
  /** Peripheral AON__MUI_A3__MUB base address */
  #define AON__MUI_A3__MUB_BASE                    (0x545E0000u)
  /** Peripheral AON__MUI_A3__MUB base address */
  #define AON__MUI_A3__MUB_BASE_NS                 (0x445E0000u)
  /** Peripheral AON__MUI_A3__MUB base pointer */
  #define AON__MUI_A3__MUB                         ((MU_Type *)AON__MUI_A3__MUB_BASE)
  /** Peripheral AON__MUI_A3__MUB base pointer */
  #define AON__MUI_A3__MUB_NS                      ((MU_Type *)AON__MUI_A3__MUB_BASE_NS)
  /** Peripheral AON__MUI_A4__MUA base address */
  #define AON__MUI_A4__MUA_BASE                    (0x545F0000u)
  /** Peripheral AON__MUI_A4__MUA base address */
  #define AON__MUI_A4__MUA_BASE_NS                 (0x445F0000u)
  /** Peripheral AON__MUI_A4__MUA base pointer */
  #define AON__MUI_A4__MUA                         ((MU_Type *)AON__MUI_A4__MUA_BASE)
  /** Peripheral AON__MUI_A4__MUA base pointer */
  #define AON__MUI_A4__MUA_NS                      ((MU_Type *)AON__MUI_A4__MUA_BASE_NS)
  /** Peripheral AON__MUI_A4__MUB base address */
  #define AON__MUI_A4__MUB_BASE                    (0x54600000u)
  /** Peripheral AON__MUI_A4__MUB base address */
  #define AON__MUI_A4__MUB_BASE_NS                 (0x44600000u)
  /** Peripheral AON__MUI_A4__MUB base pointer */
  #define AON__MUI_A4__MUB                         ((MU_Type *)AON__MUI_A4__MUB_BASE)
  /** Peripheral AON__MUI_A4__MUB base pointer */
  #define AON__MUI_A4__MUB_NS                      ((MU_Type *)AON__MUI_A4__MUB_BASE_NS)
  /** Peripheral AON__MUI_A5__MUB base address */
  #define AON__MUI_A5__MUB_BASE                    (0x54620000u)
  /** Peripheral AON__MUI_A5__MUB base address */
  #define AON__MUI_A5__MUB_BASE_NS                 (0x44620000u)
  /** Peripheral AON__MUI_A5__MUB base pointer */
  #define AON__MUI_A5__MUB                         ((MU_Type *)AON__MUI_A5__MUB_BASE)
  /** Peripheral AON__MUI_A5__MUB base pointer */
  #define AON__MUI_A5__MUB_NS                      ((MU_Type *)AON__MUI_A5__MUB_BASE_NS)
  /** Peripheral AON__MUI_A6__MUA base address */
  #define AON__MUI_A6__MUA_BASE                    (0x54630000u)
  /** Peripheral AON__MUI_A6__MUA base address */
  #define AON__MUI_A6__MUA_BASE_NS                 (0x44630000u)
  /** Peripheral AON__MUI_A6__MUA base pointer */
  #define AON__MUI_A6__MUA                         ((MU_Type *)AON__MUI_A6__MUA_BASE)
  /** Peripheral AON__MUI_A6__MUA base pointer */
  #define AON__MUI_A6__MUA_NS                      ((MU_Type *)AON__MUI_A6__MUA_BASE_NS)
  /** Peripheral AON__MUI_A6__MUB base address */
  #define AON__MUI_A6__MUB_BASE                    (0x54640000u)
  /** Peripheral AON__MUI_A6__MUB base address */
  #define AON__MUI_A6__MUB_BASE_NS                 (0x44640000u)
  /** Peripheral AON__MUI_A6__MUB base pointer */
  #define AON__MUI_A6__MUB                         ((MU_Type *)AON__MUI_A6__MUB_BASE)
  /** Peripheral AON__MUI_A6__MUB base pointer */
  #define AON__MUI_A6__MUB_NS                      ((MU_Type *)AON__MUI_A6__MUB_BASE_NS)
  /** Peripheral CAMERA__MUI_A1__MUA base address */
  #define CAMERA__MUI_A1__MUA_BASE                 (0x5AC60000u)
  /** Peripheral CAMERA__MUI_A1__MUA base address */
  #define CAMERA__MUI_A1__MUA_BASE_NS              (0x4AC60000u)
  /** Peripheral CAMERA__MUI_A1__MUA base pointer */
  #define CAMERA__MUI_A1__MUA                      ((MU_Type *)CAMERA__MUI_A1__MUA_BASE)
  /** Peripheral CAMERA__MUI_A1__MUA base pointer */
  #define CAMERA__MUI_A1__MUA_NS                   ((MU_Type *)CAMERA__MUI_A1__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A2__MUA base address */
  #define CAMERA__MUI_A2__MUA_BASE                 (0x5AC70000u)
  /** Peripheral CAMERA__MUI_A2__MUA base address */
  #define CAMERA__MUI_A2__MUA_BASE_NS              (0x4AC70000u)
  /** Peripheral CAMERA__MUI_A2__MUA base pointer */
  #define CAMERA__MUI_A2__MUA                      ((MU_Type *)CAMERA__MUI_A2__MUA_BASE)
  /** Peripheral CAMERA__MUI_A2__MUA base pointer */
  #define CAMERA__MUI_A2__MUA_NS                   ((MU_Type *)CAMERA__MUI_A2__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A3__MUA base address */
  #define CAMERA__MUI_A3__MUA_BASE                 (0x5AC80000u)
  /** Peripheral CAMERA__MUI_A3__MUA base address */
  #define CAMERA__MUI_A3__MUA_BASE_NS              (0x4AC80000u)
  /** Peripheral CAMERA__MUI_A3__MUA base pointer */
  #define CAMERA__MUI_A3__MUA                      ((MU_Type *)CAMERA__MUI_A3__MUA_BASE)
  /** Peripheral CAMERA__MUI_A3__MUA base pointer */
  #define CAMERA__MUI_A3__MUA_NS                   ((MU_Type *)CAMERA__MUI_A3__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A4__MUA base address */
  #define CAMERA__MUI_A4__MUA_BASE                 (0x5AC90000u)
  /** Peripheral CAMERA__MUI_A4__MUA base address */
  #define CAMERA__MUI_A4__MUA_BASE_NS              (0x4AC90000u)
  /** Peripheral CAMERA__MUI_A4__MUA base pointer */
  #define CAMERA__MUI_A4__MUA                      ((MU_Type *)CAMERA__MUI_A4__MUA_BASE)
  /** Peripheral CAMERA__MUI_A4__MUA base pointer */
  #define CAMERA__MUI_A4__MUA_NS                   ((MU_Type *)CAMERA__MUI_A4__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A5__MUA base address */
  #define CAMERA__MUI_A5__MUA_BASE                 (0x5ACA0000u)
  /** Peripheral CAMERA__MUI_A5__MUA base address */
  #define CAMERA__MUI_A5__MUA_BASE_NS              (0x4ACA0000u)
  /** Peripheral CAMERA__MUI_A5__MUA base pointer */
  #define CAMERA__MUI_A5__MUA                      ((MU_Type *)CAMERA__MUI_A5__MUA_BASE)
  /** Peripheral CAMERA__MUI_A5__MUA base pointer */
  #define CAMERA__MUI_A5__MUA_NS                   ((MU_Type *)CAMERA__MUI_A5__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A6__MUA base address */
  #define CAMERA__MUI_A6__MUA_BASE                 (0x5ACB0000u)
  /** Peripheral CAMERA__MUI_A6__MUA base address */
  #define CAMERA__MUI_A6__MUA_BASE_NS              (0x4ACB0000u)
  /** Peripheral CAMERA__MUI_A6__MUA base pointer */
  #define CAMERA__MUI_A6__MUA                      ((MU_Type *)CAMERA__MUI_A6__MUA_BASE)
  /** Peripheral CAMERA__MUI_A6__MUA base pointer */
  #define CAMERA__MUI_A6__MUA_NS                   ((MU_Type *)CAMERA__MUI_A6__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A7__MUA base address */
  #define CAMERA__MUI_A7__MUA_BASE                 (0x5ACC0000u)
  /** Peripheral CAMERA__MUI_A7__MUA base address */
  #define CAMERA__MUI_A7__MUA_BASE_NS              (0x4ACC0000u)
  /** Peripheral CAMERA__MUI_A7__MUA base pointer */
  #define CAMERA__MUI_A7__MUA                      ((MU_Type *)CAMERA__MUI_A7__MUA_BASE)
  /** Peripheral CAMERA__MUI_A7__MUA base pointer */
  #define CAMERA__MUI_A7__MUA_NS                   ((MU_Type *)CAMERA__MUI_A7__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A8__MUA base address */
  #define CAMERA__MUI_A8__MUA_BASE                 (0x5ACD0000u)
  /** Peripheral CAMERA__MUI_A8__MUA base address */
  #define CAMERA__MUI_A8__MUA_BASE_NS              (0x4ACD0000u)
  /** Peripheral CAMERA__MUI_A8__MUA base pointer */
  #define CAMERA__MUI_A8__MUA                      ((MU_Type *)CAMERA__MUI_A8__MUA_BASE)
  /** Peripheral CAMERA__MUI_A8__MUA base pointer */
  #define CAMERA__MUI_A8__MUA_NS                   ((MU_Type *)CAMERA__MUI_A8__MUA_BASE_NS)
  /** Peripheral CAMERA__MUI_A9__MUA base address */
  #define CAMERA__MUI_A9__MUA_BASE                 (0x5ACE0000u)
  /** Peripheral CAMERA__MUI_A9__MUA base address */
  #define CAMERA__MUI_A9__MUA_BASE_NS              (0x4ACE0000u)
  /** Peripheral CAMERA__MUI_A9__MUA base pointer */
  #define CAMERA__MUI_A9__MUA                      ((MU_Type *)CAMERA__MUI_A9__MUA_BASE)
  /** Peripheral CAMERA__MUI_A9__MUA base pointer */
  #define CAMERA__MUI_A9__MUA_NS                   ((MU_Type *)CAMERA__MUI_A9__MUA_BASE_NS)
  /** Peripheral WAKEUP__MUI_A7__MUA base address */
  #define WAKEUP__MUI_A7__MUA_BASE                 (0x52430000u)
  /** Peripheral WAKEUP__MUI_A7__MUA base address */
  #define WAKEUP__MUI_A7__MUA_BASE_NS              (0x42430000u)
  /** Peripheral WAKEUP__MUI_A7__MUA base pointer */
  #define WAKEUP__MUI_A7__MUA                      ((MU_Type *)WAKEUP__MUI_A7__MUA_BASE)
  /** Peripheral WAKEUP__MUI_A7__MUA base pointer */
  #define WAKEUP__MUI_A7__MUA_NS                   ((MU_Type *)WAKEUP__MUI_A7__MUA_BASE_NS)
  /** Peripheral WAKEUP__MUI_A8__MUA base address */
  #define WAKEUP__MUI_A8__MUA_BASE                 (0x52730000u)
  /** Peripheral WAKEUP__MUI_A8__MUA base address */
  #define WAKEUP__MUI_A8__MUA_BASE_NS              (0x42730000u)
  /** Peripheral WAKEUP__MUI_A8__MUA base pointer */
  #define WAKEUP__MUI_A8__MUA                      ((MU_Type *)WAKEUP__MUI_A8__MUA_BASE)
  /** Peripheral WAKEUP__MUI_A8__MUA base pointer */
  #define WAKEUP__MUI_A8__MUA_NS                   ((MU_Type *)WAKEUP__MUI_A8__MUA_BASE_NS)
  /** Array initializer of MU peripheral base addresses */
  #define MU_BASE_ADDRS                            { MU5_MUA_BASE, MU7_MUB_BASE, MU8_MUB_BASE, AON__MUI_A1__MUA_BASE, AON__MUI_A1__MUB_BASE, AON__MUI_A2__MUA_BASE, AON__MUI_A2__MUB_BASE, AON__MUI_A3__MUA_BASE, AON__MUI_A3__MUB_BASE, AON__MUI_A4__MUA_BASE, AON__MUI_A4__MUB_BASE, AON__MUI_A5__MUB_BASE, AON__MUI_A6__MUA_BASE, AON__MUI_A6__MUB_BASE, CAMERA__MUI_A1__MUA_BASE, CAMERA__MUI_A2__MUA_BASE, CAMERA__MUI_A3__MUA_BASE, CAMERA__MUI_A4__MUA_BASE, CAMERA__MUI_A5__MUA_BASE, CAMERA__MUI_A6__MUA_BASE, CAMERA__MUI_A7__MUA_BASE, CAMERA__MUI_A8__MUA_BASE, CAMERA__MUI_A9__MUA_BASE, WAKEUP__MUI_A7__MUA_BASE, WAKEUP__MUI_A8__MUA_BASE }
  /** Array initializer of MU peripheral base pointers */
  #define MU_BASE_PTRS                             { MU5_MUA, MU7_MUB, MU8_MUB, AON__MUI_A1__MUA, AON__MUI_A1__MUB, AON__MUI_A2__MUA, AON__MUI_A2__MUB, AON__MUI_A3__MUA, AON__MUI_A3__MUB, AON__MUI_A4__MUA, AON__MUI_A4__MUB, AON__MUI_A5__MUB, AON__MUI_A6__MUA, AON__MUI_A6__MUB, CAMERA__MUI_A1__MUA, CAMERA__MUI_A2__MUA, CAMERA__MUI_A3__MUA, CAMERA__MUI_A4__MUA, CAMERA__MUI_A5__MUA, CAMERA__MUI_A6__MUA, CAMERA__MUI_A7__MUA, CAMERA__MUI_A8__MUA, CAMERA__MUI_A9__MUA, WAKEUP__MUI_A7__MUA, WAKEUP__MUI_A8__MUA }
  /** Array initializer of MU peripheral base addresses */
  #define MU_BASE_ADDRS_NS                         { MU5_MUA_BASE_NS, MU7_MUB_BASE_NS, MU8_MUB_BASE_NS, AON__MUI_A1__MUA_BASE_NS, AON__MUI_A1__MUB_BASE_NS, AON__MUI_A2__MUA_BASE_NS, AON__MUI_A2__MUB_BASE_NS, AON__MUI_A3__MUA_BASE_NS, AON__MUI_A3__MUB_BASE_NS, AON__MUI_A4__MUA_BASE_NS, AON__MUI_A4__MUB_BASE_NS, AON__MUI_A5__MUB_BASE_NS, AON__MUI_A6__MUA_BASE_NS, AON__MUI_A6__MUB_BASE_NS, CAMERA__MUI_A1__MUA_BASE_NS, CAMERA__MUI_A2__MUA_BASE_NS, CAMERA__MUI_A3__MUA_BASE_NS, CAMERA__MUI_A4__MUA_BASE_NS, CAMERA__MUI_A5__MUA_BASE_NS, CAMERA__MUI_A6__MUA_BASE_NS, CAMERA__MUI_A7__MUA_BASE_NS, CAMERA__MUI_A8__MUA_BASE_NS, CAMERA__MUI_A9__MUA_BASE_NS, WAKEUP__MUI_A7__MUA_BASE_NS, WAKEUP__MUI_A8__MUA_BASE_NS }
  /** Array initializer of MU peripheral base pointers */
  #define MU_BASE_PTRS_NS                          { MU5_MUA_NS, MU7_MUB_NS, MU8_MUB_NS, AON__MUI_A1__MUA_NS, AON__MUI_A1__MUB_NS, AON__MUI_A2__MUA_NS, AON__MUI_A2__MUB_NS, AON__MUI_A3__MUA_NS, AON__MUI_A3__MUB_NS, AON__MUI_A4__MUA_NS, AON__MUI_A4__MUB_NS, AON__MUI_A5__MUB_NS, AON__MUI_A6__MUA_NS, AON__MUI_A6__MUB_NS, CAMERA__MUI_A1__MUA_NS, CAMERA__MUI_A2__MUA_NS, CAMERA__MUI_A3__MUA_NS, CAMERA__MUI_A4__MUA_NS, CAMERA__MUI_A5__MUA_NS, CAMERA__MUI_A6__MUA_NS, CAMERA__MUI_A7__MUA_NS, CAMERA__MUI_A8__MUA_NS, CAMERA__MUI_A9__MUA_NS, WAKEUP__MUI_A7__MUA_NS, WAKEUP__MUI_A8__MUA_NS }
#else
  /** Peripheral MU5_MUA base address */
  #define MU5_MUA_BASE                             (0x44610000u)
  /** Peripheral MU5_MUA base pointer */
  #define MU5_MUA                                  ((MU_Type *)MU5_MUA_BASE)
  /** Peripheral MU7_MUB base address */
  #define MU7_MUB_BASE                             (0x42440000u)
  /** Peripheral MU7_MUB base pointer */
  #define MU7_MUB                                  ((MU_Type *)MU7_MUB_BASE)
  /** Peripheral MU8_MUB base address */
  #define MU8_MUB_BASE                             (0x42740000u)
  /** Peripheral MU8_MUB base pointer */
  #define MU8_MUB                                  ((MU_Type *)MU8_MUB_BASE)
  /** Peripheral AON__MUI_A1__MUA base address */
  #define AON__MUI_A1__MUA_BASE                    (0x44220000u)
  /** Peripheral AON__MUI_A1__MUA base pointer */
  #define AON__MUI_A1__MUA                         ((MU_Type *)AON__MUI_A1__MUA_BASE)
  /** Peripheral AON__MUI_A1__MUB base address */
  #define AON__MUI_A1__MUB_BASE                    (0x44230000u)
  /** Peripheral AON__MUI_A1__MUB base pointer */
  #define AON__MUI_A1__MUB                         ((MU_Type *)AON__MUI_A1__MUB_BASE)
  /** Peripheral AON__MUI_A2__MUA base address */
  #define AON__MUI_A2__MUA_BASE                    (0x445B0000u)
  /** Peripheral AON__MUI_A2__MUA base pointer */
  #define AON__MUI_A2__MUA                         ((MU_Type *)AON__MUI_A2__MUA_BASE)
  /** Peripheral AON__MUI_A2__MUB base address */
  #define AON__MUI_A2__MUB_BASE                    (0x445C0000u)
  /** Peripheral AON__MUI_A2__MUB base pointer */
  #define AON__MUI_A2__MUB                         ((MU_Type *)AON__MUI_A2__MUB_BASE)
  /** Peripheral AON__MUI_A3__MUA base address */
  #define AON__MUI_A3__MUA_BASE                    (0x445D0000u)
  /** Peripheral AON__MUI_A3__MUA base pointer */
  #define AON__MUI_A3__MUA                         ((MU_Type *)AON__MUI_A3__MUA_BASE)
  /** Peripheral AON__MUI_A3__MUB base address */
  #define AON__MUI_A3__MUB_BASE                    (0x445E0000u)
  /** Peripheral AON__MUI_A3__MUB base pointer */
  #define AON__MUI_A3__MUB                         ((MU_Type *)AON__MUI_A3__MUB_BASE)
  /** Peripheral AON__MUI_A4__MUA base address */
  #define AON__MUI_A4__MUA_BASE                    (0x445F0000u)
  /** Peripheral AON__MUI_A4__MUA base pointer */
  #define AON__MUI_A4__MUA                         ((MU_Type *)AON__MUI_A4__MUA_BASE)
  /** Peripheral AON__MUI_A4__MUB base address */
  #define AON__MUI_A4__MUB_BASE                    (0x44600000u)
  /** Peripheral AON__MUI_A4__MUB base pointer */
  #define AON__MUI_A4__MUB                         ((MU_Type *)AON__MUI_A4__MUB_BASE)
  /** Peripheral AON__MUI_A5__MUB base address */
  #define AON__MUI_A5__MUB_BASE                    (0x44620000u)
  /** Peripheral AON__MUI_A5__MUB base pointer */
  #define AON__MUI_A5__MUB                         ((MU_Type *)AON__MUI_A5__MUB_BASE)
  /** Peripheral AON__MUI_A6__MUA base address */
  #define AON__MUI_A6__MUA_BASE                    (0x44630000u)
  /** Peripheral AON__MUI_A6__MUA base pointer */
  #define AON__MUI_A6__MUA                         ((MU_Type *)AON__MUI_A6__MUA_BASE)
  /** Peripheral AON__MUI_A6__MUB base address */
  #define AON__MUI_A6__MUB_BASE                    (0x44640000u)
  /** Peripheral AON__MUI_A6__MUB base pointer */
  #define AON__MUI_A6__MUB                         ((MU_Type *)AON__MUI_A6__MUB_BASE)
  /** Peripheral CAMERA__MUI_A1__MUA base address */
  #define CAMERA__MUI_A1__MUA_BASE                 (0x4AC60000u)
  /** Peripheral CAMERA__MUI_A1__MUA base pointer */
  #define CAMERA__MUI_A1__MUA                      ((MU_Type *)CAMERA__MUI_A1__MUA_BASE)
  /** Peripheral CAMERA__MUI_A2__MUA base address */
  #define CAMERA__MUI_A2__MUA_BASE                 (0x4AC70000u)
  /** Peripheral CAMERA__MUI_A2__MUA base pointer */
  #define CAMERA__MUI_A2__MUA                      ((MU_Type *)CAMERA__MUI_A2__MUA_BASE)
  /** Peripheral CAMERA__MUI_A3__MUA base address */
  #define CAMERA__MUI_A3__MUA_BASE                 (0x4AC80000u)
  /** Peripheral CAMERA__MUI_A3__MUA base pointer */
  #define CAMERA__MUI_A3__MUA                      ((MU_Type *)CAMERA__MUI_A3__MUA_BASE)
  /** Peripheral CAMERA__MUI_A4__MUA base address */
  #define CAMERA__MUI_A4__MUA_BASE                 (0x4AC90000u)
  /** Peripheral CAMERA__MUI_A4__MUA base pointer */
  #define CAMERA__MUI_A4__MUA                      ((MU_Type *)CAMERA__MUI_A4__MUA_BASE)
  /** Peripheral CAMERA__MUI_A5__MUA base address */
  #define CAMERA__MUI_A5__MUA_BASE                 (0x4ACA0000u)
  /** Peripheral CAMERA__MUI_A5__MUA base pointer */
  #define CAMERA__MUI_A5__MUA                      ((MU_Type *)CAMERA__MUI_A5__MUA_BASE)
  /** Peripheral CAMERA__MUI_A6__MUA base address */
  #define CAMERA__MUI_A6__MUA_BASE                 (0x4ACB0000u)
  /** Peripheral CAMERA__MUI_A6__MUA base pointer */
  #define CAMERA__MUI_A6__MUA                      ((MU_Type *)CAMERA__MUI_A6__MUA_BASE)
  /** Peripheral CAMERA__MUI_A7__MUA base address */
  #define CAMERA__MUI_A7__MUA_BASE                 (0x4ACC0000u)
  /** Peripheral CAMERA__MUI_A7__MUA base pointer */
  #define CAMERA__MUI_A7__MUA                      ((MU_Type *)CAMERA__MUI_A7__MUA_BASE)
  /** Peripheral CAMERA__MUI_A8__MUA base address */
  #define CAMERA__MUI_A8__MUA_BASE                 (0x4ACD0000u)
  /** Peripheral CAMERA__MUI_A8__MUA base pointer */
  #define CAMERA__MUI_A8__MUA                      ((MU_Type *)CAMERA__MUI_A8__MUA_BASE)
  /** Peripheral CAMERA__MUI_A9__MUA base address */
  #define CAMERA__MUI_A9__MUA_BASE                 (0x4ACE0000u)
  /** Peripheral CAMERA__MUI_A9__MUA base pointer */
  #define CAMERA__MUI_A9__MUA                      ((MU_Type *)CAMERA__MUI_A9__MUA_BASE)
  /** Peripheral WAKEUP__MUI_A7__MUA base address */
  #define WAKEUP__MUI_A7__MUA_BASE                 (0x42430000u)
  /** Peripheral WAKEUP__MUI_A7__MUA base pointer */
  #define WAKEUP__MUI_A7__MUA                      ((MU_Type *)WAKEUP__MUI_A7__MUA_BASE)
  /** Peripheral WAKEUP__MUI_A8__MUA base address */
  #define WAKEUP__MUI_A8__MUA_BASE                 (0x42730000u)
  /** Peripheral WAKEUP__MUI_A8__MUA base pointer */
  #define WAKEUP__MUI_A8__MUA                      ((MU_Type *)WAKEUP__MUI_A8__MUA_BASE)
  /** Array initializer of MU peripheral base addresses */
  #define MU_BASE_ADDRS                            { MU5_MUA_BASE, MU7_MUB_BASE, MU8_MUB_BASE, AON__MUI_A1__MUA_BASE, AON__MUI_A1__MUB_BASE, AON__MUI_A2__MUA_BASE, AON__MUI_A2__MUB_BASE, AON__MUI_A3__MUA_BASE, AON__MUI_A3__MUB_BASE, AON__MUI_A4__MUA_BASE, AON__MUI_A4__MUB_BASE, AON__MUI_A5__MUB_BASE, AON__MUI_A6__MUA_BASE, AON__MUI_A6__MUB_BASE, CAMERA__MUI_A1__MUA_BASE, CAMERA__MUI_A2__MUA_BASE, CAMERA__MUI_A3__MUA_BASE, CAMERA__MUI_A4__MUA_BASE, CAMERA__MUI_A5__MUA_BASE, CAMERA__MUI_A6__MUA_BASE, CAMERA__MUI_A7__MUA_BASE, CAMERA__MUI_A8__MUA_BASE, CAMERA__MUI_A9__MUA_BASE, WAKEUP__MUI_A7__MUA_BASE, WAKEUP__MUI_A8__MUA_BASE }
  /** Array initializer of MU peripheral base pointers */
  #define MU_BASE_PTRS                             { MU5_MUA, MU7_MUB, MU8_MUB, AON__MUI_A1__MUA, AON__MUI_A1__MUB, AON__MUI_A2__MUA, AON__MUI_A2__MUB, AON__MUI_A3__MUA, AON__MUI_A3__MUB, AON__MUI_A4__MUA, AON__MUI_A4__MUB, AON__MUI_A5__MUB, AON__MUI_A6__MUA, AON__MUI_A6__MUB, CAMERA__MUI_A1__MUA, CAMERA__MUI_A2__MUA, CAMERA__MUI_A3__MUA, CAMERA__MUI_A4__MUA, CAMERA__MUI_A5__MUA, CAMERA__MUI_A6__MUA, CAMERA__MUI_A7__MUA, CAMERA__MUI_A8__MUA, CAMERA__MUI_A9__MUA, WAKEUP__MUI_A7__MUA, WAKEUP__MUI_A8__MUA }
#endif
/** Interrupt vectors for the MU peripheral type */
#define MU_IRQS                                  { MU5_A_IRQn, MU7_B_IRQn, MU8_B_IRQn, MU1_A_IRQn, MU1_B_IRQn, MU2_A_IRQn, MU2_B_IRQn, MU3_A_IRQn, MU3_B_IRQn, MU4_A_IRQn, MU4_B_IRQn, MU5_B_IRQn, MU6_A_IRQn, MU6_B_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, NotAvail_IRQn, MU7_A_IRQn, MU8_A_IRQn }

/* NETC_ENETC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_BASE base address */
  #define ENETC0_BASE_BASE                         (0x5CC10000u)
  /** Peripheral ENETC0_BASE base address */
  #define ENETC0_BASE_BASE_NS                      (0x4CC10000u)
  /** Peripheral ENETC0_BASE base pointer */
  #define ENETC0_BASE                              ((NETC_ENETC_Type *)ENETC0_BASE_BASE)
  /** Peripheral ENETC0_BASE base pointer */
  #define ENETC0_BASE_NS                           ((NETC_ENETC_Type *)ENETC0_BASE_BASE_NS)
  /** Peripheral ENETC1_BASE base address */
  #define ENETC1_BASE_BASE                         (0x5CC50000u)
  /** Peripheral ENETC1_BASE base address */
  #define ENETC1_BASE_BASE_NS                      (0x4CC50000u)
  /** Peripheral ENETC1_BASE base pointer */
  #define ENETC1_BASE                              ((NETC_ENETC_Type *)ENETC1_BASE_BASE)
  /** Peripheral ENETC1_BASE base pointer */
  #define ENETC1_BASE_NS                           ((NETC_ENETC_Type *)ENETC1_BASE_BASE_NS)
  /** Peripheral ENETC2_BASE base address */
  #define ENETC2_BASE_BASE                         (0x5CC90000u)
  /** Peripheral ENETC2_BASE base address */
  #define ENETC2_BASE_BASE_NS                      (0x4CC90000u)
  /** Peripheral ENETC2_BASE base pointer */
  #define ENETC2_BASE                              ((NETC_ENETC_Type *)ENETC2_BASE_BASE)
  /** Peripheral ENETC2_BASE base pointer */
  #define ENETC2_BASE_NS                           ((NETC_ENETC_Type *)ENETC2_BASE_BASE_NS)
  /** Array initializer of NETC_ENETC peripheral base addresses */
  #define NETC_ENETC_BASE_ADDRS                    { ENETC0_BASE_BASE, ENETC1_BASE_BASE, ENETC2_BASE_BASE }
  /** Array initializer of NETC_ENETC peripheral base pointers */
  #define NETC_ENETC_BASE_PTRS                     { ENETC0_BASE, ENETC1_BASE, ENETC2_BASE }
  /** Array initializer of NETC_ENETC peripheral base addresses */
  #define NETC_ENETC_BASE_ADDRS_NS                 { ENETC0_BASE_BASE_NS, ENETC1_BASE_BASE_NS, ENETC2_BASE_BASE_NS }
  /** Array initializer of NETC_ENETC peripheral base pointers */
  #define NETC_ENETC_BASE_PTRS_NS                  { ENETC0_BASE_NS, ENETC1_BASE_NS, ENETC2_BASE_NS }
#else
  /** Peripheral ENETC0_BASE base address */
  #define ENETC0_BASE_BASE                         (0x4CC10000u)
  /** Peripheral ENETC0_BASE base pointer */
  #define ENETC0_BASE                              ((NETC_ENETC_Type *)ENETC0_BASE_BASE)
  /** Peripheral ENETC1_BASE base address */
  #define ENETC1_BASE_BASE                         (0x4CC50000u)
  /** Peripheral ENETC1_BASE base pointer */
  #define ENETC1_BASE                              ((NETC_ENETC_Type *)ENETC1_BASE_BASE)
  /** Peripheral ENETC2_BASE base address */
  #define ENETC2_BASE_BASE                         (0x4CC90000u)
  /** Peripheral ENETC2_BASE base pointer */
  #define ENETC2_BASE                              ((NETC_ENETC_Type *)ENETC2_BASE_BASE)
  /** Array initializer of NETC_ENETC peripheral base addresses */
  #define NETC_ENETC_BASE_ADDRS                    { ENETC0_BASE_BASE, ENETC1_BASE_BASE, ENETC2_BASE_BASE }
  /** Array initializer of NETC_ENETC peripheral base pointers */
  #define NETC_ENETC_BASE_PTRS                     { ENETC0_BASE, ENETC1_BASE, ENETC2_BASE }
#endif

/* NETC_ETH_LINK - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_ETH_MAC_PORT base address */
  #define ENETC0_ETH_MAC_PORT_BASE                 (0x5CC15000u)
  /** Peripheral ENETC0_ETH_MAC_PORT base address */
  #define ENETC0_ETH_MAC_PORT_BASE_NS              (0x4CC15000u)
  /** Peripheral ENETC0_ETH_MAC_PORT base pointer */
  #define ENETC0_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC0_ETH_MAC_PORT_BASE)
  /** Peripheral ENETC0_ETH_MAC_PORT base pointer */
  #define ENETC0_ETH_MAC_PORT_NS                   ((NETC_ETH_LINK_Type *)ENETC0_ETH_MAC_PORT_BASE_NS)
  /** Peripheral ENETC1_ETH_MAC_PORT base address */
  #define ENETC1_ETH_MAC_PORT_BASE                 (0x5CC55000u)
  /** Peripheral ENETC1_ETH_MAC_PORT base address */
  #define ENETC1_ETH_MAC_PORT_BASE_NS              (0x4CC55000u)
  /** Peripheral ENETC1_ETH_MAC_PORT base pointer */
  #define ENETC1_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC1_ETH_MAC_PORT_BASE)
  /** Peripheral ENETC1_ETH_MAC_PORT base pointer */
  #define ENETC1_ETH_MAC_PORT_NS                   ((NETC_ETH_LINK_Type *)ENETC1_ETH_MAC_PORT_BASE_NS)
  /** Peripheral ENETC2_ETH_MAC_PORT base address */
  #define ENETC2_ETH_MAC_PORT_BASE                 (0x5CC95000u)
  /** Peripheral ENETC2_ETH_MAC_PORT base address */
  #define ENETC2_ETH_MAC_PORT_BASE_NS              (0x4CC95000u)
  /** Peripheral ENETC2_ETH_MAC_PORT base pointer */
  #define ENETC2_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC2_ETH_MAC_PORT_BASE)
  /** Peripheral ENETC2_ETH_MAC_PORT base pointer */
  #define ENETC2_ETH_MAC_PORT_NS                   ((NETC_ETH_LINK_Type *)ENETC2_ETH_MAC_PORT_BASE_NS)
  /** Array initializer of NETC_ETH_LINK peripheral base addresses */
  #define NETC_ETH_LINK_BASE_ADDRS                 { ENETC0_ETH_MAC_PORT_BASE, ENETC1_ETH_MAC_PORT_BASE, ENETC2_ETH_MAC_PORT_BASE }
  /** Array initializer of NETC_ETH_LINK peripheral base pointers */
  #define NETC_ETH_LINK_BASE_PTRS                  { ENETC0_ETH_MAC_PORT, ENETC1_ETH_MAC_PORT, ENETC2_ETH_MAC_PORT }
  /** Array initializer of NETC_ETH_LINK peripheral base addresses */
  #define NETC_ETH_LINK_BASE_ADDRS_NS              { ENETC0_ETH_MAC_PORT_BASE_NS, ENETC1_ETH_MAC_PORT_BASE_NS, ENETC2_ETH_MAC_PORT_BASE_NS }
  /** Array initializer of NETC_ETH_LINK peripheral base pointers */
  #define NETC_ETH_LINK_BASE_PTRS_NS               { ENETC0_ETH_MAC_PORT_NS, ENETC1_ETH_MAC_PORT_NS, ENETC2_ETH_MAC_PORT_NS }
#else
  /** Peripheral ENETC0_ETH_MAC_PORT base address */
  #define ENETC0_ETH_MAC_PORT_BASE                 (0x4CC15000u)
  /** Peripheral ENETC0_ETH_MAC_PORT base pointer */
  #define ENETC0_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC0_ETH_MAC_PORT_BASE)
  /** Peripheral ENETC1_ETH_MAC_PORT base address */
  #define ENETC1_ETH_MAC_PORT_BASE                 (0x4CC55000u)
  /** Peripheral ENETC1_ETH_MAC_PORT base pointer */
  #define ENETC1_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC1_ETH_MAC_PORT_BASE)
  /** Peripheral ENETC2_ETH_MAC_PORT base address */
  #define ENETC2_ETH_MAC_PORT_BASE                 (0x4CC95000u)
  /** Peripheral ENETC2_ETH_MAC_PORT base pointer */
  #define ENETC2_ETH_MAC_PORT                      ((NETC_ETH_LINK_Type *)ENETC2_ETH_MAC_PORT_BASE)
  /** Array initializer of NETC_ETH_LINK peripheral base addresses */
  #define NETC_ETH_LINK_BASE_ADDRS                 { ENETC0_ETH_MAC_PORT_BASE, ENETC1_ETH_MAC_PORT_BASE, ENETC2_ETH_MAC_PORT_BASE }
  /** Array initializer of NETC_ETH_LINK peripheral base pointers */
  #define NETC_ETH_LINK_BASE_PTRS                  { ENETC0_ETH_MAC_PORT, ENETC1_ETH_MAC_PORT, ENETC2_ETH_MAC_PORT }
#endif

/* NETC_IERB - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC_IERB base address */
  #define NETC_IERB_BASE                           (0x5CDE0000u)
  /** Peripheral NETC_IERB base address */
  #define NETC_IERB_BASE_NS                        (0x4CDE0000u)
  /** Peripheral NETC_IERB base pointer */
  #define NETC_IERB                                ((NETC_IERB_Type *)NETC_IERB_BASE)
  /** Peripheral NETC_IERB base pointer */
  #define NETC_IERB_NS                             ((NETC_IERB_Type *)NETC_IERB_BASE_NS)
  /** Array initializer of NETC_IERB peripheral base addresses */
  #define NETC_IERB_BASE_ADDRS                     { NETC_IERB_BASE }
  /** Array initializer of NETC_IERB peripheral base pointers */
  #define NETC_IERB_BASE_PTRS                      { NETC_IERB }
  /** Array initializer of NETC_IERB peripheral base addresses */
  #define NETC_IERB_BASE_ADDRS_NS                  { NETC_IERB_BASE_NS }
  /** Array initializer of NETC_IERB peripheral base pointers */
  #define NETC_IERB_BASE_PTRS_NS                   { NETC_IERB_NS }
#else
  /** Peripheral NETC_IERB base address */
  #define NETC_IERB_BASE                           (0x4CDE0000u)
  /** Peripheral NETC_IERB base pointer */
  #define NETC_IERB                                ((NETC_IERB_Type *)NETC_IERB_BASE)
  /** Array initializer of NETC_IERB peripheral base addresses */
  #define NETC_IERB_BASE_ADDRS                     { NETC_IERB_BASE }
  /** Array initializer of NETC_IERB peripheral base pointers */
  #define NETC_IERB_BASE_PTRS                      { NETC_IERB }
#endif

/* NETC_PORT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_PORT base address */
  #define ENETC0_PORT_BASE                         (0x5CC14000u)
  /** Peripheral ENETC0_PORT base address */
  #define ENETC0_PORT_BASE_NS                      (0x4CC14000u)
  /** Peripheral ENETC0_PORT base pointer */
  #define ENETC0_PORT                              ((NETC_PORT_Type *)ENETC0_PORT_BASE)
  /** Peripheral ENETC0_PORT base pointer */
  #define ENETC0_PORT_NS                           ((NETC_PORT_Type *)ENETC0_PORT_BASE_NS)
  /** Peripheral ENETC1_PORT base address */
  #define ENETC1_PORT_BASE                         (0x5CC54000u)
  /** Peripheral ENETC1_PORT base address */
  #define ENETC1_PORT_BASE_NS                      (0x4CC54000u)
  /** Peripheral ENETC1_PORT base pointer */
  #define ENETC1_PORT                              ((NETC_PORT_Type *)ENETC1_PORT_BASE)
  /** Peripheral ENETC1_PORT base pointer */
  #define ENETC1_PORT_NS                           ((NETC_PORT_Type *)ENETC1_PORT_BASE_NS)
  /** Peripheral ENETC2_PORT base address */
  #define ENETC2_PORT_BASE                         (0x5CC94000u)
  /** Peripheral ENETC2_PORT base address */
  #define ENETC2_PORT_BASE_NS                      (0x4CC94000u)
  /** Peripheral ENETC2_PORT base pointer */
  #define ENETC2_PORT                              ((NETC_PORT_Type *)ENETC2_PORT_BASE)
  /** Peripheral ENETC2_PORT base pointer */
  #define ENETC2_PORT_NS                           ((NETC_PORT_Type *)ENETC2_PORT_BASE_NS)
  /** Array initializer of NETC_PORT peripheral base addresses */
  #define NETC_PORT_BASE_ADDRS                     { ENETC0_PORT_BASE, ENETC1_PORT_BASE, ENETC2_PORT_BASE }
  /** Array initializer of NETC_PORT peripheral base pointers */
  #define NETC_PORT_BASE_PTRS                      { ENETC0_PORT, ENETC1_PORT, ENETC2_PORT }
  /** Array initializer of NETC_PORT peripheral base addresses */
  #define NETC_PORT_BASE_ADDRS_NS                  { ENETC0_PORT_BASE_NS, ENETC1_PORT_BASE_NS, ENETC2_PORT_BASE_NS }
  /** Array initializer of NETC_PORT peripheral base pointers */
  #define NETC_PORT_BASE_PTRS_NS                   { ENETC0_PORT_NS, ENETC1_PORT_NS, ENETC2_PORT_NS }
#else
  /** Peripheral ENETC0_PORT base address */
  #define ENETC0_PORT_BASE                         (0x4CC14000u)
  /** Peripheral ENETC0_PORT base pointer */
  #define ENETC0_PORT                              ((NETC_PORT_Type *)ENETC0_PORT_BASE)
  /** Peripheral ENETC1_PORT base address */
  #define ENETC1_PORT_BASE                         (0x4CC54000u)
  /** Peripheral ENETC1_PORT base pointer */
  #define ENETC1_PORT                              ((NETC_PORT_Type *)ENETC1_PORT_BASE)
  /** Peripheral ENETC2_PORT base address */
  #define ENETC2_PORT_BASE                         (0x4CC94000u)
  /** Peripheral ENETC2_PORT base pointer */
  #define ENETC2_PORT                              ((NETC_PORT_Type *)ENETC2_PORT_BASE)
  /** Array initializer of NETC_PORT peripheral base addresses */
  #define NETC_PORT_BASE_ADDRS                     { ENETC0_PORT_BASE, ENETC1_PORT_BASE, ENETC2_PORT_BASE }
  /** Array initializer of NETC_PORT peripheral base pointers */
  #define NETC_PORT_BASE_PTRS                      { ENETC0_PORT, ENETC1_PORT, ENETC2_PORT }
#endif

/* NETC_PRIV - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC_PRIV base address */
  #define NETC_PRIV_BASE                           (0x5CDF0000u)
  /** Peripheral NETC_PRIV base address */
  #define NETC_PRIV_BASE_NS                        (0x4CDF0000u)
  /** Peripheral NETC_PRIV base pointer */
  #define NETC_PRIV                                ((NETC_PRIV_Type *)NETC_PRIV_BASE)
  /** Peripheral NETC_PRIV base pointer */
  #define NETC_PRIV_NS                             ((NETC_PRIV_Type *)NETC_PRIV_BASE_NS)
  /** Array initializer of NETC_PRIV peripheral base addresses */
  #define NETC_PRIV_BASE_ADDRS                     { NETC_PRIV_BASE }
  /** Array initializer of NETC_PRIV peripheral base pointers */
  #define NETC_PRIV_BASE_PTRS                      { NETC_PRIV }
  /** Array initializer of NETC_PRIV peripheral base addresses */
  #define NETC_PRIV_BASE_ADDRS_NS                  { NETC_PRIV_BASE_NS }
  /** Array initializer of NETC_PRIV peripheral base pointers */
  #define NETC_PRIV_BASE_PTRS_NS                   { NETC_PRIV_NS }
#else
  /** Peripheral NETC_PRIV base address */
  #define NETC_PRIV_BASE                           (0x4CDF0000u)
  /** Peripheral NETC_PRIV base pointer */
  #define NETC_PRIV                                ((NETC_PRIV_Type *)NETC_PRIV_BASE)
  /** Array initializer of NETC_PRIV peripheral base addresses */
  #define NETC_PRIV_BASE_ADDRS                     { NETC_PRIV_BASE }
  /** Array initializer of NETC_PRIV peripheral base pointers */
  #define NETC_PRIV_BASE_PTRS                      { NETC_PRIV }
#endif

/* NETC_SW_ENETC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ENETC0_COMMON base address */
  #define ENETC0_COMMON_BASE                       (0x5CC11000u)
  /** Peripheral ENETC0_COMMON base address */
  #define ENETC0_COMMON_BASE_NS                    (0x4CC11000u)
  /** Peripheral ENETC0_COMMON base pointer */
  #define ENETC0_COMMON                            ((NETC_SW_ENETC_Type *)ENETC0_COMMON_BASE)
  /** Peripheral ENETC0_COMMON base pointer */
  #define ENETC0_COMMON_NS                         ((NETC_SW_ENETC_Type *)ENETC0_COMMON_BASE_NS)
  /** Peripheral ENETC1_COMMON base address */
  #define ENETC1_COMMON_BASE                       (0x5CC51000u)
  /** Peripheral ENETC1_COMMON base address */
  #define ENETC1_COMMON_BASE_NS                    (0x4CC51000u)
  /** Peripheral ENETC1_COMMON base pointer */
  #define ENETC1_COMMON                            ((NETC_SW_ENETC_Type *)ENETC1_COMMON_BASE)
  /** Peripheral ENETC1_COMMON base pointer */
  #define ENETC1_COMMON_NS                         ((NETC_SW_ENETC_Type *)ENETC1_COMMON_BASE_NS)
  /** Peripheral ENETC2_COMMON base address */
  #define ENETC2_COMMON_BASE                       (0x5CC91000u)
  /** Peripheral ENETC2_COMMON base address */
  #define ENETC2_COMMON_BASE_NS                    (0x4CC91000u)
  /** Peripheral ENETC2_COMMON base pointer */
  #define ENETC2_COMMON                            ((NETC_SW_ENETC_Type *)ENETC2_COMMON_BASE)
  /** Peripheral ENETC2_COMMON base pointer */
  #define ENETC2_COMMON_NS                         ((NETC_SW_ENETC_Type *)ENETC2_COMMON_BASE_NS)
  /** Array initializer of NETC_SW_ENETC peripheral base addresses */
  #define NETC_SW_ENETC_BASE_ADDRS                 { ENETC0_COMMON_BASE, ENETC1_COMMON_BASE, ENETC2_COMMON_BASE }
  /** Array initializer of NETC_SW_ENETC peripheral base pointers */
  #define NETC_SW_ENETC_BASE_PTRS                  { ENETC0_COMMON, ENETC1_COMMON, ENETC2_COMMON }
  /** Array initializer of NETC_SW_ENETC peripheral base addresses */
  #define NETC_SW_ENETC_BASE_ADDRS_NS              { ENETC0_COMMON_BASE_NS, ENETC1_COMMON_BASE_NS, ENETC2_COMMON_BASE_NS }
  /** Array initializer of NETC_SW_ENETC peripheral base pointers */
  #define NETC_SW_ENETC_BASE_PTRS_NS               { ENETC0_COMMON_NS, ENETC1_COMMON_NS, ENETC2_COMMON_NS }
#else
  /** Peripheral ENETC0_COMMON base address */
  #define ENETC0_COMMON_BASE                       (0x4CC11000u)
  /** Peripheral ENETC0_COMMON base pointer */
  #define ENETC0_COMMON                            ((NETC_SW_ENETC_Type *)ENETC0_COMMON_BASE)
  /** Peripheral ENETC1_COMMON base address */
  #define ENETC1_COMMON_BASE                       (0x4CC51000u)
  /** Peripheral ENETC1_COMMON base pointer */
  #define ENETC1_COMMON                            ((NETC_SW_ENETC_Type *)ENETC1_COMMON_BASE)
  /** Peripheral ENETC2_COMMON base address */
  #define ENETC2_COMMON_BASE                       (0x4CC91000u)
  /** Peripheral ENETC2_COMMON base pointer */
  #define ENETC2_COMMON                            ((NETC_SW_ENETC_Type *)ENETC2_COMMON_BASE)
  /** Array initializer of NETC_SW_ENETC peripheral base addresses */
  #define NETC_SW_ENETC_BASE_ADDRS                 { ENETC0_COMMON_BASE, ENETC1_COMMON_BASE, ENETC2_COMMON_BASE }
  /** Array initializer of NETC_SW_ENETC peripheral base pointers */
  #define NETC_SW_ENETC_BASE_PTRS                  { ENETC0_COMMON, ENETC1_COMMON, ENETC2_COMMON }
#endif

/* NETC_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC__TCU base address */
  #define NETC__TCU_BASE                           (0x5C800000u)
  /** Peripheral NETC__TCU base address */
  #define NETC__TCU_BASE_NS                        (0x4C800000u)
  /** Peripheral NETC__TCU base pointer */
  #define NETC__TCU                                ((NETC_TCU_Type *)NETC__TCU_BASE)
  /** Peripheral NETC__TCU base pointer */
  #define NETC__TCU_NS                             ((NETC_TCU_Type *)NETC__TCU_BASE_NS)
  /** Array initializer of NETC_TCU peripheral base addresses */
  #define NETC_TCU_BASE_ADDRS                      { NETC__TCU_BASE }
  /** Array initializer of NETC_TCU peripheral base pointers */
  #define NETC_TCU_BASE_PTRS                       { NETC__TCU }
  /** Array initializer of NETC_TCU peripheral base addresses */
  #define NETC_TCU_BASE_ADDRS_NS                   { NETC__TCU_BASE_NS }
  /** Array initializer of NETC_TCU peripheral base pointers */
  #define NETC_TCU_BASE_PTRS_NS                    { NETC__TCU_NS }
#else
  /** Peripheral NETC__TCU base address */
  #define NETC__TCU_BASE                           (0x4C800000u)
  /** Peripheral NETC__TCU base pointer */
  #define NETC__TCU                                ((NETC_TCU_Type *)NETC__TCU_BASE)
  /** Array initializer of NETC_TCU peripheral base addresses */
  #define NETC_TCU_BASE_ADDRS                      { NETC__TCU_BASE }
  /** Array initializer of NETC_TCU peripheral base pointers */
  #define NETC_TCU_BASE_PTRS                       { NETC__TCU }
#endif

/* NEUTRON - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE (0x5ABC0000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE_NS (0x4ABC0000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_NS   ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE_NS)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE (0x5ABC1000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE_NS (0x4ABC1000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_NS   ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE_NS)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE (0x5ABC2000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE_NS (0x4ABC2000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_NS   ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE_NS)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE (0x5ABC3000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE_NS (0x4ABC3000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_NS   ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE_NS)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE (0x5ABC4000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE_NS (0x4ABC4000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_NS ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE_NS)
  /** Array initializer of NEUTRON peripheral base addresses */
  #define NEUTRON_BASE_ADDRS                       { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE }
  /** Array initializer of NEUTRON peripheral base pointers */
  #define NEUTRON_BASE_PTRS                        { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON }
  /** Array initializer of NEUTRON peripheral base addresses */
  #define NEUTRON_BASE_ADDRS_NS                    { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE_NS, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE_NS, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE_NS, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE_NS, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE_NS }
  /** Array initializer of NEUTRON peripheral base pointers */
  #define NEUTRON_BASE_PTRS_NS                     { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_NS, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_NS, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_NS, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_NS, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_NS }
#else
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE (0x4ABC0000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON0__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON0__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE (0x4ABC1000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON1__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON1__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE (0x4ABC2000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON2__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON2__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE (0x4ABC3000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON3__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON3__NEUTRON      ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base address */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE (0x4ABC4000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON ((NEUTRON_Type *)NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE)
  /** Array initializer of NEUTRON peripheral base addresses */
  #define NEUTRON_BASE_ADDRS                       { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON_BASE, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON_BASE }
  /** Array initializer of NEUTRON peripheral base pointers */
  #define NEUTRON_BASE_PTRS                        { NPU__NEUTRON_NPU__NEUTRON0__NEUTRON, NPU__NEUTRON_NPU__NEUTRON1__NEUTRON, NPU__NEUTRON_NPU__NEUTRON2__NEUTRON, NPU__NEUTRON_NPU__NEUTRON3__NEUTRON, NPU__NEUTRON_NPU__NEUTRON_GANGED__NEUTRON }
#endif

/* NEUTRON_NPU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE (0x5AB00000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE_NS (0x4AB00000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC     ((NEUTRON_NPU_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_NS  ((NEUTRON_NPU_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE_NS)
  /** Array initializer of NEUTRON_NPU peripheral base addresses */
  #define NEUTRON_NPU_BASE_ADDRS                   { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE }
  /** Array initializer of NEUTRON_NPU peripheral base pointers */
  #define NEUTRON_NPU_BASE_PTRS                    { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC }
  /** Array initializer of NEUTRON_NPU peripheral base addresses */
  #define NEUTRON_NPU_BASE_ADDRS_NS                { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE_NS }
  /** Array initializer of NEUTRON_NPU peripheral base pointers */
  #define NEUTRON_NPU_BASE_PTRS_NS                 { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_NS }
#else
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE (0x4AB00000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC     ((NEUTRON_NPU_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE)
  /** Array initializer of NEUTRON_NPU peripheral base addresses */
  #define NEUTRON_NPU_BASE_ADDRS                   { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC_BASE }
  /** Array initializer of NEUTRON_NPU peripheral base pointers */
  #define NEUTRON_NPU_BASE_PTRS                    { NPU__NEUTRON_NPU__NEUTRON_S__MMR_SOC }
#endif

/* NOC_BLK_CTRL_NOCMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__BLK_CTRL_NOCMIX base address */
  #define NOC__BLK_CTRL_NOCMIX_BASE                (0x59000000u)
  /** Peripheral NOC__BLK_CTRL_NOCMIX base address */
  #define NOC__BLK_CTRL_NOCMIX_BASE_NS             (0x49000000u)
  /** Peripheral NOC__BLK_CTRL_NOCMIX base pointer */
  #define NOC__BLK_CTRL_NOCMIX                     ((NOC_BLK_CTRL_NOCMIX_Type *)NOC__BLK_CTRL_NOCMIX_BASE)
  /** Peripheral NOC__BLK_CTRL_NOCMIX base pointer */
  #define NOC__BLK_CTRL_NOCMIX_NS                  ((NOC_BLK_CTRL_NOCMIX_Type *)NOC__BLK_CTRL_NOCMIX_BASE_NS)
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base addresses */
  #define NOC_BLK_CTRL_NOCMIX_BASE_ADDRS           { NOC__BLK_CTRL_NOCMIX_BASE }
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base pointers */
  #define NOC_BLK_CTRL_NOCMIX_BASE_PTRS            { NOC__BLK_CTRL_NOCMIX }
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base addresses */
  #define NOC_BLK_CTRL_NOCMIX_BASE_ADDRS_NS        { NOC__BLK_CTRL_NOCMIX_BASE_NS }
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base pointers */
  #define NOC_BLK_CTRL_NOCMIX_BASE_PTRS_NS         { NOC__BLK_CTRL_NOCMIX_NS }
#else
  /** Peripheral NOC__BLK_CTRL_NOCMIX base address */
  #define NOC__BLK_CTRL_NOCMIX_BASE                (0x49000000u)
  /** Peripheral NOC__BLK_CTRL_NOCMIX base pointer */
  #define NOC__BLK_CTRL_NOCMIX                     ((NOC_BLK_CTRL_NOCMIX_Type *)NOC__BLK_CTRL_NOCMIX_BASE)
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base addresses */
  #define NOC_BLK_CTRL_NOCMIX_BASE_ADDRS           { NOC__BLK_CTRL_NOCMIX_BASE }
  /** Array initializer of NOC_BLK_CTRL_NOCMIX peripheral base pointers */
  #define NOC_BLK_CTRL_NOCMIX_BASE_PTRS            { NOC__BLK_CTRL_NOCMIX }
#endif

/* NOC_CMU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC_CMUN0 base address */
  #define NOC_CMUN0_BASE                           (0x59070000u)
  /** Peripheral NOC_CMUN0 base address */
  #define NOC_CMUN0_BASE_NS                        (0x49070000u)
  /** Peripheral NOC_CMUN0 base pointer */
  #define NOC_CMUN0                                ((NOC_CMU_Type *)NOC_CMUN0_BASE)
  /** Peripheral NOC_CMUN0 base pointer */
  #define NOC_CMUN0_NS                             ((NOC_CMU_Type *)NOC_CMUN0_BASE_NS)
  /** Peripheral NOC_CMUN1 base address */
  #define NOC_CMUN1_BASE                           (0x59080000u)
  /** Peripheral NOC_CMUN1 base address */
  #define NOC_CMUN1_BASE_NS                        (0x49080000u)
  /** Peripheral NOC_CMUN1 base pointer */
  #define NOC_CMUN1                                ((NOC_CMU_Type *)NOC_CMUN1_BASE)
  /** Peripheral NOC_CMUN1 base pointer */
  #define NOC_CMUN1_NS                             ((NOC_CMU_Type *)NOC_CMUN1_BASE_NS)
  /** Array initializer of NOC_CMU peripheral base addresses */
  #define NOC_CMU_BASE_ADDRS                       { NOC_CMUN0_BASE, NOC_CMUN1_BASE }
  /** Array initializer of NOC_CMU peripheral base pointers */
  #define NOC_CMU_BASE_PTRS                        { NOC_CMUN0, NOC_CMUN1 }
  /** Array initializer of NOC_CMU peripheral base addresses */
  #define NOC_CMU_BASE_ADDRS_NS                    { NOC_CMUN0_BASE_NS, NOC_CMUN1_BASE_NS }
  /** Array initializer of NOC_CMU peripheral base pointers */
  #define NOC_CMU_BASE_PTRS_NS                     { NOC_CMUN0_NS, NOC_CMUN1_NS }
#else
  /** Peripheral NOC_CMUN0 base address */
  #define NOC_CMUN0_BASE                           (0x49070000u)
  /** Peripheral NOC_CMUN0 base pointer */
  #define NOC_CMUN0                                ((NOC_CMU_Type *)NOC_CMUN0_BASE)
  /** Peripheral NOC_CMUN1 base address */
  #define NOC_CMUN1_BASE                           (0x49080000u)
  /** Peripheral NOC_CMUN1 base pointer */
  #define NOC_CMUN1                                ((NOC_CMU_Type *)NOC_CMUN1_BASE)
  /** Array initializer of NOC_CMU peripheral base addresses */
  #define NOC_CMU_BASE_ADDRS                       { NOC_CMUN0_BASE, NOC_CMUN1_BASE }
  /** Array initializer of NOC_CMU peripheral base pointers */
  #define NOC_CMU_BASE_PTRS                        { NOC_CMUN0, NOC_CMUN1 }
#endif

/* NOC_GICA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICA base address */
  #define NOC__GIC__GICA_BASE                      (0x58010000u)
  /** Peripheral NOC__GIC__GICA base address */
  #define NOC__GIC__GICA_BASE_NS                   (0x48010000u)
  /** Peripheral NOC__GIC__GICA base pointer */
  #define NOC__GIC__GICA                           ((NOC_GICA_Type *)NOC__GIC__GICA_BASE)
  /** Peripheral NOC__GIC__GICA base pointer */
  #define NOC__GIC__GICA_NS                        ((NOC_GICA_Type *)NOC__GIC__GICA_BASE_NS)
  /** Array initializer of NOC_GICA peripheral base addresses */
  #define NOC_GICA_BASE_ADDRS                      { NOC__GIC__GICA_BASE }
  /** Array initializer of NOC_GICA peripheral base pointers */
  #define NOC_GICA_BASE_PTRS                       { NOC__GIC__GICA }
  /** Array initializer of NOC_GICA peripheral base addresses */
  #define NOC_GICA_BASE_ADDRS_NS                   { NOC__GIC__GICA_BASE_NS }
  /** Array initializer of NOC_GICA peripheral base pointers */
  #define NOC_GICA_BASE_PTRS_NS                    { NOC__GIC__GICA_NS }
#else
  /** Peripheral NOC__GIC__GICA base address */
  #define NOC__GIC__GICA_BASE                      (0x48010000u)
  /** Peripheral NOC__GIC__GICA base pointer */
  #define NOC__GIC__GICA                           ((NOC_GICA_Type *)NOC__GIC__GICA_BASE)
  /** Array initializer of NOC_GICA peripheral base addresses */
  #define NOC_GICA_BASE_ADDRS                      { NOC__GIC__GICA_BASE }
  /** Array initializer of NOC_GICA peripheral base pointers */
  #define NOC_GICA_BASE_PTRS                       { NOC__GIC__GICA }
#endif

/* NOC_GICD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICD base address */
  #define NOC__GIC__GICD_BASE                      (0x58000000u)
  /** Peripheral NOC__GIC__GICD base address */
  #define NOC__GIC__GICD_BASE_NS                   (0x48000000u)
  /** Peripheral NOC__GIC__GICD base pointer */
  #define NOC__GIC__GICD                           ((NOC_GICD_Type *)NOC__GIC__GICD_BASE)
  /** Peripheral NOC__GIC__GICD base pointer */
  #define NOC__GIC__GICD_NS                        ((NOC_GICD_Type *)NOC__GIC__GICD_BASE_NS)
  /** Array initializer of NOC_GICD peripheral base addresses */
  #define NOC_GICD_BASE_ADDRS                      { NOC__GIC__GICD_BASE }
  /** Array initializer of NOC_GICD peripheral base pointers */
  #define NOC_GICD_BASE_PTRS                       { NOC__GIC__GICD }
  /** Array initializer of NOC_GICD peripheral base addresses */
  #define NOC_GICD_BASE_ADDRS_NS                   { NOC__GIC__GICD_BASE_NS }
  /** Array initializer of NOC_GICD peripheral base pointers */
  #define NOC_GICD_BASE_PTRS_NS                    { NOC__GIC__GICD_NS }
#else
  /** Peripheral NOC__GIC__GICD base address */
  #define NOC__GIC__GICD_BASE                      (0x48000000u)
  /** Peripheral NOC__GIC__GICD base pointer */
  #define NOC__GIC__GICD                           ((NOC_GICD_Type *)NOC__GIC__GICD_BASE)
  /** Array initializer of NOC_GICD peripheral base addresses */
  #define NOC_GICD_BASE_ADDRS                      { NOC__GIC__GICD_BASE }
  /** Array initializer of NOC_GICD peripheral base pointers */
  #define NOC_GICD_BASE_PTRS                       { NOC__GIC__GICD }
#endif

/* NOC_GICDA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICDA base address */
  #define NOC__GIC__GICDA_BASE                     (0x58120000u)
  /** Peripheral NOC__GIC__GICDA base address */
  #define NOC__GIC__GICDA_BASE_NS                  (0x48120000u)
  /** Peripheral NOC__GIC__GICDA base pointer */
  #define NOC__GIC__GICDA                          ((NOC_GICDA_Type *)NOC__GIC__GICDA_BASE)
  /** Peripheral NOC__GIC__GICDA base pointer */
  #define NOC__GIC__GICDA_NS                       ((NOC_GICDA_Type *)NOC__GIC__GICDA_BASE_NS)
  /** Array initializer of NOC_GICDA peripheral base addresses */
  #define NOC_GICDA_BASE_ADDRS                     { NOC__GIC__GICDA_BASE }
  /** Array initializer of NOC_GICDA peripheral base pointers */
  #define NOC_GICDA_BASE_PTRS                      { NOC__GIC__GICDA }
  /** Array initializer of NOC_GICDA peripheral base addresses */
  #define NOC_GICDA_BASE_ADDRS_NS                  { NOC__GIC__GICDA_BASE_NS }
  /** Array initializer of NOC_GICDA peripheral base pointers */
  #define NOC_GICDA_BASE_PTRS_NS                   { NOC__GIC__GICDA_NS }
#else
  /** Peripheral NOC__GIC__GICDA base address */
  #define NOC__GIC__GICDA_BASE                     (0x48120000u)
  /** Peripheral NOC__GIC__GICDA base pointer */
  #define NOC__GIC__GICDA                          ((NOC_GICDA_Type *)NOC__GIC__GICDA_BASE)
  /** Array initializer of NOC_GICDA peripheral base addresses */
  #define NOC_GICDA_BASE_ADDRS                     { NOC__GIC__GICDA_BASE }
  /** Array initializer of NOC_GICDA peripheral base pointers */
  #define NOC_GICDA_BASE_PTRS                      { NOC__GIC__GICDA }
#endif

/* NOC_GICP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICP base address */
  #define NOC__GIC__GICP_BASE                      (0x58030000u)
  /** Peripheral NOC__GIC__GICP base address */
  #define NOC__GIC__GICP_BASE_NS                   (0x48030000u)
  /** Peripheral NOC__GIC__GICP base pointer */
  #define NOC__GIC__GICP                           ((NOC_GICP_Type *)NOC__GIC__GICP_BASE)
  /** Peripheral NOC__GIC__GICP base pointer */
  #define NOC__GIC__GICP_NS                        ((NOC_GICP_Type *)NOC__GIC__GICP_BASE_NS)
  /** Array initializer of NOC_GICP peripheral base addresses */
  #define NOC_GICP_BASE_ADDRS                      { NOC__GIC__GICP_BASE }
  /** Array initializer of NOC_GICP peripheral base pointers */
  #define NOC_GICP_BASE_PTRS                       { NOC__GIC__GICP }
  /** Array initializer of NOC_GICP peripheral base addresses */
  #define NOC_GICP_BASE_ADDRS_NS                   { NOC__GIC__GICP_BASE_NS }
  /** Array initializer of NOC_GICP peripheral base pointers */
  #define NOC_GICP_BASE_PTRS_NS                    { NOC__GIC__GICP_NS }
#else
  /** Peripheral NOC__GIC__GICP base address */
  #define NOC__GIC__GICP_BASE                      (0x48030000u)
  /** Peripheral NOC__GIC__GICP base pointer */
  #define NOC__GIC__GICP                           ((NOC_GICP_Type *)NOC__GIC__GICP_BASE)
  /** Array initializer of NOC_GICP peripheral base addresses */
  #define NOC_GICP_BASE_ADDRS                      { NOC__GIC__GICP_BASE }
  /** Array initializer of NOC_GICP peripheral base pointers */
  #define NOC_GICP_BASE_PTRS                       { NOC__GIC__GICP }
#endif

/* NOC_GICRLPI0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI0 base address */
  #define NOC__GIC__GICRLPI0_BASE                  (0x58060000u)
  /** Peripheral NOC__GIC__GICRLPI0 base address */
  #define NOC__GIC__GICRLPI0_BASE_NS               (0x48060000u)
  /** Peripheral NOC__GIC__GICRLPI0 base pointer */
  #define NOC__GIC__GICRLPI0                       ((NOC_GICRLPI0_Type *)NOC__GIC__GICRLPI0_BASE)
  /** Peripheral NOC__GIC__GICRLPI0 base pointer */
  #define NOC__GIC__GICRLPI0_NS                    ((NOC_GICRLPI0_Type *)NOC__GIC__GICRLPI0_BASE_NS)
  /** Array initializer of NOC_GICRLPI0 peripheral base addresses */
  #define NOC_GICRLPI0_BASE_ADDRS                  { NOC__GIC__GICRLPI0_BASE }
  /** Array initializer of NOC_GICRLPI0 peripheral base pointers */
  #define NOC_GICRLPI0_BASE_PTRS                   { NOC__GIC__GICRLPI0 }
  /** Array initializer of NOC_GICRLPI0 peripheral base addresses */
  #define NOC_GICRLPI0_BASE_ADDRS_NS               { NOC__GIC__GICRLPI0_BASE_NS }
  /** Array initializer of NOC_GICRLPI0 peripheral base pointers */
  #define NOC_GICRLPI0_BASE_PTRS_NS                { NOC__GIC__GICRLPI0_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI0 base address */
  #define NOC__GIC__GICRLPI0_BASE                  (0x48060000u)
  /** Peripheral NOC__GIC__GICRLPI0 base pointer */
  #define NOC__GIC__GICRLPI0                       ((NOC_GICRLPI0_Type *)NOC__GIC__GICRLPI0_BASE)
  /** Array initializer of NOC_GICRLPI0 peripheral base addresses */
  #define NOC_GICRLPI0_BASE_ADDRS                  { NOC__GIC__GICRLPI0_BASE }
  /** Array initializer of NOC_GICRLPI0 peripheral base pointers */
  #define NOC_GICRLPI0_BASE_PTRS                   { NOC__GIC__GICRLPI0 }
#endif

/* NOC_GICRLPI1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI1 base address */
  #define NOC__GIC__GICRLPI1_BASE                  (0x58080000u)
  /** Peripheral NOC__GIC__GICRLPI1 base address */
  #define NOC__GIC__GICRLPI1_BASE_NS               (0x48080000u)
  /** Peripheral NOC__GIC__GICRLPI1 base pointer */
  #define NOC__GIC__GICRLPI1                       ((NOC_GICRLPI1_Type *)NOC__GIC__GICRLPI1_BASE)
  /** Peripheral NOC__GIC__GICRLPI1 base pointer */
  #define NOC__GIC__GICRLPI1_NS                    ((NOC_GICRLPI1_Type *)NOC__GIC__GICRLPI1_BASE_NS)
  /** Array initializer of NOC_GICRLPI1 peripheral base addresses */
  #define NOC_GICRLPI1_BASE_ADDRS                  { NOC__GIC__GICRLPI1_BASE }
  /** Array initializer of NOC_GICRLPI1 peripheral base pointers */
  #define NOC_GICRLPI1_BASE_PTRS                   { NOC__GIC__GICRLPI1 }
  /** Array initializer of NOC_GICRLPI1 peripheral base addresses */
  #define NOC_GICRLPI1_BASE_ADDRS_NS               { NOC__GIC__GICRLPI1_BASE_NS }
  /** Array initializer of NOC_GICRLPI1 peripheral base pointers */
  #define NOC_GICRLPI1_BASE_PTRS_NS                { NOC__GIC__GICRLPI1_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI1 base address */
  #define NOC__GIC__GICRLPI1_BASE                  (0x48080000u)
  /** Peripheral NOC__GIC__GICRLPI1 base pointer */
  #define NOC__GIC__GICRLPI1                       ((NOC_GICRLPI1_Type *)NOC__GIC__GICRLPI1_BASE)
  /** Array initializer of NOC_GICRLPI1 peripheral base addresses */
  #define NOC_GICRLPI1_BASE_ADDRS                  { NOC__GIC__GICRLPI1_BASE }
  /** Array initializer of NOC_GICRLPI1 peripheral base pointers */
  #define NOC_GICRLPI1_BASE_PTRS                   { NOC__GIC__GICRLPI1 }
#endif

/* NOC_GICRLPI2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI2 base address */
  #define NOC__GIC__GICRLPI2_BASE                  (0x580A0000u)
  /** Peripheral NOC__GIC__GICRLPI2 base address */
  #define NOC__GIC__GICRLPI2_BASE_NS               (0x480A0000u)
  /** Peripheral NOC__GIC__GICRLPI2 base pointer */
  #define NOC__GIC__GICRLPI2                       ((NOC_GICRLPI2_Type *)NOC__GIC__GICRLPI2_BASE)
  /** Peripheral NOC__GIC__GICRLPI2 base pointer */
  #define NOC__GIC__GICRLPI2_NS                    ((NOC_GICRLPI2_Type *)NOC__GIC__GICRLPI2_BASE_NS)
  /** Array initializer of NOC_GICRLPI2 peripheral base addresses */
  #define NOC_GICRLPI2_BASE_ADDRS                  { NOC__GIC__GICRLPI2_BASE }
  /** Array initializer of NOC_GICRLPI2 peripheral base pointers */
  #define NOC_GICRLPI2_BASE_PTRS                   { NOC__GIC__GICRLPI2 }
  /** Array initializer of NOC_GICRLPI2 peripheral base addresses */
  #define NOC_GICRLPI2_BASE_ADDRS_NS               { NOC__GIC__GICRLPI2_BASE_NS }
  /** Array initializer of NOC_GICRLPI2 peripheral base pointers */
  #define NOC_GICRLPI2_BASE_PTRS_NS                { NOC__GIC__GICRLPI2_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI2 base address */
  #define NOC__GIC__GICRLPI2_BASE                  (0x480A0000u)
  /** Peripheral NOC__GIC__GICRLPI2 base pointer */
  #define NOC__GIC__GICRLPI2                       ((NOC_GICRLPI2_Type *)NOC__GIC__GICRLPI2_BASE)
  /** Array initializer of NOC_GICRLPI2 peripheral base addresses */
  #define NOC_GICRLPI2_BASE_ADDRS                  { NOC__GIC__GICRLPI2_BASE }
  /** Array initializer of NOC_GICRLPI2 peripheral base pointers */
  #define NOC_GICRLPI2_BASE_PTRS                   { NOC__GIC__GICRLPI2 }
#endif

/* NOC_GICRLPI3 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI3 base address */
  #define NOC__GIC__GICRLPI3_BASE                  (0x580C0000u)
  /** Peripheral NOC__GIC__GICRLPI3 base address */
  #define NOC__GIC__GICRLPI3_BASE_NS               (0x480C0000u)
  /** Peripheral NOC__GIC__GICRLPI3 base pointer */
  #define NOC__GIC__GICRLPI3                       ((NOC_GICRLPI3_Type *)NOC__GIC__GICRLPI3_BASE)
  /** Peripheral NOC__GIC__GICRLPI3 base pointer */
  #define NOC__GIC__GICRLPI3_NS                    ((NOC_GICRLPI3_Type *)NOC__GIC__GICRLPI3_BASE_NS)
  /** Array initializer of NOC_GICRLPI3 peripheral base addresses */
  #define NOC_GICRLPI3_BASE_ADDRS                  { NOC__GIC__GICRLPI3_BASE }
  /** Array initializer of NOC_GICRLPI3 peripheral base pointers */
  #define NOC_GICRLPI3_BASE_PTRS                   { NOC__GIC__GICRLPI3 }
  /** Array initializer of NOC_GICRLPI3 peripheral base addresses */
  #define NOC_GICRLPI3_BASE_ADDRS_NS               { NOC__GIC__GICRLPI3_BASE_NS }
  /** Array initializer of NOC_GICRLPI3 peripheral base pointers */
  #define NOC_GICRLPI3_BASE_PTRS_NS                { NOC__GIC__GICRLPI3_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI3 base address */
  #define NOC__GIC__GICRLPI3_BASE                  (0x480C0000u)
  /** Peripheral NOC__GIC__GICRLPI3 base pointer */
  #define NOC__GIC__GICRLPI3                       ((NOC_GICRLPI3_Type *)NOC__GIC__GICRLPI3_BASE)
  /** Array initializer of NOC_GICRLPI3 peripheral base addresses */
  #define NOC_GICRLPI3_BASE_ADDRS                  { NOC__GIC__GICRLPI3_BASE }
  /** Array initializer of NOC_GICRLPI3 peripheral base pointers */
  #define NOC_GICRLPI3_BASE_PTRS                   { NOC__GIC__GICRLPI3 }
#endif

/* NOC_GICRLPI4 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI4 base address */
  #define NOC__GIC__GICRLPI4_BASE                  (0x580E0000u)
  /** Peripheral NOC__GIC__GICRLPI4 base address */
  #define NOC__GIC__GICRLPI4_BASE_NS               (0x480E0000u)
  /** Peripheral NOC__GIC__GICRLPI4 base pointer */
  #define NOC__GIC__GICRLPI4                       ((NOC_GICRLPI4_Type *)NOC__GIC__GICRLPI4_BASE)
  /** Peripheral NOC__GIC__GICRLPI4 base pointer */
  #define NOC__GIC__GICRLPI4_NS                    ((NOC_GICRLPI4_Type *)NOC__GIC__GICRLPI4_BASE_NS)
  /** Array initializer of NOC_GICRLPI4 peripheral base addresses */
  #define NOC_GICRLPI4_BASE_ADDRS                  { NOC__GIC__GICRLPI4_BASE }
  /** Array initializer of NOC_GICRLPI4 peripheral base pointers */
  #define NOC_GICRLPI4_BASE_PTRS                   { NOC__GIC__GICRLPI4 }
  /** Array initializer of NOC_GICRLPI4 peripheral base addresses */
  #define NOC_GICRLPI4_BASE_ADDRS_NS               { NOC__GIC__GICRLPI4_BASE_NS }
  /** Array initializer of NOC_GICRLPI4 peripheral base pointers */
  #define NOC_GICRLPI4_BASE_PTRS_NS                { NOC__GIC__GICRLPI4_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI4 base address */
  #define NOC__GIC__GICRLPI4_BASE                  (0x480E0000u)
  /** Peripheral NOC__GIC__GICRLPI4 base pointer */
  #define NOC__GIC__GICRLPI4                       ((NOC_GICRLPI4_Type *)NOC__GIC__GICRLPI4_BASE)
  /** Array initializer of NOC_GICRLPI4 peripheral base addresses */
  #define NOC_GICRLPI4_BASE_ADDRS                  { NOC__GIC__GICRLPI4_BASE }
  /** Array initializer of NOC_GICRLPI4 peripheral base pointers */
  #define NOC_GICRLPI4_BASE_PTRS                   { NOC__GIC__GICRLPI4 }
#endif

/* NOC_GICRLPI5 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRLPI5 base address */
  #define NOC__GIC__GICRLPI5_BASE                  (0x58100000u)
  /** Peripheral NOC__GIC__GICRLPI5 base address */
  #define NOC__GIC__GICRLPI5_BASE_NS               (0x48100000u)
  /** Peripheral NOC__GIC__GICRLPI5 base pointer */
  #define NOC__GIC__GICRLPI5                       ((NOC_GICRLPI5_Type *)NOC__GIC__GICRLPI5_BASE)
  /** Peripheral NOC__GIC__GICRLPI5 base pointer */
  #define NOC__GIC__GICRLPI5_NS                    ((NOC_GICRLPI5_Type *)NOC__GIC__GICRLPI5_BASE_NS)
  /** Array initializer of NOC_GICRLPI5 peripheral base addresses */
  #define NOC_GICRLPI5_BASE_ADDRS                  { NOC__GIC__GICRLPI5_BASE }
  /** Array initializer of NOC_GICRLPI5 peripheral base pointers */
  #define NOC_GICRLPI5_BASE_PTRS                   { NOC__GIC__GICRLPI5 }
  /** Array initializer of NOC_GICRLPI5 peripheral base addresses */
  #define NOC_GICRLPI5_BASE_ADDRS_NS               { NOC__GIC__GICRLPI5_BASE_NS }
  /** Array initializer of NOC_GICRLPI5 peripheral base pointers */
  #define NOC_GICRLPI5_BASE_PTRS_NS                { NOC__GIC__GICRLPI5_NS }
#else
  /** Peripheral NOC__GIC__GICRLPI5 base address */
  #define NOC__GIC__GICRLPI5_BASE                  (0x48100000u)
  /** Peripheral NOC__GIC__GICRLPI5 base pointer */
  #define NOC__GIC__GICRLPI5                       ((NOC_GICRLPI5_Type *)NOC__GIC__GICRLPI5_BASE)
  /** Array initializer of NOC_GICRLPI5 peripheral base addresses */
  #define NOC_GICRLPI5_BASE_ADDRS                  { NOC__GIC__GICRLPI5_BASE }
  /** Array initializer of NOC_GICRLPI5 peripheral base pointers */
  #define NOC_GICRLPI5_BASE_PTRS                   { NOC__GIC__GICRLPI5 }
#endif

/* NOC_GICRSGI0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI0 base address */
  #define NOC__GIC__GICRSGI0_BASE                  (0x58070000u)
  /** Peripheral NOC__GIC__GICRSGI0 base address */
  #define NOC__GIC__GICRSGI0_BASE_NS               (0x48070000u)
  /** Peripheral NOC__GIC__GICRSGI0 base pointer */
  #define NOC__GIC__GICRSGI0                       ((NOC_GICRSGI0_Type *)NOC__GIC__GICRSGI0_BASE)
  /** Peripheral NOC__GIC__GICRSGI0 base pointer */
  #define NOC__GIC__GICRSGI0_NS                    ((NOC_GICRSGI0_Type *)NOC__GIC__GICRSGI0_BASE_NS)
  /** Array initializer of NOC_GICRSGI0 peripheral base addresses */
  #define NOC_GICRSGI0_BASE_ADDRS                  { NOC__GIC__GICRSGI0_BASE }
  /** Array initializer of NOC_GICRSGI0 peripheral base pointers */
  #define NOC_GICRSGI0_BASE_PTRS                   { NOC__GIC__GICRSGI0 }
  /** Array initializer of NOC_GICRSGI0 peripheral base addresses */
  #define NOC_GICRSGI0_BASE_ADDRS_NS               { NOC__GIC__GICRSGI0_BASE_NS }
  /** Array initializer of NOC_GICRSGI0 peripheral base pointers */
  #define NOC_GICRSGI0_BASE_PTRS_NS                { NOC__GIC__GICRSGI0_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI0 base address */
  #define NOC__GIC__GICRSGI0_BASE                  (0x48070000u)
  /** Peripheral NOC__GIC__GICRSGI0 base pointer */
  #define NOC__GIC__GICRSGI0                       ((NOC_GICRSGI0_Type *)NOC__GIC__GICRSGI0_BASE)
  /** Array initializer of NOC_GICRSGI0 peripheral base addresses */
  #define NOC_GICRSGI0_BASE_ADDRS                  { NOC__GIC__GICRSGI0_BASE }
  /** Array initializer of NOC_GICRSGI0 peripheral base pointers */
  #define NOC_GICRSGI0_BASE_PTRS                   { NOC__GIC__GICRSGI0 }
#endif

/* NOC_GICRSGI1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI1 base address */
  #define NOC__GIC__GICRSGI1_BASE                  (0x58090000u)
  /** Peripheral NOC__GIC__GICRSGI1 base address */
  #define NOC__GIC__GICRSGI1_BASE_NS               (0x48090000u)
  /** Peripheral NOC__GIC__GICRSGI1 base pointer */
  #define NOC__GIC__GICRSGI1                       ((NOC_GICRSGI1_Type *)NOC__GIC__GICRSGI1_BASE)
  /** Peripheral NOC__GIC__GICRSGI1 base pointer */
  #define NOC__GIC__GICRSGI1_NS                    ((NOC_GICRSGI1_Type *)NOC__GIC__GICRSGI1_BASE_NS)
  /** Array initializer of NOC_GICRSGI1 peripheral base addresses */
  #define NOC_GICRSGI1_BASE_ADDRS                  { NOC__GIC__GICRSGI1_BASE }
  /** Array initializer of NOC_GICRSGI1 peripheral base pointers */
  #define NOC_GICRSGI1_BASE_PTRS                   { NOC__GIC__GICRSGI1 }
  /** Array initializer of NOC_GICRSGI1 peripheral base addresses */
  #define NOC_GICRSGI1_BASE_ADDRS_NS               { NOC__GIC__GICRSGI1_BASE_NS }
  /** Array initializer of NOC_GICRSGI1 peripheral base pointers */
  #define NOC_GICRSGI1_BASE_PTRS_NS                { NOC__GIC__GICRSGI1_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI1 base address */
  #define NOC__GIC__GICRSGI1_BASE                  (0x48090000u)
  /** Peripheral NOC__GIC__GICRSGI1 base pointer */
  #define NOC__GIC__GICRSGI1                       ((NOC_GICRSGI1_Type *)NOC__GIC__GICRSGI1_BASE)
  /** Array initializer of NOC_GICRSGI1 peripheral base addresses */
  #define NOC_GICRSGI1_BASE_ADDRS                  { NOC__GIC__GICRSGI1_BASE }
  /** Array initializer of NOC_GICRSGI1 peripheral base pointers */
  #define NOC_GICRSGI1_BASE_PTRS                   { NOC__GIC__GICRSGI1 }
#endif

/* NOC_GICRSGI2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI2 base address */
  #define NOC__GIC__GICRSGI2_BASE                  (0x580B0000u)
  /** Peripheral NOC__GIC__GICRSGI2 base address */
  #define NOC__GIC__GICRSGI2_BASE_NS               (0x480B0000u)
  /** Peripheral NOC__GIC__GICRSGI2 base pointer */
  #define NOC__GIC__GICRSGI2                       ((NOC_GICRSGI2_Type *)NOC__GIC__GICRSGI2_BASE)
  /** Peripheral NOC__GIC__GICRSGI2 base pointer */
  #define NOC__GIC__GICRSGI2_NS                    ((NOC_GICRSGI2_Type *)NOC__GIC__GICRSGI2_BASE_NS)
  /** Array initializer of NOC_GICRSGI2 peripheral base addresses */
  #define NOC_GICRSGI2_BASE_ADDRS                  { NOC__GIC__GICRSGI2_BASE }
  /** Array initializer of NOC_GICRSGI2 peripheral base pointers */
  #define NOC_GICRSGI2_BASE_PTRS                   { NOC__GIC__GICRSGI2 }
  /** Array initializer of NOC_GICRSGI2 peripheral base addresses */
  #define NOC_GICRSGI2_BASE_ADDRS_NS               { NOC__GIC__GICRSGI2_BASE_NS }
  /** Array initializer of NOC_GICRSGI2 peripheral base pointers */
  #define NOC_GICRSGI2_BASE_PTRS_NS                { NOC__GIC__GICRSGI2_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI2 base address */
  #define NOC__GIC__GICRSGI2_BASE                  (0x480B0000u)
  /** Peripheral NOC__GIC__GICRSGI2 base pointer */
  #define NOC__GIC__GICRSGI2                       ((NOC_GICRSGI2_Type *)NOC__GIC__GICRSGI2_BASE)
  /** Array initializer of NOC_GICRSGI2 peripheral base addresses */
  #define NOC_GICRSGI2_BASE_ADDRS                  { NOC__GIC__GICRSGI2_BASE }
  /** Array initializer of NOC_GICRSGI2 peripheral base pointers */
  #define NOC_GICRSGI2_BASE_PTRS                   { NOC__GIC__GICRSGI2 }
#endif

/* NOC_GICRSGI3 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI3 base address */
  #define NOC__GIC__GICRSGI3_BASE                  (0x580D0000u)
  /** Peripheral NOC__GIC__GICRSGI3 base address */
  #define NOC__GIC__GICRSGI3_BASE_NS               (0x480D0000u)
  /** Peripheral NOC__GIC__GICRSGI3 base pointer */
  #define NOC__GIC__GICRSGI3                       ((NOC_GICRSGI3_Type *)NOC__GIC__GICRSGI3_BASE)
  /** Peripheral NOC__GIC__GICRSGI3 base pointer */
  #define NOC__GIC__GICRSGI3_NS                    ((NOC_GICRSGI3_Type *)NOC__GIC__GICRSGI3_BASE_NS)
  /** Array initializer of NOC_GICRSGI3 peripheral base addresses */
  #define NOC_GICRSGI3_BASE_ADDRS                  { NOC__GIC__GICRSGI3_BASE }
  /** Array initializer of NOC_GICRSGI3 peripheral base pointers */
  #define NOC_GICRSGI3_BASE_PTRS                   { NOC__GIC__GICRSGI3 }
  /** Array initializer of NOC_GICRSGI3 peripheral base addresses */
  #define NOC_GICRSGI3_BASE_ADDRS_NS               { NOC__GIC__GICRSGI3_BASE_NS }
  /** Array initializer of NOC_GICRSGI3 peripheral base pointers */
  #define NOC_GICRSGI3_BASE_PTRS_NS                { NOC__GIC__GICRSGI3_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI3 base address */
  #define NOC__GIC__GICRSGI3_BASE                  (0x480D0000u)
  /** Peripheral NOC__GIC__GICRSGI3 base pointer */
  #define NOC__GIC__GICRSGI3                       ((NOC_GICRSGI3_Type *)NOC__GIC__GICRSGI3_BASE)
  /** Array initializer of NOC_GICRSGI3 peripheral base addresses */
  #define NOC_GICRSGI3_BASE_ADDRS                  { NOC__GIC__GICRSGI3_BASE }
  /** Array initializer of NOC_GICRSGI3 peripheral base pointers */
  #define NOC_GICRSGI3_BASE_PTRS                   { NOC__GIC__GICRSGI3 }
#endif

/* NOC_GICRSGI4 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI4 base address */
  #define NOC__GIC__GICRSGI4_BASE                  (0x580F0000u)
  /** Peripheral NOC__GIC__GICRSGI4 base address */
  #define NOC__GIC__GICRSGI4_BASE_NS               (0x480F0000u)
  /** Peripheral NOC__GIC__GICRSGI4 base pointer */
  #define NOC__GIC__GICRSGI4                       ((NOC_GICRSGI4_Type *)NOC__GIC__GICRSGI4_BASE)
  /** Peripheral NOC__GIC__GICRSGI4 base pointer */
  #define NOC__GIC__GICRSGI4_NS                    ((NOC_GICRSGI4_Type *)NOC__GIC__GICRSGI4_BASE_NS)
  /** Array initializer of NOC_GICRSGI4 peripheral base addresses */
  #define NOC_GICRSGI4_BASE_ADDRS                  { NOC__GIC__GICRSGI4_BASE }
  /** Array initializer of NOC_GICRSGI4 peripheral base pointers */
  #define NOC_GICRSGI4_BASE_PTRS                   { NOC__GIC__GICRSGI4 }
  /** Array initializer of NOC_GICRSGI4 peripheral base addresses */
  #define NOC_GICRSGI4_BASE_ADDRS_NS               { NOC__GIC__GICRSGI4_BASE_NS }
  /** Array initializer of NOC_GICRSGI4 peripheral base pointers */
  #define NOC_GICRSGI4_BASE_PTRS_NS                { NOC__GIC__GICRSGI4_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI4 base address */
  #define NOC__GIC__GICRSGI4_BASE                  (0x480F0000u)
  /** Peripheral NOC__GIC__GICRSGI4 base pointer */
  #define NOC__GIC__GICRSGI4                       ((NOC_GICRSGI4_Type *)NOC__GIC__GICRSGI4_BASE)
  /** Array initializer of NOC_GICRSGI4 peripheral base addresses */
  #define NOC_GICRSGI4_BASE_ADDRS                  { NOC__GIC__GICRSGI4_BASE }
  /** Array initializer of NOC_GICRSGI4 peripheral base pointers */
  #define NOC_GICRSGI4_BASE_PTRS                   { NOC__GIC__GICRSGI4 }
#endif

/* NOC_GICRSGI5 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICRSGI5 base address */
  #define NOC__GIC__GICRSGI5_BASE                  (0x58110000u)
  /** Peripheral NOC__GIC__GICRSGI5 base address */
  #define NOC__GIC__GICRSGI5_BASE_NS               (0x48110000u)
  /** Peripheral NOC__GIC__GICRSGI5 base pointer */
  #define NOC__GIC__GICRSGI5                       ((NOC_GICRSGI5_Type *)NOC__GIC__GICRSGI5_BASE)
  /** Peripheral NOC__GIC__GICRSGI5 base pointer */
  #define NOC__GIC__GICRSGI5_NS                    ((NOC_GICRSGI5_Type *)NOC__GIC__GICRSGI5_BASE_NS)
  /** Array initializer of NOC_GICRSGI5 peripheral base addresses */
  #define NOC_GICRSGI5_BASE_ADDRS                  { NOC__GIC__GICRSGI5_BASE }
  /** Array initializer of NOC_GICRSGI5 peripheral base pointers */
  #define NOC_GICRSGI5_BASE_PTRS                   { NOC__GIC__GICRSGI5 }
  /** Array initializer of NOC_GICRSGI5 peripheral base addresses */
  #define NOC_GICRSGI5_BASE_ADDRS_NS               { NOC__GIC__GICRSGI5_BASE_NS }
  /** Array initializer of NOC_GICRSGI5 peripheral base pointers */
  #define NOC_GICRSGI5_BASE_PTRS_NS                { NOC__GIC__GICRSGI5_NS }
#else
  /** Peripheral NOC__GIC__GICRSGI5 base address */
  #define NOC__GIC__GICRSGI5_BASE                  (0x48110000u)
  /** Peripheral NOC__GIC__GICRSGI5 base pointer */
  #define NOC__GIC__GICRSGI5                       ((NOC_GICRSGI5_Type *)NOC__GIC__GICRSGI5_BASE)
  /** Array initializer of NOC_GICRSGI5 peripheral base addresses */
  #define NOC_GICRSGI5_BASE_ADDRS                  { NOC__GIC__GICRSGI5_BASE }
  /** Array initializer of NOC_GICRSGI5 peripheral base pointers */
  #define NOC_GICRSGI5_BASE_PTRS                   { NOC__GIC__GICRSGI5 }
#endif

/* NOC_GICT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GICT base address */
  #define NOC__GIC__GICT_BASE                      (0x58020000u)
  /** Peripheral NOC__GIC__GICT base address */
  #define NOC__GIC__GICT_BASE_NS                   (0x48020000u)
  /** Peripheral NOC__GIC__GICT base pointer */
  #define NOC__GIC__GICT                           ((NOC_GICT_Type *)NOC__GIC__GICT_BASE)
  /** Peripheral NOC__GIC__GICT base pointer */
  #define NOC__GIC__GICT_NS                        ((NOC_GICT_Type *)NOC__GIC__GICT_BASE_NS)
  /** Array initializer of NOC_GICT peripheral base addresses */
  #define NOC_GICT_BASE_ADDRS                      { NOC__GIC__GICT_BASE }
  /** Array initializer of NOC_GICT peripheral base pointers */
  #define NOC_GICT_BASE_PTRS                       { NOC__GIC__GICT }
  /** Array initializer of NOC_GICT peripheral base addresses */
  #define NOC_GICT_BASE_ADDRS_NS                   { NOC__GIC__GICT_BASE_NS }
  /** Array initializer of NOC_GICT peripheral base pointers */
  #define NOC_GICT_BASE_PTRS_NS                    { NOC__GIC__GICT_NS }
#else
  /** Peripheral NOC__GIC__GICT base address */
  #define NOC__GIC__GICT_BASE                      (0x48020000u)
  /** Peripheral NOC__GIC__GICT base pointer */
  #define NOC__GIC__GICT                           ((NOC_GICT_Type *)NOC__GIC__GICT_BASE)
  /** Array initializer of NOC_GICT peripheral base addresses */
  #define NOC_GICT_BASE_ADDRS                      { NOC__GIC__GICT_BASE }
  /** Array initializer of NOC_GICT peripheral base pointers */
  #define NOC_GICT_BASE_PTRS                       { NOC__GIC__GICT }
#endif

/* NOC_GITS0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GITS0 base address */
  #define NOC__GIC__GITS0_BASE                     (0x58040000u)
  /** Peripheral NOC__GIC__GITS0 base address */
  #define NOC__GIC__GITS0_BASE_NS                  (0x48040000u)
  /** Peripheral NOC__GIC__GITS0 base pointer */
  #define NOC__GIC__GITS0                          ((NOC_GITS0_Type *)NOC__GIC__GITS0_BASE)
  /** Peripheral NOC__GIC__GITS0 base pointer */
  #define NOC__GIC__GITS0_NS                       ((NOC_GITS0_Type *)NOC__GIC__GITS0_BASE_NS)
  /** Array initializer of NOC_GITS0 peripheral base addresses */
  #define NOC_GITS0_BASE_ADDRS                     { NOC__GIC__GITS0_BASE }
  /** Array initializer of NOC_GITS0 peripheral base pointers */
  #define NOC_GITS0_BASE_PTRS                      { NOC__GIC__GITS0 }
  /** Array initializer of NOC_GITS0 peripheral base addresses */
  #define NOC_GITS0_BASE_ADDRS_NS                  { NOC__GIC__GITS0_BASE_NS }
  /** Array initializer of NOC_GITS0 peripheral base pointers */
  #define NOC_GITS0_BASE_PTRS_NS                   { NOC__GIC__GITS0_NS }
#else
  /** Peripheral NOC__GIC__GITS0 base address */
  #define NOC__GIC__GITS0_BASE                     (0x48040000u)
  /** Peripheral NOC__GIC__GITS0 base pointer */
  #define NOC__GIC__GITS0                          ((NOC_GITS0_Type *)NOC__GIC__GITS0_BASE)
  /** Array initializer of NOC_GITS0 peripheral base addresses */
  #define NOC_GITS0_BASE_ADDRS                     { NOC__GIC__GITS0_BASE }
  /** Array initializer of NOC_GITS0 peripheral base pointers */
  #define NOC_GITS0_BASE_PTRS                      { NOC__GIC__GITS0 }
#endif

/* NOC_GITS0TRANSLATER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__GIC__GITS0TRANSLATER base address */
  #define NOC__GIC__GITS0TRANSLATER_BASE           (0x58050000u)
  /** Peripheral NOC__GIC__GITS0TRANSLATER base address */
  #define NOC__GIC__GITS0TRANSLATER_BASE_NS        (0x48050000u)
  /** Peripheral NOC__GIC__GITS0TRANSLATER base pointer */
  #define NOC__GIC__GITS0TRANSLATER                ((NOC_GITS0TRANSLATER_Type *)NOC__GIC__GITS0TRANSLATER_BASE)
  /** Peripheral NOC__GIC__GITS0TRANSLATER base pointer */
  #define NOC__GIC__GITS0TRANSLATER_NS             ((NOC_GITS0TRANSLATER_Type *)NOC__GIC__GITS0TRANSLATER_BASE_NS)
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base addresses */
  #define NOC_GITS0TRANSLATER_BASE_ADDRS           { NOC__GIC__GITS0TRANSLATER_BASE }
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base pointers */
  #define NOC_GITS0TRANSLATER_BASE_PTRS            { NOC__GIC__GITS0TRANSLATER }
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base addresses */
  #define NOC_GITS0TRANSLATER_BASE_ADDRS_NS        { NOC__GIC__GITS0TRANSLATER_BASE_NS }
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base pointers */
  #define NOC_GITS0TRANSLATER_BASE_PTRS_NS         { NOC__GIC__GITS0TRANSLATER_NS }
#else
  /** Peripheral NOC__GIC__GITS0TRANSLATER base address */
  #define NOC__GIC__GITS0TRANSLATER_BASE           (0x48050000u)
  /** Peripheral NOC__GIC__GITS0TRANSLATER base pointer */
  #define NOC__GIC__GITS0TRANSLATER                ((NOC_GITS0TRANSLATER_Type *)NOC__GIC__GITS0TRANSLATER_BASE)
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base addresses */
  #define NOC_GITS0TRANSLATER_BASE_ADDRS           { NOC__GIC__GITS0TRANSLATER_BASE }
  /** Array initializer of NOC_GITS0TRANSLATER peripheral base pointers */
  #define NOC_GITS0TRANSLATER_BASE_PTRS            { NOC__GIC__GITS0TRANSLATER }
#endif

/* NOC_LSTCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__LSTCUN base address */
  #define NOC__LSTCUN_BASE                         (0x590B0000u)
  /** Peripheral NOC__LSTCUN base address */
  #define NOC__LSTCUN_BASE_NS                      (0x490B0000u)
  /** Peripheral NOC__LSTCUN base pointer */
  #define NOC__LSTCUN                              ((NOC_LSTCU_Type *)NOC__LSTCUN_BASE)
  /** Peripheral NOC__LSTCUN base pointer */
  #define NOC__LSTCUN_NS                           ((NOC_LSTCU_Type *)NOC__LSTCUN_BASE_NS)
  /** Array initializer of NOC_LSTCU peripheral base addresses */
  #define NOC_LSTCU_BASE_ADDRS                     { NOC__LSTCUN_BASE }
  /** Array initializer of NOC_LSTCU peripheral base pointers */
  #define NOC_LSTCU_BASE_PTRS                      { NOC__LSTCUN }
  /** Array initializer of NOC_LSTCU peripheral base addresses */
  #define NOC_LSTCU_BASE_ADDRS_NS                  { NOC__LSTCUN_BASE_NS }
  /** Array initializer of NOC_LSTCU peripheral base pointers */
  #define NOC_LSTCU_BASE_PTRS_NS                   { NOC__LSTCUN_NS }
#else
  /** Peripheral NOC__LSTCUN base address */
  #define NOC__LSTCUN_BASE                         (0x490B0000u)
  /** Peripheral NOC__LSTCUN base pointer */
  #define NOC__LSTCUN                              ((NOC_LSTCU_Type *)NOC__LSTCUN_BASE)
  /** Array initializer of NOC_LSTCU peripheral base addresses */
  #define NOC_LSTCU_BASE_ADDRS                     { NOC__LSTCUN_BASE }
  /** Array initializer of NOC_LSTCU peripheral base pointers */
  #define NOC_LSTCU_BASE_PTRS                      { NOC__LSTCUN }
#endif

/* NOC_SRAMCTL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__SRAMCTL base address */
  #define NOC__SRAMCTL_BASE                        (0x590A0000u)
  /** Peripheral NOC__SRAMCTL base address */
  #define NOC__SRAMCTL_BASE_NS                     (0x490A0000u)
  /** Peripheral NOC__SRAMCTL base pointer */
  #define NOC__SRAMCTL                             ((NOC_SRAMCTL_Type *)NOC__SRAMCTL_BASE)
  /** Peripheral NOC__SRAMCTL base pointer */
  #define NOC__SRAMCTL_NS                          ((NOC_SRAMCTL_Type *)NOC__SRAMCTL_BASE_NS)
  /** Array initializer of NOC_SRAMCTL peripheral base addresses */
  #define NOC_SRAMCTL_BASE_ADDRS                   { NOC__SRAMCTL_BASE }
  /** Array initializer of NOC_SRAMCTL peripheral base pointers */
  #define NOC_SRAMCTL_BASE_PTRS                    { NOC__SRAMCTL }
  /** Array initializer of NOC_SRAMCTL peripheral base addresses */
  #define NOC_SRAMCTL_BASE_ADDRS_NS                { NOC__SRAMCTL_BASE_NS }
  /** Array initializer of NOC_SRAMCTL peripheral base pointers */
  #define NOC_SRAMCTL_BASE_PTRS_NS                 { NOC__SRAMCTL_NS }
#else
  /** Peripheral NOC__SRAMCTL base address */
  #define NOC__SRAMCTL_BASE                        (0x490A0000u)
  /** Peripheral NOC__SRAMCTL base pointer */
  #define NOC__SRAMCTL                             ((NOC_SRAMCTL_Type *)NOC__SRAMCTL_BASE)
  /** Array initializer of NOC_SRAMCTL peripheral base addresses */
  #define NOC_SRAMCTL_BASE_ADDRS                   { NOC__SRAMCTL_BASE }
  /** Array initializer of NOC_SRAMCTL peripheral base pointers */
  #define NOC_SRAMCTL_BASE_PTRS                    { NOC__SRAMCTL }
#endif

/* NOC_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NOC__TCU base address */
  #define NOC__TCU_BASE                            (0x59040000u)
  /** Peripheral NOC__TCU base address */
  #define NOC__TCU_BASE_NS                         (0x49040000u)
  /** Peripheral NOC__TCU base pointer */
  #define NOC__TCU                                 ((NOC_TCU_Type *)NOC__TCU_BASE)
  /** Peripheral NOC__TCU base pointer */
  #define NOC__TCU_NS                              ((NOC_TCU_Type *)NOC__TCU_BASE_NS)
  /** Array initializer of NOC_TCU peripheral base addresses */
  #define NOC_TCU_BASE_ADDRS                       { NOC__TCU_BASE }
  /** Array initializer of NOC_TCU peripheral base pointers */
  #define NOC_TCU_BASE_PTRS                        { NOC__TCU }
  /** Array initializer of NOC_TCU peripheral base addresses */
  #define NOC_TCU_BASE_ADDRS_NS                    { NOC__TCU_BASE_NS }
  /** Array initializer of NOC_TCU peripheral base pointers */
  #define NOC_TCU_BASE_PTRS_NS                     { NOC__TCU_NS }
#else
  /** Peripheral NOC__TCU base address */
  #define NOC__TCU_BASE                            (0x49040000u)
  /** Peripheral NOC__TCU base pointer */
  #define NOC__TCU                                 ((NOC_TCU_Type *)NOC__TCU_BASE)
  /** Array initializer of NOC_TCU peripheral base addresses */
  #define NOC_TCU_BASE_ADDRS                       { NOC__TCU_BASE }
  /** Array initializer of NOC_TCU peripheral base pointers */
  #define NOC_TCU_BASE_PTRS                        { NOC__TCU }
#endif

/* NPU_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NPU__TCU base address */
  #define NPU__TCU_BASE                            (0x5A800000u)
  /** Peripheral NPU__TCU base address */
  #define NPU__TCU_BASE_NS                         (0x4A800000u)
  /** Peripheral NPU__TCU base pointer */
  #define NPU__TCU                                 ((NPU_TCU_Type *)NPU__TCU_BASE)
  /** Peripheral NPU__TCU base pointer */
  #define NPU__TCU_NS                              ((NPU_TCU_Type *)NPU__TCU_BASE_NS)
  /** Array initializer of NPU_TCU peripheral base addresses */
  #define NPU_TCU_BASE_ADDRS                       { NPU__TCU_BASE }
  /** Array initializer of NPU_TCU peripheral base pointers */
  #define NPU_TCU_BASE_PTRS                        { NPU__TCU }
  /** Array initializer of NPU_TCU peripheral base addresses */
  #define NPU_TCU_BASE_ADDRS_NS                    { NPU__TCU_BASE_NS }
  /** Array initializer of NPU_TCU peripheral base pointers */
  #define NPU_TCU_BASE_PTRS_NS                     { NPU__TCU_NS }
#else
  /** Peripheral NPU__TCU base address */
  #define NPU__TCU_BASE                            (0x4A800000u)
  /** Peripheral NPU__TCU base pointer */
  #define NPU__TCU                                 ((NPU_TCU_Type *)NPU__TCU_BASE)
  /** Array initializer of NPU_TCU peripheral base addresses */
  #define NPU_TCU_BASE_ADDRS                       { NPU__TCU_BASE }
  /** Array initializer of NPU_TCU peripheral base pointers */
  #define NPU_TCU_BASE_PTRS                        { NPU__TCU }
#endif

/* NR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__NR base address */
  #define CAMERA__ISP__NR_BASE                     (0x5AE01400u)
  /** Peripheral CAMERA__ISP__NR base address */
  #define CAMERA__ISP__NR_BASE_NS                  (0x4AE01400u)
  /** Peripheral CAMERA__ISP__NR base pointer */
  #define CAMERA__ISP__NR                          ((NR_Type *)CAMERA__ISP__NR_BASE)
  /** Peripheral CAMERA__ISP__NR base pointer */
  #define CAMERA__ISP__NR_NS                       ((NR_Type *)CAMERA__ISP__NR_BASE_NS)
  /** Array initializer of NR peripheral base addresses */
  #define NR_BASE_ADDRS                            { CAMERA__ISP__NR_BASE }
  /** Array initializer of NR peripheral base pointers */
  #define NR_BASE_PTRS                             { CAMERA__ISP__NR }
  /** Array initializer of NR peripheral base addresses */
  #define NR_BASE_ADDRS_NS                         { CAMERA__ISP__NR_BASE_NS }
  /** Array initializer of NR peripheral base pointers */
  #define NR_BASE_PTRS_NS                          { CAMERA__ISP__NR_NS }
#else
  /** Peripheral CAMERA__ISP__NR base address */
  #define CAMERA__ISP__NR_BASE                     (0x4AE01400u)
  /** Peripheral CAMERA__ISP__NR base pointer */
  #define CAMERA__ISP__NR                          ((NR_Type *)CAMERA__ISP__NR_BASE)
  /** Array initializer of NR peripheral base addresses */
  #define NR_BASE_ADDRS                            { CAMERA__ISP__NR_BASE }
  /** Array initializer of NR peripheral base pointers */
  #define NR_BASE_PTRS                             { CAMERA__ISP__NR }
#endif

/* OB_WB0 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__OB_WB0 base address */
  #define CAMERA__ISP__OB_WB0_BASE                 (0x5AE00200u)
  /** Peripheral CAMERA__ISP__OB_WB0 base address */
  #define CAMERA__ISP__OB_WB0_BASE_NS              (0x4AE00200u)
  /** Peripheral CAMERA__ISP__OB_WB0 base pointer */
  #define CAMERA__ISP__OB_WB0                      ((OB_WB0_Type *)CAMERA__ISP__OB_WB0_BASE)
  /** Peripheral CAMERA__ISP__OB_WB0 base pointer */
  #define CAMERA__ISP__OB_WB0_NS                   ((OB_WB0_Type *)CAMERA__ISP__OB_WB0_BASE_NS)
  /** Array initializer of OB_WB0 peripheral base addresses */
  #define OB_WB0_BASE_ADDRS                        { CAMERA__ISP__OB_WB0_BASE }
  /** Array initializer of OB_WB0 peripheral base pointers */
  #define OB_WB0_BASE_PTRS                         { CAMERA__ISP__OB_WB0 }
  /** Array initializer of OB_WB0 peripheral base addresses */
  #define OB_WB0_BASE_ADDRS_NS                     { CAMERA__ISP__OB_WB0_BASE_NS }
  /** Array initializer of OB_WB0 peripheral base pointers */
  #define OB_WB0_BASE_PTRS_NS                      { CAMERA__ISP__OB_WB0_NS }
#else
  /** Peripheral CAMERA__ISP__OB_WB0 base address */
  #define CAMERA__ISP__OB_WB0_BASE                 (0x4AE00200u)
  /** Peripheral CAMERA__ISP__OB_WB0 base pointer */
  #define CAMERA__ISP__OB_WB0                      ((OB_WB0_Type *)CAMERA__ISP__OB_WB0_BASE)
  /** Array initializer of OB_WB0 peripheral base addresses */
  #define OB_WB0_BASE_ADDRS                        { CAMERA__ISP__OB_WB0_BASE }
  /** Array initializer of OB_WB0 peripheral base pointers */
  #define OB_WB0_BASE_PTRS                         { CAMERA__ISP__OB_WB0 }
#endif

/* OB_WB1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__OB_WB1 base address */
  #define CAMERA__ISP__OB_WB1_BASE                 (0x5AE00240u)
  /** Peripheral CAMERA__ISP__OB_WB1 base address */
  #define CAMERA__ISP__OB_WB1_BASE_NS              (0x4AE00240u)
  /** Peripheral CAMERA__ISP__OB_WB1 base pointer */
  #define CAMERA__ISP__OB_WB1                      ((OB_WB1_Type *)CAMERA__ISP__OB_WB1_BASE)
  /** Peripheral CAMERA__ISP__OB_WB1 base pointer */
  #define CAMERA__ISP__OB_WB1_NS                   ((OB_WB1_Type *)CAMERA__ISP__OB_WB1_BASE_NS)
  /** Array initializer of OB_WB1 peripheral base addresses */
  #define OB_WB1_BASE_ADDRS                        { CAMERA__ISP__OB_WB1_BASE }
  /** Array initializer of OB_WB1 peripheral base pointers */
  #define OB_WB1_BASE_PTRS                         { CAMERA__ISP__OB_WB1 }
  /** Array initializer of OB_WB1 peripheral base addresses */
  #define OB_WB1_BASE_ADDRS_NS                     { CAMERA__ISP__OB_WB1_BASE_NS }
  /** Array initializer of OB_WB1 peripheral base pointers */
  #define OB_WB1_BASE_PTRS_NS                      { CAMERA__ISP__OB_WB1_NS }
#else
  /** Peripheral CAMERA__ISP__OB_WB1 base address */
  #define CAMERA__ISP__OB_WB1_BASE                 (0x4AE00240u)
  /** Peripheral CAMERA__ISP__OB_WB1 base pointer */
  #define CAMERA__ISP__OB_WB1                      ((OB_WB1_Type *)CAMERA__ISP__OB_WB1_BASE)
  /** Array initializer of OB_WB1 peripheral base addresses */
  #define OB_WB1_BASE_ADDRS                        { CAMERA__ISP__OB_WB1_BASE }
  /** Array initializer of OB_WB1 peripheral base pointers */
  #define OB_WB1_BASE_PTRS                         { CAMERA__ISP__OB_WB1 }
#endif

/* OB_WB2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__OB_WB2 base address */
  #define CAMERA__ISP__OB_WB2_BASE                 (0x5AE00280u)
  /** Peripheral CAMERA__ISP__OB_WB2 base address */
  #define CAMERA__ISP__OB_WB2_BASE_NS              (0x4AE00280u)
  /** Peripheral CAMERA__ISP__OB_WB2 base pointer */
  #define CAMERA__ISP__OB_WB2                      ((OB_WB2_Type *)CAMERA__ISP__OB_WB2_BASE)
  /** Peripheral CAMERA__ISP__OB_WB2 base pointer */
  #define CAMERA__ISP__OB_WB2_NS                   ((OB_WB2_Type *)CAMERA__ISP__OB_WB2_BASE_NS)
  /** Array initializer of OB_WB2 peripheral base addresses */
  #define OB_WB2_BASE_ADDRS                        { CAMERA__ISP__OB_WB2_BASE }
  /** Array initializer of OB_WB2 peripheral base pointers */
  #define OB_WB2_BASE_PTRS                         { CAMERA__ISP__OB_WB2 }
  /** Array initializer of OB_WB2 peripheral base addresses */
  #define OB_WB2_BASE_ADDRS_NS                     { CAMERA__ISP__OB_WB2_BASE_NS }
  /** Array initializer of OB_WB2 peripheral base pointers */
  #define OB_WB2_BASE_PTRS_NS                      { CAMERA__ISP__OB_WB2_NS }
#else
  /** Peripheral CAMERA__ISP__OB_WB2 base address */
  #define CAMERA__ISP__OB_WB2_BASE                 (0x4AE00280u)
  /** Peripheral CAMERA__ISP__OB_WB2 base pointer */
  #define CAMERA__ISP__OB_WB2                      ((OB_WB2_Type *)CAMERA__ISP__OB_WB2_BASE)
  /** Array initializer of OB_WB2 peripheral base addresses */
  #define OB_WB2_BASE_ADDRS                        { CAMERA__ISP__OB_WB2_BASE }
  /** Array initializer of OB_WB2 peripheral base pointers */
  #define OB_WB2_BASE_PTRS                         { CAMERA__ISP__OB_WB2 }
#endif

/* OCRAM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__OCRAM_MECC base address */
  #define CAMERA__OCRAM_MECC_BASE                  (0x5ADD0000u)
  /** Peripheral CAMERA__OCRAM_MECC base address */
  #define CAMERA__OCRAM_MECC_BASE_NS               (0x4ADD0000u)
  /** Peripheral CAMERA__OCRAM_MECC base pointer */
  #define CAMERA__OCRAM_MECC                       ((OCRAM_Type *)CAMERA__OCRAM_MECC_BASE)
  /** Peripheral CAMERA__OCRAM_MECC base pointer */
  #define CAMERA__OCRAM_MECC_NS                    ((OCRAM_Type *)CAMERA__OCRAM_MECC_BASE_NS)
  /** Peripheral DISPLAY__OCRAM_MECC base address */
  #define DISPLAY__OCRAM_MECC_BASE                 (0x5B0F0000u)
  /** Peripheral DISPLAY__OCRAM_MECC base address */
  #define DISPLAY__OCRAM_MECC_BASE_NS              (0x4B0F0000u)
  /** Peripheral DISPLAY__OCRAM_MECC base pointer */
  #define DISPLAY__OCRAM_MECC                      ((OCRAM_Type *)DISPLAY__OCRAM_MECC_BASE)
  /** Peripheral DISPLAY__OCRAM_MECC base pointer */
  #define DISPLAY__OCRAM_MECC_NS                   ((OCRAM_Type *)DISPLAY__OCRAM_MECC_BASE_NS)
  /** Array initializer of OCRAM peripheral base addresses */
  #define OCRAM_BASE_ADDRS                         { CAMERA__OCRAM_MECC_BASE, DISPLAY__OCRAM_MECC_BASE }
  /** Array initializer of OCRAM peripheral base pointers */
  #define OCRAM_BASE_PTRS                          { CAMERA__OCRAM_MECC, DISPLAY__OCRAM_MECC }
  /** Array initializer of OCRAM peripheral base addresses */
  #define OCRAM_BASE_ADDRS_NS                      { CAMERA__OCRAM_MECC_BASE_NS, DISPLAY__OCRAM_MECC_BASE_NS }
  /** Array initializer of OCRAM peripheral base pointers */
  #define OCRAM_BASE_PTRS_NS                       { CAMERA__OCRAM_MECC_NS, DISPLAY__OCRAM_MECC_NS }
#else
  /** Peripheral CAMERA__OCRAM_MECC base address */
  #define CAMERA__OCRAM_MECC_BASE                  (0x4ADD0000u)
  /** Peripheral CAMERA__OCRAM_MECC base pointer */
  #define CAMERA__OCRAM_MECC                       ((OCRAM_Type *)CAMERA__OCRAM_MECC_BASE)
  /** Peripheral DISPLAY__OCRAM_MECC base address */
  #define DISPLAY__OCRAM_MECC_BASE                 (0x4B0F0000u)
  /** Peripheral DISPLAY__OCRAM_MECC base pointer */
  #define DISPLAY__OCRAM_MECC                      ((OCRAM_Type *)DISPLAY__OCRAM_MECC_BASE)
  /** Array initializer of OCRAM peripheral base addresses */
  #define OCRAM_BASE_ADDRS                         { CAMERA__OCRAM_MECC_BASE, DISPLAY__OCRAM_MECC_BASE }
  /** Array initializer of OCRAM peripheral base pointers */
  #define OCRAM_BASE_PTRS                          { CAMERA__OCRAM_MECC, DISPLAY__OCRAM_MECC }
#endif

/* OTFAD - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral OTFAD base address */
  #define OTFAD_BASE                               (0x525E0000u)
  /** Peripheral OTFAD base address */
  #define OTFAD_BASE_NS                            (0x425E0000u)
  /** Peripheral OTFAD base pointer */
  #define OTFAD                                    ((OTFAD_Type *)OTFAD_BASE)
  /** Peripheral OTFAD base pointer */
  #define OTFAD_NS                                 ((OTFAD_Type *)OTFAD_BASE_NS)
  /** Array initializer of OTFAD peripheral base addresses */
  #define OTFAD_BASE_ADDRS                         { OTFAD_BASE }
  /** Array initializer of OTFAD peripheral base pointers */
  #define OTFAD_BASE_PTRS                          { OTFAD }
  /** Array initializer of OTFAD peripheral base addresses */
  #define OTFAD_BASE_ADDRS_NS                      { OTFAD_BASE_NS }
  /** Array initializer of OTFAD peripheral base pointers */
  #define OTFAD_BASE_PTRS_NS                       { OTFAD_NS }
#else
  /** Peripheral OTFAD base address */
  #define OTFAD_BASE                               (0x425E0000u)
  /** Peripheral OTFAD base pointer */
  #define OTFAD                                    ((OTFAD_Type *)OTFAD_BASE)
  /** Array initializer of OTFAD peripheral base addresses */
  #define OTFAD_BASE_ADDRS                         { OTFAD_BASE }
  /** Array initializer of OTFAD peripheral base pointers */
  #define OTFAD_BASE_PTRS                          { OTFAD }
#endif

/* PACKETIZER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__PACKETIZER base address */
  #define CAMERA__ISP__PACKETIZER_BASE             (0x5AE01580u)
  /** Peripheral CAMERA__ISP__PACKETIZER base address */
  #define CAMERA__ISP__PACKETIZER_BASE_NS          (0x4AE01580u)
  /** Peripheral CAMERA__ISP__PACKETIZER base pointer */
  #define CAMERA__ISP__PACKETIZER                  ((PACKETIZER_Type *)CAMERA__ISP__PACKETIZER_BASE)
  /** Peripheral CAMERA__ISP__PACKETIZER base pointer */
  #define CAMERA__ISP__PACKETIZER_NS               ((PACKETIZER_Type *)CAMERA__ISP__PACKETIZER_BASE_NS)
  /** Array initializer of PACKETIZER peripheral base addresses */
  #define PACKETIZER_BASE_ADDRS                    { CAMERA__ISP__PACKETIZER_BASE }
  /** Array initializer of PACKETIZER peripheral base pointers */
  #define PACKETIZER_BASE_PTRS                     { CAMERA__ISP__PACKETIZER }
  /** Array initializer of PACKETIZER peripheral base addresses */
  #define PACKETIZER_BASE_ADDRS_NS                 { CAMERA__ISP__PACKETIZER_BASE_NS }
  /** Array initializer of PACKETIZER peripheral base pointers */
  #define PACKETIZER_BASE_PTRS_NS                  { CAMERA__ISP__PACKETIZER_NS }
#else
  /** Peripheral CAMERA__ISP__PACKETIZER base address */
  #define CAMERA__ISP__PACKETIZER_BASE             (0x4AE01580u)
  /** Peripheral CAMERA__ISP__PACKETIZER base pointer */
  #define CAMERA__ISP__PACKETIZER                  ((PACKETIZER_Type *)CAMERA__ISP__PACKETIZER_BASE)
  /** Array initializer of PACKETIZER peripheral base addresses */
  #define PACKETIZER_BASE_ADDRS                    { CAMERA__ISP__PACKETIZER_BASE }
  /** Array initializer of PACKETIZER peripheral base pointers */
  #define PACKETIZER_BASE_PTRS                     { CAMERA__ISP__PACKETIZER }
#endif

/* PCIE_DMA_IATU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base address */
  #define HSIO__PCIE1__PCIE_DMA_IATU_BASE          (0x5C360000u)
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base address */
  #define HSIO__PCIE1__PCIE_DMA_IATU_BASE_NS       (0x4C360000u)
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE1__PCIE_DMA_IATU               ((PCIE_DMA_IATU_Type *)HSIO__PCIE1__PCIE_DMA_IATU_BASE)
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE1__PCIE_DMA_IATU_NS            ((PCIE_DMA_IATU_Type *)HSIO__PCIE1__PCIE_DMA_IATU_BASE_NS)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base address */
  #define HSIO__PCIE2__PCIE_DMA_IATU_BASE          (0x5C3E0000u)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base address */
  #define HSIO__PCIE2__PCIE_DMA_IATU_BASE_NS       (0x4C3E0000u)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE2__PCIE_DMA_IATU               ((PCIE_DMA_IATU_Type *)HSIO__PCIE2__PCIE_DMA_IATU_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE2__PCIE_DMA_IATU_NS            ((PCIE_DMA_IATU_Type *)HSIO__PCIE2__PCIE_DMA_IATU_BASE_NS)
  /** Array initializer of PCIE_DMA_IATU peripheral base addresses */
  #define PCIE_DMA_IATU_BASE_ADDRS                 { HSIO__PCIE1__PCIE_DMA_IATU_BASE, HSIO__PCIE2__PCIE_DMA_IATU_BASE }
  /** Array initializer of PCIE_DMA_IATU peripheral base pointers */
  #define PCIE_DMA_IATU_BASE_PTRS                  { HSIO__PCIE1__PCIE_DMA_IATU, HSIO__PCIE2__PCIE_DMA_IATU }
  /** Array initializer of PCIE_DMA_IATU peripheral base addresses */
  #define PCIE_DMA_IATU_BASE_ADDRS_NS              { HSIO__PCIE1__PCIE_DMA_IATU_BASE_NS, HSIO__PCIE2__PCIE_DMA_IATU_BASE_NS }
  /** Array initializer of PCIE_DMA_IATU peripheral base pointers */
  #define PCIE_DMA_IATU_BASE_PTRS_NS               { HSIO__PCIE1__PCIE_DMA_IATU_NS, HSIO__PCIE2__PCIE_DMA_IATU_NS }
#else
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base address */
  #define HSIO__PCIE1__PCIE_DMA_IATU_BASE          (0x4C360000u)
  /** Peripheral HSIO__PCIE1__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE1__PCIE_DMA_IATU               ((PCIE_DMA_IATU_Type *)HSIO__PCIE1__PCIE_DMA_IATU_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base address */
  #define HSIO__PCIE2__PCIE_DMA_IATU_BASE          (0x4C3E0000u)
  /** Peripheral HSIO__PCIE2__PCIE_DMA_IATU base pointer */
  #define HSIO__PCIE2__PCIE_DMA_IATU               ((PCIE_DMA_IATU_Type *)HSIO__PCIE2__PCIE_DMA_IATU_BASE)
  /** Array initializer of PCIE_DMA_IATU peripheral base addresses */
  #define PCIE_DMA_IATU_BASE_ADDRS                 { HSIO__PCIE1__PCIE_DMA_IATU_BASE, HSIO__PCIE2__PCIE_DMA_IATU_BASE }
  /** Array initializer of PCIE_DMA_IATU peripheral base pointers */
  #define PCIE_DMA_IATU_BASE_PTRS                  { HSIO__PCIE1__PCIE_DMA_IATU, HSIO__PCIE2__PCIE_DMA_IATU }
#endif

/* PCIE_EP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__PCIE1__PCIE_EP base address */
  #define HSIO__PCIE1__PCIE_EP_BASE                (0x5C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_EP base address */
  #define HSIO__PCIE1__PCIE_EP_BASE_NS             (0x4C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_EP base pointer */
  #define HSIO__PCIE1__PCIE_EP                     ((PCIE_EP_Type *)HSIO__PCIE1__PCIE_EP_BASE)
  /** Peripheral HSIO__PCIE1__PCIE_EP base pointer */
  #define HSIO__PCIE1__PCIE_EP_NS                  ((PCIE_EP_Type *)HSIO__PCIE1__PCIE_EP_BASE_NS)
  /** Peripheral HSIO__PCIE2__PCIE_EP base address */
  #define HSIO__PCIE2__PCIE_EP_BASE                (0x5C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_EP base address */
  #define HSIO__PCIE2__PCIE_EP_BASE_NS             (0x4C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_EP base pointer */
  #define HSIO__PCIE2__PCIE_EP                     ((PCIE_EP_Type *)HSIO__PCIE2__PCIE_EP_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_EP base pointer */
  #define HSIO__PCIE2__PCIE_EP_NS                  ((PCIE_EP_Type *)HSIO__PCIE2__PCIE_EP_BASE_NS)
  /** Array initializer of PCIE_EP peripheral base addresses */
  #define PCIE_EP_BASE_ADDRS                       { HSIO__PCIE1__PCIE_EP_BASE, HSIO__PCIE2__PCIE_EP_BASE }
  /** Array initializer of PCIE_EP peripheral base pointers */
  #define PCIE_EP_BASE_PTRS                        { HSIO__PCIE1__PCIE_EP, HSIO__PCIE2__PCIE_EP }
  /** Array initializer of PCIE_EP peripheral base addresses */
  #define PCIE_EP_BASE_ADDRS_NS                    { HSIO__PCIE1__PCIE_EP_BASE_NS, HSIO__PCIE2__PCIE_EP_BASE_NS }
  /** Array initializer of PCIE_EP peripheral base pointers */
  #define PCIE_EP_BASE_PTRS_NS                     { HSIO__PCIE1__PCIE_EP_NS, HSIO__PCIE2__PCIE_EP_NS }
#else
  /** Peripheral HSIO__PCIE1__PCIE_EP base address */
  #define HSIO__PCIE1__PCIE_EP_BASE                (0x4C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_EP base pointer */
  #define HSIO__PCIE1__PCIE_EP                     ((PCIE_EP_Type *)HSIO__PCIE1__PCIE_EP_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_EP base address */
  #define HSIO__PCIE2__PCIE_EP_BASE                (0x4C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_EP base pointer */
  #define HSIO__PCIE2__PCIE_EP                     ((PCIE_EP_Type *)HSIO__PCIE2__PCIE_EP_BASE)
  /** Array initializer of PCIE_EP peripheral base addresses */
  #define PCIE_EP_BASE_ADDRS                       { HSIO__PCIE1__PCIE_EP_BASE, HSIO__PCIE2__PCIE_EP_BASE }
  /** Array initializer of PCIE_EP peripheral base pointers */
  #define PCIE_EP_BASE_PTRS                        { HSIO__PCIE1__PCIE_EP, HSIO__PCIE2__PCIE_EP }
#endif

/* PCIE_RC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__PCIE1__PCIE_RC base address */
  #define HSIO__PCIE1__PCIE_RC_BASE                (0x5C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_RC base address */
  #define HSIO__PCIE1__PCIE_RC_BASE_NS             (0x4C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_RC base pointer */
  #define HSIO__PCIE1__PCIE_RC                     ((PCIE_RC_Type *)HSIO__PCIE1__PCIE_RC_BASE)
  /** Peripheral HSIO__PCIE1__PCIE_RC base pointer */
  #define HSIO__PCIE1__PCIE_RC_NS                  ((PCIE_RC_Type *)HSIO__PCIE1__PCIE_RC_BASE_NS)
  /** Peripheral HSIO__PCIE2__PCIE_RC base address */
  #define HSIO__PCIE2__PCIE_RC_BASE                (0x5C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_RC base address */
  #define HSIO__PCIE2__PCIE_RC_BASE_NS             (0x4C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_RC base pointer */
  #define HSIO__PCIE2__PCIE_RC                     ((PCIE_RC_Type *)HSIO__PCIE2__PCIE_RC_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_RC base pointer */
  #define HSIO__PCIE2__PCIE_RC_NS                  ((PCIE_RC_Type *)HSIO__PCIE2__PCIE_RC_BASE_NS)
  /** Array initializer of PCIE_RC peripheral base addresses */
  #define PCIE_RC_BASE_ADDRS                       { HSIO__PCIE1__PCIE_RC_BASE, HSIO__PCIE2__PCIE_RC_BASE }
  /** Array initializer of PCIE_RC peripheral base pointers */
  #define PCIE_RC_BASE_PTRS                        { HSIO__PCIE1__PCIE_RC, HSIO__PCIE2__PCIE_RC }
  /** Array initializer of PCIE_RC peripheral base addresses */
  #define PCIE_RC_BASE_ADDRS_NS                    { HSIO__PCIE1__PCIE_RC_BASE_NS, HSIO__PCIE2__PCIE_RC_BASE_NS }
  /** Array initializer of PCIE_RC peripheral base pointers */
  #define PCIE_RC_BASE_PTRS_NS                     { HSIO__PCIE1__PCIE_RC_NS, HSIO__PCIE2__PCIE_RC_NS }
#else
  /** Peripheral HSIO__PCIE1__PCIE_RC base address */
  #define HSIO__PCIE1__PCIE_RC_BASE                (0x4C300000u)
  /** Peripheral HSIO__PCIE1__PCIE_RC base pointer */
  #define HSIO__PCIE1__PCIE_RC                     ((PCIE_RC_Type *)HSIO__PCIE1__PCIE_RC_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_RC base address */
  #define HSIO__PCIE2__PCIE_RC_BASE                (0x4C380000u)
  /** Peripheral HSIO__PCIE2__PCIE_RC base pointer */
  #define HSIO__PCIE2__PCIE_RC                     ((PCIE_RC_Type *)HSIO__PCIE2__PCIE_RC_BASE)
  /** Array initializer of PCIE_RC peripheral base addresses */
  #define PCIE_RC_BASE_ADDRS                       { HSIO__PCIE1__PCIE_RC_BASE, HSIO__PCIE2__PCIE_RC_BASE }
  /** Array initializer of PCIE_RC peripheral base pointers */
  #define PCIE_RC_BASE_PTRS                        { HSIO__PCIE1__PCIE_RC, HSIO__PCIE2__PCIE_RC }
#endif

/* PCIE_SHADOW_EP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE1__PCIE_SHADOW_EP_BASE         (0x5C320000u)
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE1__PCIE_SHADOW_EP_BASE_NS      (0x4C320000u)
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE1__PCIE_SHADOW_EP              ((PCIE_SHADOW_EP_Type *)HSIO__PCIE1__PCIE_SHADOW_EP_BASE)
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE1__PCIE_SHADOW_EP_NS           ((PCIE_SHADOW_EP_Type *)HSIO__PCIE1__PCIE_SHADOW_EP_BASE_NS)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE2__PCIE_SHADOW_EP_BASE         (0x5C3A0000u)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE2__PCIE_SHADOW_EP_BASE_NS      (0x4C3A0000u)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE2__PCIE_SHADOW_EP              ((PCIE_SHADOW_EP_Type *)HSIO__PCIE2__PCIE_SHADOW_EP_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE2__PCIE_SHADOW_EP_NS           ((PCIE_SHADOW_EP_Type *)HSIO__PCIE2__PCIE_SHADOW_EP_BASE_NS)
  /** Array initializer of PCIE_SHADOW_EP peripheral base addresses */
  #define PCIE_SHADOW_EP_BASE_ADDRS                { HSIO__PCIE1__PCIE_SHADOW_EP_BASE, HSIO__PCIE2__PCIE_SHADOW_EP_BASE }
  /** Array initializer of PCIE_SHADOW_EP peripheral base pointers */
  #define PCIE_SHADOW_EP_BASE_PTRS                 { HSIO__PCIE1__PCIE_SHADOW_EP, HSIO__PCIE2__PCIE_SHADOW_EP }
  /** Array initializer of PCIE_SHADOW_EP peripheral base addresses */
  #define PCIE_SHADOW_EP_BASE_ADDRS_NS             { HSIO__PCIE1__PCIE_SHADOW_EP_BASE_NS, HSIO__PCIE2__PCIE_SHADOW_EP_BASE_NS }
  /** Array initializer of PCIE_SHADOW_EP peripheral base pointers */
  #define PCIE_SHADOW_EP_BASE_PTRS_NS              { HSIO__PCIE1__PCIE_SHADOW_EP_NS, HSIO__PCIE2__PCIE_SHADOW_EP_NS }
#else
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE1__PCIE_SHADOW_EP_BASE         (0x4C320000u)
  /** Peripheral HSIO__PCIE1__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE1__PCIE_SHADOW_EP              ((PCIE_SHADOW_EP_Type *)HSIO__PCIE1__PCIE_SHADOW_EP_BASE)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base address */
  #define HSIO__PCIE2__PCIE_SHADOW_EP_BASE         (0x4C3A0000u)
  /** Peripheral HSIO__PCIE2__PCIE_SHADOW_EP base pointer */
  #define HSIO__PCIE2__PCIE_SHADOW_EP              ((PCIE_SHADOW_EP_Type *)HSIO__PCIE2__PCIE_SHADOW_EP_BASE)
  /** Array initializer of PCIE_SHADOW_EP peripheral base addresses */
  #define PCIE_SHADOW_EP_BASE_ADDRS                { HSIO__PCIE1__PCIE_SHADOW_EP_BASE, HSIO__PCIE2__PCIE_SHADOW_EP_BASE }
  /** Array initializer of PCIE_SHADOW_EP peripheral base pointers */
  #define PCIE_SHADOW_EP_BASE_PTRS                 { HSIO__PCIE1__PCIE_SHADOW_EP, HSIO__PCIE2__PCIE_SHADOW_EP }
#endif

/* PDM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral PDM base address */
  #define PDM_BASE                                 (0x54520000u)
  /** Peripheral PDM base address */
  #define PDM_BASE_NS                              (0x44520000u)
  /** Peripheral PDM base pointer */
  #define PDM                                      ((PDM_Type *)PDM_BASE)
  /** Peripheral PDM base pointer */
  #define PDM_NS                                   ((PDM_Type *)PDM_BASE_NS)
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS                           { PDM_BASE }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS                            { PDM }
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS_NS                        { PDM_BASE_NS }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS_NS                         { PDM_NS }
#else
  /** Peripheral PDM base address */
  #define PDM_BASE                                 (0x44520000u)
  /** Peripheral PDM base pointer */
  #define PDM                                      ((PDM_Type *)PDM_BASE)
  /** Array initializer of PDM peripheral base addresses */
  #define PDM_BASE_ADDRS                           { PDM_BASE }
  /** Array initializer of PDM peripheral base pointers */
  #define PDM_BASE_PTRS                            { PDM }
#endif
/** Interrupt vectors for the PDM peripheral type */
#define PDM_HWVAD_Event_IRQS                     { PDM_HWVAD_EVENT_IRQn }
#define PDM_HWVAD_Error_IRQS                     { PDM_HWVAD_ERROR_IRQn }
#define PDM_Event_IRQS                           { PDM_EVENT_IRQn }
#define PDM_Error_IRQS                           { PDM_ERROR_IRQn }

/* PIPE_CONF - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__PIPE_CONF base address */
  #define CAMERA__ISP__PIPE_CONF_BASE              (0x5AE00000u)
  /** Peripheral CAMERA__ISP__PIPE_CONF base address */
  #define CAMERA__ISP__PIPE_CONF_BASE_NS           (0x4AE00000u)
  /** Peripheral CAMERA__ISP__PIPE_CONF base pointer */
  #define CAMERA__ISP__PIPE_CONF                   ((PIPE_CONF_Type *)CAMERA__ISP__PIPE_CONF_BASE)
  /** Peripheral CAMERA__ISP__PIPE_CONF base pointer */
  #define CAMERA__ISP__PIPE_CONF_NS                ((PIPE_CONF_Type *)CAMERA__ISP__PIPE_CONF_BASE_NS)
  /** Array initializer of PIPE_CONF peripheral base addresses */
  #define PIPE_CONF_BASE_ADDRS                     { CAMERA__ISP__PIPE_CONF_BASE }
  /** Array initializer of PIPE_CONF peripheral base pointers */
  #define PIPE_CONF_BASE_PTRS                      { CAMERA__ISP__PIPE_CONF }
  /** Array initializer of PIPE_CONF peripheral base addresses */
  #define PIPE_CONF_BASE_ADDRS_NS                  { CAMERA__ISP__PIPE_CONF_BASE_NS }
  /** Array initializer of PIPE_CONF peripheral base pointers */
  #define PIPE_CONF_BASE_PTRS_NS                   { CAMERA__ISP__PIPE_CONF_NS }
#else
  /** Peripheral CAMERA__ISP__PIPE_CONF base address */
  #define CAMERA__ISP__PIPE_CONF_BASE              (0x4AE00000u)
  /** Peripheral CAMERA__ISP__PIPE_CONF base pointer */
  #define CAMERA__ISP__PIPE_CONF                   ((PIPE_CONF_Type *)CAMERA__ISP__PIPE_CONF_BASE)
  /** Array initializer of PIPE_CONF peripheral base addresses */
  #define PIPE_CONF_BASE_ADDRS                     { CAMERA__ISP__PIPE_CONF_BASE }
  /** Array initializer of PIPE_CONF peripheral base pointers */
  #define PIPE_CONF_BASE_PTRS                      { CAMERA__ISP__PIPE_CONF }
#endif

/* PLL - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base address */
  #define ANALOG__SYS_FRACT_PLL1_BASE              (0x54481000u)
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base address */
  #define ANALOG__SYS_FRACT_PLL1_BASE_NS           (0x44481000u)
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base pointer */
  #define ANALOG__SYS_FRACT_PLL1                   ((PLL_Type *)ANALOG__SYS_FRACT_PLL1_BASE)
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base pointer */
  #define ANALOG__SYS_FRACT_PLL1_NS                ((PLL_Type *)ANALOG__SYS_FRACT_PLL1_BASE_NS)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base address */
  #define ANALOG__AUDIO_FRACT_PLL1_BASE            (0x54481100u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base address */
  #define ANALOG__AUDIO_FRACT_PLL1_BASE_NS         (0x44481100u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL1                 ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL1_BASE)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL1_NS              ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL1_BASE_NS)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base address */
  #define ANALOG__AUDIO_FRACT_PLL2_BASE            (0x54481200u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base address */
  #define ANALOG__AUDIO_FRACT_PLL2_BASE_NS         (0x44481200u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL2                 ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL2_BASE)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL2_NS              ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL2_BASE_NS)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base address */
  #define ANALOG__VIDEO_FRACT_PLL1_BASE            (0x54481300u)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base address */
  #define ANALOG__VIDEO_FRACT_PLL1_BASE_NS         (0x44481300u)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base pointer */
  #define ANALOG__VIDEO_FRACT_PLL1                 ((PLL_Type *)ANALOG__VIDEO_FRACT_PLL1_BASE)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base pointer */
  #define ANALOG__VIDEO_FRACT_PLL1_NS              ((PLL_Type *)ANALOG__VIDEO_FRACT_PLL1_BASE_NS)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base address */
  #define CORTEXA__FRACT_PLL_ARMPLL_BASE           (0x54481600u)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base address */
  #define CORTEXA__FRACT_PLL_ARMPLL_BASE_NS        (0x44481600u)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base pointer */
  #define CORTEXA__FRACT_PLL_ARMPLL                ((PLL_Type *)CORTEXA__FRACT_PLL_ARMPLL_BASE)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base pointer */
  #define CORTEXA__FRACT_PLL_ARMPLL_NS             ((PLL_Type *)CORTEXA__FRACT_PLL_ARMPLL_BASE_NS)
  /** Peripheral DDRC__FRACT_PLL base address */
  #define DDRC__FRACT_PLL_BASE                     (0x54481700u)
  /** Peripheral DDRC__FRACT_PLL base address */
  #define DDRC__FRACT_PLL_BASE_NS                  (0x44481700u)
  /** Peripheral DDRC__FRACT_PLL base pointer */
  #define DDRC__FRACT_PLL                          ((PLL_Type *)DDRC__FRACT_PLL_BASE)
  /** Peripheral DDRC__FRACT_PLL base pointer */
  #define DDRC__FRACT_PLL_NS                       ((PLL_Type *)DDRC__FRACT_PLL_BASE_NS)
  /** Peripheral DISPLAY__FRACT_PLL base address */
  #define DISPLAY__FRACT_PLL_BASE                  (0x54481900u)
  /** Peripheral DISPLAY__FRACT_PLL base address */
  #define DISPLAY__FRACT_PLL_BASE_NS               (0x44481900u)
  /** Peripheral DISPLAY__FRACT_PLL base pointer */
  #define DISPLAY__FRACT_PLL                       ((PLL_Type *)DISPLAY__FRACT_PLL_BASE)
  /** Peripheral DISPLAY__FRACT_PLL base pointer */
  #define DISPLAY__FRACT_PLL_NS                    ((PLL_Type *)DISPLAY__FRACT_PLL_BASE_NS)
  /** Array initializer of PLL peripheral base addresses */
  #define PLL_BASE_ADDRS                           { ANALOG__SYS_FRACT_PLL1_BASE, ANALOG__AUDIO_FRACT_PLL1_BASE, ANALOG__AUDIO_FRACT_PLL2_BASE, ANALOG__VIDEO_FRACT_PLL1_BASE, CORTEXA__FRACT_PLL_ARMPLL_BASE, DDRC__FRACT_PLL_BASE, DISPLAY__FRACT_PLL_BASE }
  /** Array initializer of PLL peripheral base pointers */
  #define PLL_BASE_PTRS                            { ANALOG__SYS_FRACT_PLL1, ANALOG__AUDIO_FRACT_PLL1, ANALOG__AUDIO_FRACT_PLL2, ANALOG__VIDEO_FRACT_PLL1, CORTEXA__FRACT_PLL_ARMPLL, DDRC__FRACT_PLL, DISPLAY__FRACT_PLL }
  /** Array initializer of PLL peripheral base addresses */
  #define PLL_BASE_ADDRS_NS                        { ANALOG__SYS_FRACT_PLL1_BASE_NS, ANALOG__AUDIO_FRACT_PLL1_BASE_NS, ANALOG__AUDIO_FRACT_PLL2_BASE_NS, ANALOG__VIDEO_FRACT_PLL1_BASE_NS, CORTEXA__FRACT_PLL_ARMPLL_BASE_NS, DDRC__FRACT_PLL_BASE_NS, DISPLAY__FRACT_PLL_BASE_NS }
  /** Array initializer of PLL peripheral base pointers */
  #define PLL_BASE_PTRS_NS                         { ANALOG__SYS_FRACT_PLL1_NS, ANALOG__AUDIO_FRACT_PLL1_NS, ANALOG__AUDIO_FRACT_PLL2_NS, ANALOG__VIDEO_FRACT_PLL1_NS, CORTEXA__FRACT_PLL_ARMPLL_NS, DDRC__FRACT_PLL_NS, DISPLAY__FRACT_PLL_NS }
#else
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base address */
  #define ANALOG__SYS_FRACT_PLL1_BASE              (0x44481000u)
  /** Peripheral ANALOG__SYS_FRACT_PLL1 base pointer */
  #define ANALOG__SYS_FRACT_PLL1                   ((PLL_Type *)ANALOG__SYS_FRACT_PLL1_BASE)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base address */
  #define ANALOG__AUDIO_FRACT_PLL1_BASE            (0x44481100u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL1 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL1                 ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL1_BASE)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base address */
  #define ANALOG__AUDIO_FRACT_PLL2_BASE            (0x44481200u)
  /** Peripheral ANALOG__AUDIO_FRACT_PLL2 base pointer */
  #define ANALOG__AUDIO_FRACT_PLL2                 ((PLL_Type *)ANALOG__AUDIO_FRACT_PLL2_BASE)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base address */
  #define ANALOG__VIDEO_FRACT_PLL1_BASE            (0x44481300u)
  /** Peripheral ANALOG__VIDEO_FRACT_PLL1 base pointer */
  #define ANALOG__VIDEO_FRACT_PLL1                 ((PLL_Type *)ANALOG__VIDEO_FRACT_PLL1_BASE)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base address */
  #define CORTEXA__FRACT_PLL_ARMPLL_BASE           (0x44481600u)
  /** Peripheral CORTEXA__FRACT_PLL_ARMPLL base pointer */
  #define CORTEXA__FRACT_PLL_ARMPLL                ((PLL_Type *)CORTEXA__FRACT_PLL_ARMPLL_BASE)
  /** Peripheral DDRC__FRACT_PLL base address */
  #define DDRC__FRACT_PLL_BASE                     (0x44481700u)
  /** Peripheral DDRC__FRACT_PLL base pointer */
  #define DDRC__FRACT_PLL                          ((PLL_Type *)DDRC__FRACT_PLL_BASE)
  /** Peripheral DISPLAY__FRACT_PLL base address */
  #define DISPLAY__FRACT_PLL_BASE                  (0x44481900u)
  /** Peripheral DISPLAY__FRACT_PLL base pointer */
  #define DISPLAY__FRACT_PLL                       ((PLL_Type *)DISPLAY__FRACT_PLL_BASE)
  /** Array initializer of PLL peripheral base addresses */
  #define PLL_BASE_ADDRS                           { ANALOG__SYS_FRACT_PLL1_BASE, ANALOG__AUDIO_FRACT_PLL1_BASE, ANALOG__AUDIO_FRACT_PLL2_BASE, ANALOG__VIDEO_FRACT_PLL1_BASE, CORTEXA__FRACT_PLL_ARMPLL_BASE, DDRC__FRACT_PLL_BASE, DISPLAY__FRACT_PLL_BASE }
  /** Array initializer of PLL peripheral base pointers */
  #define PLL_BASE_PTRS                            { ANALOG__SYS_FRACT_PLL1, ANALOG__AUDIO_FRACT_PLL1, ANALOG__AUDIO_FRACT_PLL2, ANALOG__VIDEO_FRACT_PLL1, CORTEXA__FRACT_PLL_ARMPLL, DDRC__FRACT_PLL, DISPLAY__FRACT_PLL }
#endif

/* RGBIR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__RGBIR base address */
  #define CAMERA__ISP__RGBIR_BASE                  (0x5AE00600u)
  /** Peripheral CAMERA__ISP__RGBIR base address */
  #define CAMERA__ISP__RGBIR_BASE_NS               (0x4AE00600u)
  /** Peripheral CAMERA__ISP__RGBIR base pointer */
  #define CAMERA__ISP__RGBIR                       ((RGBIR_Type *)CAMERA__ISP__RGBIR_BASE)
  /** Peripheral CAMERA__ISP__RGBIR base pointer */
  #define CAMERA__ISP__RGBIR_NS                    ((RGBIR_Type *)CAMERA__ISP__RGBIR_BASE_NS)
  /** Array initializer of RGBIR peripheral base addresses */
  #define RGBIR_BASE_ADDRS                         { CAMERA__ISP__RGBIR_BASE }
  /** Array initializer of RGBIR peripheral base pointers */
  #define RGBIR_BASE_PTRS                          { CAMERA__ISP__RGBIR }
  /** Array initializer of RGBIR peripheral base addresses */
  #define RGBIR_BASE_ADDRS_NS                      { CAMERA__ISP__RGBIR_BASE_NS }
  /** Array initializer of RGBIR peripheral base pointers */
  #define RGBIR_BASE_PTRS_NS                       { CAMERA__ISP__RGBIR_NS }
#else
  /** Peripheral CAMERA__ISP__RGBIR base address */
  #define CAMERA__ISP__RGBIR_BASE                  (0x4AE00600u)
  /** Peripheral CAMERA__ISP__RGBIR base pointer */
  #define CAMERA__ISP__RGBIR                       ((RGBIR_Type *)CAMERA__ISP__RGBIR_BASE)
  /** Array initializer of RGBIR peripheral base addresses */
  #define RGBIR_BASE_ADDRS                         { CAMERA__ISP__RGBIR_BASE }
  /** Array initializer of RGBIR peripheral base pointers */
  #define RGBIR_BASE_PTRS                          { CAMERA__ISP__RGBIR }
#endif

/* RGB_TO_YUV - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base address */
  #define CAMERA__ISP__RGB_TO_YUV_BASE             (0x5AE011C0u)
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base address */
  #define CAMERA__ISP__RGB_TO_YUV_BASE_NS          (0x4AE011C0u)
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base pointer */
  #define CAMERA__ISP__RGB_TO_YUV                  ((RGB_TO_YUV_Type *)CAMERA__ISP__RGB_TO_YUV_BASE)
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base pointer */
  #define CAMERA__ISP__RGB_TO_YUV_NS               ((RGB_TO_YUV_Type *)CAMERA__ISP__RGB_TO_YUV_BASE_NS)
  /** Array initializer of RGB_TO_YUV peripheral base addresses */
  #define RGB_TO_YUV_BASE_ADDRS                    { CAMERA__ISP__RGB_TO_YUV_BASE }
  /** Array initializer of RGB_TO_YUV peripheral base pointers */
  #define RGB_TO_YUV_BASE_PTRS                     { CAMERA__ISP__RGB_TO_YUV }
  /** Array initializer of RGB_TO_YUV peripheral base addresses */
  #define RGB_TO_YUV_BASE_ADDRS_NS                 { CAMERA__ISP__RGB_TO_YUV_BASE_NS }
  /** Array initializer of RGB_TO_YUV peripheral base pointers */
  #define RGB_TO_YUV_BASE_PTRS_NS                  { CAMERA__ISP__RGB_TO_YUV_NS }
#else
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base address */
  #define CAMERA__ISP__RGB_TO_YUV_BASE             (0x4AE011C0u)
  /** Peripheral CAMERA__ISP__RGB_TO_YUV base pointer */
  #define CAMERA__ISP__RGB_TO_YUV                  ((RGB_TO_YUV_Type *)CAMERA__ISP__RGB_TO_YUV_BASE)
  /** Array initializer of RGB_TO_YUV peripheral base addresses */
  #define RGB_TO_YUV_BASE_ADDRS                    { CAMERA__ISP__RGB_TO_YUV_BASE }
  /** Array initializer of RGB_TO_YUV peripheral base pointers */
  #define RGB_TO_YUV_BASE_PTRS                     { CAMERA__ISP__RGB_TO_YUV }
#endif

/* RGPIO - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE                               (0x57400000u)
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE_NS                            (0x47400000u)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1                                    ((RGPIO_Type *)GPIO1_BASE)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1_NS                                 ((RGPIO_Type *)GPIO1_BASE_NS)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE                               (0x53810000u)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE_NS                            (0x43810000u)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2                                    ((RGPIO_Type *)GPIO2_BASE)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2_NS                                 ((RGPIO_Type *)GPIO2_BASE_NS)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE                               (0x53820000u)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE_NS                            (0x43820000u)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3                                    ((RGPIO_Type *)GPIO3_BASE)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3_NS                                 ((RGPIO_Type *)GPIO3_BASE_NS)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE                               (0x53840000u)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE_NS                            (0x43840000u)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4                                    ((RGPIO_Type *)GPIO4_BASE)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4_NS                                 ((RGPIO_Type *)GPIO4_BASE_NS)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE                               (0x53850000u)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE_NS                            (0x43850000u)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5                                    ((RGPIO_Type *)GPIO5_BASE)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5_NS                                 ((RGPIO_Type *)GPIO5_BASE_NS)
  /** Array initializer of RGPIO peripheral base addresses */
  #define RGPIO_BASE_ADDRS                         { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE }
  /** Array initializer of RGPIO peripheral base pointers */
  #define RGPIO_BASE_PTRS                          { (RGPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5 }
  /** Array initializer of RGPIO peripheral base addresses */
  #define RGPIO_BASE_ADDRS_NS                      { 0u, GPIO1_BASE_NS, GPIO2_BASE_NS, GPIO3_BASE_NS, GPIO4_BASE_NS, GPIO5_BASE_NS }
  /** Array initializer of RGPIO peripheral base pointers */
  #define RGPIO_BASE_PTRS_NS                       { (RGPIO_Type *)0u, GPIO1_NS, GPIO2_NS, GPIO3_NS, GPIO4_NS, GPIO5_NS }
#else
  /** Peripheral GPIO1 base address */
  #define GPIO1_BASE                               (0x47400000u)
  /** Peripheral GPIO1 base pointer */
  #define GPIO1                                    ((RGPIO_Type *)GPIO1_BASE)
  /** Peripheral GPIO2 base address */
  #define GPIO2_BASE                               (0x43810000u)
  /** Peripheral GPIO2 base pointer */
  #define GPIO2                                    ((RGPIO_Type *)GPIO2_BASE)
  /** Peripheral GPIO3 base address */
  #define GPIO3_BASE                               (0x43820000u)
  /** Peripheral GPIO3 base pointer */
  #define GPIO3                                    ((RGPIO_Type *)GPIO3_BASE)
  /** Peripheral GPIO4 base address */
  #define GPIO4_BASE                               (0x43840000u)
  /** Peripheral GPIO4 base pointer */
  #define GPIO4                                    ((RGPIO_Type *)GPIO4_BASE)
  /** Peripheral GPIO5 base address */
  #define GPIO5_BASE                               (0x43850000u)
  /** Peripheral GPIO5 base pointer */
  #define GPIO5                                    ((RGPIO_Type *)GPIO5_BASE)
  /** Array initializer of RGPIO peripheral base addresses */
  #define RGPIO_BASE_ADDRS                         { 0u, GPIO1_BASE, GPIO2_BASE, GPIO3_BASE, GPIO4_BASE, GPIO5_BASE }
  /** Array initializer of RGPIO peripheral base pointers */
  #define RGPIO_BASE_PTRS                          { (RGPIO_Type *)0u, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5 }
#endif
/** Interrupt vectors for the RGPIO peripheral type */
#define RGPIO_IRQS                               { NotAvail_IRQn, GPIO1_0_IRQn, GPIO2_0_IRQn, GPIO3_0_IRQn, GPIO4_0_IRQn, GPIO5_0_IRQn }

/* SEMA42 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral SEMA42_1 base address */
  #define SEMA42_1_BASE                            (0x54260000u)
  /** Peripheral SEMA42_1 base address */
  #define SEMA42_1_BASE_NS                         (0x44260000u)
  /** Peripheral SEMA42_1 base pointer */
  #define SEMA42_1                                 ((SEMA42_Type *)SEMA42_1_BASE)
  /** Peripheral SEMA42_1 base pointer */
  #define SEMA42_1_NS                              ((SEMA42_Type *)SEMA42_1_BASE_NS)
  /** Peripheral SEMA42_2 base address */
  #define SEMA42_2_BASE                            (0x52450000u)
  /** Peripheral SEMA42_2 base address */
  #define SEMA42_2_BASE_NS                         (0x42450000u)
  /** Peripheral SEMA42_2 base pointer */
  #define SEMA42_2                                 ((SEMA42_Type *)SEMA42_2_BASE)
  /** Peripheral SEMA42_2 base pointer */
  #define SEMA42_2_NS                              ((SEMA42_Type *)SEMA42_2_BASE_NS)
  /** Array initializer of SEMA42 peripheral base addresses */
  #define SEMA42_BASE_ADDRS                        { 0u, SEMA42_1_BASE, SEMA42_2_BASE }
  /** Array initializer of SEMA42 peripheral base pointers */
  #define SEMA42_BASE_PTRS                         { (SEMA42_Type *)0u, SEMA42_1, SEMA42_2 }
  /** Array initializer of SEMA42 peripheral base addresses */
  #define SEMA42_BASE_ADDRS_NS                     { 0u, SEMA42_1_BASE_NS, SEMA42_2_BASE_NS }
  /** Array initializer of SEMA42 peripheral base pointers */
  #define SEMA42_BASE_PTRS_NS                      { (SEMA42_Type *)0u, SEMA42_1_NS, SEMA42_2_NS }
#else
  /** Peripheral SEMA42_1 base address */
  #define SEMA42_1_BASE                            (0x44260000u)
  /** Peripheral SEMA42_1 base pointer */
  #define SEMA42_1                                 ((SEMA42_Type *)SEMA42_1_BASE)
  /** Peripheral SEMA42_2 base address */
  #define SEMA42_2_BASE                            (0x42450000u)
  /** Peripheral SEMA42_2 base pointer */
  #define SEMA42_2                                 ((SEMA42_Type *)SEMA42_2_BASE)
  /** Array initializer of SEMA42 peripheral base addresses */
  #define SEMA42_BASE_ADDRS                        { 0u, SEMA42_1_BASE, SEMA42_2_BASE }
  /** Array initializer of SEMA42 peripheral base pointers */
  #define SEMA42_BASE_PTRS                         { (SEMA42_Type *)0u, SEMA42_1, SEMA42_2 }
#endif

/* SRC_GENERAL_REG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base address */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE     (0x54460000u)
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base address */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE_NS  (0x44460000u)
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base pointer */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG          ((SRC_GENERAL_REG_Type *)CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE)
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base pointer */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG_NS       ((SRC_GENERAL_REG_Type *)CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE_NS)
  /** Array initializer of SRC_GENERAL_REG peripheral base addresses */
  #define SRC_GENERAL_REG_BASE_ADDRS               { CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE }
  /** Array initializer of SRC_GENERAL_REG peripheral base pointers */
  #define SRC_GENERAL_REG_BASE_PTRS                { CCMSRCGPC__SRC__SRC_CENTRAL_REG }
  /** Array initializer of SRC_GENERAL_REG peripheral base addresses */
  #define SRC_GENERAL_REG_BASE_ADDRS_NS            { CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE_NS }
  /** Array initializer of SRC_GENERAL_REG peripheral base pointers */
  #define SRC_GENERAL_REG_BASE_PTRS_NS             { CCMSRCGPC__SRC__SRC_CENTRAL_REG_NS }
#else
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base address */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE     (0x44460000u)
  /** Peripheral CCMSRCGPC__SRC__SRC_CENTRAL_REG base pointer */
  #define CCMSRCGPC__SRC__SRC_CENTRAL_REG          ((SRC_GENERAL_REG_Type *)CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE)
  /** Array initializer of SRC_GENERAL_REG peripheral base addresses */
  #define SRC_GENERAL_REG_BASE_ADDRS               { CCMSRCGPC__SRC__SRC_CENTRAL_REG_BASE }
  /** Array initializer of SRC_GENERAL_REG peripheral base pointers */
  #define SRC_GENERAL_REG_BASE_PTRS                { CCMSRCGPC__SRC__SRC_CENTRAL_REG }
#endif

/* SRC_MEM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE     (0x54460900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE_NS  (0x44460900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM_NS       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE  (0x54461100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE_NS (0x44461100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_NS    ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE (0x54461900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE_NS (0x44461900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE (0x54461D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE_NS (0x44461D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE (0x54462100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE_NS (0x44462100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE (0x54462500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE_NS (0x44462500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE (0x54462900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE_NS (0x44462900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE (0x54462D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE_NS (0x44462D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE (0x54463100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE_NS (0x44463100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE (0x54463120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE_NS (0x44463120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_NS ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE     (0x54463500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE_NS  (0x44463500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_NS       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE (0x54463900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE_NS (0x44463900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_NS   ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE     (0x54463D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE_NS  (0x44463D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_NS       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE    (0x54464100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE_NS (0x44464100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_NS      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE      (0x54464900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE_NS   (0x44464900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM           ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM_NS        ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE    (0x54464D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE_NS (0x44464D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_NS      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE    (0x54465100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE_NS (0x44465100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_NS      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE    (0x54465120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE_NS (0x44465120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_NS      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE     (0x54465500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE_NS  (0x44465500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_NS       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE     (0x54465900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE_NS  (0x44465900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_NS       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE  (0x54465D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE_NS (0x44465D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_NS    ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE_NS)
  /** Array initializer of SRC_MEM peripheral base addresses */
  #define SRC_MEM_BASE_ADDRS                       { CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE }
  /** Array initializer of SRC_MEM peripheral base pointers */
  #define SRC_MEM_BASE_PTRS                        { CCMSRCGPC__SRC__XSPR_AONMIX_MEM, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM, CCMSRCGPC__SRC__XSPR_M7MIX_MEM, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM }
  /** Array initializer of SRC_MEM peripheral base addresses */
  #define SRC_MEM_BASE_ADDRS_NS                    { CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE_NS, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE_NS, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE_NS, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE_NS }
  /** Array initializer of SRC_MEM peripheral base pointers */
  #define SRC_MEM_BASE_PTRS_NS                     { CCMSRCGPC__SRC__XSPR_AONMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_NS, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_M7MIX_MEM_NS, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_NS, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_NS, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_NS }
#else
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE     (0x44460900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE  (0x44461100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE (0x44461900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE (0x44461D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE (0x44462100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE (0x44462500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE (0x44462900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE (0x44462D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE (0x44463100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0 ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE (0x44463120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1 ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE     (0x44463500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE (0x44463900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM      ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE     (0x44463D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE    (0x44464100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE      (0x44464900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_MEM           ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE    (0x44464D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_MEM         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE    (0x44465100u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE    (0x44465120u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1         ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE     (0x44465500u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE     (0x44465900u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_MEM          ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE  (0x44465D00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM       ((SRC_MEM_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE)
  /** Array initializer of SRC_MEM peripheral base addresses */
  #define SRC_MEM_BASE_ADDRS                       { CCMSRCGPC__SRC__XSPR_AONMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1_BASE, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_M7MIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1_BASE, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM_BASE, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM_BASE }
  /** Array initializer of SRC_MEM peripheral base pointers */
  #define SRC_MEM_BASE_PTRS                        { CCMSRCGPC__SRC__XSPR_AONMIX_MEM, CCMSRCGPC__SRC__XSPR_CAMERAMIX_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE0_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_MEM, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM0, CCMSRCGPC__SRC__XSPR_CORTEXMIX_PLATFORM_MEM1, CCMSRCGPC__SRC__XSPR_DDRMIX_MEM, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_MEM, CCMSRCGPC__SRC__XSPR_GPUMIX_MEM, CCMSRCGPC__SRC__XSPR_HSIOMIX_MEM, CCMSRCGPC__SRC__XSPR_M7MIX_MEM, CCMSRCGPC__SRC__XSPR_NETCMIX_MEM, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM0, CCMSRCGPC__SRC__XSPR_NOCMIX_MEM1, CCMSRCGPC__SRC__XSPR_NPUMIX_MEM, CCMSRCGPC__SRC__XSPR_VPUMIX_MEM, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_MEM }
#endif

/* SRC_XSPR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX_BASE         (0x54460400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX_BASE_NS      (0x44460400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_ANAMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_ANAMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_BASE         (0x54460800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_BASE_NS      (0x44460800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base address */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE        (0x54460C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base address */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE_NS     (0x44460C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX             ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX_NS          ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE      (0x54461000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE_NS   (0x44461000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_NS        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE   (0x54461400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE_NS (0x44461400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_NS     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE (0x54461C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE_NS (0x44461C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_NS  ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE (0x54462000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE_NS (0x44462000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_NS  ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE (0x54462400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE_NS (0x44462400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_NS  ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE (0x54462800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE_NS (0x44462800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_NS  ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE (0x54462C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE_NS (0x44462C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_NS  ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_BASE         (0x54463400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_BASE_NS      (0x44463400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE     (0x54463800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE_NS  (0x44463800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX          ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_NS       ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_BASE         (0x54463C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_BASE_NS      (0x44463C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE    (0x54464000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE_NS (0x44464000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP         ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_NS      ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE   (0x54464400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE_NS (0x44464400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_NS     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_BASE          (0x54464800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_BASE_NS       (0x44464800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX               ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_NS            ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_BASE        (0x54464C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_BASE_NS     (0x44464C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX             ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_NS          ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_BASE         (0x54465000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_BASE_NS      (0x44465000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_BASE         (0x54465400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_BASE_NS      (0x44465400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_BASE         (0x54465800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_BASE_NS      (0x44465800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_NS           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_BASE_NS)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE      (0x54465C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE_NS   (0x44465C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_NS        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE_NS)
  /** Array initializer of SRC_XSPR peripheral base addresses */
  #define SRC_XSPR_BASE_ADDRS                      { CCMSRCGPC__SRC__XSPR_ANAMIX_BASE, CCMSRCGPC__SRC__XSPR_AONMIX_BASE, CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE, CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE, CCMSRCGPC__SRC__XSPR_DDRMIX_BASE, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE, CCMSRCGPC__SRC__XSPR_GPUMIX_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE, CCMSRCGPC__SRC__XSPR_M7MIX_BASE, CCMSRCGPC__SRC__XSPR_NETCMIX_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_BASE, CCMSRCGPC__SRC__XSPR_NPUMIX_BASE, CCMSRCGPC__SRC__XSPR_VPUMIX_BASE, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE }
  /** Array initializer of SRC_XSPR peripheral base pointers */
  #define SRC_XSPR_BASE_PTRS                       { CCMSRCGPC__SRC__XSPR_ANAMIX, CCMSRCGPC__SRC__XSPR_AONMIX, CCMSRCGPC__SRC__XSPR_BBSMMIX, CCMSRCGPC__SRC__XSPR_CAMERAMIX, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5, CCMSRCGPC__SRC__XSPR_DDRMIX, CCMSRCGPC__SRC__XSPR_DISPLAYMIX, CCMSRCGPC__SRC__XSPR_GPUMIX, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON, CCMSRCGPC__SRC__XSPR_M7MIX, CCMSRCGPC__SRC__XSPR_NETCMIX, CCMSRCGPC__SRC__XSPR_NOCMIX, CCMSRCGPC__SRC__XSPR_NPUMIX, CCMSRCGPC__SRC__XSPR_VPUMIX, CCMSRCGPC__SRC__XSPR_WAKEUPMIX }
  /** Array initializer of SRC_XSPR peripheral base addresses */
  #define SRC_XSPR_BASE_ADDRS_NS                   { CCMSRCGPC__SRC__XSPR_ANAMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_AONMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE_NS, CCMSRCGPC__SRC__XSPR_DDRMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_GPUMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE_NS, CCMSRCGPC__SRC__XSPR_M7MIX_BASE_NS, CCMSRCGPC__SRC__XSPR_NETCMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_NPUMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_VPUMIX_BASE_NS, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE_NS }
  /** Array initializer of SRC_XSPR peripheral base pointers */
  #define SRC_XSPR_BASE_PTRS_NS                    { CCMSRCGPC__SRC__XSPR_ANAMIX_NS, CCMSRCGPC__SRC__XSPR_AONMIX_NS, CCMSRCGPC__SRC__XSPR_BBSMMIX_NS, CCMSRCGPC__SRC__XSPR_CAMERAMIX_NS, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_NS, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_NS, CCMSRCGPC__SRC__XSPR_DDRMIX_NS, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_NS, CCMSRCGPC__SRC__XSPR_GPUMIX_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_NS, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_NS, CCMSRCGPC__SRC__XSPR_M7MIX_NS, CCMSRCGPC__SRC__XSPR_NETCMIX_NS, CCMSRCGPC__SRC__XSPR_NOCMIX_NS, CCMSRCGPC__SRC__XSPR_NPUMIX_NS, CCMSRCGPC__SRC__XSPR_VPUMIX_NS, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_NS }
#else
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX_BASE         (0x44460400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_ANAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_ANAMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_ANAMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base address */
  #define CCMSRCGPC__SRC__XSPR_AONMIX_BASE         (0x44460800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_AONMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_AONMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_AONMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base address */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE        (0x44460C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_BBSMMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_BBSMMIX             ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE      (0x44461000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CAMERAMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CAMERAMIX           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE   (0x44461400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE (0x44461C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE (0x44462000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE (0x44462400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE (0x44462800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base address */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE (0x44462C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5 base pointer */
  #define CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5     ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX_BASE         (0x44463400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DDRMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DDRMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DDRMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base address */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE     (0x44463800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_DISPLAYMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_DISPLAYMIX          ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX_BASE         (0x44463C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_GPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_GPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_GPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE    (0x44464000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP         ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base address */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE   (0x44464400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON base pointer */
  #define CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON        ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base address */
  #define CCMSRCGPC__SRC__XSPR_M7MIX_BASE          (0x44464800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_M7MIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_M7MIX               ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_M7MIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX_BASE        (0x44464C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NETCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NETCMIX             ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NETCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX_BASE         (0x44465000u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NOCMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NOCMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NOCMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX_BASE         (0x44465400u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_NPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_NPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_NPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base address */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX_BASE         (0x44465800u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_VPUMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_VPUMIX              ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_VPUMIX_BASE)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base address */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE      (0x44465C00u)
  /** Peripheral CCMSRCGPC__SRC__XSPR_WAKEUPMIX base pointer */
  #define CCMSRCGPC__SRC__XSPR_WAKEUPMIX           ((SRC_XSPR_Type *)CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE)
  /** Array initializer of SRC_XSPR peripheral base addresses */
  #define SRC_XSPR_BASE_ADDRS                      { CCMSRCGPC__SRC__XSPR_ANAMIX_BASE, CCMSRCGPC__SRC__XSPR_AONMIX_BASE, CCMSRCGPC__SRC__XSPR_BBSMMIX_BASE, CCMSRCGPC__SRC__XSPR_CAMERAMIX_BASE, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4_BASE, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5_BASE, CCMSRCGPC__SRC__XSPR_DDRMIX_BASE, CCMSRCGPC__SRC__XSPR_DISPLAYMIX_BASE, CCMSRCGPC__SRC__XSPR_GPUMIX_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP_BASE, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON_BASE, CCMSRCGPC__SRC__XSPR_M7MIX_BASE, CCMSRCGPC__SRC__XSPR_NETCMIX_BASE, CCMSRCGPC__SRC__XSPR_NOCMIX_BASE, CCMSRCGPC__SRC__XSPR_NPUMIX_BASE, CCMSRCGPC__SRC__XSPR_VPUMIX_BASE, CCMSRCGPC__SRC__XSPR_WAKEUPMIX_BASE }
  /** Array initializer of SRC_XSPR peripheral base pointers */
  #define SRC_XSPR_BASE_PTRS                       { CCMSRCGPC__SRC__XSPR_ANAMIX, CCMSRCGPC__SRC__XSPR_AONMIX, CCMSRCGPC__SRC__XSPR_BBSMMIX, CCMSRCGPC__SRC__XSPR_CAMERAMIX, CCMSRCGPC__SRC__XSPR_CCMSRCGPCMIX, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE1, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE2, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE3, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE4, CCMSRCGPC__SRC__XSPR_CORTEXMIX_CORE5, CCMSRCGPC__SRC__XSPR_DDRMIX, CCMSRCGPC__SRC__XSPR_DISPLAYMIX, CCMSRCGPC__SRC__XSPR_GPUMIX, CCMSRCGPC__SRC__XSPR_HSIOMIX_TOP, CCMSRCGPC__SRC__XSPR_HSIOMIX_WAON, CCMSRCGPC__SRC__XSPR_M7MIX, CCMSRCGPC__SRC__XSPR_NETCMIX, CCMSRCGPC__SRC__XSPR_NOCMIX, CCMSRCGPC__SRC__XSPR_NPUMIX, CCMSRCGPC__SRC__XSPR_VPUMIX, CCMSRCGPC__SRC__XSPR_WAKEUPMIX }
#endif

/* STAT - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__STAT base address */
  #define CAMERA__ISP__STAT_BASE                   (0x5AE00700u)
  /** Peripheral CAMERA__ISP__STAT base address */
  #define CAMERA__ISP__STAT_BASE_NS                (0x4AE00700u)
  /** Peripheral CAMERA__ISP__STAT base pointer */
  #define CAMERA__ISP__STAT                        ((STAT_Type *)CAMERA__ISP__STAT_BASE)
  /** Peripheral CAMERA__ISP__STAT base pointer */
  #define CAMERA__ISP__STAT_NS                     ((STAT_Type *)CAMERA__ISP__STAT_BASE_NS)
  /** Array initializer of STAT peripheral base addresses */
  #define STAT_BASE_ADDRS                          { CAMERA__ISP__STAT_BASE }
  /** Array initializer of STAT peripheral base pointers */
  #define STAT_BASE_PTRS                           { CAMERA__ISP__STAT }
  /** Array initializer of STAT peripheral base addresses */
  #define STAT_BASE_ADDRS_NS                       { CAMERA__ISP__STAT_BASE_NS }
  /** Array initializer of STAT peripheral base pointers */
  #define STAT_BASE_PTRS_NS                        { CAMERA__ISP__STAT_NS }
#else
  /** Peripheral CAMERA__ISP__STAT base address */
  #define CAMERA__ISP__STAT_BASE                   (0x4AE00700u)
  /** Peripheral CAMERA__ISP__STAT base pointer */
  #define CAMERA__ISP__STAT                        ((STAT_Type *)CAMERA__ISP__STAT_BASE)
  /** Array initializer of STAT peripheral base addresses */
  #define STAT_BASE_ADDRS                          { CAMERA__ISP__STAT_BASE }
  /** Array initializer of STAT peripheral base pointers */
  #define STAT_BASE_PTRS                           { CAMERA__ISP__STAT }
#endif

/* SYS_CTR1 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base address */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL_BASE      (0x54290000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base address */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL_BASE_NS   (0x44290000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base pointer */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL           ((SYS_CTR1_Type *)AON__SYS_CTR1__SYS_CTR_CONTROL_BASE)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base pointer */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL_NS        ((SYS_CTR1_Type *)AON__SYS_CTR1__SYS_CTR_CONTROL_BASE_NS)
  /** Array initializer of SYS_CTR1 peripheral base addresses */
  #define SYS_CTR1_BASE_ADDRS                      { AON__SYS_CTR1__SYS_CTR_CONTROL_BASE }
  /** Array initializer of SYS_CTR1 peripheral base pointers */
  #define SYS_CTR1_BASE_PTRS                       { AON__SYS_CTR1__SYS_CTR_CONTROL }
  /** Array initializer of SYS_CTR1 peripheral base addresses */
  #define SYS_CTR1_BASE_ADDRS_NS                   { AON__SYS_CTR1__SYS_CTR_CONTROL_BASE_NS }
  /** Array initializer of SYS_CTR1 peripheral base pointers */
  #define SYS_CTR1_BASE_PTRS_NS                    { AON__SYS_CTR1__SYS_CTR_CONTROL_NS }
#else
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base address */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL_BASE      (0x44290000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_CONTROL base pointer */
  #define AON__SYS_CTR1__SYS_CTR_CONTROL           ((SYS_CTR1_Type *)AON__SYS_CTR1__SYS_CTR_CONTROL_BASE)
  /** Array initializer of SYS_CTR1 peripheral base addresses */
  #define SYS_CTR1_BASE_ADDRS                      { AON__SYS_CTR1__SYS_CTR_CONTROL_BASE }
  /** Array initializer of SYS_CTR1 peripheral base pointers */
  #define SYS_CTR1_BASE_PTRS                       { AON__SYS_CTR1__SYS_CTR_CONTROL }
#endif

/* SYS_CTR_COMPARE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base address */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE_BASE      (0x542A0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base address */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE_BASE_NS   (0x442A0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base pointer */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE           ((SYS_CTR_COMPARE_Type *)AON__SYS_CTR1__SYS_CTR_COMPARE_BASE)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base pointer */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE_NS        ((SYS_CTR_COMPARE_Type *)AON__SYS_CTR1__SYS_CTR_COMPARE_BASE_NS)
  /** Array initializer of SYS_CTR_COMPARE peripheral base addresses */
  #define SYS_CTR_COMPARE_BASE_ADDRS               { AON__SYS_CTR1__SYS_CTR_COMPARE_BASE }
  /** Array initializer of SYS_CTR_COMPARE peripheral base pointers */
  #define SYS_CTR_COMPARE_BASE_PTRS                { AON__SYS_CTR1__SYS_CTR_COMPARE }
  /** Array initializer of SYS_CTR_COMPARE peripheral base addresses */
  #define SYS_CTR_COMPARE_BASE_ADDRS_NS            { AON__SYS_CTR1__SYS_CTR_COMPARE_BASE_NS }
  /** Array initializer of SYS_CTR_COMPARE peripheral base pointers */
  #define SYS_CTR_COMPARE_BASE_PTRS_NS             { AON__SYS_CTR1__SYS_CTR_COMPARE_NS }
#else
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base address */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE_BASE      (0x442A0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_COMPARE base pointer */
  #define AON__SYS_CTR1__SYS_CTR_COMPARE           ((SYS_CTR_COMPARE_Type *)AON__SYS_CTR1__SYS_CTR_COMPARE_BASE)
  /** Array initializer of SYS_CTR_COMPARE peripheral base addresses */
  #define SYS_CTR_COMPARE_BASE_ADDRS               { AON__SYS_CTR1__SYS_CTR_COMPARE_BASE }
  /** Array initializer of SYS_CTR_COMPARE peripheral base pointers */
  #define SYS_CTR_COMPARE_BASE_PTRS                { AON__SYS_CTR1__SYS_CTR_COMPARE }
#endif

/* SYS_CTR_READ - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base address */
  #define AON__SYS_CTR1__SYS_CTR_READ_BASE         (0x542B0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base address */
  #define AON__SYS_CTR1__SYS_CTR_READ_BASE_NS      (0x442B0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base pointer */
  #define AON__SYS_CTR1__SYS_CTR_READ              ((SYS_CTR_READ_Type *)AON__SYS_CTR1__SYS_CTR_READ_BASE)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base pointer */
  #define AON__SYS_CTR1__SYS_CTR_READ_NS           ((SYS_CTR_READ_Type *)AON__SYS_CTR1__SYS_CTR_READ_BASE_NS)
  /** Array initializer of SYS_CTR_READ peripheral base addresses */
  #define SYS_CTR_READ_BASE_ADDRS                  { AON__SYS_CTR1__SYS_CTR_READ_BASE }
  /** Array initializer of SYS_CTR_READ peripheral base pointers */
  #define SYS_CTR_READ_BASE_PTRS                   { AON__SYS_CTR1__SYS_CTR_READ }
  /** Array initializer of SYS_CTR_READ peripheral base addresses */
  #define SYS_CTR_READ_BASE_ADDRS_NS               { AON__SYS_CTR1__SYS_CTR_READ_BASE_NS }
  /** Array initializer of SYS_CTR_READ peripheral base pointers */
  #define SYS_CTR_READ_BASE_PTRS_NS                { AON__SYS_CTR1__SYS_CTR_READ_NS }
#else
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base address */
  #define AON__SYS_CTR1__SYS_CTR_READ_BASE         (0x442B0000u)
  /** Peripheral AON__SYS_CTR1__SYS_CTR_READ base pointer */
  #define AON__SYS_CTR1__SYS_CTR_READ              ((SYS_CTR_READ_Type *)AON__SYS_CTR1__SYS_CTR_READ_BASE)
  /** Array initializer of SYS_CTR_READ peripheral base addresses */
  #define SYS_CTR_READ_BASE_ADDRS                  { AON__SYS_CTR1__SYS_CTR_READ_BASE }
  /** Array initializer of SYS_CTR_READ peripheral base pointers */
  #define SYS_CTR_READ_BASE_PTRS                   { AON__SYS_CTR1__SYS_CTR_READ }
#endif

/* SerDes_SS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__PCIE1__SERDES_SS base address */
  #define HSIO__PCIE1__SERDES_SS_BASE              (0x5C340000u)
  /** Peripheral HSIO__PCIE1__SERDES_SS base address */
  #define HSIO__PCIE1__SERDES_SS_BASE_NS           (0x4C340000u)
  /** Peripheral HSIO__PCIE1__SERDES_SS base pointer */
  #define HSIO__PCIE1__SERDES_SS                   ((SerDes_SS_Type *)HSIO__PCIE1__SERDES_SS_BASE)
  /** Peripheral HSIO__PCIE1__SERDES_SS base pointer */
  #define HSIO__PCIE1__SERDES_SS_NS                ((SerDes_SS_Type *)HSIO__PCIE1__SERDES_SS_BASE_NS)
  /** Peripheral HSIO__PCIE2__SERDES_SS base address */
  #define HSIO__PCIE2__SERDES_SS_BASE              (0x5C3C0000u)
  /** Peripheral HSIO__PCIE2__SERDES_SS base address */
  #define HSIO__PCIE2__SERDES_SS_BASE_NS           (0x4C3C0000u)
  /** Peripheral HSIO__PCIE2__SERDES_SS base pointer */
  #define HSIO__PCIE2__SERDES_SS                   ((SerDes_SS_Type *)HSIO__PCIE2__SERDES_SS_BASE)
  /** Peripheral HSIO__PCIE2__SERDES_SS base pointer */
  #define HSIO__PCIE2__SERDES_SS_NS                ((SerDes_SS_Type *)HSIO__PCIE2__SERDES_SS_BASE_NS)
  /** Array initializer of SerDes_SS peripheral base addresses */
  #define SerDes_SS_BASE_ADDRS                     { HSIO__PCIE1__SERDES_SS_BASE, HSIO__PCIE2__SERDES_SS_BASE }
  /** Array initializer of SerDes_SS peripheral base pointers */
  #define SerDes_SS_BASE_PTRS                      { HSIO__PCIE1__SERDES_SS, HSIO__PCIE2__SERDES_SS }
  /** Array initializer of SerDes_SS peripheral base addresses */
  #define SerDes_SS_BASE_ADDRS_NS                  { HSIO__PCIE1__SERDES_SS_BASE_NS, HSIO__PCIE2__SERDES_SS_BASE_NS }
  /** Array initializer of SerDes_SS peripheral base pointers */
  #define SerDes_SS_BASE_PTRS_NS                   { HSIO__PCIE1__SERDES_SS_NS, HSIO__PCIE2__SERDES_SS_NS }
#else
  /** Peripheral HSIO__PCIE1__SERDES_SS base address */
  #define HSIO__PCIE1__SERDES_SS_BASE              (0x4C340000u)
  /** Peripheral HSIO__PCIE1__SERDES_SS base pointer */
  #define HSIO__PCIE1__SERDES_SS                   ((SerDes_SS_Type *)HSIO__PCIE1__SERDES_SS_BASE)
  /** Peripheral HSIO__PCIE2__SERDES_SS base address */
  #define HSIO__PCIE2__SERDES_SS_BASE              (0x4C3C0000u)
  /** Peripheral HSIO__PCIE2__SERDES_SS base pointer */
  #define HSIO__PCIE2__SERDES_SS                   ((SerDes_SS_Type *)HSIO__PCIE2__SERDES_SS_BASE)
  /** Array initializer of SerDes_SS peripheral base addresses */
  #define SerDes_SS_BASE_ADDRS                     { HSIO__PCIE1__SERDES_SS_BASE, HSIO__PCIE2__SERDES_SS_BASE }
  /** Array initializer of SerDes_SS peripheral base pointers */
  #define SerDes_SS_BASE_PTRS                      { HSIO__PCIE1__SERDES_SS, HSIO__PCIE2__SERDES_SS }
#endif

/* TCM_ECC_MCM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE (0x54420000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE_NS (0x44420000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM   ((TCM_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_NS ((TCM_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE_NS)
  /** Array initializer of TCM_ECC_MCM peripheral base addresses */
  #define TCM_ECC_MCM_BASE_ADDRS                   { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE }
  /** Array initializer of TCM_ECC_MCM peripheral base pointers */
  #define TCM_ECC_MCM_BASE_PTRS                    { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM }
  /** Array initializer of TCM_ECC_MCM peripheral base addresses */
  #define TCM_ECC_MCM_BASE_ADDRS_NS                { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE_NS }
  /** Array initializer of TCM_ECC_MCM peripheral base pointers */
  #define TCM_ECC_MCM_BASE_PTRS_NS                 { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_NS }
#else
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base address */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE (0x44420000u)
  /** Peripheral AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM base pointer */
  #define AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM   ((TCM_ECC_MCM_Type *)AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE)
  /** Array initializer of TCM_ECC_MCM peripheral base addresses */
  #define TCM_ECC_MCM_BASE_ADDRS                   { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM_BASE }
  /** Array initializer of TCM_ECC_MCM peripheral base pointers */
  #define TCM_ECC_MCM_BASE_PTRS                    { AON__M33_CACHE_CTRL_ECC0__CM33_TCM_MCM }
#endif

/* TMPSNS - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TMPSNS1 base address */
  #define TMPSNS1_BASE                             (0x54482000u)
  /** Peripheral TMPSNS1 base address */
  #define TMPSNS1_BASE_NS                          (0x44482000u)
  /** Peripheral TMPSNS1 base pointer */
  #define TMPSNS1                                  ((TMPSNS_Type *)TMPSNS1_BASE)
  /** Peripheral TMPSNS1 base pointer */
  #define TMPSNS1_NS                               ((TMPSNS_Type *)TMPSNS1_BASE_NS)
  /** Peripheral TMPSNS2 base address */
  #define TMPSNS2_BASE                             (0x5A440000u)
  /** Peripheral TMPSNS2 base address */
  #define TMPSNS2_BASE_NS                          (0x4A440000u)
  /** Peripheral TMPSNS2 base pointer */
  #define TMPSNS2                                  ((TMPSNS_Type *)TMPSNS2_BASE)
  /** Peripheral TMPSNS2 base pointer */
  #define TMPSNS2_NS                               ((TMPSNS_Type *)TMPSNS2_BASE_NS)
  /** Array initializer of TMPSNS peripheral base addresses */
  #define TMPSNS_BASE_ADDRS                        { TMPSNS1_BASE, TMPSNS2_BASE }
  /** Array initializer of TMPSNS peripheral base pointers */
  #define TMPSNS_BASE_PTRS                         { TMPSNS1, TMPSNS2 }
  /** Array initializer of TMPSNS peripheral base addresses */
  #define TMPSNS_BASE_ADDRS_NS                     { TMPSNS1_BASE_NS, TMPSNS2_BASE_NS }
  /** Array initializer of TMPSNS peripheral base pointers */
  #define TMPSNS_BASE_PTRS_NS                      { TMPSNS1_NS, TMPSNS2_NS }
#else
  /** Peripheral TMPSNS1 base address */
  #define TMPSNS1_BASE                             (0x44482000u)
  /** Peripheral TMPSNS1 base pointer */
  #define TMPSNS1                                  ((TMPSNS_Type *)TMPSNS1_BASE)
  /** Peripheral TMPSNS2 base address */
  #define TMPSNS2_BASE                             (0x4A440000u)
  /** Peripheral TMPSNS2 base pointer */
  #define TMPSNS2                                  ((TMPSNS_Type *)TMPSNS2_BASE)
  /** Array initializer of TMPSNS peripheral base addresses */
  #define TMPSNS_BASE_ADDRS                        { TMPSNS1_BASE, TMPSNS2_BASE }
  /** Array initializer of TMPSNS peripheral base pointers */
  #define TMPSNS_BASE_PTRS                         { TMPSNS1, TMPSNS2 }
#endif

/* TPM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TPM1 base address */
  #define TPM1_BASE                                (0x54310000u)
  /** Peripheral TPM1 base address */
  #define TPM1_BASE_NS                             (0x44310000u)
  /** Peripheral TPM1 base pointer */
  #define TPM1                                     ((TPM_Type *)TPM1_BASE)
  /** Peripheral TPM1 base pointer */
  #define TPM1_NS                                  ((TPM_Type *)TPM1_BASE_NS)
  /** Peripheral TPM2 base address */
  #define TPM2_BASE                                (0x54320000u)
  /** Peripheral TPM2 base address */
  #define TPM2_BASE_NS                             (0x44320000u)
  /** Peripheral TPM2 base pointer */
  #define TPM2                                     ((TPM_Type *)TPM2_BASE)
  /** Peripheral TPM2 base pointer */
  #define TPM2_NS                                  ((TPM_Type *)TPM2_BASE_NS)
  /** Peripheral TPM3 base address */
  #define TPM3_BASE                                (0x524E0000u)
  /** Peripheral TPM3 base address */
  #define TPM3_BASE_NS                             (0x424E0000u)
  /** Peripheral TPM3 base pointer */
  #define TPM3                                     ((TPM_Type *)TPM3_BASE)
  /** Peripheral TPM3 base pointer */
  #define TPM3_NS                                  ((TPM_Type *)TPM3_BASE_NS)
  /** Peripheral TPM4 base address */
  #define TPM4_BASE                                (0x524F0000u)
  /** Peripheral TPM4 base address */
  #define TPM4_BASE_NS                             (0x424F0000u)
  /** Peripheral TPM4 base pointer */
  #define TPM4                                     ((TPM_Type *)TPM4_BASE)
  /** Peripheral TPM4 base pointer */
  #define TPM4_NS                                  ((TPM_Type *)TPM4_BASE_NS)
  /** Peripheral TPM5 base address */
  #define TPM5_BASE                                (0x52500000u)
  /** Peripheral TPM5 base address */
  #define TPM5_BASE_NS                             (0x42500000u)
  /** Peripheral TPM5 base pointer */
  #define TPM5                                     ((TPM_Type *)TPM5_BASE)
  /** Peripheral TPM5 base pointer */
  #define TPM5_NS                                  ((TPM_Type *)TPM5_BASE_NS)
  /** Peripheral TPM6 base address */
  #define TPM6_BASE                                (0x52510000u)
  /** Peripheral TPM6 base address */
  #define TPM6_BASE_NS                             (0x42510000u)
  /** Peripheral TPM6 base pointer */
  #define TPM6                                     ((TPM_Type *)TPM6_BASE)
  /** Peripheral TPM6 base pointer */
  #define TPM6_NS                                  ((TPM_Type *)TPM6_BASE_NS)
  /** Array initializer of TPM peripheral base addresses */
  #define TPM_BASE_ADDRS                           { 0u, TPM1_BASE, TPM2_BASE, TPM3_BASE, TPM4_BASE, TPM5_BASE, TPM6_BASE }
  /** Array initializer of TPM peripheral base pointers */
  #define TPM_BASE_PTRS                            { (TPM_Type *)0u, TPM1, TPM2, TPM3, TPM4, TPM5, TPM6 }
  /** Array initializer of TPM peripheral base addresses */
  #define TPM_BASE_ADDRS_NS                        { 0u, TPM1_BASE_NS, TPM2_BASE_NS, TPM3_BASE_NS, TPM4_BASE_NS, TPM5_BASE_NS, TPM6_BASE_NS }
  /** Array initializer of TPM peripheral base pointers */
  #define TPM_BASE_PTRS_NS                         { (TPM_Type *)0u, TPM1_NS, TPM2_NS, TPM3_NS, TPM4_NS, TPM5_NS, TPM6_NS }
#else
  /** Peripheral TPM1 base address */
  #define TPM1_BASE                                (0x44310000u)
  /** Peripheral TPM1 base pointer */
  #define TPM1                                     ((TPM_Type *)TPM1_BASE)
  /** Peripheral TPM2 base address */
  #define TPM2_BASE                                (0x44320000u)
  /** Peripheral TPM2 base pointer */
  #define TPM2                                     ((TPM_Type *)TPM2_BASE)
  /** Peripheral TPM3 base address */
  #define TPM3_BASE                                (0x424E0000u)
  /** Peripheral TPM3 base pointer */
  #define TPM3                                     ((TPM_Type *)TPM3_BASE)
  /** Peripheral TPM4 base address */
  #define TPM4_BASE                                (0x424F0000u)
  /** Peripheral TPM4 base pointer */
  #define TPM4                                     ((TPM_Type *)TPM4_BASE)
  /** Peripheral TPM5 base address */
  #define TPM5_BASE                                (0x42500000u)
  /** Peripheral TPM5 base pointer */
  #define TPM5                                     ((TPM_Type *)TPM5_BASE)
  /** Peripheral TPM6 base address */
  #define TPM6_BASE                                (0x42510000u)
  /** Peripheral TPM6 base pointer */
  #define TPM6                                     ((TPM_Type *)TPM6_BASE)
  /** Array initializer of TPM peripheral base addresses */
  #define TPM_BASE_ADDRS                           { 0u, TPM1_BASE, TPM2_BASE, TPM3_BASE, TPM4_BASE, TPM5_BASE, TPM6_BASE }
  /** Array initializer of TPM peripheral base pointers */
  #define TPM_BASE_PTRS                            { (TPM_Type *)0u, TPM1, TPM2, TPM3, TPM4, TPM5, TPM6 }
#endif
/** Interrupt vectors for the TPM peripheral type */
#define TPM_IRQS                                 { NotAvail_IRQn, TPM1_IRQn, TPM2_IRQn, TPM3_IRQn, TPM4_IRQn, TPM5_IRQn, TPM6_IRQn }

/* TRDC_MBC2 - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TRDC1 base address */
  #define TRDC1_BASE                               (0x54270000u)
  /** Peripheral TRDC1 base address */
  #define TRDC1_BASE_NS                            (0x44270000u)
  /** Peripheral TRDC1 base pointer */
  #define TRDC1                                    ((TRDC_MBC2_Type *)TRDC1_BASE)
  /** Peripheral TRDC1 base pointer */
  #define TRDC1_NS                                 ((TRDC_MBC2_Type *)TRDC1_BASE_NS)
  /** Array initializer of TRDC_MBC2 peripheral base addresses */
  #define TRDC_MBC2_BASE_ADDRS                     { TRDC1_BASE }
  /** Array initializer of TRDC_MBC2 peripheral base pointers */
  #define TRDC_MBC2_BASE_PTRS                      { TRDC1 }
  /** Array initializer of TRDC_MBC2 peripheral base addresses */
  #define TRDC_MBC2_BASE_ADDRS_NS                  { TRDC1_BASE_NS }
  /** Array initializer of TRDC_MBC2 peripheral base pointers */
  #define TRDC_MBC2_BASE_PTRS_NS                   { TRDC1_NS }
#else
  /** Peripheral TRDC1 base address */
  #define TRDC1_BASE                               (0x44270000u)
  /** Peripheral TRDC1 base pointer */
  #define TRDC1                                    ((TRDC_MBC2_Type *)TRDC1_BASE)
  /** Array initializer of TRDC_MBC2 peripheral base addresses */
  #define TRDC_MBC2_BASE_ADDRS                     { TRDC1_BASE }
  /** Array initializer of TRDC_MBC2 peripheral base pointers */
  #define TRDC_MBC2_BASE_PTRS                      { TRDC1 }
#endif
#define MBC0_MEMORY_CFG_WORD_COUNT {1,2,4,1}
#define MBC1_MEMORY_CFG_WORD_COUNT {1,1,1,1}
#define MBC2_MEMORY_CFG_WORD_COUNT {9,6,1,1}
#define MBC3_MEMORY_CFG_WORD_COUNT {3,0,0,0}
#define MBC_MEMORY_CFG_WORD_COUNT {MBC0_MEMORY_CFG_WORD_COUNT , MBC1_MEMORY_CFG_WORD_COUNT, MBC2_MEMORY_CFG_WORD_COUNT, MBC3_MEMORY_CFG_WORD_COUNT}
#define MBC0_MEMORY_NSE_WORD_COUNT {1,1,1,1}
#define MBC1_MEMORY_NSE_WORD_COUNT {1,1,1,1}
#define MBC2_MEMORY_NSE_WORD_COUNT {3,2,1,1}
#define MBC3_MEMORY_NSE_WORD_COUNT {1,0,0,0}
#define MBC_MEMORY_NSE_WORD_COUNT {MBC0_MEMORY_NSE_WORD_COUNT , MBC1_MEMORY_NSE_WORD_COUNT, MBC2_MEMORY_NSE_WORD_COUNT, MBC3_MEMORY_NSE_WORD_COUNT}


/* TSTMR - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral TSTMR1 base address */
  #define TSTMR1_BASE                              (0x542C0000u)
  /** Peripheral TSTMR1 base address */
  #define TSTMR1_BASE_NS                           (0x442C0000u)
  /** Peripheral TSTMR1 base pointer */
  #define TSTMR1                                   ((TSTMR_Type *)TSTMR1_BASE)
  /** Peripheral TSTMR1 base pointer */
  #define TSTMR1_NS                                ((TSTMR_Type *)TSTMR1_BASE_NS)
  /** Peripheral TSTMR2 base address */
  #define TSTMR2_BASE                              (0x52480000u)
  /** Peripheral TSTMR2 base address */
  #define TSTMR2_BASE_NS                           (0x42480000u)
  /** Peripheral TSTMR2 base pointer */
  #define TSTMR2                                   ((TSTMR_Type *)TSTMR2_BASE)
  /** Peripheral TSTMR2 base pointer */
  #define TSTMR2_NS                                ((TSTMR_Type *)TSTMR2_BASE_NS)
  /** Array initializer of TSTMR peripheral base addresses */
  #define TSTMR_BASE_ADDRS                         { 0u, TSTMR1_BASE, TSTMR2_BASE }
  /** Array initializer of TSTMR peripheral base pointers */
  #define TSTMR_BASE_PTRS                          { (TSTMR_Type *)0u, TSTMR1, TSTMR2 }
  /** Array initializer of TSTMR peripheral base addresses */
  #define TSTMR_BASE_ADDRS_NS                      { 0u, TSTMR1_BASE_NS, TSTMR2_BASE_NS }
  /** Array initializer of TSTMR peripheral base pointers */
  #define TSTMR_BASE_PTRS_NS                       { (TSTMR_Type *)0u, TSTMR1_NS, TSTMR2_NS }
#else
  /** Peripheral TSTMR1 base address */
  #define TSTMR1_BASE                              (0x442C0000u)
  /** Peripheral TSTMR1 base pointer */
  #define TSTMR1                                   ((TSTMR_Type *)TSTMR1_BASE)
  /** Peripheral TSTMR2 base address */
  #define TSTMR2_BASE                              (0x42480000u)
  /** Peripheral TSTMR2 base pointer */
  #define TSTMR2                                   ((TSTMR_Type *)TSTMR2_BASE)
  /** Array initializer of TSTMR peripheral base addresses */
  #define TSTMR_BASE_ADDRS                         { 0u, TSTMR1_BASE, TSTMR2_BASE }
  /** Array initializer of TSTMR peripheral base pointers */
  #define TSTMR_BASE_PTRS                          { (TSTMR_Type *)0u, TSTMR1, TSTMR2 }
#endif
/* Extra definition */
#define TSTMR_CLOCK_FREQUENCY_MHZ                (24U)


/* USB - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBC base address */
  #define USBC_BASE                                (0x5C200000u)
  /** Peripheral USBC base address */
  #define USBC_BASE_NS                             (0x4C200000u)
  /** Peripheral USBC base pointer */
  #define USBC                                     ((USB_Type *)USBC_BASE)
  /** Peripheral USBC base pointer */
  #define USBC_NS                                  ((USB_Type *)USBC_BASE_NS)
  /** Array initializer of USB peripheral base addresses */
  #define USB_BASE_ADDRS                           { USBC_BASE }
  /** Array initializer of USB peripheral base pointers */
  #define USB_BASE_PTRS                            { USBC }
  /** Array initializer of USB peripheral base addresses */
  #define USB_BASE_ADDRS_NS                        { USBC_BASE_NS }
  /** Array initializer of USB peripheral base pointers */
  #define USB_BASE_PTRS_NS                         { USBC_NS }
#else
  /** Peripheral USBC base address */
  #define USBC_BASE                                (0x4C200000u)
  /** Peripheral USBC base pointer */
  #define USBC                                     ((USB_Type *)USBC_BASE)
  /** Array initializer of USB peripheral base addresses */
  #define USB_BASE_ADDRS                           { USBC_BASE }
  /** Array initializer of USB peripheral base pointers */
  #define USB_BASE_PTRS                            { USBC }
#endif

/* USB3_CORE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__USB_3_01__USB3 base address */
  #define HSIO__USB_3_01__USB3_BASE                (0x5C100000u)
  /** Peripheral HSIO__USB_3_01__USB3 base address */
  #define HSIO__USB_3_01__USB3_BASE_NS             (0x4C100000u)
  /** Peripheral HSIO__USB_3_01__USB3 base pointer */
  #define HSIO__USB_3_01__USB3                     ((USB3_CORE_Type *)HSIO__USB_3_01__USB3_BASE)
  /** Peripheral HSIO__USB_3_01__USB3 base pointer */
  #define HSIO__USB_3_01__USB3_NS                  ((USB3_CORE_Type *)HSIO__USB_3_01__USB3_BASE_NS)
  /** Array initializer of USB3_CORE peripheral base addresses */
  #define USB3_CORE_BASE_ADDRS                     { HSIO__USB_3_01__USB3_BASE }
  /** Array initializer of USB3_CORE peripheral base pointers */
  #define USB3_CORE_BASE_PTRS                      { HSIO__USB_3_01__USB3 }
  /** Array initializer of USB3_CORE peripheral base addresses */
  #define USB3_CORE_BASE_ADDRS_NS                  { HSIO__USB_3_01__USB3_BASE_NS }
  /** Array initializer of USB3_CORE peripheral base pointers */
  #define USB3_CORE_BASE_PTRS_NS                   { HSIO__USB_3_01__USB3_NS }
#else
  /** Peripheral HSIO__USB_3_01__USB3 base address */
  #define HSIO__USB_3_01__USB3_BASE                (0x4C100000u)
  /** Peripheral HSIO__USB_3_01__USB3 base pointer */
  #define HSIO__USB_3_01__USB3                     ((USB3_CORE_Type *)HSIO__USB_3_01__USB3_BASE)
  /** Array initializer of USB3_CORE peripheral base addresses */
  #define USB3_CORE_BASE_ADDRS                     { HSIO__USB_3_01__USB3_BASE }
  /** Array initializer of USB3_CORE peripheral base pointers */
  #define USB3_CORE_BASE_PTRS                      { HSIO__USB_3_01__USB3 }
#endif

/* USB3_GLUE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__USB_3_01__GLUE base address */
  #define HSIO__USB_3_01__GLUE_BASE                (0x5C1F0000u)
  /** Peripheral HSIO__USB_3_01__GLUE base address */
  #define HSIO__USB_3_01__GLUE_BASE_NS             (0x4C1F0000u)
  /** Peripheral HSIO__USB_3_01__GLUE base pointer */
  #define HSIO__USB_3_01__GLUE                     ((USB3_GLUE_Type *)HSIO__USB_3_01__GLUE_BASE)
  /** Peripheral HSIO__USB_3_01__GLUE base pointer */
  #define HSIO__USB_3_01__GLUE_NS                  ((USB3_GLUE_Type *)HSIO__USB_3_01__GLUE_BASE_NS)
  /** Array initializer of USB3_GLUE peripheral base addresses */
  #define USB3_GLUE_BASE_ADDRS                     { HSIO__USB_3_01__GLUE_BASE }
  /** Array initializer of USB3_GLUE peripheral base pointers */
  #define USB3_GLUE_BASE_PTRS                      { HSIO__USB_3_01__GLUE }
  /** Array initializer of USB3_GLUE peripheral base addresses */
  #define USB3_GLUE_BASE_ADDRS_NS                  { HSIO__USB_3_01__GLUE_BASE_NS }
  /** Array initializer of USB3_GLUE peripheral base pointers */
  #define USB3_GLUE_BASE_PTRS_NS                   { HSIO__USB_3_01__GLUE_NS }
#else
  /** Peripheral HSIO__USB_3_01__GLUE base address */
  #define HSIO__USB_3_01__GLUE_BASE                (0x4C1F0000u)
  /** Peripheral HSIO__USB_3_01__GLUE base pointer */
  #define HSIO__USB_3_01__GLUE                     ((USB3_GLUE_Type *)HSIO__USB_3_01__GLUE_BASE)
  /** Array initializer of USB3_GLUE peripheral base addresses */
  #define USB3_GLUE_BASE_ADDRS                     { HSIO__USB_3_01__GLUE_BASE }
  /** Array initializer of USB3_GLUE peripheral base pointers */
  #define USB3_GLUE_BASE_PTRS                      { HSIO__USB_3_01__GLUE }
#endif

/* USB3_PHY_TCA - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral HSIO__USB_3_0_PHY__TCA base address */
  #define HSIO__USB_3_0_PHY__TCA_BASE              (0x5C1FC000u)
  /** Peripheral HSIO__USB_3_0_PHY__TCA base address */
  #define HSIO__USB_3_0_PHY__TCA_BASE_NS           (0x4C1FC000u)
  /** Peripheral HSIO__USB_3_0_PHY__TCA base pointer */
  #define HSIO__USB_3_0_PHY__TCA                   ((USB3_PHY_TCA_Type *)HSIO__USB_3_0_PHY__TCA_BASE)
  /** Peripheral HSIO__USB_3_0_PHY__TCA base pointer */
  #define HSIO__USB_3_0_PHY__TCA_NS                ((USB3_PHY_TCA_Type *)HSIO__USB_3_0_PHY__TCA_BASE_NS)
  /** Array initializer of USB3_PHY_TCA peripheral base addresses */
  #define USB3_PHY_TCA_BASE_ADDRS                  { HSIO__USB_3_0_PHY__TCA_BASE }
  /** Array initializer of USB3_PHY_TCA peripheral base pointers */
  #define USB3_PHY_TCA_BASE_PTRS                   { HSIO__USB_3_0_PHY__TCA }
  /** Array initializer of USB3_PHY_TCA peripheral base addresses */
  #define USB3_PHY_TCA_BASE_ADDRS_NS               { HSIO__USB_3_0_PHY__TCA_BASE_NS }
  /** Array initializer of USB3_PHY_TCA peripheral base pointers */
  #define USB3_PHY_TCA_BASE_PTRS_NS                { HSIO__USB_3_0_PHY__TCA_NS }
#else
  /** Peripheral HSIO__USB_3_0_PHY__TCA base address */
  #define HSIO__USB_3_0_PHY__TCA_BASE              (0x4C1FC000u)
  /** Peripheral HSIO__USB_3_0_PHY__TCA base pointer */
  #define HSIO__USB_3_0_PHY__TCA                   ((USB3_PHY_TCA_Type *)HSIO__USB_3_0_PHY__TCA_BASE)
  /** Array initializer of USB3_PHY_TCA peripheral base addresses */
  #define USB3_PHY_TCA_BASE_ADDRS                  { HSIO__USB_3_0_PHY__TCA_BASE }
  /** Array initializer of USB3_PHY_TCA peripheral base pointers */
  #define USB3_PHY_TCA_BASE_PTRS                   { HSIO__USB_3_0_PHY__TCA }
#endif

/* USBNC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USBNC base address */
  #define USBNC_BASE                               (0x5C200200u)
  /** Peripheral USBNC base address */
  #define USBNC_BASE_NS                            (0x4C200200u)
  /** Peripheral USBNC base pointer */
  #define USBNC                                    ((USBNC_Type *)USBNC_BASE)
  /** Peripheral USBNC base pointer */
  #define USBNC_NS                                 ((USBNC_Type *)USBNC_BASE_NS)
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS                         { USBNC_BASE }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS                          { USBNC }
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS_NS                      { USBNC_BASE_NS }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS_NS                       { USBNC_NS }
#else
  /** Peripheral USBNC base address */
  #define USBNC_BASE                               (0x4C200200u)
  /** Peripheral USBNC base pointer */
  #define USBNC                                    ((USBNC_Type *)USBNC_BASE)
  /** Array initializer of USBNC peripheral base addresses */
  #define USBNC_BASE_ADDRS                         { USBNC_BASE }
  /** Array initializer of USBNC peripheral base pointers */
  #define USBNC_BASE_PTRS                          { USBNC }
#endif

/* USDHC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral USDHC1 base address */
  #define USDHC1_BASE                              (0x52850000u)
  /** Peripheral USDHC1 base address */
  #define USDHC1_BASE_NS                           (0x42850000u)
  /** Peripheral USDHC1 base pointer */
  #define USDHC1                                   ((USDHC_Type *)USDHC1_BASE)
  /** Peripheral USDHC1 base pointer */
  #define USDHC1_NS                                ((USDHC_Type *)USDHC1_BASE_NS)
  /** Peripheral USDHC2 base address */
  #define USDHC2_BASE                              (0x52860000u)
  /** Peripheral USDHC2 base address */
  #define USDHC2_BASE_NS                           (0x42860000u)
  /** Peripheral USDHC2 base pointer */
  #define USDHC2                                   ((USDHC_Type *)USDHC2_BASE)
  /** Peripheral USDHC2 base pointer */
  #define USDHC2_NS                                ((USDHC_Type *)USDHC2_BASE_NS)
  /** Peripheral USDHC3 base address */
  #define USDHC3_BASE                              (0x528B0000u)
  /** Peripheral USDHC3 base address */
  #define USDHC3_BASE_NS                           (0x428B0000u)
  /** Peripheral USDHC3 base pointer */
  #define USDHC3                                   ((USDHC_Type *)USDHC3_BASE)
  /** Peripheral USDHC3 base pointer */
  #define USDHC3_NS                                ((USDHC_Type *)USDHC3_BASE_NS)
  /** Array initializer of USDHC peripheral base addresses */
  #define USDHC_BASE_ADDRS                         { 0u, USDHC1_BASE, USDHC2_BASE, USDHC3_BASE }
  /** Array initializer of USDHC peripheral base pointers */
  #define USDHC_BASE_PTRS                          { (USDHC_Type *)0u, USDHC1, USDHC2, USDHC3 }
  /** Array initializer of USDHC peripheral base addresses */
  #define USDHC_BASE_ADDRS_NS                      { 0u, USDHC1_BASE_NS, USDHC2_BASE_NS, USDHC3_BASE_NS }
  /** Array initializer of USDHC peripheral base pointers */
  #define USDHC_BASE_PTRS_NS                       { (USDHC_Type *)0u, USDHC1_NS, USDHC2_NS, USDHC3_NS }
#else
  /** Peripheral USDHC1 base address */
  #define USDHC1_BASE                              (0x42850000u)
  /** Peripheral USDHC1 base pointer */
  #define USDHC1                                   ((USDHC_Type *)USDHC1_BASE)
  /** Peripheral USDHC2 base address */
  #define USDHC2_BASE                              (0x42860000u)
  /** Peripheral USDHC2 base pointer */
  #define USDHC2                                   ((USDHC_Type *)USDHC2_BASE)
  /** Peripheral USDHC3 base address */
  #define USDHC3_BASE                              (0x428B0000u)
  /** Peripheral USDHC3 base pointer */
  #define USDHC3                                   ((USDHC_Type *)USDHC3_BASE)
  /** Array initializer of USDHC peripheral base addresses */
  #define USDHC_BASE_ADDRS                         { 0u, USDHC1_BASE, USDHC2_BASE, USDHC3_BASE }
  /** Array initializer of USDHC peripheral base pointers */
  #define USDHC_BASE_PTRS                          { (USDHC_Type *)0u, USDHC1, USDHC2, USDHC3 }
#endif

/* USER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral GPU__REG__USER base address */
  #define GPU__REG__USER_BASE                      (0x5D910000u)
  /** Peripheral GPU__REG__USER base address */
  #define GPU__REG__USER_BASE_NS                   (0x4D910000u)
  /** Peripheral GPU__REG__USER base pointer */
  #define GPU__REG__USER                           ((USER_Type *)GPU__REG__USER_BASE)
  /** Peripheral GPU__REG__USER base pointer */
  #define GPU__REG__USER_NS                        ((USER_Type *)GPU__REG__USER_BASE_NS)
  /** Array initializer of USER peripheral base addresses */
  #define USER_BASE_ADDRS                          { GPU__REG__USER_BASE }
  /** Array initializer of USER peripheral base pointers */
  #define USER_BASE_PTRS                           { GPU__REG__USER }
  /** Array initializer of USER peripheral base addresses */
  #define USER_BASE_ADDRS_NS                       { GPU__REG__USER_BASE_NS }
  /** Array initializer of USER peripheral base pointers */
  #define USER_BASE_PTRS_NS                        { GPU__REG__USER_NS }
#else
  /** Peripheral GPU__REG__USER base address */
  #define GPU__REG__USER_BASE                      (0x4D910000u)
  /** Peripheral GPU__REG__USER base pointer */
  #define GPU__REG__USER                           ((USER_Type *)GPU__REG__USER_BASE)
  /** Array initializer of USER peripheral base addresses */
  #define USER_BASE_ADDRS                          { GPU__REG__USER_BASE }
  /** Array initializer of USER peripheral base pointers */
  #define USER_BASE_PTRS                           { GPU__REG__USER }
#endif

/* VIGNETTING - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral CAMERA__ISP__VIGNETTING base address */
  #define CAMERA__ISP__VIGNETTING_BASE             (0x5AE00900u)
  /** Peripheral CAMERA__ISP__VIGNETTING base address */
  #define CAMERA__ISP__VIGNETTING_BASE_NS          (0x4AE00900u)
  /** Peripheral CAMERA__ISP__VIGNETTING base pointer */
  #define CAMERA__ISP__VIGNETTING                  ((VIGNETTING_Type *)CAMERA__ISP__VIGNETTING_BASE)
  /** Peripheral CAMERA__ISP__VIGNETTING base pointer */
  #define CAMERA__ISP__VIGNETTING_NS               ((VIGNETTING_Type *)CAMERA__ISP__VIGNETTING_BASE_NS)
  /** Array initializer of VIGNETTING peripheral base addresses */
  #define VIGNETTING_BASE_ADDRS                    { CAMERA__ISP__VIGNETTING_BASE }
  /** Array initializer of VIGNETTING peripheral base pointers */
  #define VIGNETTING_BASE_PTRS                     { CAMERA__ISP__VIGNETTING }
  /** Array initializer of VIGNETTING peripheral base addresses */
  #define VIGNETTING_BASE_ADDRS_NS                 { CAMERA__ISP__VIGNETTING_BASE_NS }
  /** Array initializer of VIGNETTING peripheral base pointers */
  #define VIGNETTING_BASE_PTRS_NS                  { CAMERA__ISP__VIGNETTING_NS }
#else
  /** Peripheral CAMERA__ISP__VIGNETTING base address */
  #define CAMERA__ISP__VIGNETTING_BASE             (0x4AE00900u)
  /** Peripheral CAMERA__ISP__VIGNETTING base pointer */
  #define CAMERA__ISP__VIGNETTING                  ((VIGNETTING_Type *)CAMERA__ISP__VIGNETTING_BASE)
  /** Array initializer of VIGNETTING peripheral base addresses */
  #define VIGNETTING_BASE_ADDRS                    { CAMERA__ISP__VIGNETTING_BASE }
  /** Array initializer of VIGNETTING peripheral base pointers */
  #define VIGNETTING_BASE_PTRS                     { CAMERA__ISP__VIGNETTING }
#endif

/* VPU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__VPU__VPU_CODEC base address */
  #define VPU__VPU__VPU_CODEC_BASE                 (0x5C480000u)
  /** Peripheral VPU__VPU__VPU_CODEC base address */
  #define VPU__VPU__VPU_CODEC_BASE_NS              (0x4C480000u)
  /** Peripheral VPU__VPU__VPU_CODEC base pointer */
  #define VPU__VPU__VPU_CODEC                      ((VPU_Type *)VPU__VPU__VPU_CODEC_BASE)
  /** Peripheral VPU__VPU__VPU_CODEC base pointer */
  #define VPU__VPU__VPU_CODEC_NS                   ((VPU_Type *)VPU__VPU__VPU_CODEC_BASE_NS)
  /** Array initializer of VPU peripheral base addresses */
  #define VPU_BASE_ADDRS                           { VPU__VPU__VPU_CODEC_BASE }
  /** Array initializer of VPU peripheral base pointers */
  #define VPU_BASE_PTRS                            { VPU__VPU__VPU_CODEC }
  /** Array initializer of VPU peripheral base addresses */
  #define VPU_BASE_ADDRS_NS                        { VPU__VPU__VPU_CODEC_BASE_NS }
  /** Array initializer of VPU peripheral base pointers */
  #define VPU_BASE_PTRS_NS                         { VPU__VPU__VPU_CODEC_NS }
#else
  /** Peripheral VPU__VPU__VPU_CODEC base address */
  #define VPU__VPU__VPU_CODEC_BASE                 (0x4C480000u)
  /** Peripheral VPU__VPU__VPU_CODEC base pointer */
  #define VPU__VPU__VPU_CODEC                      ((VPU_Type *)VPU__VPU__VPU_CODEC_BASE)
  /** Array initializer of VPU peripheral base addresses */
  #define VPU_BASE_ADDRS                           { VPU__VPU__VPU_CODEC_BASE }
  /** Array initializer of VPU peripheral base pointers */
  #define VPU_BASE_PTRS                            { VPU__VPU__VPU_CODEC }
#endif

/* VPU_BLK_CTRL_VPUMIX - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__BLK_CTRL_VPUMIX base address */
  #define VPU__BLK_CTRL_VPUMIX_BASE                (0x5C410000u)
  /** Peripheral VPU__BLK_CTRL_VPUMIX base address */
  #define VPU__BLK_CTRL_VPUMIX_BASE_NS             (0x4C410000u)
  /** Peripheral VPU__BLK_CTRL_VPUMIX base pointer */
  #define VPU__BLK_CTRL_VPUMIX                     ((VPU_BLK_CTRL_VPUMIX_Type *)VPU__BLK_CTRL_VPUMIX_BASE)
  /** Peripheral VPU__BLK_CTRL_VPUMIX base pointer */
  #define VPU__BLK_CTRL_VPUMIX_NS                  ((VPU_BLK_CTRL_VPUMIX_Type *)VPU__BLK_CTRL_VPUMIX_BASE_NS)
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base addresses */
  #define VPU_BLK_CTRL_VPUMIX_BASE_ADDRS           { VPU__BLK_CTRL_VPUMIX_BASE }
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base pointers */
  #define VPU_BLK_CTRL_VPUMIX_BASE_PTRS            { VPU__BLK_CTRL_VPUMIX }
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base addresses */
  #define VPU_BLK_CTRL_VPUMIX_BASE_ADDRS_NS        { VPU__BLK_CTRL_VPUMIX_BASE_NS }
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base pointers */
  #define VPU_BLK_CTRL_VPUMIX_BASE_PTRS_NS         { VPU__BLK_CTRL_VPUMIX_NS }
#else
  /** Peripheral VPU__BLK_CTRL_VPUMIX base address */
  #define VPU__BLK_CTRL_VPUMIX_BASE                (0x4C410000u)
  /** Peripheral VPU__BLK_CTRL_VPUMIX base pointer */
  #define VPU__BLK_CTRL_VPUMIX                     ((VPU_BLK_CTRL_VPUMIX_Type *)VPU__BLK_CTRL_VPUMIX_BASE)
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base addresses */
  #define VPU_BLK_CTRL_VPUMIX_BASE_ADDRS           { VPU__BLK_CTRL_VPUMIX_BASE }
  /** Array initializer of VPU_BLK_CTRL_VPUMIX peripheral base pointers */
  #define VPU_BLK_CTRL_VPUMIX_BASE_PTRS            { VPU__BLK_CTRL_VPUMIX }
#endif

/* VPU_JPEG_ENC_WRAP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__JPEG_ENC_WRAP base address */
  #define VPU__JPEG_ENC_WRAP_BASE                  (0x5C550000u)
  /** Peripheral VPU__JPEG_ENC_WRAP base address */
  #define VPU__JPEG_ENC_WRAP_BASE_NS               (0x4C550000u)
  /** Peripheral VPU__JPEG_ENC_WRAP base pointer */
  #define VPU__JPEG_ENC_WRAP                       ((VPU_JPEG_ENC_WRAP_Type *)VPU__JPEG_ENC_WRAP_BASE)
  /** Peripheral VPU__JPEG_ENC_WRAP base pointer */
  #define VPU__JPEG_ENC_WRAP_NS                    ((VPU_JPEG_ENC_WRAP_Type *)VPU__JPEG_ENC_WRAP_BASE_NS)
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base addresses */
  #define VPU_JPEG_ENC_WRAP_BASE_ADDRS             { VPU__JPEG_ENC_WRAP_BASE }
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base pointers */
  #define VPU_JPEG_ENC_WRAP_BASE_PTRS              { VPU__JPEG_ENC_WRAP }
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base addresses */
  #define VPU_JPEG_ENC_WRAP_BASE_ADDRS_NS          { VPU__JPEG_ENC_WRAP_BASE_NS }
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base pointers */
  #define VPU_JPEG_ENC_WRAP_BASE_PTRS_NS           { VPU__JPEG_ENC_WRAP_NS }
#else
  /** Peripheral VPU__JPEG_ENC_WRAP base address */
  #define VPU__JPEG_ENC_WRAP_BASE                  (0x4C550000u)
  /** Peripheral VPU__JPEG_ENC_WRAP base pointer */
  #define VPU__JPEG_ENC_WRAP                       ((VPU_JPEG_ENC_WRAP_Type *)VPU__JPEG_ENC_WRAP_BASE)
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base addresses */
  #define VPU_JPEG_ENC_WRAP_BASE_ADDRS             { VPU__JPEG_ENC_WRAP_BASE }
  /** Array initializer of VPU_JPEG_ENC_WRAP peripheral base pointers */
  #define VPU_JPEG_ENC_WRAP_BASE_PTRS              { VPU__JPEG_ENC_WRAP }
#endif

/* VPU_TCU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral VPU__TCU base address */
  #define VPU__TCU_BASE                            (0x5C400000u)
  /** Peripheral VPU__TCU base address */
  #define VPU__TCU_BASE_NS                         (0x4C400000u)
  /** Peripheral VPU__TCU base pointer */
  #define VPU__TCU                                 ((VPU_TCU_Type *)VPU__TCU_BASE)
  /** Peripheral VPU__TCU base pointer */
  #define VPU__TCU_NS                              ((VPU_TCU_Type *)VPU__TCU_BASE_NS)
  /** Array initializer of VPU_TCU peripheral base addresses */
  #define VPU_TCU_BASE_ADDRS                       { VPU__TCU_BASE }
  /** Array initializer of VPU_TCU peripheral base pointers */
  #define VPU_TCU_BASE_PTRS                        { VPU__TCU }
  /** Array initializer of VPU_TCU peripheral base addresses */
  #define VPU_TCU_BASE_ADDRS_NS                    { VPU__TCU_BASE_NS }
  /** Array initializer of VPU_TCU peripheral base pointers */
  #define VPU_TCU_BASE_PTRS_NS                     { VPU__TCU_NS }
#else
  /** Peripheral VPU__TCU base address */
  #define VPU__TCU_BASE                            (0x4C400000u)
  /** Peripheral VPU__TCU base pointer */
  #define VPU__TCU                                 ((VPU_TCU_Type *)VPU__TCU_BASE)
  /** Array initializer of VPU_TCU peripheral base addresses */
  #define VPU_TCU_BASE_ADDRS                       { VPU__TCU_BASE }
  /** Array initializer of VPU_TCU peripheral base pointers */
  #define VPU_TCU_BASE_PTRS                        { VPU__TCU }
#endif

/* WAKEUP_AHBRM - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__AHBRM1 base address */
  #define WAKEUP__AHBRM1_BASE                      (0x525E0000u)
  /** Peripheral WAKEUP__AHBRM1 base address */
  #define WAKEUP__AHBRM1_BASE_NS                   (0x425E0000u)
  /** Peripheral WAKEUP__AHBRM1 base pointer */
  #define WAKEUP__AHBRM1                           ((WAKEUP_AHBRM_Type *)WAKEUP__AHBRM1_BASE)
  /** Peripheral WAKEUP__AHBRM1 base pointer */
  #define WAKEUP__AHBRM1_NS                        ((WAKEUP_AHBRM_Type *)WAKEUP__AHBRM1_BASE_NS)
  /** Array initializer of WAKEUP_AHBRM peripheral base addresses */
  #define WAKEUP_AHBRM_BASE_ADDRS                  { WAKEUP__AHBRM1_BASE }
  /** Array initializer of WAKEUP_AHBRM peripheral base pointers */
  #define WAKEUP_AHBRM_BASE_PTRS                   { WAKEUP__AHBRM1 }
  /** Array initializer of WAKEUP_AHBRM peripheral base addresses */
  #define WAKEUP_AHBRM_BASE_ADDRS_NS               { WAKEUP__AHBRM1_BASE_NS }
  /** Array initializer of WAKEUP_AHBRM peripheral base pointers */
  #define WAKEUP_AHBRM_BASE_PTRS_NS                { WAKEUP__AHBRM1_NS }
#else
  /** Peripheral WAKEUP__AHBRM1 base address */
  #define WAKEUP__AHBRM1_BASE                      (0x425E0000u)
  /** Peripheral WAKEUP__AHBRM1 base pointer */
  #define WAKEUP__AHBRM1                           ((WAKEUP_AHBRM_Type *)WAKEUP__AHBRM1_BASE)
  /** Array initializer of WAKEUP_AHBRM peripheral base addresses */
  #define WAKEUP_AHBRM_BASE_ADDRS                  { WAKEUP__AHBRM1_BASE }
  /** Array initializer of WAKEUP_AHBRM peripheral base pointers */
  #define WAKEUP_AHBRM_BASE_PTRS                   { WAKEUP__AHBRM1 }
#endif

/* WAKEUP_ATU - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__ATUA base address */
  #define WAKEUP__ATUA_BASE                        (0x52760000u)
  /** Peripheral WAKEUP__ATUA base address */
  #define WAKEUP__ATUA_BASE_NS                     (0x42760000u)
  /** Peripheral WAKEUP__ATUA base pointer */
  #define WAKEUP__ATUA                             ((WAKEUP_ATU_Type *)WAKEUP__ATUA_BASE)
  /** Peripheral WAKEUP__ATUA base pointer */
  #define WAKEUP__ATUA_NS                          ((WAKEUP_ATU_Type *)WAKEUP__ATUA_BASE_NS)
  /** Peripheral WAKEUP__ATUM base address */
  #define WAKEUP__ATUM_BASE                        (0x52770000u)
  /** Peripheral WAKEUP__ATUM base address */
  #define WAKEUP__ATUM_BASE_NS                     (0x42770000u)
  /** Peripheral WAKEUP__ATUM base pointer */
  #define WAKEUP__ATUM                             ((WAKEUP_ATU_Type *)WAKEUP__ATUM_BASE)
  /** Peripheral WAKEUP__ATUM base pointer */
  #define WAKEUP__ATUM_NS                          ((WAKEUP_ATU_Type *)WAKEUP__ATUM_BASE_NS)
  /** Array initializer of WAKEUP_ATU peripheral base addresses */
  #define WAKEUP_ATU_BASE_ADDRS                    { WAKEUP__ATUA_BASE, WAKEUP__ATUM_BASE }
  /** Array initializer of WAKEUP_ATU peripheral base pointers */
  #define WAKEUP_ATU_BASE_PTRS                     { WAKEUP__ATUA, WAKEUP__ATUM }
  /** Array initializer of WAKEUP_ATU peripheral base addresses */
  #define WAKEUP_ATU_BASE_ADDRS_NS                 { WAKEUP__ATUA_BASE_NS, WAKEUP__ATUM_BASE_NS }
  /** Array initializer of WAKEUP_ATU peripheral base pointers */
  #define WAKEUP_ATU_BASE_PTRS_NS                  { WAKEUP__ATUA_NS, WAKEUP__ATUM_NS }
#else
  /** Peripheral WAKEUP__ATUA base address */
  #define WAKEUP__ATUA_BASE                        (0x42760000u)
  /** Peripheral WAKEUP__ATUA base pointer */
  #define WAKEUP__ATUA                             ((WAKEUP_ATU_Type *)WAKEUP__ATUA_BASE)
  /** Peripheral WAKEUP__ATUM base address */
  #define WAKEUP__ATUM_BASE                        (0x42770000u)
  /** Peripheral WAKEUP__ATUM base pointer */
  #define WAKEUP__ATUM                             ((WAKEUP_ATU_Type *)WAKEUP__ATUM_BASE)
  /** Array initializer of WAKEUP_ATU peripheral base addresses */
  #define WAKEUP_ATU_BASE_ADDRS                    { WAKEUP__ATUA_BASE, WAKEUP__ATUM_BASE }
  /** Array initializer of WAKEUP_ATU peripheral base pointers */
  #define WAKEUP_ATU_BASE_PTRS                     { WAKEUP__ATUA, WAKEUP__ATUM }
#endif

/* WAKEUP_DMA_CRC - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__DMA_CRC2 base address */
  #define WAKEUP__DMA_CRC2_BASE                    (0x527B0000u)
  /** Peripheral WAKEUP__DMA_CRC2 base address */
  #define WAKEUP__DMA_CRC2_BASE_NS                 (0x427B0000u)
  /** Peripheral WAKEUP__DMA_CRC2 base pointer */
  #define WAKEUP__DMA_CRC2                         ((WAKEUP_DMA_CRC_Type *)WAKEUP__DMA_CRC2_BASE)
  /** Peripheral WAKEUP__DMA_CRC2 base pointer */
  #define WAKEUP__DMA_CRC2_NS                      ((WAKEUP_DMA_CRC_Type *)WAKEUP__DMA_CRC2_BASE_NS)
  /** Array initializer of WAKEUP_DMA_CRC peripheral base addresses */
  #define WAKEUP_DMA_CRC_BASE_ADDRS                { WAKEUP__DMA_CRC2_BASE }
  /** Array initializer of WAKEUP_DMA_CRC peripheral base pointers */
  #define WAKEUP_DMA_CRC_BASE_PTRS                 { WAKEUP__DMA_CRC2 }
  /** Array initializer of WAKEUP_DMA_CRC peripheral base addresses */
  #define WAKEUP_DMA_CRC_BASE_ADDRS_NS             { WAKEUP__DMA_CRC2_BASE_NS }
  /** Array initializer of WAKEUP_DMA_CRC peripheral base pointers */
  #define WAKEUP_DMA_CRC_BASE_PTRS_NS              { WAKEUP__DMA_CRC2_NS }
#else
  /** Peripheral WAKEUP__DMA_CRC2 base address */
  #define WAKEUP__DMA_CRC2_BASE                    (0x427B0000u)
  /** Peripheral WAKEUP__DMA_CRC2 base pointer */
  #define WAKEUP__DMA_CRC2                         ((WAKEUP_DMA_CRC_Type *)WAKEUP__DMA_CRC2_BASE)
  /** Array initializer of WAKEUP_DMA_CRC peripheral base addresses */
  #define WAKEUP_DMA_CRC_BASE_ADDRS                { WAKEUP__DMA_CRC2_BASE }
  /** Array initializer of WAKEUP_DMA_CRC peripheral base pointers */
  #define WAKEUP_DMA_CRC_BASE_PTRS                 { WAKEUP__DMA_CRC2 }
#endif

/* WAKEUP_ROMCP - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__ROMCP2 base address */
  #define WAKEUP__ROMCP2_BASE                      (0x52640000u)
  /** Peripheral WAKEUP__ROMCP2 base address */
  #define WAKEUP__ROMCP2_BASE_NS                   (0x42640000u)
  /** Peripheral WAKEUP__ROMCP2 base pointer */
  #define WAKEUP__ROMCP2                           ((WAKEUP_ROMCP_Type *)WAKEUP__ROMCP2_BASE)
  /** Peripheral WAKEUP__ROMCP2 base pointer */
  #define WAKEUP__ROMCP2_NS                        ((WAKEUP_ROMCP_Type *)WAKEUP__ROMCP2_BASE_NS)
  /** Array initializer of WAKEUP_ROMCP peripheral base addresses */
  #define WAKEUP_ROMCP_BASE_ADDRS                  { WAKEUP__ROMCP2_BASE }
  /** Array initializer of WAKEUP_ROMCP peripheral base pointers */
  #define WAKEUP_ROMCP_BASE_PTRS                   { WAKEUP__ROMCP2 }
  /** Array initializer of WAKEUP_ROMCP peripheral base addresses */
  #define WAKEUP_ROMCP_BASE_ADDRS_NS               { WAKEUP__ROMCP2_BASE_NS }
  /** Array initializer of WAKEUP_ROMCP peripheral base pointers */
  #define WAKEUP_ROMCP_BASE_PTRS_NS                { WAKEUP__ROMCP2_NS }
#else
  /** Peripheral WAKEUP__ROMCP2 base address */
  #define WAKEUP__ROMCP2_BASE                      (0x42640000u)
  /** Peripheral WAKEUP__ROMCP2 base pointer */
  #define WAKEUP__ROMCP2                           ((WAKEUP_ROMCP_Type *)WAKEUP__ROMCP2_BASE)
  /** Array initializer of WAKEUP_ROMCP peripheral base addresses */
  #define WAKEUP_ROMCP_BASE_ADDRS                  { WAKEUP__ROMCP2_BASE }
  /** Array initializer of WAKEUP_ROMCP peripheral base pointers */
  #define WAKEUP_ROMCP_BASE_PTRS                   { WAKEUP__ROMCP2 }
#endif

/* WAKEUP_XSPI_RESPONDER - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WAKEUP__XSPI_RESPONDER base address */
  #define WAKEUP__XSPI_RESPONDER_BASE              (0x528A0000u)
  /** Peripheral WAKEUP__XSPI_RESPONDER base address */
  #define WAKEUP__XSPI_RESPONDER_BASE_NS           (0x428A0000u)
  /** Peripheral WAKEUP__XSPI_RESPONDER base pointer */
  #define WAKEUP__XSPI_RESPONDER                   ((WAKEUP_XSPI_RESPONDER_Type *)WAKEUP__XSPI_RESPONDER_BASE)
  /** Peripheral WAKEUP__XSPI_RESPONDER base pointer */
  #define WAKEUP__XSPI_RESPONDER_NS                ((WAKEUP_XSPI_RESPONDER_Type *)WAKEUP__XSPI_RESPONDER_BASE_NS)
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base addresses */
  #define WAKEUP_XSPI_RESPONDER_BASE_ADDRS         { WAKEUP__XSPI_RESPONDER_BASE }
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base pointers */
  #define WAKEUP_XSPI_RESPONDER_BASE_PTRS          { WAKEUP__XSPI_RESPONDER }
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base addresses */
  #define WAKEUP_XSPI_RESPONDER_BASE_ADDRS_NS      { WAKEUP__XSPI_RESPONDER_BASE_NS }
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base pointers */
  #define WAKEUP_XSPI_RESPONDER_BASE_PTRS_NS       { WAKEUP__XSPI_RESPONDER_NS }
#else
  /** Peripheral WAKEUP__XSPI_RESPONDER base address */
  #define WAKEUP__XSPI_RESPONDER_BASE              (0x428A0000u)
  /** Peripheral WAKEUP__XSPI_RESPONDER base pointer */
  #define WAKEUP__XSPI_RESPONDER                   ((WAKEUP_XSPI_RESPONDER_Type *)WAKEUP__XSPI_RESPONDER_BASE)
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base addresses */
  #define WAKEUP_XSPI_RESPONDER_BASE_ADDRS         { WAKEUP__XSPI_RESPONDER_BASE }
  /** Array initializer of WAKEUP_XSPI_RESPONDER peripheral base pointers */
  #define WAKEUP_XSPI_RESPONDER_BASE_PTRS          { WAKEUP__XSPI_RESPONDER }
#endif

/* WDOG - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE                               (0x542D0000u)
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE_NS                            (0x442D0000u)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1_NS                                 ((WDOG_Type *)WDOG1_BASE_NS)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE                               (0x542E0000u)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE_NS                            (0x442E0000u)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2                                    ((WDOG_Type *)WDOG2_BASE)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2_NS                                 ((WDOG_Type *)WDOG2_BASE_NS)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE                               (0x52490000u)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE_NS                            (0x42490000u)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3                                    ((WDOG_Type *)WDOG3_BASE)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3_NS                                 ((WDOG_Type *)WDOG3_BASE_NS)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE                               (0x524A0000u)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE_NS                            (0x424A0000u)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4                                    ((WDOG_Type *)WDOG4_BASE)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4_NS                                 ((WDOG_Type *)WDOG4_BASE_NS)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE                               (0x524B0000u)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE_NS                            (0x424B0000u)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5                                    ((WDOG_Type *)WDOG5_BASE)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5_NS                                 ((WDOG_Type *)WDOG5_BASE_NS)
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS                          { WDOG1_BASE, WDOG2_BASE, WDOG3_BASE, WDOG4_BASE, WDOG5_BASE }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS                           { WDOG1, WDOG2, WDOG3, WDOG4, WDOG5 }
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS_NS                       { WDOG1_BASE_NS, WDOG2_BASE_NS, WDOG3_BASE_NS, WDOG4_BASE_NS, WDOG5_BASE_NS }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS_NS                        { WDOG1_NS, WDOG2_NS, WDOG3_NS, WDOG4_NS, WDOG5_NS }
#else
  /** Peripheral WDOG1 base address */
  #define WDOG1_BASE                               (0x442D0000u)
  /** Peripheral WDOG1 base pointer */
  #define WDOG1                                    ((WDOG_Type *)WDOG1_BASE)
  /** Peripheral WDOG2 base address */
  #define WDOG2_BASE                               (0x442E0000u)
  /** Peripheral WDOG2 base pointer */
  #define WDOG2                                    ((WDOG_Type *)WDOG2_BASE)
  /** Peripheral WDOG3 base address */
  #define WDOG3_BASE                               (0x42490000u)
  /** Peripheral WDOG3 base pointer */
  #define WDOG3                                    ((WDOG_Type *)WDOG3_BASE)
  /** Peripheral WDOG4 base address */
  #define WDOG4_BASE                               (0x424A0000u)
  /** Peripheral WDOG4 base pointer */
  #define WDOG4                                    ((WDOG_Type *)WDOG4_BASE)
  /** Peripheral WDOG5 base address */
  #define WDOG5_BASE                               (0x424B0000u)
  /** Peripheral WDOG5 base pointer */
  #define WDOG5                                    ((WDOG_Type *)WDOG5_BASE)
  /** Array initializer of WDOG peripheral base addresses */
  #define WDOG_BASE_ADDRS                          { WDOG1_BASE, WDOG2_BASE, WDOG3_BASE, WDOG4_BASE, WDOG5_BASE }
  /** Array initializer of WDOG peripheral base pointers */
  #define WDOG_BASE_PTRS                           { WDOG1, WDOG2, WDOG3, WDOG4, WDOG5 }
#endif
/* Extra definition */
#define WDOG_UPDATE_KEY                          (0xD928C520U)
#define WDOG_REFRESH_KEY                       (0xB480A602U)


/* XCACHE - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE                    (0x54400000u)
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE_NS                 (0x44400000u)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC                         ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC_NS                      ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE_NS)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE                    (0x54400800u)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE_NS                 (0x44400800u)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS                         ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS_NS                      ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE_NS)
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS                        { M33_CACHE_CTRLPC_BASE, M33_CACHE_CTRLPS_BASE }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS                         { M33_CACHE_CTRLPC, M33_CACHE_CTRLPS }
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS_NS                     { M33_CACHE_CTRLPC_BASE_NS, M33_CACHE_CTRLPS_BASE_NS }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS_NS                      { M33_CACHE_CTRLPC_NS, M33_CACHE_CTRLPS_NS }
#else
  /** Peripheral M33_CACHE_CTRLPC base address */
  #define M33_CACHE_CTRLPC_BASE                    (0x44400000u)
  /** Peripheral M33_CACHE_CTRLPC base pointer */
  #define M33_CACHE_CTRLPC                         ((XCACHE_Type *)M33_CACHE_CTRLPC_BASE)
  /** Peripheral M33_CACHE_CTRLPS base address */
  #define M33_CACHE_CTRLPS_BASE                    (0x44400800u)
  /** Peripheral M33_CACHE_CTRLPS base pointer */
  #define M33_CACHE_CTRLPS                         ((XCACHE_Type *)M33_CACHE_CTRLPS_BASE)
  /** Array initializer of XCACHE peripheral base addresses */
  #define XCACHE_BASE_ADDRS                        { M33_CACHE_CTRLPC_BASE, M33_CACHE_CTRLPS_BASE }
  /** Array initializer of XCACHE peripheral base pointers */
  #define XCACHE_BASE_PTRS                         { M33_CACHE_CTRLPC, M33_CACHE_CTRLPS }
#endif
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES                { 0x1FFC0000u, 0x38000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES                { 0x00040000u, 0x08000000u }
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES_NS             { 0x0FFC0000u, 0x28000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES_NS             { 0x00040000u, 0x08000000u }
#else
  /** XCACHE physical memory base address */
  #define XCACHE_PHYMEM_BASES                { 0x0FFC0000u, 0x28000000u }
  /** XCACHE physical memory size */
  #define XCACHE_PHYMEM_SIZES                { 0x00040000u, 0x08000000u }
#endif


/* ieprc_ierb - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base address */
  #define NETC__IEPRC_1__IEPRC_IERB_BASE           (0x5C8A0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base address */
  #define NETC__IEPRC_1__IEPRC_IERB_BASE_NS        (0x4C8A0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base pointer */
  #define NETC__IEPRC_1__IEPRC_IERB                ((ieprc_ierb_Type *)NETC__IEPRC_1__IEPRC_IERB_BASE)
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base pointer */
  #define NETC__IEPRC_1__IEPRC_IERB_NS             ((ieprc_ierb_Type *)NETC__IEPRC_1__IEPRC_IERB_BASE_NS)
  /** Array initializer of ieprc_ierb peripheral base addresses */
  #define ieprc_ierb_BASE_ADDRS                    { NETC__IEPRC_1__IEPRC_IERB_BASE }
  /** Array initializer of ieprc_ierb peripheral base pointers */
  #define ieprc_ierb_BASE_PTRS                     { NETC__IEPRC_1__IEPRC_IERB }
  /** Array initializer of ieprc_ierb peripheral base addresses */
  #define ieprc_ierb_BASE_ADDRS_NS                 { NETC__IEPRC_1__IEPRC_IERB_BASE_NS }
  /** Array initializer of ieprc_ierb peripheral base pointers */
  #define ieprc_ierb_BASE_PTRS_NS                  { NETC__IEPRC_1__IEPRC_IERB_NS }
#else
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base address */
  #define NETC__IEPRC_1__IEPRC_IERB_BASE           (0x4C8A0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_IERB base pointer */
  #define NETC__IEPRC_1__IEPRC_IERB                ((ieprc_ierb_Type *)NETC__IEPRC_1__IEPRC_IERB_BASE)
  /** Array initializer of ieprc_ierb peripheral base addresses */
  #define ieprc_ierb_BASE_ADDRS                    { NETC__IEPRC_1__IEPRC_IERB_BASE }
  /** Array initializer of ieprc_ierb peripheral base pointers */
  #define ieprc_ierb_BASE_PTRS                     { NETC__IEPRC_1__IEPRC_IERB }
#endif

/* ieprc_pci - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE (0x5CA08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE_NS (0x4CA08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_NS ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE_NS)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE (0x5CB08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE_NS (0x4CB08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_NS ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE_NS)
  /** Array initializer of ieprc_pci peripheral base addresses */
  #define ieprc_pci_BASE_ADDRS                     { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ieprc_pci peripheral base pointers */
  #define ieprc_pci_BASE_PTRS                      { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 }
  /** Array initializer of ieprc_pci peripheral base addresses */
  #define ieprc_pci_BASE_ADDRS_NS                  { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE_NS, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE_NS }
  /** Array initializer of ieprc_pci peripheral base pointers */
  #define ieprc_pci_BASE_PTRS_NS                   { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_NS, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_NS }
#else
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE (0x4CA08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0 ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base address */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE (0x4CB08000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 base pointer */
  #define NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 ((ieprc_pci_Type *)NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE)
  /** Array initializer of ieprc_pci peripheral base addresses */
  #define ieprc_pci_BASE_ADDRS                     { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0_BASE, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0_BASE }
  /** Array initializer of ieprc_pci peripheral base pointers */
  #define ieprc_pci_BASE_PTRS                      { NETC__IEPRC_1__IEPRC_B0_EC_F0_PCI_HDR_TYPE0, NETC__IEPRC_1__IEPRC_B1_EC_F0_PCI_HDR_TYPE0 }
#endif

/* ieprc_prb - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base address */
  #define NETC__IEPRC_1__IEPRC_PRB_BASE            (0x5C8B0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base address */
  #define NETC__IEPRC_1__IEPRC_PRB_BASE_NS         (0x4C8B0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base pointer */
  #define NETC__IEPRC_1__IEPRC_PRB                 ((ieprc_prb_Type *)NETC__IEPRC_1__IEPRC_PRB_BASE)
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base pointer */
  #define NETC__IEPRC_1__IEPRC_PRB_NS              ((ieprc_prb_Type *)NETC__IEPRC_1__IEPRC_PRB_BASE_NS)
  /** Array initializer of ieprc_prb peripheral base addresses */
  #define ieprc_prb_BASE_ADDRS                     { NETC__IEPRC_1__IEPRC_PRB_BASE }
  /** Array initializer of ieprc_prb peripheral base pointers */
  #define ieprc_prb_BASE_PTRS                      { NETC__IEPRC_1__IEPRC_PRB }
  /** Array initializer of ieprc_prb peripheral base addresses */
  #define ieprc_prb_BASE_ADDRS_NS                  { NETC__IEPRC_1__IEPRC_PRB_BASE_NS }
  /** Array initializer of ieprc_prb peripheral base pointers */
  #define ieprc_prb_BASE_PTRS_NS                   { NETC__IEPRC_1__IEPRC_PRB_NS }
#else
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base address */
  #define NETC__IEPRC_1__IEPRC_PRB_BASE            (0x4C8B0000u)
  /** Peripheral NETC__IEPRC_1__IEPRC_PRB base pointer */
  #define NETC__IEPRC_1__IEPRC_PRB                 ((ieprc_prb_Type *)NETC__IEPRC_1__IEPRC_PRB_BASE)
  /** Array initializer of ieprc_prb peripheral base addresses */
  #define ieprc_prb_BASE_ADDRS                     { NETC__IEPRC_1__IEPRC_PRB_BASE }
  /** Array initializer of ieprc_prb peripheral base pointers */
  #define ieprc_prb_BASE_PTRS                      { NETC__IEPRC_1__IEPRC_PRB }
#endif

/* neutrons - Peripheral instance base addresses */
#if (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE & 0x2))
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE (0x5AB80000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE_NS (0x4AB80000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV      ((neutrons_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_NS   ((neutrons_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE_NS)
  /** Array initializer of neutrons peripheral base addresses */
  #define neutrons_BASE_ADDRS                      { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE }
  /** Array initializer of neutrons peripheral base pointers */
  #define neutrons_BASE_PTRS                       { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV }
  /** Array initializer of neutrons peripheral base addresses */
  #define neutrons_BASE_ADDRS_NS                   { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE_NS }
  /** Array initializer of neutrons peripheral base pointers */
  #define neutrons_BASE_PTRS_NS                    { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_NS }
#else
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base address */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE (0x4AB80000u)
  /** Peripheral NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV base pointer */
  #define NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV      ((neutrons_Type *)NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE)
  /** Array initializer of neutrons peripheral base addresses */
  #define neutrons_BASE_ADDRS                      { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV_BASE }
  /** Array initializer of neutrons peripheral base pointers */
  #define neutrons_BASE_PTRS                       { NPU__NEUTRON_NPU__NEUTRON_S__MMR_ZV }
#endif

/* ----------------------------------------------------------------------------
   -- Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Bit_Field_Generic_Macros Macros for use with bit field definitions (xxx_SHIFT, xxx_MASK).
 * @{
 */

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang system_header
  #endif
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma system_include
#endif

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


#endif  /* MIMX9596_CM33_COMMON_H_ */

