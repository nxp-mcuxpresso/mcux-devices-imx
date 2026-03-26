/* ------------------------------------------------------------------------- */
/*  @file:    startup_MIMX9528_cm7.s                                         */
/*  @purpose: CMSIS Cortex-M7 Core Device Startup File                       */
/*            MIMX9528_cm7                                                   */
/*  @version: 2.0                                                            */
/*  @date:    2024-10-29                                                     */
/*  @build:   b260324                                                        */
/* ------------------------------------------------------------------------- */
/*                                                                           */
/* Copyright 1997-2016 Freescale Semiconductor, Inc.                         */
/* Copyright 2016-2026 NXP                                                   */
/* SPDX-License-Identifier: BSD-3-Clause                                     */
/*****************************************************************************/
/* Version: GCC for ARM Embedded Processors                                  */
/*****************************************************************************/
    .syntax unified
    .arch armv7-m

    .section .isr_vector, "a"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                                      /* Top of Stack */
    .long   Reset_Handler                                   /* Reset Handler */
    .long   NMI_Handler                                     /* NMI Handler*/
    .long   HardFault_Handler                               /* Hard Fault Handler*/
    .long   MemManage_Handler                               /* MPU Fault Handler*/
    .long   BusFault_Handler                                /* Bus Fault Handler*/
    .long   UsageFault_Handler                              /* Usage Fault Handler*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   0                                               /* Reserved*/
    .long   SVC_Handler                                     /* SVCall Handler*/
    .long   DebugMon_Handler                                /* Debug Monitor Handler*/
    .long   0                                               /* Reserved*/
    .long   PendSV_Handler                                  /* PendSV Handler*/
    .long   SysTick_Handler                                 /* SysTick Handler*/

                                                            /* External Interrupts*/
    .long   RESERVED16_IRQHandler                           /* Reserved interrupt*/
    .long   RESERVED17_IRQHandler                           /* DAP Interrupt*/
    .long   RESERVED18_IRQHandler                           /* CTI trigger outputs from CM7 platform  (internal: CTIIRQ[0])*/
    .long   RESERVED19_IRQHandler                           /* CTI trigger outputs from CM33 platform  (internal: CTIIRQ[0])*/
    .long   RESERVED20_IRQHandler                           /* CTI trigger outputs from CA55 platform  (internal: nCTIIRQ[0])*/
    .long   RESERVED21_IRQHandler                           /* Performance Unit Interrupts from CA55 platform (interrnally:  PMUIRQ[0])*/
    .long   RESERVED22_IRQHandler                           /* ECC error with potential data corruption or loss of coherency from CA55 platform L3 Cache*/
    .long   RESERVED23_IRQHandler                           /* 1-bit or 2-bit ECC or Parity error from CA55 platform L3 Cache*/
    .long   CAN1_IRQHandler                                 /* AONMIX CAN-FD Interrupt from busoff*/
    .long   CAN1_ERROR_IRQHandler                           /* AONMIX CAN-FD Correctable error interrupt*/
    .long   GPIO1_0_IRQHandler                              /* AONMIX GPIO interrupt request 0*/
    .long   GPIO1_1_IRQHandler                              /* AONMIX GPIO interrupt request 1*/
    .long   I3C1_IRQHandler                                 /* AONMIX I3C interrupt request*/
    .long   LPI2C1_IRQHandler                               /* AONMIX LPI2C Master interrupt*/
    .long   LPI2C2_IRQHandler                               /* AONMIX LPI2C Master interrupt*/
    .long   LPIT1_IRQHandler                                /* AONMIX LPIT global interrupt*/
    .long   LPSPI1_IRQHandler                               /* AONMIX LPSPI interrupt*/
    .long   LPSPI2_IRQHandler                               /* AONMIX LPSPI interrupt*/
    .long   LPTMR1_IRQHandler                               /* AONMIX LPTMR async interrupt*/
    .long   LPUART1_IRQHandler                              /* AONMIX LPUART TX interrupt*/
    .long   LPUART2_IRQHandler                              /* AONMIX LPUART TX interrupt*/
    .long   RESERVED37_IRQHandler                           /* AONMIX Sentinel MU0 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED38_IRQHandler                           /* AONMIX Sentinel MU1 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED39_IRQHandler                           /* AONMIX Sentinel MU2 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED40_IRQHandler                           /* AONMIX Sentinel MU3 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED41_IRQHandler                           /* AONMIX Sentinel MU4 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED42_IRQHandler                           /* AONMIX Sentinel MU5 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX*/
    .long   RESERVED43_IRQHandler                           /* V2X-FH MU APCH0 (APP0) A_TX interrupt*/
    .long   RESERVED44_IRQHandler                           /* V2X-FH MU APHSM1 (HSM1) A_TX interrupt*/
    .long   TPM1_IRQHandler                                 /* AONMIX LPTPM global interrupt*/
    .long   TPM2_IRQHandler                                 /* AONMIX LPTPM global interrupt*/
    .long   WDOG1_IRQHandler                                /* AONMIX Watchdog interrupt request.  SRC reset source.*/
    .long   WDOG2_IRQHandler                                /* AONMIX Watchdog interrupt request.  SRC reset source.*/
    .long   TRDC_MGR_A_IRQHandler                           /* AONMIX TRDC transfer error interrupt*/
    .long   SAI1_IRQHandler                                 /* AONMIX SAI TX interrupt*/
    .long   RESERVED51_IRQHandler                           /* AONMIX M33 PS Tag Parity Error*/
    .long   CM33_ECC_MCM_IRQHandler                         /* AONMIX M33 TCM Error interrupt*/
    .long   RESERVED53_IRQHandler                           /* M7MIX ECC Multi-bit error*/
    .long   CAN2_IRQHandler                                 /* WAKEUPMIX CAN-FD Interrupt from busoff*/
    .long   CAN2_ERROR_IRQHandler                           /* WAKEUPMIX CAN-FD Correctable error interrupt*/
    .long   CAN3_IRQHandler                                 /* WAKEUPMIX CAN-FD Interrupt from busoff*/
    .long   CAN3_ERROR_IRQHandler                           /* WAKEUPMIX CAN-FD Correctable error interrupt*/
    .long   WDOG6_IRQHandler                                /* DISPLAYMIX Watchdog interrupt request. SRC reset source.*/
    .long   RESERVED59_IRQHandler                           /* Additional inverted version of Interrupt added for s500_scm_halt_ack_irq. Which could be uzseful for Sentinel Wakeup*/
    .long   RESERVED60_IRQHandler                           /* s500.sentinel_irq_glue_s500_irq_req4 is connected with ocotp_cont_edc_err*/
    .long   DISPLAY_MIX_IRQHandler                          /* Local Dimming Interrupt*/
    .long   FLEXIO1_IRQHandler                              /* WAKEUPMIX FLEXIO interrupt*/
    .long   FLEXIO2_IRQHandler                              /* WAKEUPMIX FLEXIO interrupt*/
    .long   RESERVED64_IRQHandler                           /* Reserved*/
    .long   GPIO2_0_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 0*/
    .long   GPIO2_1_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 1*/
    .long   GPIO3_0_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 0*/
    .long   GPIO3_1_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 1*/
    .long   GPIO4_0_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 0*/
    .long   GPIO4_1_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 1*/
    .long   GPIO5_0_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 0*/
    .long   GPIO5_1_IRQHandler                              /* WAKEUPMIX GPIO interrupt request 1*/
    .long   I3C2_IRQHandler                                 /* WAKEUPMIX I3C interrupt request*/
    .long   LPI2C3_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   LPI2C4_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   LPIT2_IRQHandler                                /* WAKEUPMIX LPIT global interrupt*/
    .long   LPSPI3_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPSPI4_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPTMR2_IRQHandler                               /* WAKEUPMIX LPTMR async interrupt*/
    .long   LPUART3_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   LPUART4_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   LPUART5_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   LPUART6_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   LPUART7_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   LPUART8_IRQHandler                              /* WAKEUPMIX LPUART TX interrupt*/
    .long   MTR_MSTR_IRQHandler                             /* AONMIX MTR Master error interrupt*/
    .long   BBNSM_IRQHandler                                /* BBNSM Non-Secure external wakeup alarm*/
    .long   SYS_CTR1_IRQHandler                             /* WAKEUPMIX System Counter compare interrupt 0*/
    .long   TPM3_IRQHandler                                 /* WAKEUPMIX LPTPM global interrupt*/
    .long   TPM4_IRQHandler                                 /* WAKEUPMIX LPTPM global interrupt*/
    .long   TPM5_IRQHandler                                 /* WAKEUPMIX LPTPM async interrupt*/
    .long   TPM6_IRQHandler                                 /* WAKEUPMIX LPTPM async interrupt*/
    .long   WDOG3_IRQHandler                                /* WAKEUPMIX Watchdog interrupt request. SRC reset source.*/
    .long   WDOG4_IRQHandler                                /* WAKEUPMIX Watchdog interrupt request. SRC reset source.*/
    .long   WDOG5_IRQHandler                                /* WAKEUPMIX Watchdog interrupt request. SRC reset source.*/
    .long   TMPSNS1_THR1_IRQHandler                         /* ANAMIX TempSensor non-secure interrupt from Threshold 1*/
    .long   TMPSNS1_THR2_IRQHandler                         /* ANAMIX TempSensor non-secure interrupt from Threshold 2*/
    .long   TMPSNS1_DRDY_IRQHandler                         /* ANAMIX TempSensor non-secure data ready interrupt*/
    .long   TMPSNS2_THR1_IRQHandler                         /* CORTEXAMIX TempSensor non-secure interrupt from Threshold 1*/
    .long   TMPSNS2_THR2_IRQHandler                         /* CORTEXAMIX TempSensor non-secure interrupt from Threshold 2*/
    .long   TMPSNS2_DRDY_IRQHandler                         /* CORTEXAMIX TempSensor non-secure data ready interrupt*/
    .long   USDHC1_IRQHandler                               /* MEGAMIX uSDHC Enhanced SDHC Interrupt Request*/
    .long   USDHC2_IRQHandler                               /* MEGAMIX uSDHC Enhanced SDHC Interrupt Request*/
    .long   TRDC_MGR_W1_IRQHandler                          /* WAKEUPMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_W2_IRQHandler                          /* WAKEUPMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_N_IRQHandler                           /* NOCMIX TRDC transfer error interrupt*/
    .long   RESERVED107_IRQHandler                          /* DRAM controller Performance Monitor Interrupt*/
    .long   RESERVED108_IRQHandler                          /* DRAM controller Critical Interrupt*/
    .long   RESERVED109_IRQHandler                          /* DRAM Phy Critical Interrupt 0*/
    .long   INTG_BOOTROM_DEBUG_CTRL_IRQHandler              /* Cortex-A Cluster Debug Wakeup Request*/
    .long   DMA3_ERROR_IRQHandler                           /* AONMIX EDMA error interrupt*/
    .long   DMA3_0_IRQHandler                               /* AONMIX EDMA channel 0 interrupt*/
    .long   DMA3_1_IRQHandler                               /* AONMIX EDMA channel 1 interrupt*/
    .long   DMA3_2_IRQHandler                               /* AONMIX EDMA channel 2 interrupt*/
    .long   DMA3_3_IRQHandler                               /* AONMIX EDMA channel 3 interrupt*/
    .long   DMA3_4_IRQHandler                               /* AONMIX EDMA channel 4 interrupt*/
    .long   DMA3_5_IRQHandler                               /* AONMIX EDMA channel 5 interrupt*/
    .long   DMA3_6_IRQHandler                               /* AONMIX EDMA channel 6 interrupt*/
    .long   DMA3_7_IRQHandler                               /* AONMIX EDMA channel 7 interrupt*/
    .long   DMA3_8_IRQHandler                               /* AONMIX EDMA channel 8 interrupt*/
    .long   DMA3_9_IRQHandler                               /* AONMIX EDMA channel 9 interrupt*/
    .long   DMA3_10_IRQHandler                              /* AONMIX EDMA channel 10 interrupt*/
    .long   DMA3_11_IRQHandler                              /* AONMIX EDMA channel 11 interrupt*/
    .long   DMA3_12_IRQHandler                              /* AONMIX EDMA channel 12 interrupt*/
    .long   DMA3_13_IRQHandler                              /* AONMIX EDMA channel 13 interrupt*/
    .long   DMA3_14_IRQHandler                              /* AONMIX EDMA channel 14 interrupt*/
    .long   DMA3_15_IRQHandler                              /* AONMIX EDMA channel 15 interrupt*/
    .long   DMA3_16_IRQHandler                              /* AONMIX EDMA channel 16 interrupt*/
    .long   DMA3_17_IRQHandler                              /* AONMIX EDMA channel 17 interrupt*/
    .long   DMA3_18_IRQHandler                              /* AONMIX EDMA channel 18 interrupt*/
    .long   DMA3_19_IRQHandler                              /* AONMIX EDMA channel 19 interrupt*/
    .long   DMA3_20_IRQHandler                              /* AONMIX EDMA channel 20 interrupt*/
    .long   DMA3_21_IRQHandler                              /* AONMIX EDMA channel 21 interrupt*/
    .long   DMA3_22_IRQHandler                              /* AONMIX EDMA channel 22 interrupt*/
    .long   DMA3_23_IRQHandler                              /* AONMIX EDMA channel 23 interrupt*/
    .long   DMA3_24_IRQHandler                              /* AONMIX EDMA channel 24 interrupt*/
    .long   DMA3_25_IRQHandler                              /* AONMIX EDMA channel 25 interrupt*/
    .long   DMA3_26_IRQHandler                              /* AONMIX EDMA channel 26 interrupt*/
    .long   DMA3_27_IRQHandler                              /* AONMIX EDMA channel 27 interrupt*/
    .long   DMA3_28_IRQHandler                              /* AONMIX EDMA channel 28 interrupt*/
    .long   DMA3_29_IRQHandler                              /* AONMIX EDMA channel 29 interrupt*/
    .long   DMA3_30_IRQHandler                              /* AONMIX EDMA channel 30 interrupt*/
    .long   DMA5_2_ERROR_IRQHandler                         /* WAKEUPMIX EDMA error interrupt*/
    .long   DMA5_2_0_1_IRQHandler                           /* WAKEUPMIX EDMA channel 0 interrupt*/
    .long   DMA5_2_2_3_IRQHandler                           /* WAKEUPMIX EDMA channel 2 interrupt*/
    .long   DMA5_2_4_5_IRQHandler                           /* WAKEUPMIX EDMA channel 4 interrupt*/
    .long   DMA5_2_6_7_IRQHandler                           /* WAKEUPMIX EDMA channel 6 interrupt*/
    .long   DMA5_2_8_9_IRQHandler                           /* WAKEUPMIX EDMA channel 8 interrupt*/
    .long   DMA5_2_10_11_IRQHandler                         /* WAKEUPMIX EDMA channel 10 interrupt*/
    .long   DMA5_2_12_13_IRQHandler                         /* WAKEUPMIX EDMA channel 12 interrupt*/
    .long   DMA5_2_14_15_IRQHandler                         /* WAKEUPMIX EDMA channel 14 interrupt*/
    .long   DMA5_2_16_17_IRQHandler                         /* WAKEUPMIX EDMA channel 16 interrupt*/
    .long   DMA5_2_18_19_IRQHandler                         /* WAKEUPMIX EDMA channel 18 interrupt*/
    .long   DMA5_2_20_21_IRQHandler                         /* WAKEUPMIX EDMA channel 20 interrupt*/
    .long   DMA5_2_22_23_IRQHandler                         /* WAKEUPMIX EDMA channel 22 interrupt*/
    .long   DMA5_2_24_25_IRQHandler                         /* WAKEUPMIX EDMA channel 24 interrupt*/
    .long   DMA5_2_26_27_IRQHandler                         /* WAKEUPMIX EDMA channel 26 interrupt*/
    .long   DMA5_2_28_29_IRQHandler                         /* WAKEUPMIX EDMA channel 28 interrupt*/
    .long   DMA5_2_30_31_IRQHandler                         /* WAKEUPMIX EDMA channel 30 interrupt*/
    .long   DMA5_2_32_33_IRQHandler                         /* WAKEUPMIX EDMA channel 32 interrupt*/
    .long   DMA5_2_34_35_IRQHandler                         /* WAKEUPMIX EDMA channel 34 interrupt*/
    .long   DMA5_2_36_37_IRQHandler                         /* WAKEUPMIX EDMA channel 36 interrupt*/
    .long   DMA5_2_38_39_IRQHandler                         /* WAKEUPMIX EDMA channel 38 interrupt*/
    .long   DMA5_2_40_41_IRQHandler                         /* WAKEUPMIX EDMA channel 40 interrupt*/
    .long   DMA5_2_42_43_IRQHandler                         /* WAKEUPMIX EDMA channel 42 interrupt*/
    .long   DMA5_2_44_45_IRQHandler                         /* WAKEUPMIX EDMA channel 44 interrupt*/
    .long   DMA5_2_46_47_IRQHandler                         /* WAKEUPMIX EDMA channel 46 interrupt*/
    .long   DMA5_2_48_49_IRQHandler                         /* WAKEUPMIX EDMA channel 48 interrupt*/
    .long   DMA5_2_50_51_IRQHandler                         /* WAKEUPMIX EDMA channel 50 interrupt*/
    .long   DMA5_2_52_53_IRQHandler                         /* WAKEUPMIX EDMA channel 52 interrupt*/
    .long   DMA5_2_54_55_IRQHandler                         /* WAKEUPMIX EDMA channel 54 interrupt*/
    .long   DMA5_2_56_57_IRQHandler                         /* WAKEUPMIX EDMA channel 56 interrupt*/
    .long   DMA5_2_58_59_IRQHandler                         /* WAKEUPMIX EDMA channel 58 interrupt*/
    .long   DMA5_2_60_61_IRQHandler                         /* WAKEUPMIX EDMA channel 60 interrupt*/
    .long   DMA5_2_62_63_IRQHandler                         /* WAKEUPMIX EDMA channel 62 interrupt*/
    .long   ELE_GROUP1_IRQHandler                           /* Sentinel Group 1 reset source if no s500 reference clock is detected.  Output synchronized to 32khz clk.*/
    .long   ELE_GROUP2_IRQHandler                           /* Sentinel Group 2 reset source s500 reference clock is not detected or too slow.  Output synchronized to ref1_clk.*/
    .long   ELE_GROUP3_IRQHandler                           /* Sentinel Group 3 reset source s500 reference clock is not detected or too slow.  Output synchronized to ref1_clk.*/
    .long   DBG_TRACE_IRQHandler                            /* JTAGSW DAP MDM-AP SRC reset source*/
    .long   JTAGC_IRQHandler                                /* JTAGC SRC reset source (the JTAGC used for boundary scan, not JTAGC used for password authentication)*/
    .long   SYSREQRST_CM33_IRQHandler                       /* CM33 SYSREQRST SRC reset source*/
    .long   LOCKUP_CM33_IRQHandler                          /* CM33 LOCKUP SRC reset source*/
    .long   SYSREQRST_CM7_IRQHandler                        /* CM7 SYSREQRST SRC reset source*/
    .long   LOCKUP_CM7_IRQHandler                           /* CM7 LOCKUP SRC reset source*/
    .long   SAI2_IRQHandler                                 /* NETCMIX SAI TX interrupt*/
    .long   SAI3_IRQHandler                                 /* WAKEUPMIX SAI TX interrupt*/
    .long   SAI4_IRQHandler                                 /* WAKEUPMIX SAI TX interrupt*/
    .long   SAI5_IRQHandler                                 /* WAKEUPMIX SAI TX interrupt*/
    .long   USB1_WAKEUP_IRQHandler                          /* USB-1 (USB 2.0) Wake-up Interrupt*/
    .long   USB2_WAKEUP_IRQHandler                          /* USB-2 (USB 2.0) Wake-up Interrupt*/
    .long   USB1_IRQHandler                                 /* USB-1 (USB 2.0 Controller) Interrupt*/
    .long   USB2_IRQHandler                                 /* USB-2 (USB 2.0 Controller) Interrupt*/
    .long   LPSPI5_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPSPI6_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPSPI7_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPSPI8_IRQHandler                               /* WAKEUPMIX LPSPI interrupt*/
    .long   LPI2C5_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   LPI2C6_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   LPI2C7_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   LPI2C8_IRQHandler                               /* WAKEUPMIX LPI2C Master interrupt*/
    .long   PDM_HWVAD_ERROR_IRQHandler                      /* AONMIXMIX PDM interrupt*/
    .long   PDM_HWVAD_EVENT_IRQHandler                      /* AONMIXMIX PDM interrupt*/
    .long   PDM_ERROR_IRQHandler                            /* AONMIXMIX PDM interrupt*/
    .long   PDM_EVENT_IRQHandler                            /* AONMIXMIX PDM interrupt*/
    .long   RESERVED205_IRQHandler                          /* WAKEUPMIX AUDIO XCVR interrupt*/
    .long   RESERVED206_IRQHandler                          /* WAKEUPMIX AUDIO XCVR interrupt*/
    .long   USDHC3_IRQHandler                               /* MEGAMIX uSDHC Enhanced SDHC Interrupt Request*/
    .long   RESERVED208_IRQHandler                          /* OCRAM ECC single bit error*/
    .long   RESERVED209_IRQHandler                          /* OCRAM ECC multi bit error*/
    .long   RESERVED210_IRQHandler                          /* CM33 MCM interrupt*/
    .long   RESERVED211_IRQHandler                          /* ANAMIX SFA interrupt*/
    .long   RESERVED212_IRQHandler                          /* GIC700 Fault*/
    .long   RESERVED213_IRQHandler                          /* GIC700 Error*/
    .long   RESERVED214_IRQHandler                          /* GIC700 PMU Counter Overflow*/
    .long   ADC_ER_IRQHandler                               /* ADC interrupt*/
    .long   ADC_WD_IRQHandler                               /* ADC interrupt*/
    .long   ADC_EOC_IRQHandler                              /* ADC interrupt*/
    .long   RESERVED218_IRQHandler                          /* s500 glue logic IRQ*/
    .long   I3C1_RAW_IRQ_GLUE_IRQHandler                    /* I3C1 wakeup irq after double sync*/
    .long   I3C2_RAW_IRQ_GLUE_IRQHandler                    /* I3C2 wakeup irq after double sync*/
    .long   MU5_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU6_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU7_B_IRQHandler                                /* WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU8_B_IRQHandler                                /* WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   XSPI_SLV_IRQHandler                             /* WAKEUPMIX XSPI Responder*/
    .long   FCCU0_IRQHandler                                /* AONMIX FCCU Interrupt Reaction 0*/
    .long   FCCU1_IRQHandler                                /* AONMIX FCCU Interrupt Reaction 1*/
    .long   FCCU2_IRQHandler                                /* AONMIX FCCU Interrupt Reaction 2*/
    .long   STCU_IRQHandler                                 /* AONMIX STCU Selftest end Interrupt*/
    .long   DISP_IRQSTEER0_IRQHandler                       /* DISPLAYMIX IRQSTEER 0: Common Control*/
    .long   DISP_IRQSTEER1_IRQHandler                       /* DISPLAYMIX IRQSTEER 1: Display 0 Domain 0*/
    .long   DISP_IRQSTEER2_IRQHandler                       /* DISPLAYMIX IRQSTEER 2: Display 0 Domain 1*/
    .long   DISP_IRQSTEER3_IRQHandler                       /* DISPLAYMIX IRQSTEER 3: Display 1 Domain 0*/
    .long   DISP_IRQSTEER4_IRQHandler                       /* DISPLAYMIX IRQSTEER 4: Display 1 Domain 1*/
    .long   DISP_IRQSTEER7_IRQHandler                       /* DISPLAYMIX IRQSTEER 7: Blitter*/
    .long   MU_C1_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   ISI_0_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 0*/
    .long   ISP_IRQHandler                                  /* ISP Processing Interrupt - Context 0*/
    .long   M7MIX_IRQHandler                                /* M7MIX MCM interrupt*/
    .long   IRQSTEER_0_IRQHandler                           /* IRQSTEER0 interrupt*/
    .long   IRQSTEER_1_IRQHandler                           /* IRQSTEER1 interrupt*/
    .long   IRQSTEER_2_IRQHandler                           /* IRQSTEER2 interrupt*/
    .long   IRQSTEER_3_IRQHandler                           /* IRQSTEER3 interrupt*/
    .long   IRQSTEER_4_IRQHandler                           /* IRQSTEER4 interrupt*/
    .long   IRQSTEER_5_IRQHandler                           /* IRQSTEER5 interrupt*/
    .long   IRQSTEER_6_IRQHandler                           /* IRQSTEER6 interrupt*/
    .long   IRQSTEER_7_IRQHandler                           /* IRQSTEER7 interrupt*/
    .long   IRQSTEER_8_IRQHandler                           /* IRQSTEER8 interrupt*/
    .long   IRQSTEER_9_IRQHandler                           /* IRQSTEER9 interrupt*/
    .long   IRQSTEER_10_IRQHandler                          /* IRQSTEER10 interrupt*/
    .long   IRQSTEER_11_IRQHandler                          /* IRQSTEER11 interrupt*/
    .long   MU1_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU1_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU2_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU2_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU3_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU3_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU4_A_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU4_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU5_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU6_B_IRQHandler                                /* AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB*/
    .long   MU7_A_IRQHandler                                /* WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU8_A_IRQHandler                                /* WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MSGINTR1_IRQHandler                             /* MSGINTR Instance 1, Interrupt 1*/
    .long   MSGINTR2_IRQHandler                             /* MSGINTR Instance 2, Interrupt 1*/
    .long   V2X_APCH1_IRQHandler                            /* V2X-FH MU APCH1 (APP1) A_TX interrupt*/
    .long   V2X_HSM2_IRQHandler                             /* V2X-FH MU APHSM2 (HSM2) A_TX interrupt*/
    .long   RESERVED268_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED269_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED270_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED271_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED272_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED273_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED274_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED275_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED276_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED277_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED278_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED279_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED280_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED281_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED282_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED283_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED284_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED285_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED286_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED287_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED288_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED289_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED290_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED291_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED292_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED293_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED294_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED295_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED296_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED297_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED298_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED299_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED300_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED301_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED302_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED303_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED304_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED305_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED306_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED307_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED308_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED309_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED310_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED311_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED312_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED313_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED314_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED315_IRQHandler                          /* Reserved interrupt*/
    .long   TRDC_MGR_C_IRQHandler                           /* CAMERAMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_D_IRQHandler                           /* DISPLAYMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_E_IRQHandler                           /* NETCMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_G_IRQHandler                           /* GPUMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_H_IRQHandler                           /* HSIOMIX TRDC transfer error interrupt*/
    .long   TRDC_MGR_V_IRQHandler                           /* VPUMIX TRDC transfer error interrupt*/
    .long   ERM_A_IRQHandler                                /* AONMIX ERM Single bit corrected ECC Error*/
    .long   RESERVED323_IRQHandler                          /* M7MIX ERM Single bit corrected ECC Error*/
    .long   ERM_W_IRQHandler                                /* WAKEUPMIX ERM Single bit corrected ECC Error*/
    .long   ERM_ML_IRQHandler                               /* NPUMIX ERM Single bit corrected ECC Error*/
    .long   DMA5_3_ERROR_IRQHandler                         /* WAKEUPMIX ACP EDMA error interrupt*/
    .long   OCRAM_C_IRQHandler                              /* OCRAM_C ECC multiple bit or address error*/
    .long   RESERVED328_IRQHandler                          /* CAMERAMIX Cortex-M0+ Cache write-buffer error*/
    .long   RESERVED329_IRQHandler                          /* CAMERAMIX Cortex-M0+ Cache data parity error*/
    .long   RESERVED330_IRQHandler                          /* V2X-FH MU APSHE (SHE) A_TX interrupt*/
    .long   RESERVED331_IRQHandler                          /* V2X-FH MU SCU/APDEBUG (DEBUG) B_TX interrupt*/
    .long   RESERVED332_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED333_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED334_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED335_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED336_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED337_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED338_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED339_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED340_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED341_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED342_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED343_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED344_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED345_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED346_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED347_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED348_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED349_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED350_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED351_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED352_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED353_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED354_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED355_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED356_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED357_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED358_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED359_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED360_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED361_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED362_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED363_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED364_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED365_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED366_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED367_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED368_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED369_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED370_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED371_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED372_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED373_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED374_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED375_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED376_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED377_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED378_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED379_IRQHandler                          /* Reserved interrupt*/
    .long   DMA5_3_0_1_IRQHandler                           /* WAKEUPMIX ACP EDMA channel 0 interrupt*/
    .long   DMA5_3_2_3_IRQHandler                           /* WAKEUPMIX ACP EDMA channel 2 interrupt*/
    .long   DMA5_3_4_5_IRQHandler                           /* WAKEUPMIX ACP EDMA channel 4 interrupt*/
    .long   DMA5_3_6_7_IRQHandler                           /* WAKEUPMIX ACP EDMA channel 6 interrupt*/
    .long   DMA5_3_8_9_IRQHandler                           /* WAKEUPMIX ACP EDMA channel 8 interrupt*/
    .long   DMA5_3_10_11_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 10 interrupt*/
    .long   DMA5_3_12_13_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 12 interrupt*/
    .long   DMA5_3_14_15_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 14 interrupt*/
    .long   DMA5_3_16_17_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 16 interrupt*/
    .long   DMA5_3_18_19_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 18 interrupt*/
    .long   DMA5_3_20_21_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 20 interrupt*/
    .long   DMA5_3_22_23_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 22 interrupt*/
    .long   DMA5_3_24_25_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 24 interrupt*/
    .long   DMA5_3_26_27_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 26 interrupt*/
    .long   DMA5_3_28_29_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 28 interrupt*/
    .long   DMA5_3_30_31_IRQHandler                         /* WAKEUPMIX ACP EDMA channel 30 interrupt*/
    .long   RESERVED396_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED397_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED398_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED399_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED400_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED401_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED402_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED403_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED404_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED405_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED406_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED407_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED408_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED409_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED410_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED411_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED412_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED413_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED414_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED415_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED416_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED417_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED418_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED419_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED420_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED421_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED422_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED423_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED424_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED425_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED426_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED427_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED428_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED429_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED430_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED431_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED432_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED433_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED434_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED435_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED436_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED437_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED438_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED439_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED440_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED441_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED442_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED443_IRQHandler                          /* Reserved interrupt*/
    .long   DMA5_3_32_33_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 32 interrupt*/
    .long   DMA5_3_34_35_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 34 interrupt*/
    .long   DMA5_3_36_37_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 36 interrupt*/
    .long   DMA5_3_38_39_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 38 interrupt*/
    .long   DMA5_3_40_41_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 40 interrupt*/
    .long   DMA5_3_42_43_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 42 interrupt*/
    .long   DMA5_3_44_45_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 44 interrupt*/
    .long   DMA5_3_46_47_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 46 interrupt*/
    .long   DMA5_3_48_49_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 48 interrupt*/
    .long   DMA5_3_50_51_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 50 interrupt*/
    .long   DMA5_3_52_53_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 52 interrupt*/
    .long   DMA5_3_54_55_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 54 interrupt*/
    .long   DMA5_3_56_57_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 56 interrupt*/
    .long   DMA5_3_58_59_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 58 interrupt*/
    .long   DMA5_3_60_61_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 60 interrupt*/
    .long   DMA5_3_62_63_IRQHandler                         /*  WAKEUPMIX ACP EDMA channel 62 interrupt*/
    .long   RESERVED460_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED461_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED462_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED463_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED464_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED465_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED466_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED467_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED468_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED469_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED470_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED471_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED472_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED473_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED474_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED475_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED476_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED477_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED478_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED479_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED480_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED481_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED482_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED483_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED484_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED485_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED486_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED487_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED488_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED489_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED490_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED491_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED492_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED493_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED494_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED495_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED496_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED497_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED498_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED499_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED500_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED501_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED502_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED503_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED504_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED505_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED506_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED507_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED508_IRQHandler                          /* GPUMIX GPU Interrupt*/
    .long   RESERVED509_IRQHandler                          /* GPUMIX Job Interrupt*/
    .long   RESERVED510_IRQHandler                          /* GPUMIX MMU Interrupt*/
    .long   RESERVED511_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED512_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED513_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED514_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED515_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED516_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED517_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED518_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED519_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED520_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED521_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED522_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED523_IRQHandler                          /* CODA980 VPU Encoder*/
    .long   RESERVED524_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED525_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED526_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED527_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED528_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED529_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED530_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED531_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED532_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED533_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED534_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED535_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED536_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED537_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED538_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED539_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED540_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED541_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED542_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED543_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED544_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED545_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED546_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED547_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED548_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED549_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED550_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED551_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED552_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED553_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED554_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED555_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED556_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED557_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED558_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED559_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED560_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED561_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED562_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED563_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED564_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED565_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED566_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED567_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED568_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED569_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED570_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED571_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED572_IRQHandler                          /* NETC iEPRC PCI INT (one per each of two RC-EC)*/
    .long   RESERVED573_IRQHandler                          /* NETC iEPRC PCI INT (one per each of two RC-EC)*/
    .long   RESERVED574_IRQHandler                          /* PCIe Controller 1 INTA*/
    .long   RESERVED575_IRQHandler                          /* PCIe Controller 1 INTB*/
    .long   RESERVED576_IRQHandler                          /* PCIe Controller 1 INTC*/
    .long   RESERVED577_IRQHandler                          /* PCIe Controller 1 INTD*/
    .long   RESERVED578_IRQHandler                          /* PCIe miscellaneous interrupts*/
    .long   RESERVED579_IRQHandler                          /* PCIe Controller EDMA channel interrupt*/
    .long   RESERVED580_IRQHandler                          /* Reserved*/
    .long   RESERVED581_IRQHandler                          /* Reserved*/
    .long   RESERVED582_IRQHandler                          /* Reserved*/
    .long   RESERVED583_IRQHandler                          /* Reserved*/
    .long   RESERVED584_IRQHandler                          /* Reserved*/
    .long   RESERVED585_IRQHandler                          /* Reserved*/
    .long   RESERVED586_IRQHandler                          /* NPU Functional interrupt*/
    .long   RESERVED587_IRQHandler                          /* NPU Fault interrupt*/
    .long   RESERVED588_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED589_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED590_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED591_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED592_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED593_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED594_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED595_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED596_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED597_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED598_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED599_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED600_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED601_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED602_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED603_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED604_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED605_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED606_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED607_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED608_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED609_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED610_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED611_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED612_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED613_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED614_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED615_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED616_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED617_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED618_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED619_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED620_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED621_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED622_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED623_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED624_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED625_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED626_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED627_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED628_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED629_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED630_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED631_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED632_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED633_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED634_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED635_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED636_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED637_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED638_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED639_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED640_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED641_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED642_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED643_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED644_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED645_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED646_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED647_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED648_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED649_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED650_IRQHandler                          /* Reserved interrupt*/
    .long   LP_HDSK_GSKT_IRQHandler                         /* SRC/GPC Low Power Handshake Gasket interrupt request for system management*/
    .long   RESERVED652_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED653_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED654_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED655_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED656_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED657_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED658_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED659_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED660_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED661_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED662_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED663_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED664_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED665_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED666_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED667_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED668_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED669_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED670_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED671_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED672_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED673_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED674_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED675_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED676_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED677_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED678_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED679_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED680_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED681_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED682_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED683_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED684_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED685_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED686_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED687_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED688_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED689_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED690_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED691_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED692_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED693_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED694_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED695_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED696_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED697_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED698_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED699_IRQHandler                          /* Reserved interrupt*/
    .long   MU_C2_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C3_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C4_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C5_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C6_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C7_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C8_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_C9_IRQHandler                                /* CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   ISI_1_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 1*/
    .long   ISI_2_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 2*/
    .long   ISI_3_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 3*/
    .long   ISI_4_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 4*/
    .long   ISI_5_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 5*/
    .long   ISI_6_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 6*/
    .long   ISI_7_IRQHandler                                /* CAMERAMIX ISI interrupt Channel 7*/
    .long   DMA5_4_ERROR_IRQHandler                         /* CAMERAMIX EDMA error interrupt*/
    .long   RESERVED716_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED717_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED718_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED719_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED720_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED721_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED722_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED723_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED724_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED725_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED726_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED727_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED728_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED729_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED730_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED731_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED732_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED733_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED734_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED735_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED736_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED737_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED738_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED739_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED740_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED741_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED742_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED743_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED744_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED745_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED746_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED747_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED748_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED749_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED750_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED751_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED752_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED753_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED754_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED755_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED756_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED757_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED758_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED759_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED760_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED761_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED762_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED763_IRQHandler                          /* Reserved interrupt*/
    .long   DMA5_4_0_1_IRQHandler                           /* CAMERAMIX EDMA channel 0 interrupt*/
    .long   DMA5_4_2_3_IRQHandler                           /* CAMERAMIX EDMA channel 2 interrupt*/
    .long   DMA5_4_4_5_IRQHandler                           /* CAMERAMIX EDMA channel 4 interrupt*/
    .long   DMA5_4_6_7_IRQHandler                           /* CAMERAMIX EDMA channel 6 interrupt*/
    .long   DMA5_4_8_9_IRQHandler                           /* CAMERAMIX EDMA channel 8 interrupt*/
    .long   DMA5_4_10_11_IRQHandler                         /* CAMERAMIX EDMA channel 10 interrupt*/
    .long   DMA5_4_12_13_IRQHandler                         /* CAMERAMIX EDMA channel 12 interrupt*/
    .long   DMA5_4_14_15_IRQHandler                         /* CAMERAMIX EDMA channel 14 interrupt*/
    .long   DMA5_4_16_17_IRQHandler                         /* CAMERAMIX EDMA channel 16 interrupt*/
    .long   DMA5_4_18_19_IRQHandler                         /* CAMERAMIX EDMA channel 18 interrupt*/
    .long   DMA5_4_20_21_IRQHandler                         /* CAMERAMIX EDMA channel 20 interrupt*/
    .long   DMA5_4_22_23_IRQHandler                         /* CAMERAMIX EDMA channel 22 interrupt*/
    .long   DMA5_4_24_25_IRQHandler                         /* CAMERAMIX EDMA channel 24 interrupt*/
    .long   DMA5_4_26_27_IRQHandler                         /* CAMERAMIX EDMA channel 26 interrupt*/
    .long   DMA5_4_28_29_IRQHandler                         /* CAMERAMIX EDMA channel 28 interrupt*/
    .long   DMA5_4_30_31_IRQHandler                         /* CAMERAMIX EDMA channel 30 interrupt*/
    .long   RESERVED780_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED781_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED782_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED783_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED784_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED785_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED786_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED787_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED788_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED789_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED790_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED791_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED792_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED793_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED794_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED795_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED796_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED797_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED798_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED799_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED800_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED801_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED802_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED803_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED804_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED805_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED806_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED807_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED808_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED809_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED810_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED811_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED812_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED813_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED814_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED815_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED816_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED817_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED818_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED819_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED820_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED821_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED822_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED823_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED824_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED825_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED826_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED827_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED828_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 1: Buffer overflow*/
    .long   RESERVED829_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 1: Interlaced Error*/
    .long   RESERVED830_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 1: Pixel Data Type Error*/
    .long   RESERVED831_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 2: Buffer overflow*/
    .long   RESERVED832_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 2: Interlaced Error*/
    .long   RESERVED833_IRQHandler                          /* CAMERAMIX CSI Formatting Unit 2: Pixel Data Type Error*/
    .long   CSI1_IRQHandler                                 /* CAMERAMIX CSI1 (Standalone MIPI-CSI) interrupt*/
    .long   CSI2_IRQHandler                                 /* CAMERAMIX CSI2 (Combo MIPI-CSI/DSI) interrupt*/
    .long   ASRC1_IRQHandler                                /* mirq_asrc1_b*/
    .long   RESERVED837_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED838_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED839_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED840_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED841_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED842_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED843_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED844_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED845_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED846_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED847_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED848_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED849_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED850_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED851_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED852_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED853_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED854_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED855_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED856_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED857_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED858_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED859_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED860_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED861_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED862_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED863_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED864_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED865_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED866_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED867_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED868_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED869_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED870_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED871_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED872_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED873_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED874_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED875_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED876_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED877_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED878_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED879_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED880_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED881_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED882_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED883_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED884_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED885_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED886_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED887_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED888_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED889_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED890_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED891_IRQHandler                          /* Reserved interrupt*/
    .long   ASRC2_IRQHandler                                /* mirq_asrc2_b*/
    .long   RESERVED893_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED894_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED895_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED896_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED897_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED898_IRQHandler                          /* Reserved interrupt*/
    .long   NOC_VPU_IRQHandler                              /* Reserved interrupt*/
    .long   NOC_DISPLAY_IRQHandler                          /* Reserved interrupt*/
    .long   NOC_CAMERA_IRQHandler                           /* Reserved interrupt*/
    .long   NOC_HSIO_IRQHandler                             /* Reserved interrupt*/
    .long   NOC_WAKEUP_IRQHandler                           /* Reserved interrupt*/
    .long   NOC_CENTRAL_IRQHandler                          /* Reserved interrupt*/
    .long   ERM_DISPLAY_IRQHandler                          /* DISPLAYMIX ERM Single bit corrected ECC Error*/
    .long   RESERVED906_IRQHandler                          /* Reserved*/
    .long   SAI6_IRQHandler                                 /* WAKEUPMIX SAI TX interrupt*/
    .long   RESERVED908_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED909_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED910_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED911_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED912_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED913_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED914_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED915_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED916_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED917_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED918_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED919_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED920_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED921_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED922_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED923_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED924_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED925_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED926_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED927_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED928_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED929_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED930_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED931_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED932_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED933_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED934_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED935_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED936_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED937_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED938_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED939_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED940_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED941_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED942_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED943_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED944_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED945_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED946_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED947_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED948_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED949_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED950_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED951_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED952_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED953_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED954_IRQHandler                          /* Reserved interrupt*/
    .long   RESERVED955_IRQHandler                          /* Reserved interrupt*/
    .long   XSPI1_0_IRQHandler                              /* xspi1 all interrupts ORed output for EENV0 (MEENV)*/
    .long   XSPI1_1_IRQHandler                              /* xspi1 all interrupts ORed output for EENV1 (MEENV)*/
    .long   XSPI1_2_IRQHandler                              /* xspi1 all interrupts ORed output for EENV2 (MEENV)*/
    .long   XSPI1_3_IRQHandler                              /* xspi1 all interrupts ORed output for EENV3 (MEENV)*/
    .long   XSPI1_4_IRQHandler                              /* xspi1 all interrupts ORed output for EENV4 (MEENV)*/
    .long   RESERVED961_IRQHandler                          /* Anamix Gllitch Detector output (da_ip_voltage_glitch_detector_cln16ffc). It's a latch signal. It can be cleared.  Positive polarity i.e interrupt is generated when 0-->1*/
    .long   RESERVED962_IRQHandler                          /* Anamix VDET output (da_ip_vdetect_c16ffc). Detects high threshold on Core supply. It's a latch signal. It can be cleared.  Positive polarity i.e interrupt is generated when 0-->1*/
    .long   CCM_IRQHandler                                  /* LPCG Timeout interrupt generated by CCGR (CCM)*/
    .long   MU_D1_IRQHandler                                /* DISPLAYMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   MU_D2_IRQHandler                                /* DISPLAYMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA*/
    .long   GPT2_IRQHandler                                 /* WAKEUPMIX GPT2 interrupt*/
    .long   GPT3_IRQHandler                                 /* WAKEUPMIX GPT2 interrupt*/
    .long   GPT4_IRQHandler                                 /* WAKEUPMIX GPT2 interrupt*/
    .long   GPT5_IRQHandler                                 /* WAKEUPMIX GPT2 interrupt*/
    .long   LPSPI9_IRQHandler                               /* DISPLAYMIX LPSPI interrupt*/
    .long   0xFFFFFFFF                                      /*  Reserved for user TRIM value*/

    .size   __isr_vector, . - __isr_vector

    .text
    .thumb

#if defined (__cplusplus)
#ifdef __REDLIB__
#error Redlib does not support C++
#endif
#endif
/* Reset Handler */

    .thumb_func
    .align 2
    .globl   Reset_Handler
    .weak    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
    cpsid   i               /* Mask interrupts */
    .equ    VTOR, 0xE000ED08
    ldr     r0, =VTOR
    ldr     r1, =__isr_vector
    str     r1, [r0]
    ldr     r2, [r1]
    msr     msp, r2
#ifndef __NO_SYSTEM_INIT
    ldr   r0,=SystemInit
    blx   r0
#endif

/* DTCM initializaiton in case of ECC error */
    movs    r0, 0
    ldr     r1, =0x20000000
    ldr     r2, =0x2003ffff
.LC3:
    cmp     r1, r2
    dmb     0xf
    itt     lt
    strlt   r0, [r1], #4
    blt     .LC3
/* End of TCM initializaiton */

/*     Loop to copy data from read only memory to RAM. The ranges
 *      of copy from/to are specified by following symbols evaluated in
 *      linker script.
 *      __etext: End of code section, i.e., begin of data sections to copy from.
 *      __data_start__/__data_end__: RAM address range that data should be
 *      __noncachedata_start__/__noncachedata_end__ : none cachable region
 *      copied to. Both must be aligned to 4 bytes boundary.  */

    ldr    r1, =__etext
    ldr    r2, =__data_start__
    ldr    r3, =__data_end__

#ifdef __PERFORMANCE_IMPLEMENTATION
/* Here are two copies of loop implementations. First one favors performance
 * and the second one favors code size. Default uses the second one.
 * Define macro "__PERFORMANCE_IMPLEMENTATION" in project to use the first one */
    subs    r3, r2
    ble    .LC1
.LC0:
    subs    r3, #4
    ldr    r0, [r1, r3]
    str    r0, [r2, r3]
    bgt    .LC0
.LC1:
#else  /* code size implemenation */
.LC0:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt    .LC0
#endif
#ifdef __STARTUP_INITIALIZE_NONCACHEDATA
    ldr    r2, =__noncachedata_start__
    ldr    r3, =__noncachedata_init_end__
#ifdef __PERFORMANCE_IMPLEMENTATION
/* Here are two copies of loop implementations. First one favors performance
 * and the second one favors code size. Default uses the second one.
 * Define macro "__PERFORMANCE_IMPLEMENTATION" in project to use the first one */
    subs    r3, r2
    ble    .LC3
.LC2:
    subs    r3, #4
    ldr    r0, [r1, r3]
    str    r0, [r2, r3]
    bgt    .LC2
.LC3:
#else  /* code size implemenation */
.LC2:
    cmp     r2, r3
    ittt    lt
    ldrlt   r0, [r1], #4
    strlt   r0, [r2], #4
    blt    .LC2
#endif
/* zero inited ncache section initialization */
    ldr r3, =__noncachedata_end__
    movs    r0,0
.LC4:
    cmp    r2,r3
    itt    lt
    strlt   r0,[r2],#4
    blt    .LC4
#endif /* __STARTUP_INITIALIZE_NONCACHEDATA */

#ifdef __STARTUP_CLEAR_BSS
/*     This part of work usually is done in C library startup code. Otherwise,
 *     define this macro to enable it in this startup.
 *
 *     Loop to zero out BSS section, which uses following symbols
 *     in linker script:
 *      __bss_start__: start of BSS section. Must align to 4
 *      __bss_end__: end of BSS section. Must align to 4
 */
    ldr r1, =__bss_start__
    ldr r2, =__bss_end__

    movs    r0, 0
.LC5:
    cmp     r1, r2
    itt    lt
    strlt   r0, [r1], #4
    blt    .LC5
#endif /* __STARTUP_CLEAR_BSS */

    cpsie   i               /* Unmask interrupts */
#ifndef __START
#ifdef __REDLIB__
#define __START __main
#else
#define __START _start
#endif
#endif
#ifndef __ATOLLIC__
    ldr   r0,=__START
    blx   r0
#else
    ldr   r0,=__libc_init_array
    blx   r0
    ldr   r0,=main
    bx    r0
#endif
    .pool
    .size Reset_Handler, . - Reset_Handler

    .align  1
    .thumb_func
    .weak DefaultISR
    .type DefaultISR, %function
DefaultISR:
    b DefaultISR
    .size DefaultISR, . - DefaultISR

    .align 1
    .thumb_func
    .weak NMI_Handler
    .type NMI_Handler, %function
NMI_Handler:
    ldr   r0,=NMI_Handler
    bx    r0
    .size NMI_Handler, . - NMI_Handler

    .align 1
    .thumb_func
    .weak HardFault_Handler
    .type HardFault_Handler, %function
HardFault_Handler:
    ldr   r0,=HardFault_Handler
    bx    r0
    .size HardFault_Handler, . - HardFault_Handler

    .align 1
    .thumb_func
    .weak SVC_Handler
    .type SVC_Handler, %function
SVC_Handler:
    ldr   r0,=SVC_Handler
    bx    r0
    .size SVC_Handler, . - SVC_Handler

    .align 1
    .thumb_func
    .weak PendSV_Handler
    .type PendSV_Handler, %function
PendSV_Handler:
    ldr   r0,=PendSV_Handler
    bx    r0
    .size PendSV_Handler, . - PendSV_Handler

    .align 1
    .thumb_func
    .weak SysTick_Handler
    .type SysTick_Handler, %function
SysTick_Handler:
    ldr   r0,=SysTick_Handler
    bx    r0
    .size SysTick_Handler, . - SysTick_Handler

    .align 1
    .thumb_func
    .weak CAN1_IRQHandler
    .type CAN1_IRQHandler, %function
CAN1_IRQHandler:
    ldr   r0,=CAN1_DriverIRQHandler
    bx    r0
    .size CAN1_IRQHandler, . - CAN1_IRQHandler

    .align 1
    .thumb_func
    .weak CAN1_ERROR_IRQHandler
    .type CAN1_ERROR_IRQHandler, %function
CAN1_ERROR_IRQHandler:
    ldr   r0,=CAN1_ERROR_DriverIRQHandler
    bx    r0
    .size CAN1_ERROR_IRQHandler, . - CAN1_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak I3C1_IRQHandler
    .type I3C1_IRQHandler, %function
I3C1_IRQHandler:
    ldr   r0,=I3C1_DriverIRQHandler
    bx    r0
    .size I3C1_IRQHandler, . - I3C1_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C1_IRQHandler
    .type LPI2C1_IRQHandler, %function
LPI2C1_IRQHandler:
    ldr   r0,=LPI2C1_DriverIRQHandler
    bx    r0
    .size LPI2C1_IRQHandler, . - LPI2C1_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C2_IRQHandler
    .type LPI2C2_IRQHandler, %function
LPI2C2_IRQHandler:
    ldr   r0,=LPI2C2_DriverIRQHandler
    bx    r0
    .size LPI2C2_IRQHandler, . - LPI2C2_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI1_IRQHandler
    .type LPSPI1_IRQHandler, %function
LPSPI1_IRQHandler:
    ldr   r0,=LPSPI1_DriverIRQHandler
    bx    r0
    .size LPSPI1_IRQHandler, . - LPSPI1_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI2_IRQHandler
    .type LPSPI2_IRQHandler, %function
LPSPI2_IRQHandler:
    ldr   r0,=LPSPI2_DriverIRQHandler
    bx    r0
    .size LPSPI2_IRQHandler, . - LPSPI2_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART1_IRQHandler
    .type LPUART1_IRQHandler, %function
LPUART1_IRQHandler:
    ldr   r0,=LPUART1_DriverIRQHandler
    bx    r0
    .size LPUART1_IRQHandler, . - LPUART1_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART2_IRQHandler
    .type LPUART2_IRQHandler, %function
LPUART2_IRQHandler:
    ldr   r0,=LPUART2_DriverIRQHandler
    bx    r0
    .size LPUART2_IRQHandler, . - LPUART2_IRQHandler

    .align 1
    .thumb_func
    .weak SAI1_IRQHandler
    .type SAI1_IRQHandler, %function
SAI1_IRQHandler:
    ldr   r0,=SAI1_DriverIRQHandler
    bx    r0
    .size SAI1_IRQHandler, . - SAI1_IRQHandler

    .align 1
    .thumb_func
    .weak CAN2_IRQHandler
    .type CAN2_IRQHandler, %function
CAN2_IRQHandler:
    ldr   r0,=CAN2_DriverIRQHandler
    bx    r0
    .size CAN2_IRQHandler, . - CAN2_IRQHandler

    .align 1
    .thumb_func
    .weak CAN2_ERROR_IRQHandler
    .type CAN2_ERROR_IRQHandler, %function
CAN2_ERROR_IRQHandler:
    ldr   r0,=CAN2_ERROR_DriverIRQHandler
    bx    r0
    .size CAN2_ERROR_IRQHandler, . - CAN2_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak CAN3_IRQHandler
    .type CAN3_IRQHandler, %function
CAN3_IRQHandler:
    ldr   r0,=CAN3_DriverIRQHandler
    bx    r0
    .size CAN3_IRQHandler, . - CAN3_IRQHandler

    .align 1
    .thumb_func
    .weak CAN3_ERROR_IRQHandler
    .type CAN3_ERROR_IRQHandler, %function
CAN3_ERROR_IRQHandler:
    ldr   r0,=CAN3_ERROR_DriverIRQHandler
    bx    r0
    .size CAN3_ERROR_IRQHandler, . - CAN3_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXIO1_IRQHandler
    .type FLEXIO1_IRQHandler, %function
FLEXIO1_IRQHandler:
    ldr   r0,=FLEXIO1_DriverIRQHandler
    bx    r0
    .size FLEXIO1_IRQHandler, . - FLEXIO1_IRQHandler

    .align 1
    .thumb_func
    .weak FLEXIO2_IRQHandler
    .type FLEXIO2_IRQHandler, %function
FLEXIO2_IRQHandler:
    ldr   r0,=FLEXIO2_DriverIRQHandler
    bx    r0
    .size FLEXIO2_IRQHandler, . - FLEXIO2_IRQHandler

    .align 1
    .thumb_func
    .weak I3C2_IRQHandler
    .type I3C2_IRQHandler, %function
I3C2_IRQHandler:
    ldr   r0,=I3C2_DriverIRQHandler
    bx    r0
    .size I3C2_IRQHandler, . - I3C2_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C3_IRQHandler
    .type LPI2C3_IRQHandler, %function
LPI2C3_IRQHandler:
    ldr   r0,=LPI2C3_DriverIRQHandler
    bx    r0
    .size LPI2C3_IRQHandler, . - LPI2C3_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C4_IRQHandler
    .type LPI2C4_IRQHandler, %function
LPI2C4_IRQHandler:
    ldr   r0,=LPI2C4_DriverIRQHandler
    bx    r0
    .size LPI2C4_IRQHandler, . - LPI2C4_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI3_IRQHandler
    .type LPSPI3_IRQHandler, %function
LPSPI3_IRQHandler:
    ldr   r0,=LPSPI3_DriverIRQHandler
    bx    r0
    .size LPSPI3_IRQHandler, . - LPSPI3_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI4_IRQHandler
    .type LPSPI4_IRQHandler, %function
LPSPI4_IRQHandler:
    ldr   r0,=LPSPI4_DriverIRQHandler
    bx    r0
    .size LPSPI4_IRQHandler, . - LPSPI4_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART3_IRQHandler
    .type LPUART3_IRQHandler, %function
LPUART3_IRQHandler:
    ldr   r0,=LPUART3_DriverIRQHandler
    bx    r0
    .size LPUART3_IRQHandler, . - LPUART3_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART4_IRQHandler
    .type LPUART4_IRQHandler, %function
LPUART4_IRQHandler:
    ldr   r0,=LPUART4_DriverIRQHandler
    bx    r0
    .size LPUART4_IRQHandler, . - LPUART4_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART5_IRQHandler
    .type LPUART5_IRQHandler, %function
LPUART5_IRQHandler:
    ldr   r0,=LPUART5_DriverIRQHandler
    bx    r0
    .size LPUART5_IRQHandler, . - LPUART5_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART6_IRQHandler
    .type LPUART6_IRQHandler, %function
LPUART6_IRQHandler:
    ldr   r0,=LPUART6_DriverIRQHandler
    bx    r0
    .size LPUART6_IRQHandler, . - LPUART6_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART7_IRQHandler
    .type LPUART7_IRQHandler, %function
LPUART7_IRQHandler:
    ldr   r0,=LPUART7_DriverIRQHandler
    bx    r0
    .size LPUART7_IRQHandler, . - LPUART7_IRQHandler

    .align 1
    .thumb_func
    .weak LPUART8_IRQHandler
    .type LPUART8_IRQHandler, %function
LPUART8_IRQHandler:
    ldr   r0,=LPUART8_DriverIRQHandler
    bx    r0
    .size LPUART8_IRQHandler, . - LPUART8_IRQHandler

    .align 1
    .thumb_func
    .weak USDHC1_IRQHandler
    .type USDHC1_IRQHandler, %function
USDHC1_IRQHandler:
    ldr   r0,=USDHC1_DriverIRQHandler
    bx    r0
    .size USDHC1_IRQHandler, . - USDHC1_IRQHandler

    .align 1
    .thumb_func
    .weak USDHC2_IRQHandler
    .type USDHC2_IRQHandler, %function
USDHC2_IRQHandler:
    ldr   r0,=USDHC2_DriverIRQHandler
    bx    r0
    .size USDHC2_IRQHandler, . - USDHC2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_ERROR_IRQHandler
    .type DMA3_ERROR_IRQHandler, %function
DMA3_ERROR_IRQHandler:
    ldr   r0,=DMA3_ERROR_DriverIRQHandler
    bx    r0
    .size DMA3_ERROR_IRQHandler, . - DMA3_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_0_IRQHandler
    .type DMA3_0_IRQHandler, %function
DMA3_0_IRQHandler:
    ldr   r0,=DMA3_0_DriverIRQHandler
    bx    r0
    .size DMA3_0_IRQHandler, . - DMA3_0_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_1_IRQHandler
    .type DMA3_1_IRQHandler, %function
DMA3_1_IRQHandler:
    ldr   r0,=DMA3_1_DriverIRQHandler
    bx    r0
    .size DMA3_1_IRQHandler, . - DMA3_1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_2_IRQHandler
    .type DMA3_2_IRQHandler, %function
DMA3_2_IRQHandler:
    ldr   r0,=DMA3_2_DriverIRQHandler
    bx    r0
    .size DMA3_2_IRQHandler, . - DMA3_2_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_3_IRQHandler
    .type DMA3_3_IRQHandler, %function
DMA3_3_IRQHandler:
    ldr   r0,=DMA3_3_DriverIRQHandler
    bx    r0
    .size DMA3_3_IRQHandler, . - DMA3_3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_4_IRQHandler
    .type DMA3_4_IRQHandler, %function
DMA3_4_IRQHandler:
    ldr   r0,=DMA3_4_DriverIRQHandler
    bx    r0
    .size DMA3_4_IRQHandler, . - DMA3_4_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_5_IRQHandler
    .type DMA3_5_IRQHandler, %function
DMA3_5_IRQHandler:
    ldr   r0,=DMA3_5_DriverIRQHandler
    bx    r0
    .size DMA3_5_IRQHandler, . - DMA3_5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_6_IRQHandler
    .type DMA3_6_IRQHandler, %function
DMA3_6_IRQHandler:
    ldr   r0,=DMA3_6_DriverIRQHandler
    bx    r0
    .size DMA3_6_IRQHandler, . - DMA3_6_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_7_IRQHandler
    .type DMA3_7_IRQHandler, %function
DMA3_7_IRQHandler:
    ldr   r0,=DMA3_7_DriverIRQHandler
    bx    r0
    .size DMA3_7_IRQHandler, . - DMA3_7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_8_IRQHandler
    .type DMA3_8_IRQHandler, %function
DMA3_8_IRQHandler:
    ldr   r0,=DMA3_8_DriverIRQHandler
    bx    r0
    .size DMA3_8_IRQHandler, . - DMA3_8_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_9_IRQHandler
    .type DMA3_9_IRQHandler, %function
DMA3_9_IRQHandler:
    ldr   r0,=DMA3_9_DriverIRQHandler
    bx    r0
    .size DMA3_9_IRQHandler, . - DMA3_9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_10_IRQHandler
    .type DMA3_10_IRQHandler, %function
DMA3_10_IRQHandler:
    ldr   r0,=DMA3_10_DriverIRQHandler
    bx    r0
    .size DMA3_10_IRQHandler, . - DMA3_10_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_11_IRQHandler
    .type DMA3_11_IRQHandler, %function
DMA3_11_IRQHandler:
    ldr   r0,=DMA3_11_DriverIRQHandler
    bx    r0
    .size DMA3_11_IRQHandler, . - DMA3_11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_12_IRQHandler
    .type DMA3_12_IRQHandler, %function
DMA3_12_IRQHandler:
    ldr   r0,=DMA3_12_DriverIRQHandler
    bx    r0
    .size DMA3_12_IRQHandler, . - DMA3_12_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_13_IRQHandler
    .type DMA3_13_IRQHandler, %function
DMA3_13_IRQHandler:
    ldr   r0,=DMA3_13_DriverIRQHandler
    bx    r0
    .size DMA3_13_IRQHandler, . - DMA3_13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_14_IRQHandler
    .type DMA3_14_IRQHandler, %function
DMA3_14_IRQHandler:
    ldr   r0,=DMA3_14_DriverIRQHandler
    bx    r0
    .size DMA3_14_IRQHandler, . - DMA3_14_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_15_IRQHandler
    .type DMA3_15_IRQHandler, %function
DMA3_15_IRQHandler:
    ldr   r0,=DMA3_15_DriverIRQHandler
    bx    r0
    .size DMA3_15_IRQHandler, . - DMA3_15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_16_IRQHandler
    .type DMA3_16_IRQHandler, %function
DMA3_16_IRQHandler:
    ldr   r0,=DMA3_16_DriverIRQHandler
    bx    r0
    .size DMA3_16_IRQHandler, . - DMA3_16_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_17_IRQHandler
    .type DMA3_17_IRQHandler, %function
DMA3_17_IRQHandler:
    ldr   r0,=DMA3_17_DriverIRQHandler
    bx    r0
    .size DMA3_17_IRQHandler, . - DMA3_17_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_18_IRQHandler
    .type DMA3_18_IRQHandler, %function
DMA3_18_IRQHandler:
    ldr   r0,=DMA3_18_DriverIRQHandler
    bx    r0
    .size DMA3_18_IRQHandler, . - DMA3_18_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_19_IRQHandler
    .type DMA3_19_IRQHandler, %function
DMA3_19_IRQHandler:
    ldr   r0,=DMA3_19_DriverIRQHandler
    bx    r0
    .size DMA3_19_IRQHandler, . - DMA3_19_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_20_IRQHandler
    .type DMA3_20_IRQHandler, %function
DMA3_20_IRQHandler:
    ldr   r0,=DMA3_20_DriverIRQHandler
    bx    r0
    .size DMA3_20_IRQHandler, . - DMA3_20_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_21_IRQHandler
    .type DMA3_21_IRQHandler, %function
DMA3_21_IRQHandler:
    ldr   r0,=DMA3_21_DriverIRQHandler
    bx    r0
    .size DMA3_21_IRQHandler, . - DMA3_21_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_22_IRQHandler
    .type DMA3_22_IRQHandler, %function
DMA3_22_IRQHandler:
    ldr   r0,=DMA3_22_DriverIRQHandler
    bx    r0
    .size DMA3_22_IRQHandler, . - DMA3_22_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_23_IRQHandler
    .type DMA3_23_IRQHandler, %function
DMA3_23_IRQHandler:
    ldr   r0,=DMA3_23_DriverIRQHandler
    bx    r0
    .size DMA3_23_IRQHandler, . - DMA3_23_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_24_IRQHandler
    .type DMA3_24_IRQHandler, %function
DMA3_24_IRQHandler:
    ldr   r0,=DMA3_24_DriverIRQHandler
    bx    r0
    .size DMA3_24_IRQHandler, . - DMA3_24_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_25_IRQHandler
    .type DMA3_25_IRQHandler, %function
DMA3_25_IRQHandler:
    ldr   r0,=DMA3_25_DriverIRQHandler
    bx    r0
    .size DMA3_25_IRQHandler, . - DMA3_25_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_26_IRQHandler
    .type DMA3_26_IRQHandler, %function
DMA3_26_IRQHandler:
    ldr   r0,=DMA3_26_DriverIRQHandler
    bx    r0
    .size DMA3_26_IRQHandler, . - DMA3_26_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_27_IRQHandler
    .type DMA3_27_IRQHandler, %function
DMA3_27_IRQHandler:
    ldr   r0,=DMA3_27_DriverIRQHandler
    bx    r0
    .size DMA3_27_IRQHandler, . - DMA3_27_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_28_IRQHandler
    .type DMA3_28_IRQHandler, %function
DMA3_28_IRQHandler:
    ldr   r0,=DMA3_28_DriverIRQHandler
    bx    r0
    .size DMA3_28_IRQHandler, . - DMA3_28_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_29_IRQHandler
    .type DMA3_29_IRQHandler, %function
DMA3_29_IRQHandler:
    ldr   r0,=DMA3_29_DriverIRQHandler
    bx    r0
    .size DMA3_29_IRQHandler, . - DMA3_29_IRQHandler

    .align 1
    .thumb_func
    .weak DMA3_30_IRQHandler
    .type DMA3_30_IRQHandler, %function
DMA3_30_IRQHandler:
    ldr   r0,=DMA3_30_DriverIRQHandler
    bx    r0
    .size DMA3_30_IRQHandler, . - DMA3_30_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_ERROR_IRQHandler
    .type DMA5_2_ERROR_IRQHandler, %function
DMA5_2_ERROR_IRQHandler:
    ldr   r0,=DMA5_2_ERROR_DriverIRQHandler
    bx    r0
    .size DMA5_2_ERROR_IRQHandler, . - DMA5_2_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_0_1_IRQHandler
    .type DMA5_2_0_1_IRQHandler, %function
DMA5_2_0_1_IRQHandler:
    ldr   r0,=DMA5_2_0_1_DriverIRQHandler
    bx    r0
    .size DMA5_2_0_1_IRQHandler, . - DMA5_2_0_1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_2_3_IRQHandler
    .type DMA5_2_2_3_IRQHandler, %function
DMA5_2_2_3_IRQHandler:
    ldr   r0,=DMA5_2_2_3_DriverIRQHandler
    bx    r0
    .size DMA5_2_2_3_IRQHandler, . - DMA5_2_2_3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_4_5_IRQHandler
    .type DMA5_2_4_5_IRQHandler, %function
DMA5_2_4_5_IRQHandler:
    ldr   r0,=DMA5_2_4_5_DriverIRQHandler
    bx    r0
    .size DMA5_2_4_5_IRQHandler, . - DMA5_2_4_5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_6_7_IRQHandler
    .type DMA5_2_6_7_IRQHandler, %function
DMA5_2_6_7_IRQHandler:
    ldr   r0,=DMA5_2_6_7_DriverIRQHandler
    bx    r0
    .size DMA5_2_6_7_IRQHandler, . - DMA5_2_6_7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_8_9_IRQHandler
    .type DMA5_2_8_9_IRQHandler, %function
DMA5_2_8_9_IRQHandler:
    ldr   r0,=DMA5_2_8_9_DriverIRQHandler
    bx    r0
    .size DMA5_2_8_9_IRQHandler, . - DMA5_2_8_9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_10_11_IRQHandler
    .type DMA5_2_10_11_IRQHandler, %function
DMA5_2_10_11_IRQHandler:
    ldr   r0,=DMA5_2_10_11_DriverIRQHandler
    bx    r0
    .size DMA5_2_10_11_IRQHandler, . - DMA5_2_10_11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_12_13_IRQHandler
    .type DMA5_2_12_13_IRQHandler, %function
DMA5_2_12_13_IRQHandler:
    ldr   r0,=DMA5_2_12_13_DriverIRQHandler
    bx    r0
    .size DMA5_2_12_13_IRQHandler, . - DMA5_2_12_13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_14_15_IRQHandler
    .type DMA5_2_14_15_IRQHandler, %function
DMA5_2_14_15_IRQHandler:
    ldr   r0,=DMA5_2_14_15_DriverIRQHandler
    bx    r0
    .size DMA5_2_14_15_IRQHandler, . - DMA5_2_14_15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_16_17_IRQHandler
    .type DMA5_2_16_17_IRQHandler, %function
DMA5_2_16_17_IRQHandler:
    ldr   r0,=DMA5_2_16_17_DriverIRQHandler
    bx    r0
    .size DMA5_2_16_17_IRQHandler, . - DMA5_2_16_17_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_18_19_IRQHandler
    .type DMA5_2_18_19_IRQHandler, %function
DMA5_2_18_19_IRQHandler:
    ldr   r0,=DMA5_2_18_19_DriverIRQHandler
    bx    r0
    .size DMA5_2_18_19_IRQHandler, . - DMA5_2_18_19_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_20_21_IRQHandler
    .type DMA5_2_20_21_IRQHandler, %function
DMA5_2_20_21_IRQHandler:
    ldr   r0,=DMA5_2_20_21_DriverIRQHandler
    bx    r0
    .size DMA5_2_20_21_IRQHandler, . - DMA5_2_20_21_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_22_23_IRQHandler
    .type DMA5_2_22_23_IRQHandler, %function
DMA5_2_22_23_IRQHandler:
    ldr   r0,=DMA5_2_22_23_DriverIRQHandler
    bx    r0
    .size DMA5_2_22_23_IRQHandler, . - DMA5_2_22_23_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_24_25_IRQHandler
    .type DMA5_2_24_25_IRQHandler, %function
DMA5_2_24_25_IRQHandler:
    ldr   r0,=DMA5_2_24_25_DriverIRQHandler
    bx    r0
    .size DMA5_2_24_25_IRQHandler, . - DMA5_2_24_25_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_26_27_IRQHandler
    .type DMA5_2_26_27_IRQHandler, %function
DMA5_2_26_27_IRQHandler:
    ldr   r0,=DMA5_2_26_27_DriverIRQHandler
    bx    r0
    .size DMA5_2_26_27_IRQHandler, . - DMA5_2_26_27_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_28_29_IRQHandler
    .type DMA5_2_28_29_IRQHandler, %function
DMA5_2_28_29_IRQHandler:
    ldr   r0,=DMA5_2_28_29_DriverIRQHandler
    bx    r0
    .size DMA5_2_28_29_IRQHandler, . - DMA5_2_28_29_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_30_31_IRQHandler
    .type DMA5_2_30_31_IRQHandler, %function
DMA5_2_30_31_IRQHandler:
    ldr   r0,=DMA5_2_30_31_DriverIRQHandler
    bx    r0
    .size DMA5_2_30_31_IRQHandler, . - DMA5_2_30_31_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_32_33_IRQHandler
    .type DMA5_2_32_33_IRQHandler, %function
DMA5_2_32_33_IRQHandler:
    ldr   r0,=DMA5_2_32_33_DriverIRQHandler
    bx    r0
    .size DMA5_2_32_33_IRQHandler, . - DMA5_2_32_33_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_34_35_IRQHandler
    .type DMA5_2_34_35_IRQHandler, %function
DMA5_2_34_35_IRQHandler:
    ldr   r0,=DMA5_2_34_35_DriverIRQHandler
    bx    r0
    .size DMA5_2_34_35_IRQHandler, . - DMA5_2_34_35_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_36_37_IRQHandler
    .type DMA5_2_36_37_IRQHandler, %function
DMA5_2_36_37_IRQHandler:
    ldr   r0,=DMA5_2_36_37_DriverIRQHandler
    bx    r0
    .size DMA5_2_36_37_IRQHandler, . - DMA5_2_36_37_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_38_39_IRQHandler
    .type DMA5_2_38_39_IRQHandler, %function
DMA5_2_38_39_IRQHandler:
    ldr   r0,=DMA5_2_38_39_DriverIRQHandler
    bx    r0
    .size DMA5_2_38_39_IRQHandler, . - DMA5_2_38_39_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_40_41_IRQHandler
    .type DMA5_2_40_41_IRQHandler, %function
DMA5_2_40_41_IRQHandler:
    ldr   r0,=DMA5_2_40_41_DriverIRQHandler
    bx    r0
    .size DMA5_2_40_41_IRQHandler, . - DMA5_2_40_41_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_42_43_IRQHandler
    .type DMA5_2_42_43_IRQHandler, %function
DMA5_2_42_43_IRQHandler:
    ldr   r0,=DMA5_2_42_43_DriverIRQHandler
    bx    r0
    .size DMA5_2_42_43_IRQHandler, . - DMA5_2_42_43_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_44_45_IRQHandler
    .type DMA5_2_44_45_IRQHandler, %function
DMA5_2_44_45_IRQHandler:
    ldr   r0,=DMA5_2_44_45_DriverIRQHandler
    bx    r0
    .size DMA5_2_44_45_IRQHandler, . - DMA5_2_44_45_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_46_47_IRQHandler
    .type DMA5_2_46_47_IRQHandler, %function
DMA5_2_46_47_IRQHandler:
    ldr   r0,=DMA5_2_46_47_DriverIRQHandler
    bx    r0
    .size DMA5_2_46_47_IRQHandler, . - DMA5_2_46_47_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_48_49_IRQHandler
    .type DMA5_2_48_49_IRQHandler, %function
DMA5_2_48_49_IRQHandler:
    ldr   r0,=DMA5_2_48_49_DriverIRQHandler
    bx    r0
    .size DMA5_2_48_49_IRQHandler, . - DMA5_2_48_49_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_50_51_IRQHandler
    .type DMA5_2_50_51_IRQHandler, %function
DMA5_2_50_51_IRQHandler:
    ldr   r0,=DMA5_2_50_51_DriverIRQHandler
    bx    r0
    .size DMA5_2_50_51_IRQHandler, . - DMA5_2_50_51_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_52_53_IRQHandler
    .type DMA5_2_52_53_IRQHandler, %function
DMA5_2_52_53_IRQHandler:
    ldr   r0,=DMA5_2_52_53_DriverIRQHandler
    bx    r0
    .size DMA5_2_52_53_IRQHandler, . - DMA5_2_52_53_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_54_55_IRQHandler
    .type DMA5_2_54_55_IRQHandler, %function
DMA5_2_54_55_IRQHandler:
    ldr   r0,=DMA5_2_54_55_DriverIRQHandler
    bx    r0
    .size DMA5_2_54_55_IRQHandler, . - DMA5_2_54_55_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_56_57_IRQHandler
    .type DMA5_2_56_57_IRQHandler, %function
DMA5_2_56_57_IRQHandler:
    ldr   r0,=DMA5_2_56_57_DriverIRQHandler
    bx    r0
    .size DMA5_2_56_57_IRQHandler, . - DMA5_2_56_57_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_58_59_IRQHandler
    .type DMA5_2_58_59_IRQHandler, %function
DMA5_2_58_59_IRQHandler:
    ldr   r0,=DMA5_2_58_59_DriverIRQHandler
    bx    r0
    .size DMA5_2_58_59_IRQHandler, . - DMA5_2_58_59_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_60_61_IRQHandler
    .type DMA5_2_60_61_IRQHandler, %function
DMA5_2_60_61_IRQHandler:
    ldr   r0,=DMA5_2_60_61_DriverIRQHandler
    bx    r0
    .size DMA5_2_60_61_IRQHandler, . - DMA5_2_60_61_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_2_62_63_IRQHandler
    .type DMA5_2_62_63_IRQHandler, %function
DMA5_2_62_63_IRQHandler:
    ldr   r0,=DMA5_2_62_63_DriverIRQHandler
    bx    r0
    .size DMA5_2_62_63_IRQHandler, . - DMA5_2_62_63_IRQHandler

    .align 1
    .thumb_func
    .weak SAI2_IRQHandler
    .type SAI2_IRQHandler, %function
SAI2_IRQHandler:
    ldr   r0,=SAI2_DriverIRQHandler
    bx    r0
    .size SAI2_IRQHandler, . - SAI2_IRQHandler

    .align 1
    .thumb_func
    .weak SAI3_IRQHandler
    .type SAI3_IRQHandler, %function
SAI3_IRQHandler:
    ldr   r0,=SAI3_DriverIRQHandler
    bx    r0
    .size SAI3_IRQHandler, . - SAI3_IRQHandler

    .align 1
    .thumb_func
    .weak SAI4_IRQHandler
    .type SAI4_IRQHandler, %function
SAI4_IRQHandler:
    ldr   r0,=SAI4_DriverIRQHandler
    bx    r0
    .size SAI4_IRQHandler, . - SAI4_IRQHandler

    .align 1
    .thumb_func
    .weak SAI5_IRQHandler
    .type SAI5_IRQHandler, %function
SAI5_IRQHandler:
    ldr   r0,=SAI5_DriverIRQHandler
    bx    r0
    .size SAI5_IRQHandler, . - SAI5_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI5_IRQHandler
    .type LPSPI5_IRQHandler, %function
LPSPI5_IRQHandler:
    ldr   r0,=LPSPI5_DriverIRQHandler
    bx    r0
    .size LPSPI5_IRQHandler, . - LPSPI5_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI6_IRQHandler
    .type LPSPI6_IRQHandler, %function
LPSPI6_IRQHandler:
    ldr   r0,=LPSPI6_DriverIRQHandler
    bx    r0
    .size LPSPI6_IRQHandler, . - LPSPI6_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI7_IRQHandler
    .type LPSPI7_IRQHandler, %function
LPSPI7_IRQHandler:
    ldr   r0,=LPSPI7_DriverIRQHandler
    bx    r0
    .size LPSPI7_IRQHandler, . - LPSPI7_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI8_IRQHandler
    .type LPSPI8_IRQHandler, %function
LPSPI8_IRQHandler:
    ldr   r0,=LPSPI8_DriverIRQHandler
    bx    r0
    .size LPSPI8_IRQHandler, . - LPSPI8_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C5_IRQHandler
    .type LPI2C5_IRQHandler, %function
LPI2C5_IRQHandler:
    ldr   r0,=LPI2C5_DriverIRQHandler
    bx    r0
    .size LPI2C5_IRQHandler, . - LPI2C5_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C6_IRQHandler
    .type LPI2C6_IRQHandler, %function
LPI2C6_IRQHandler:
    ldr   r0,=LPI2C6_DriverIRQHandler
    bx    r0
    .size LPI2C6_IRQHandler, . - LPI2C6_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C7_IRQHandler
    .type LPI2C7_IRQHandler, %function
LPI2C7_IRQHandler:
    ldr   r0,=LPI2C7_DriverIRQHandler
    bx    r0
    .size LPI2C7_IRQHandler, . - LPI2C7_IRQHandler

    .align 1
    .thumb_func
    .weak LPI2C8_IRQHandler
    .type LPI2C8_IRQHandler, %function
LPI2C8_IRQHandler:
    ldr   r0,=LPI2C8_DriverIRQHandler
    bx    r0
    .size LPI2C8_IRQHandler, . - LPI2C8_IRQHandler

    .align 1
    .thumb_func
    .weak PDM_EVENT_IRQHandler
    .type PDM_EVENT_IRQHandler, %function
PDM_EVENT_IRQHandler:
    ldr   r0,=PDM_EVENT_DriverIRQHandler
    bx    r0
    .size PDM_EVENT_IRQHandler, . - PDM_EVENT_IRQHandler

    .align 1
    .thumb_func
    .weak USDHC3_IRQHandler
    .type USDHC3_IRQHandler, %function
USDHC3_IRQHandler:
    ldr   r0,=USDHC3_DriverIRQHandler
    bx    r0
    .size USDHC3_IRQHandler, . - USDHC3_IRQHandler

    .align 1
    .thumb_func
    .weak I3C1_RAW_IRQ_GLUE_IRQHandler
    .type I3C1_RAW_IRQ_GLUE_IRQHandler, %function
I3C1_RAW_IRQ_GLUE_IRQHandler:
    ldr   r0,=I3C1_RAW_IRQ_GLUE_DriverIRQHandler
    bx    r0
    .size I3C1_RAW_IRQ_GLUE_IRQHandler, . - I3C1_RAW_IRQ_GLUE_IRQHandler

    .align 1
    .thumb_func
    .weak I3C2_RAW_IRQ_GLUE_IRQHandler
    .type I3C2_RAW_IRQ_GLUE_IRQHandler, %function
I3C2_RAW_IRQ_GLUE_IRQHandler:
    ldr   r0,=I3C2_RAW_IRQ_GLUE_DriverIRQHandler
    bx    r0
    .size I3C2_RAW_IRQ_GLUE_IRQHandler, . - I3C2_RAW_IRQ_GLUE_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI_SLV_IRQHandler
    .type XSPI_SLV_IRQHandler, %function
XSPI_SLV_IRQHandler:
    ldr   r0,=XSPI_SLV_DriverIRQHandler
    bx    r0
    .size XSPI_SLV_IRQHandler, . - XSPI_SLV_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER0_IRQHandler
    .type DISP_IRQSTEER0_IRQHandler, %function
DISP_IRQSTEER0_IRQHandler:
    ldr   r0,=DISP_IRQSTEER0_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER0_IRQHandler, . - DISP_IRQSTEER0_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER1_IRQHandler
    .type DISP_IRQSTEER1_IRQHandler, %function
DISP_IRQSTEER1_IRQHandler:
    ldr   r0,=DISP_IRQSTEER1_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER1_IRQHandler, . - DISP_IRQSTEER1_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER2_IRQHandler
    .type DISP_IRQSTEER2_IRQHandler, %function
DISP_IRQSTEER2_IRQHandler:
    ldr   r0,=DISP_IRQSTEER2_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER2_IRQHandler, . - DISP_IRQSTEER2_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER3_IRQHandler
    .type DISP_IRQSTEER3_IRQHandler, %function
DISP_IRQSTEER3_IRQHandler:
    ldr   r0,=DISP_IRQSTEER3_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER3_IRQHandler, . - DISP_IRQSTEER3_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER4_IRQHandler
    .type DISP_IRQSTEER4_IRQHandler, %function
DISP_IRQSTEER4_IRQHandler:
    ldr   r0,=DISP_IRQSTEER4_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER4_IRQHandler, . - DISP_IRQSTEER4_IRQHandler

    .align 1
    .thumb_func
    .weak DISP_IRQSTEER7_IRQHandler
    .type DISP_IRQSTEER7_IRQHandler, %function
DISP_IRQSTEER7_IRQHandler:
    ldr   r0,=DISP_IRQSTEER7_DriverIRQHandler
    bx    r0
    .size DISP_IRQSTEER7_IRQHandler, . - DISP_IRQSTEER7_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_0_IRQHandler
    .type IRQSTEER_0_IRQHandler, %function
IRQSTEER_0_IRQHandler:
    ldr   r0,=IRQSTEER_0_DriverIRQHandler
    bx    r0
    .size IRQSTEER_0_IRQHandler, . - IRQSTEER_0_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_1_IRQHandler
    .type IRQSTEER_1_IRQHandler, %function
IRQSTEER_1_IRQHandler:
    ldr   r0,=IRQSTEER_1_DriverIRQHandler
    bx    r0
    .size IRQSTEER_1_IRQHandler, . - IRQSTEER_1_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_2_IRQHandler
    .type IRQSTEER_2_IRQHandler, %function
IRQSTEER_2_IRQHandler:
    ldr   r0,=IRQSTEER_2_DriverIRQHandler
    bx    r0
    .size IRQSTEER_2_IRQHandler, . - IRQSTEER_2_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_3_IRQHandler
    .type IRQSTEER_3_IRQHandler, %function
IRQSTEER_3_IRQHandler:
    ldr   r0,=IRQSTEER_3_DriverIRQHandler
    bx    r0
    .size IRQSTEER_3_IRQHandler, . - IRQSTEER_3_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_4_IRQHandler
    .type IRQSTEER_4_IRQHandler, %function
IRQSTEER_4_IRQHandler:
    ldr   r0,=IRQSTEER_4_DriverIRQHandler
    bx    r0
    .size IRQSTEER_4_IRQHandler, . - IRQSTEER_4_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_5_IRQHandler
    .type IRQSTEER_5_IRQHandler, %function
IRQSTEER_5_IRQHandler:
    ldr   r0,=IRQSTEER_5_DriverIRQHandler
    bx    r0
    .size IRQSTEER_5_IRQHandler, . - IRQSTEER_5_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_6_IRQHandler
    .type IRQSTEER_6_IRQHandler, %function
IRQSTEER_6_IRQHandler:
    ldr   r0,=IRQSTEER_6_DriverIRQHandler
    bx    r0
    .size IRQSTEER_6_IRQHandler, . - IRQSTEER_6_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_7_IRQHandler
    .type IRQSTEER_7_IRQHandler, %function
IRQSTEER_7_IRQHandler:
    ldr   r0,=IRQSTEER_7_DriverIRQHandler
    bx    r0
    .size IRQSTEER_7_IRQHandler, . - IRQSTEER_7_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_8_IRQHandler
    .type IRQSTEER_8_IRQHandler, %function
IRQSTEER_8_IRQHandler:
    ldr   r0,=IRQSTEER_8_DriverIRQHandler
    bx    r0
    .size IRQSTEER_8_IRQHandler, . - IRQSTEER_8_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_9_IRQHandler
    .type IRQSTEER_9_IRQHandler, %function
IRQSTEER_9_IRQHandler:
    ldr   r0,=IRQSTEER_9_DriverIRQHandler
    bx    r0
    .size IRQSTEER_9_IRQHandler, . - IRQSTEER_9_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_10_IRQHandler
    .type IRQSTEER_10_IRQHandler, %function
IRQSTEER_10_IRQHandler:
    ldr   r0,=IRQSTEER_10_DriverIRQHandler
    bx    r0
    .size IRQSTEER_10_IRQHandler, . - IRQSTEER_10_IRQHandler

    .align 1
    .thumb_func
    .weak IRQSTEER_11_IRQHandler
    .type IRQSTEER_11_IRQHandler, %function
IRQSTEER_11_IRQHandler:
    ldr   r0,=IRQSTEER_11_DriverIRQHandler
    bx    r0
    .size IRQSTEER_11_IRQHandler, . - IRQSTEER_11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_ERROR_IRQHandler
    .type DMA5_3_ERROR_IRQHandler, %function
DMA5_3_ERROR_IRQHandler:
    ldr   r0,=DMA5_3_ERROR_DriverIRQHandler
    bx    r0
    .size DMA5_3_ERROR_IRQHandler, . - DMA5_3_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_0_1_IRQHandler
    .type DMA5_3_0_1_IRQHandler, %function
DMA5_3_0_1_IRQHandler:
    ldr   r0,=DMA5_3_0_1_DriverIRQHandler
    bx    r0
    .size DMA5_3_0_1_IRQHandler, . - DMA5_3_0_1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_2_3_IRQHandler
    .type DMA5_3_2_3_IRQHandler, %function
DMA5_3_2_3_IRQHandler:
    ldr   r0,=DMA5_3_2_3_DriverIRQHandler
    bx    r0
    .size DMA5_3_2_3_IRQHandler, . - DMA5_3_2_3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_4_5_IRQHandler
    .type DMA5_3_4_5_IRQHandler, %function
DMA5_3_4_5_IRQHandler:
    ldr   r0,=DMA5_3_4_5_DriverIRQHandler
    bx    r0
    .size DMA5_3_4_5_IRQHandler, . - DMA5_3_4_5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_6_7_IRQHandler
    .type DMA5_3_6_7_IRQHandler, %function
DMA5_3_6_7_IRQHandler:
    ldr   r0,=DMA5_3_6_7_DriverIRQHandler
    bx    r0
    .size DMA5_3_6_7_IRQHandler, . - DMA5_3_6_7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_8_9_IRQHandler
    .type DMA5_3_8_9_IRQHandler, %function
DMA5_3_8_9_IRQHandler:
    ldr   r0,=DMA5_3_8_9_DriverIRQHandler
    bx    r0
    .size DMA5_3_8_9_IRQHandler, . - DMA5_3_8_9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_10_11_IRQHandler
    .type DMA5_3_10_11_IRQHandler, %function
DMA5_3_10_11_IRQHandler:
    ldr   r0,=DMA5_3_10_11_DriverIRQHandler
    bx    r0
    .size DMA5_3_10_11_IRQHandler, . - DMA5_3_10_11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_12_13_IRQHandler
    .type DMA5_3_12_13_IRQHandler, %function
DMA5_3_12_13_IRQHandler:
    ldr   r0,=DMA5_3_12_13_DriverIRQHandler
    bx    r0
    .size DMA5_3_12_13_IRQHandler, . - DMA5_3_12_13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_14_15_IRQHandler
    .type DMA5_3_14_15_IRQHandler, %function
DMA5_3_14_15_IRQHandler:
    ldr   r0,=DMA5_3_14_15_DriverIRQHandler
    bx    r0
    .size DMA5_3_14_15_IRQHandler, . - DMA5_3_14_15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_16_17_IRQHandler
    .type DMA5_3_16_17_IRQHandler, %function
DMA5_3_16_17_IRQHandler:
    ldr   r0,=DMA5_3_16_17_DriverIRQHandler
    bx    r0
    .size DMA5_3_16_17_IRQHandler, . - DMA5_3_16_17_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_18_19_IRQHandler
    .type DMA5_3_18_19_IRQHandler, %function
DMA5_3_18_19_IRQHandler:
    ldr   r0,=DMA5_3_18_19_DriverIRQHandler
    bx    r0
    .size DMA5_3_18_19_IRQHandler, . - DMA5_3_18_19_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_20_21_IRQHandler
    .type DMA5_3_20_21_IRQHandler, %function
DMA5_3_20_21_IRQHandler:
    ldr   r0,=DMA5_3_20_21_DriverIRQHandler
    bx    r0
    .size DMA5_3_20_21_IRQHandler, . - DMA5_3_20_21_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_22_23_IRQHandler
    .type DMA5_3_22_23_IRQHandler, %function
DMA5_3_22_23_IRQHandler:
    ldr   r0,=DMA5_3_22_23_DriverIRQHandler
    bx    r0
    .size DMA5_3_22_23_IRQHandler, . - DMA5_3_22_23_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_24_25_IRQHandler
    .type DMA5_3_24_25_IRQHandler, %function
DMA5_3_24_25_IRQHandler:
    ldr   r0,=DMA5_3_24_25_DriverIRQHandler
    bx    r0
    .size DMA5_3_24_25_IRQHandler, . - DMA5_3_24_25_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_26_27_IRQHandler
    .type DMA5_3_26_27_IRQHandler, %function
DMA5_3_26_27_IRQHandler:
    ldr   r0,=DMA5_3_26_27_DriverIRQHandler
    bx    r0
    .size DMA5_3_26_27_IRQHandler, . - DMA5_3_26_27_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_28_29_IRQHandler
    .type DMA5_3_28_29_IRQHandler, %function
DMA5_3_28_29_IRQHandler:
    ldr   r0,=DMA5_3_28_29_DriverIRQHandler
    bx    r0
    .size DMA5_3_28_29_IRQHandler, . - DMA5_3_28_29_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_30_31_IRQHandler
    .type DMA5_3_30_31_IRQHandler, %function
DMA5_3_30_31_IRQHandler:
    ldr   r0,=DMA5_3_30_31_DriverIRQHandler
    bx    r0
    .size DMA5_3_30_31_IRQHandler, . - DMA5_3_30_31_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_32_33_IRQHandler
    .type DMA5_3_32_33_IRQHandler, %function
DMA5_3_32_33_IRQHandler:
    ldr   r0,=DMA5_3_32_33_DriverIRQHandler
    bx    r0
    .size DMA5_3_32_33_IRQHandler, . - DMA5_3_32_33_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_34_35_IRQHandler
    .type DMA5_3_34_35_IRQHandler, %function
DMA5_3_34_35_IRQHandler:
    ldr   r0,=DMA5_3_34_35_DriverIRQHandler
    bx    r0
    .size DMA5_3_34_35_IRQHandler, . - DMA5_3_34_35_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_36_37_IRQHandler
    .type DMA5_3_36_37_IRQHandler, %function
DMA5_3_36_37_IRQHandler:
    ldr   r0,=DMA5_3_36_37_DriverIRQHandler
    bx    r0
    .size DMA5_3_36_37_IRQHandler, . - DMA5_3_36_37_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_38_39_IRQHandler
    .type DMA5_3_38_39_IRQHandler, %function
DMA5_3_38_39_IRQHandler:
    ldr   r0,=DMA5_3_38_39_DriverIRQHandler
    bx    r0
    .size DMA5_3_38_39_IRQHandler, . - DMA5_3_38_39_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_40_41_IRQHandler
    .type DMA5_3_40_41_IRQHandler, %function
DMA5_3_40_41_IRQHandler:
    ldr   r0,=DMA5_3_40_41_DriverIRQHandler
    bx    r0
    .size DMA5_3_40_41_IRQHandler, . - DMA5_3_40_41_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_42_43_IRQHandler
    .type DMA5_3_42_43_IRQHandler, %function
DMA5_3_42_43_IRQHandler:
    ldr   r0,=DMA5_3_42_43_DriverIRQHandler
    bx    r0
    .size DMA5_3_42_43_IRQHandler, . - DMA5_3_42_43_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_44_45_IRQHandler
    .type DMA5_3_44_45_IRQHandler, %function
DMA5_3_44_45_IRQHandler:
    ldr   r0,=DMA5_3_44_45_DriverIRQHandler
    bx    r0
    .size DMA5_3_44_45_IRQHandler, . - DMA5_3_44_45_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_46_47_IRQHandler
    .type DMA5_3_46_47_IRQHandler, %function
DMA5_3_46_47_IRQHandler:
    ldr   r0,=DMA5_3_46_47_DriverIRQHandler
    bx    r0
    .size DMA5_3_46_47_IRQHandler, . - DMA5_3_46_47_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_48_49_IRQHandler
    .type DMA5_3_48_49_IRQHandler, %function
DMA5_3_48_49_IRQHandler:
    ldr   r0,=DMA5_3_48_49_DriverIRQHandler
    bx    r0
    .size DMA5_3_48_49_IRQHandler, . - DMA5_3_48_49_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_50_51_IRQHandler
    .type DMA5_3_50_51_IRQHandler, %function
DMA5_3_50_51_IRQHandler:
    ldr   r0,=DMA5_3_50_51_DriverIRQHandler
    bx    r0
    .size DMA5_3_50_51_IRQHandler, . - DMA5_3_50_51_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_52_53_IRQHandler
    .type DMA5_3_52_53_IRQHandler, %function
DMA5_3_52_53_IRQHandler:
    ldr   r0,=DMA5_3_52_53_DriverIRQHandler
    bx    r0
    .size DMA5_3_52_53_IRQHandler, . - DMA5_3_52_53_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_54_55_IRQHandler
    .type DMA5_3_54_55_IRQHandler, %function
DMA5_3_54_55_IRQHandler:
    ldr   r0,=DMA5_3_54_55_DriverIRQHandler
    bx    r0
    .size DMA5_3_54_55_IRQHandler, . - DMA5_3_54_55_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_56_57_IRQHandler
    .type DMA5_3_56_57_IRQHandler, %function
DMA5_3_56_57_IRQHandler:
    ldr   r0,=DMA5_3_56_57_DriverIRQHandler
    bx    r0
    .size DMA5_3_56_57_IRQHandler, . - DMA5_3_56_57_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_58_59_IRQHandler
    .type DMA5_3_58_59_IRQHandler, %function
DMA5_3_58_59_IRQHandler:
    ldr   r0,=DMA5_3_58_59_DriverIRQHandler
    bx    r0
    .size DMA5_3_58_59_IRQHandler, . - DMA5_3_58_59_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_60_61_IRQHandler
    .type DMA5_3_60_61_IRQHandler, %function
DMA5_3_60_61_IRQHandler:
    ldr   r0,=DMA5_3_60_61_DriverIRQHandler
    bx    r0
    .size DMA5_3_60_61_IRQHandler, . - DMA5_3_60_61_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_3_62_63_IRQHandler
    .type DMA5_3_62_63_IRQHandler, %function
DMA5_3_62_63_IRQHandler:
    ldr   r0,=DMA5_3_62_63_DriverIRQHandler
    bx    r0
    .size DMA5_3_62_63_IRQHandler, . - DMA5_3_62_63_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_ERROR_IRQHandler
    .type DMA5_4_ERROR_IRQHandler, %function
DMA5_4_ERROR_IRQHandler:
    ldr   r0,=DMA5_4_ERROR_DriverIRQHandler
    bx    r0
    .size DMA5_4_ERROR_IRQHandler, . - DMA5_4_ERROR_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_0_1_IRQHandler
    .type DMA5_4_0_1_IRQHandler, %function
DMA5_4_0_1_IRQHandler:
    ldr   r0,=DMA5_4_0_1_DriverIRQHandler
    bx    r0
    .size DMA5_4_0_1_IRQHandler, . - DMA5_4_0_1_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_2_3_IRQHandler
    .type DMA5_4_2_3_IRQHandler, %function
DMA5_4_2_3_IRQHandler:
    ldr   r0,=DMA5_4_2_3_DriverIRQHandler
    bx    r0
    .size DMA5_4_2_3_IRQHandler, . - DMA5_4_2_3_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_4_5_IRQHandler
    .type DMA5_4_4_5_IRQHandler, %function
DMA5_4_4_5_IRQHandler:
    ldr   r0,=DMA5_4_4_5_DriverIRQHandler
    bx    r0
    .size DMA5_4_4_5_IRQHandler, . - DMA5_4_4_5_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_6_7_IRQHandler
    .type DMA5_4_6_7_IRQHandler, %function
DMA5_4_6_7_IRQHandler:
    ldr   r0,=DMA5_4_6_7_DriverIRQHandler
    bx    r0
    .size DMA5_4_6_7_IRQHandler, . - DMA5_4_6_7_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_8_9_IRQHandler
    .type DMA5_4_8_9_IRQHandler, %function
DMA5_4_8_9_IRQHandler:
    ldr   r0,=DMA5_4_8_9_DriverIRQHandler
    bx    r0
    .size DMA5_4_8_9_IRQHandler, . - DMA5_4_8_9_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_10_11_IRQHandler
    .type DMA5_4_10_11_IRQHandler, %function
DMA5_4_10_11_IRQHandler:
    ldr   r0,=DMA5_4_10_11_DriverIRQHandler
    bx    r0
    .size DMA5_4_10_11_IRQHandler, . - DMA5_4_10_11_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_12_13_IRQHandler
    .type DMA5_4_12_13_IRQHandler, %function
DMA5_4_12_13_IRQHandler:
    ldr   r0,=DMA5_4_12_13_DriverIRQHandler
    bx    r0
    .size DMA5_4_12_13_IRQHandler, . - DMA5_4_12_13_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_14_15_IRQHandler
    .type DMA5_4_14_15_IRQHandler, %function
DMA5_4_14_15_IRQHandler:
    ldr   r0,=DMA5_4_14_15_DriverIRQHandler
    bx    r0
    .size DMA5_4_14_15_IRQHandler, . - DMA5_4_14_15_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_16_17_IRQHandler
    .type DMA5_4_16_17_IRQHandler, %function
DMA5_4_16_17_IRQHandler:
    ldr   r0,=DMA5_4_16_17_DriverIRQHandler
    bx    r0
    .size DMA5_4_16_17_IRQHandler, . - DMA5_4_16_17_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_18_19_IRQHandler
    .type DMA5_4_18_19_IRQHandler, %function
DMA5_4_18_19_IRQHandler:
    ldr   r0,=DMA5_4_18_19_DriverIRQHandler
    bx    r0
    .size DMA5_4_18_19_IRQHandler, . - DMA5_4_18_19_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_20_21_IRQHandler
    .type DMA5_4_20_21_IRQHandler, %function
DMA5_4_20_21_IRQHandler:
    ldr   r0,=DMA5_4_20_21_DriverIRQHandler
    bx    r0
    .size DMA5_4_20_21_IRQHandler, . - DMA5_4_20_21_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_22_23_IRQHandler
    .type DMA5_4_22_23_IRQHandler, %function
DMA5_4_22_23_IRQHandler:
    ldr   r0,=DMA5_4_22_23_DriverIRQHandler
    bx    r0
    .size DMA5_4_22_23_IRQHandler, . - DMA5_4_22_23_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_24_25_IRQHandler
    .type DMA5_4_24_25_IRQHandler, %function
DMA5_4_24_25_IRQHandler:
    ldr   r0,=DMA5_4_24_25_DriverIRQHandler
    bx    r0
    .size DMA5_4_24_25_IRQHandler, . - DMA5_4_24_25_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_26_27_IRQHandler
    .type DMA5_4_26_27_IRQHandler, %function
DMA5_4_26_27_IRQHandler:
    ldr   r0,=DMA5_4_26_27_DriverIRQHandler
    bx    r0
    .size DMA5_4_26_27_IRQHandler, . - DMA5_4_26_27_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_28_29_IRQHandler
    .type DMA5_4_28_29_IRQHandler, %function
DMA5_4_28_29_IRQHandler:
    ldr   r0,=DMA5_4_28_29_DriverIRQHandler
    bx    r0
    .size DMA5_4_28_29_IRQHandler, . - DMA5_4_28_29_IRQHandler

    .align 1
    .thumb_func
    .weak DMA5_4_30_31_IRQHandler
    .type DMA5_4_30_31_IRQHandler, %function
DMA5_4_30_31_IRQHandler:
    ldr   r0,=DMA5_4_30_31_DriverIRQHandler
    bx    r0
    .size DMA5_4_30_31_IRQHandler, . - DMA5_4_30_31_IRQHandler

    .align 1
    .thumb_func
    .weak ASRC1_IRQHandler
    .type ASRC1_IRQHandler, %function
ASRC1_IRQHandler:
    ldr   r0,=ASRC1_DriverIRQHandler
    bx    r0
    .size ASRC1_IRQHandler, . - ASRC1_IRQHandler

    .align 1
    .thumb_func
    .weak ASRC2_IRQHandler
    .type ASRC2_IRQHandler, %function
ASRC2_IRQHandler:
    ldr   r0,=ASRC2_DriverIRQHandler
    bx    r0
    .size ASRC2_IRQHandler, . - ASRC2_IRQHandler

    .align 1
    .thumb_func
    .weak SAI6_IRQHandler
    .type SAI6_IRQHandler, %function
SAI6_IRQHandler:
    ldr   r0,=SAI6_DriverIRQHandler
    bx    r0
    .size SAI6_IRQHandler, . - SAI6_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI1_0_IRQHandler
    .type XSPI1_0_IRQHandler, %function
XSPI1_0_IRQHandler:
    ldr   r0,=XSPI1_0_DriverIRQHandler
    bx    r0
    .size XSPI1_0_IRQHandler, . - XSPI1_0_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI1_1_IRQHandler
    .type XSPI1_1_IRQHandler, %function
XSPI1_1_IRQHandler:
    ldr   r0,=XSPI1_1_DriverIRQHandler
    bx    r0
    .size XSPI1_1_IRQHandler, . - XSPI1_1_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI1_2_IRQHandler
    .type XSPI1_2_IRQHandler, %function
XSPI1_2_IRQHandler:
    ldr   r0,=XSPI1_2_DriverIRQHandler
    bx    r0
    .size XSPI1_2_IRQHandler, . - XSPI1_2_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI1_3_IRQHandler
    .type XSPI1_3_IRQHandler, %function
XSPI1_3_IRQHandler:
    ldr   r0,=XSPI1_3_DriverIRQHandler
    bx    r0
    .size XSPI1_3_IRQHandler, . - XSPI1_3_IRQHandler

    .align 1
    .thumb_func
    .weak XSPI1_4_IRQHandler
    .type XSPI1_4_IRQHandler, %function
XSPI1_4_IRQHandler:
    ldr   r0,=XSPI1_4_DriverIRQHandler
    bx    r0
    .size XSPI1_4_IRQHandler, . - XSPI1_4_IRQHandler

    .align 1
    .thumb_func
    .weak LPSPI9_IRQHandler
    .type LPSPI9_IRQHandler, %function
LPSPI9_IRQHandler:
    ldr   r0,=LPSPI9_DriverIRQHandler
    bx    r0
    .size LPSPI9_IRQHandler, . - LPSPI9_IRQHandler


/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro def_irq_handler  handler_name
    .weak \handler_name
    .set  \handler_name, DefaultISR
    .endm
/* Exception Handlers */
    def_irq_handler    MemManage_Handler
    def_irq_handler    BusFault_Handler
    def_irq_handler    UsageFault_Handler
    def_irq_handler    DebugMon_Handler
    def_irq_handler    RESERVED16_IRQHandler
    def_irq_handler    RESERVED17_IRQHandler
    def_irq_handler    RESERVED18_IRQHandler
    def_irq_handler    RESERVED19_IRQHandler
    def_irq_handler    RESERVED20_IRQHandler
    def_irq_handler    RESERVED21_IRQHandler
    def_irq_handler    RESERVED22_IRQHandler
    def_irq_handler    RESERVED23_IRQHandler
    def_irq_handler    CAN1_DriverIRQHandler
    def_irq_handler    CAN1_ERROR_DriverIRQHandler
    def_irq_handler    GPIO1_0_IRQHandler
    def_irq_handler    GPIO1_1_IRQHandler
    def_irq_handler    I3C1_DriverIRQHandler
    def_irq_handler    LPI2C1_DriverIRQHandler
    def_irq_handler    LPI2C2_DriverIRQHandler
    def_irq_handler    LPIT1_IRQHandler
    def_irq_handler    LPSPI1_DriverIRQHandler
    def_irq_handler    LPSPI2_DriverIRQHandler
    def_irq_handler    LPTMR1_IRQHandler
    def_irq_handler    LPUART1_DriverIRQHandler
    def_irq_handler    LPUART2_DriverIRQHandler
    def_irq_handler    RESERVED37_IRQHandler
    def_irq_handler    RESERVED38_IRQHandler
    def_irq_handler    RESERVED39_IRQHandler
    def_irq_handler    RESERVED40_IRQHandler
    def_irq_handler    RESERVED41_IRQHandler
    def_irq_handler    RESERVED42_IRQHandler
    def_irq_handler    RESERVED43_IRQHandler
    def_irq_handler    RESERVED44_IRQHandler
    def_irq_handler    TPM1_IRQHandler
    def_irq_handler    TPM2_IRQHandler
    def_irq_handler    WDOG1_IRQHandler
    def_irq_handler    WDOG2_IRQHandler
    def_irq_handler    TRDC_MGR_A_IRQHandler
    def_irq_handler    SAI1_DriverIRQHandler
    def_irq_handler    RESERVED51_IRQHandler
    def_irq_handler    CM33_ECC_MCM_IRQHandler
    def_irq_handler    RESERVED53_IRQHandler
    def_irq_handler    CAN2_DriverIRQHandler
    def_irq_handler    CAN2_ERROR_DriverIRQHandler
    def_irq_handler    CAN3_DriverIRQHandler
    def_irq_handler    CAN3_ERROR_DriverIRQHandler
    def_irq_handler    WDOG6_IRQHandler
    def_irq_handler    RESERVED59_IRQHandler
    def_irq_handler    RESERVED60_IRQHandler
    def_irq_handler    DISPLAY_MIX_IRQHandler
    def_irq_handler    FLEXIO1_DriverIRQHandler
    def_irq_handler    FLEXIO2_DriverIRQHandler
    def_irq_handler    RESERVED64_IRQHandler
    def_irq_handler    GPIO2_0_IRQHandler
    def_irq_handler    GPIO2_1_IRQHandler
    def_irq_handler    GPIO3_0_IRQHandler
    def_irq_handler    GPIO3_1_IRQHandler
    def_irq_handler    GPIO4_0_IRQHandler
    def_irq_handler    GPIO4_1_IRQHandler
    def_irq_handler    GPIO5_0_IRQHandler
    def_irq_handler    GPIO5_1_IRQHandler
    def_irq_handler    I3C2_DriverIRQHandler
    def_irq_handler    LPI2C3_DriverIRQHandler
    def_irq_handler    LPI2C4_DriverIRQHandler
    def_irq_handler    LPIT2_IRQHandler
    def_irq_handler    LPSPI3_DriverIRQHandler
    def_irq_handler    LPSPI4_DriverIRQHandler
    def_irq_handler    LPTMR2_IRQHandler
    def_irq_handler    LPUART3_DriverIRQHandler
    def_irq_handler    LPUART4_DriverIRQHandler
    def_irq_handler    LPUART5_DriverIRQHandler
    def_irq_handler    LPUART6_DriverIRQHandler
    def_irq_handler    LPUART7_DriverIRQHandler
    def_irq_handler    LPUART8_DriverIRQHandler
    def_irq_handler    MTR_MSTR_IRQHandler
    def_irq_handler    BBNSM_IRQHandler
    def_irq_handler    SYS_CTR1_IRQHandler
    def_irq_handler    TPM3_IRQHandler
    def_irq_handler    TPM4_IRQHandler
    def_irq_handler    TPM5_IRQHandler
    def_irq_handler    TPM6_IRQHandler
    def_irq_handler    WDOG3_IRQHandler
    def_irq_handler    WDOG4_IRQHandler
    def_irq_handler    WDOG5_IRQHandler
    def_irq_handler    TMPSNS1_THR1_IRQHandler
    def_irq_handler    TMPSNS1_THR2_IRQHandler
    def_irq_handler    TMPSNS1_DRDY_IRQHandler
    def_irq_handler    TMPSNS2_THR1_IRQHandler
    def_irq_handler    TMPSNS2_THR2_IRQHandler
    def_irq_handler    TMPSNS2_DRDY_IRQHandler
    def_irq_handler    USDHC1_DriverIRQHandler
    def_irq_handler    USDHC2_DriverIRQHandler
    def_irq_handler    TRDC_MGR_W1_IRQHandler
    def_irq_handler    TRDC_MGR_W2_IRQHandler
    def_irq_handler    TRDC_MGR_N_IRQHandler
    def_irq_handler    RESERVED107_IRQHandler
    def_irq_handler    RESERVED108_IRQHandler
    def_irq_handler    RESERVED109_IRQHandler
    def_irq_handler    INTG_BOOTROM_DEBUG_CTRL_IRQHandler
    def_irq_handler    DMA3_ERROR_DriverIRQHandler
    def_irq_handler    DMA3_0_DriverIRQHandler
    def_irq_handler    DMA3_1_DriverIRQHandler
    def_irq_handler    DMA3_2_DriverIRQHandler
    def_irq_handler    DMA3_3_DriverIRQHandler
    def_irq_handler    DMA3_4_DriverIRQHandler
    def_irq_handler    DMA3_5_DriverIRQHandler
    def_irq_handler    DMA3_6_DriverIRQHandler
    def_irq_handler    DMA3_7_DriverIRQHandler
    def_irq_handler    DMA3_8_DriverIRQHandler
    def_irq_handler    DMA3_9_DriverIRQHandler
    def_irq_handler    DMA3_10_DriverIRQHandler
    def_irq_handler    DMA3_11_DriverIRQHandler
    def_irq_handler    DMA3_12_DriverIRQHandler
    def_irq_handler    DMA3_13_DriverIRQHandler
    def_irq_handler    DMA3_14_DriverIRQHandler
    def_irq_handler    DMA3_15_DriverIRQHandler
    def_irq_handler    DMA3_16_DriverIRQHandler
    def_irq_handler    DMA3_17_DriverIRQHandler
    def_irq_handler    DMA3_18_DriverIRQHandler
    def_irq_handler    DMA3_19_DriverIRQHandler
    def_irq_handler    DMA3_20_DriverIRQHandler
    def_irq_handler    DMA3_21_DriverIRQHandler
    def_irq_handler    DMA3_22_DriverIRQHandler
    def_irq_handler    DMA3_23_DriverIRQHandler
    def_irq_handler    DMA3_24_DriverIRQHandler
    def_irq_handler    DMA3_25_DriverIRQHandler
    def_irq_handler    DMA3_26_DriverIRQHandler
    def_irq_handler    DMA3_27_DriverIRQHandler
    def_irq_handler    DMA3_28_DriverIRQHandler
    def_irq_handler    DMA3_29_DriverIRQHandler
    def_irq_handler    DMA3_30_DriverIRQHandler
    def_irq_handler    DMA5_2_ERROR_DriverIRQHandler
    def_irq_handler    DMA5_2_0_1_DriverIRQHandler
    def_irq_handler    DMA5_2_2_3_DriverIRQHandler
    def_irq_handler    DMA5_2_4_5_DriverIRQHandler
    def_irq_handler    DMA5_2_6_7_DriverIRQHandler
    def_irq_handler    DMA5_2_8_9_DriverIRQHandler
    def_irq_handler    DMA5_2_10_11_DriverIRQHandler
    def_irq_handler    DMA5_2_12_13_DriverIRQHandler
    def_irq_handler    DMA5_2_14_15_DriverIRQHandler
    def_irq_handler    DMA5_2_16_17_DriverIRQHandler
    def_irq_handler    DMA5_2_18_19_DriverIRQHandler
    def_irq_handler    DMA5_2_20_21_DriverIRQHandler
    def_irq_handler    DMA5_2_22_23_DriverIRQHandler
    def_irq_handler    DMA5_2_24_25_DriverIRQHandler
    def_irq_handler    DMA5_2_26_27_DriverIRQHandler
    def_irq_handler    DMA5_2_28_29_DriverIRQHandler
    def_irq_handler    DMA5_2_30_31_DriverIRQHandler
    def_irq_handler    DMA5_2_32_33_DriverIRQHandler
    def_irq_handler    DMA5_2_34_35_DriverIRQHandler
    def_irq_handler    DMA5_2_36_37_DriverIRQHandler
    def_irq_handler    DMA5_2_38_39_DriverIRQHandler
    def_irq_handler    DMA5_2_40_41_DriverIRQHandler
    def_irq_handler    DMA5_2_42_43_DriverIRQHandler
    def_irq_handler    DMA5_2_44_45_DriverIRQHandler
    def_irq_handler    DMA5_2_46_47_DriverIRQHandler
    def_irq_handler    DMA5_2_48_49_DriverIRQHandler
    def_irq_handler    DMA5_2_50_51_DriverIRQHandler
    def_irq_handler    DMA5_2_52_53_DriverIRQHandler
    def_irq_handler    DMA5_2_54_55_DriverIRQHandler
    def_irq_handler    DMA5_2_56_57_DriverIRQHandler
    def_irq_handler    DMA5_2_58_59_DriverIRQHandler
    def_irq_handler    DMA5_2_60_61_DriverIRQHandler
    def_irq_handler    DMA5_2_62_63_DriverIRQHandler
    def_irq_handler    ELE_GROUP1_IRQHandler
    def_irq_handler    ELE_GROUP2_IRQHandler
    def_irq_handler    ELE_GROUP3_IRQHandler
    def_irq_handler    DBG_TRACE_IRQHandler
    def_irq_handler    JTAGC_IRQHandler
    def_irq_handler    SYSREQRST_CM33_IRQHandler
    def_irq_handler    LOCKUP_CM33_IRQHandler
    def_irq_handler    SYSREQRST_CM7_IRQHandler
    def_irq_handler    LOCKUP_CM7_IRQHandler
    def_irq_handler    SAI2_DriverIRQHandler
    def_irq_handler    SAI3_DriverIRQHandler
    def_irq_handler    SAI4_DriverIRQHandler
    def_irq_handler    SAI5_DriverIRQHandler
    def_irq_handler    USB1_WAKEUP_IRQHandler
    def_irq_handler    USB2_WAKEUP_IRQHandler
    def_irq_handler    USB1_IRQHandler
    def_irq_handler    USB2_IRQHandler
    def_irq_handler    LPSPI5_DriverIRQHandler
    def_irq_handler    LPSPI6_DriverIRQHandler
    def_irq_handler    LPSPI7_DriverIRQHandler
    def_irq_handler    LPSPI8_DriverIRQHandler
    def_irq_handler    LPI2C5_DriverIRQHandler
    def_irq_handler    LPI2C6_DriverIRQHandler
    def_irq_handler    LPI2C7_DriverIRQHandler
    def_irq_handler    LPI2C8_DriverIRQHandler
    def_irq_handler    PDM_HWVAD_ERROR_IRQHandler
    def_irq_handler    PDM_HWVAD_EVENT_IRQHandler
    def_irq_handler    PDM_ERROR_IRQHandler
    def_irq_handler    PDM_EVENT_DriverIRQHandler
    def_irq_handler    RESERVED205_IRQHandler
    def_irq_handler    RESERVED206_IRQHandler
    def_irq_handler    USDHC3_DriverIRQHandler
    def_irq_handler    RESERVED208_IRQHandler
    def_irq_handler    RESERVED209_IRQHandler
    def_irq_handler    RESERVED210_IRQHandler
    def_irq_handler    RESERVED211_IRQHandler
    def_irq_handler    RESERVED212_IRQHandler
    def_irq_handler    RESERVED213_IRQHandler
    def_irq_handler    RESERVED214_IRQHandler
    def_irq_handler    ADC_ER_IRQHandler
    def_irq_handler    ADC_WD_IRQHandler
    def_irq_handler    ADC_EOC_IRQHandler
    def_irq_handler    RESERVED218_IRQHandler
    def_irq_handler    I3C1_RAW_IRQ_GLUE_DriverIRQHandler
    def_irq_handler    I3C2_RAW_IRQ_GLUE_DriverIRQHandler
    def_irq_handler    MU5_A_IRQHandler
    def_irq_handler    MU6_A_IRQHandler
    def_irq_handler    MU7_B_IRQHandler
    def_irq_handler    MU8_B_IRQHandler
    def_irq_handler    XSPI_SLV_DriverIRQHandler
    def_irq_handler    FCCU0_IRQHandler
    def_irq_handler    FCCU1_IRQHandler
    def_irq_handler    FCCU2_IRQHandler
    def_irq_handler    STCU_IRQHandler
    def_irq_handler    DISP_IRQSTEER0_DriverIRQHandler
    def_irq_handler    DISP_IRQSTEER1_DriverIRQHandler
    def_irq_handler    DISP_IRQSTEER2_DriverIRQHandler
    def_irq_handler    DISP_IRQSTEER3_DriverIRQHandler
    def_irq_handler    DISP_IRQSTEER4_DriverIRQHandler
    def_irq_handler    DISP_IRQSTEER7_DriverIRQHandler
    def_irq_handler    MU_C1_IRQHandler
    def_irq_handler    ISI_0_IRQHandler
    def_irq_handler    ISP_IRQHandler
    def_irq_handler    M7MIX_IRQHandler
    def_irq_handler    IRQSTEER_0_DriverIRQHandler
    def_irq_handler    IRQSTEER_1_DriverIRQHandler
    def_irq_handler    IRQSTEER_2_DriverIRQHandler
    def_irq_handler    IRQSTEER_3_DriverIRQHandler
    def_irq_handler    IRQSTEER_4_DriverIRQHandler
    def_irq_handler    IRQSTEER_5_DriverIRQHandler
    def_irq_handler    IRQSTEER_6_DriverIRQHandler
    def_irq_handler    IRQSTEER_7_DriverIRQHandler
    def_irq_handler    IRQSTEER_8_DriverIRQHandler
    def_irq_handler    IRQSTEER_9_DriverIRQHandler
    def_irq_handler    IRQSTEER_10_DriverIRQHandler
    def_irq_handler    IRQSTEER_11_DriverIRQHandler
    def_irq_handler    MU1_A_IRQHandler
    def_irq_handler    MU1_B_IRQHandler
    def_irq_handler    MU2_A_IRQHandler
    def_irq_handler    MU2_B_IRQHandler
    def_irq_handler    MU3_A_IRQHandler
    def_irq_handler    MU3_B_IRQHandler
    def_irq_handler    MU4_A_IRQHandler
    def_irq_handler    MU4_B_IRQHandler
    def_irq_handler    MU5_B_IRQHandler
    def_irq_handler    MU6_B_IRQHandler
    def_irq_handler    MU7_A_IRQHandler
    def_irq_handler    MU8_A_IRQHandler
    def_irq_handler    MSGINTR1_IRQHandler
    def_irq_handler    MSGINTR2_IRQHandler
    def_irq_handler    V2X_APCH1_IRQHandler
    def_irq_handler    V2X_HSM2_IRQHandler
    def_irq_handler    RESERVED268_IRQHandler
    def_irq_handler    RESERVED269_IRQHandler
    def_irq_handler    RESERVED270_IRQHandler
    def_irq_handler    RESERVED271_IRQHandler
    def_irq_handler    RESERVED272_IRQHandler
    def_irq_handler    RESERVED273_IRQHandler
    def_irq_handler    RESERVED274_IRQHandler
    def_irq_handler    RESERVED275_IRQHandler
    def_irq_handler    RESERVED276_IRQHandler
    def_irq_handler    RESERVED277_IRQHandler
    def_irq_handler    RESERVED278_IRQHandler
    def_irq_handler    RESERVED279_IRQHandler
    def_irq_handler    RESERVED280_IRQHandler
    def_irq_handler    RESERVED281_IRQHandler
    def_irq_handler    RESERVED282_IRQHandler
    def_irq_handler    RESERVED283_IRQHandler
    def_irq_handler    RESERVED284_IRQHandler
    def_irq_handler    RESERVED285_IRQHandler
    def_irq_handler    RESERVED286_IRQHandler
    def_irq_handler    RESERVED287_IRQHandler
    def_irq_handler    RESERVED288_IRQHandler
    def_irq_handler    RESERVED289_IRQHandler
    def_irq_handler    RESERVED290_IRQHandler
    def_irq_handler    RESERVED291_IRQHandler
    def_irq_handler    RESERVED292_IRQHandler
    def_irq_handler    RESERVED293_IRQHandler
    def_irq_handler    RESERVED294_IRQHandler
    def_irq_handler    RESERVED295_IRQHandler
    def_irq_handler    RESERVED296_IRQHandler
    def_irq_handler    RESERVED297_IRQHandler
    def_irq_handler    RESERVED298_IRQHandler
    def_irq_handler    RESERVED299_IRQHandler
    def_irq_handler    RESERVED300_IRQHandler
    def_irq_handler    RESERVED301_IRQHandler
    def_irq_handler    RESERVED302_IRQHandler
    def_irq_handler    RESERVED303_IRQHandler
    def_irq_handler    RESERVED304_IRQHandler
    def_irq_handler    RESERVED305_IRQHandler
    def_irq_handler    RESERVED306_IRQHandler
    def_irq_handler    RESERVED307_IRQHandler
    def_irq_handler    RESERVED308_IRQHandler
    def_irq_handler    RESERVED309_IRQHandler
    def_irq_handler    RESERVED310_IRQHandler
    def_irq_handler    RESERVED311_IRQHandler
    def_irq_handler    RESERVED312_IRQHandler
    def_irq_handler    RESERVED313_IRQHandler
    def_irq_handler    RESERVED314_IRQHandler
    def_irq_handler    RESERVED315_IRQHandler
    def_irq_handler    TRDC_MGR_C_IRQHandler
    def_irq_handler    TRDC_MGR_D_IRQHandler
    def_irq_handler    TRDC_MGR_E_IRQHandler
    def_irq_handler    TRDC_MGR_G_IRQHandler
    def_irq_handler    TRDC_MGR_H_IRQHandler
    def_irq_handler    TRDC_MGR_V_IRQHandler
    def_irq_handler    ERM_A_IRQHandler
    def_irq_handler    RESERVED323_IRQHandler
    def_irq_handler    ERM_W_IRQHandler
    def_irq_handler    ERM_ML_IRQHandler
    def_irq_handler    DMA5_3_ERROR_DriverIRQHandler
    def_irq_handler    OCRAM_C_IRQHandler
    def_irq_handler    RESERVED328_IRQHandler
    def_irq_handler    RESERVED329_IRQHandler
    def_irq_handler    RESERVED330_IRQHandler
    def_irq_handler    RESERVED331_IRQHandler
    def_irq_handler    RESERVED332_IRQHandler
    def_irq_handler    RESERVED333_IRQHandler
    def_irq_handler    RESERVED334_IRQHandler
    def_irq_handler    RESERVED335_IRQHandler
    def_irq_handler    RESERVED336_IRQHandler
    def_irq_handler    RESERVED337_IRQHandler
    def_irq_handler    RESERVED338_IRQHandler
    def_irq_handler    RESERVED339_IRQHandler
    def_irq_handler    RESERVED340_IRQHandler
    def_irq_handler    RESERVED341_IRQHandler
    def_irq_handler    RESERVED342_IRQHandler
    def_irq_handler    RESERVED343_IRQHandler
    def_irq_handler    RESERVED344_IRQHandler
    def_irq_handler    RESERVED345_IRQHandler
    def_irq_handler    RESERVED346_IRQHandler
    def_irq_handler    RESERVED347_IRQHandler
    def_irq_handler    RESERVED348_IRQHandler
    def_irq_handler    RESERVED349_IRQHandler
    def_irq_handler    RESERVED350_IRQHandler
    def_irq_handler    RESERVED351_IRQHandler
    def_irq_handler    RESERVED352_IRQHandler
    def_irq_handler    RESERVED353_IRQHandler
    def_irq_handler    RESERVED354_IRQHandler
    def_irq_handler    RESERVED355_IRQHandler
    def_irq_handler    RESERVED356_IRQHandler
    def_irq_handler    RESERVED357_IRQHandler
    def_irq_handler    RESERVED358_IRQHandler
    def_irq_handler    RESERVED359_IRQHandler
    def_irq_handler    RESERVED360_IRQHandler
    def_irq_handler    RESERVED361_IRQHandler
    def_irq_handler    RESERVED362_IRQHandler
    def_irq_handler    RESERVED363_IRQHandler
    def_irq_handler    RESERVED364_IRQHandler
    def_irq_handler    RESERVED365_IRQHandler
    def_irq_handler    RESERVED366_IRQHandler
    def_irq_handler    RESERVED367_IRQHandler
    def_irq_handler    RESERVED368_IRQHandler
    def_irq_handler    RESERVED369_IRQHandler
    def_irq_handler    RESERVED370_IRQHandler
    def_irq_handler    RESERVED371_IRQHandler
    def_irq_handler    RESERVED372_IRQHandler
    def_irq_handler    RESERVED373_IRQHandler
    def_irq_handler    RESERVED374_IRQHandler
    def_irq_handler    RESERVED375_IRQHandler
    def_irq_handler    RESERVED376_IRQHandler
    def_irq_handler    RESERVED377_IRQHandler
    def_irq_handler    RESERVED378_IRQHandler
    def_irq_handler    RESERVED379_IRQHandler
    def_irq_handler    DMA5_3_0_1_DriverIRQHandler
    def_irq_handler    DMA5_3_2_3_DriverIRQHandler
    def_irq_handler    DMA5_3_4_5_DriverIRQHandler
    def_irq_handler    DMA5_3_6_7_DriverIRQHandler
    def_irq_handler    DMA5_3_8_9_DriverIRQHandler
    def_irq_handler    DMA5_3_10_11_DriverIRQHandler
    def_irq_handler    DMA5_3_12_13_DriverIRQHandler
    def_irq_handler    DMA5_3_14_15_DriverIRQHandler
    def_irq_handler    DMA5_3_16_17_DriverIRQHandler
    def_irq_handler    DMA5_3_18_19_DriverIRQHandler
    def_irq_handler    DMA5_3_20_21_DriverIRQHandler
    def_irq_handler    DMA5_3_22_23_DriverIRQHandler
    def_irq_handler    DMA5_3_24_25_DriverIRQHandler
    def_irq_handler    DMA5_3_26_27_DriverIRQHandler
    def_irq_handler    DMA5_3_28_29_DriverIRQHandler
    def_irq_handler    DMA5_3_30_31_DriverIRQHandler
    def_irq_handler    RESERVED396_IRQHandler
    def_irq_handler    RESERVED397_IRQHandler
    def_irq_handler    RESERVED398_IRQHandler
    def_irq_handler    RESERVED399_IRQHandler
    def_irq_handler    RESERVED400_IRQHandler
    def_irq_handler    RESERVED401_IRQHandler
    def_irq_handler    RESERVED402_IRQHandler
    def_irq_handler    RESERVED403_IRQHandler
    def_irq_handler    RESERVED404_IRQHandler
    def_irq_handler    RESERVED405_IRQHandler
    def_irq_handler    RESERVED406_IRQHandler
    def_irq_handler    RESERVED407_IRQHandler
    def_irq_handler    RESERVED408_IRQHandler
    def_irq_handler    RESERVED409_IRQHandler
    def_irq_handler    RESERVED410_IRQHandler
    def_irq_handler    RESERVED411_IRQHandler
    def_irq_handler    RESERVED412_IRQHandler
    def_irq_handler    RESERVED413_IRQHandler
    def_irq_handler    RESERVED414_IRQHandler
    def_irq_handler    RESERVED415_IRQHandler
    def_irq_handler    RESERVED416_IRQHandler
    def_irq_handler    RESERVED417_IRQHandler
    def_irq_handler    RESERVED418_IRQHandler
    def_irq_handler    RESERVED419_IRQHandler
    def_irq_handler    RESERVED420_IRQHandler
    def_irq_handler    RESERVED421_IRQHandler
    def_irq_handler    RESERVED422_IRQHandler
    def_irq_handler    RESERVED423_IRQHandler
    def_irq_handler    RESERVED424_IRQHandler
    def_irq_handler    RESERVED425_IRQHandler
    def_irq_handler    RESERVED426_IRQHandler
    def_irq_handler    RESERVED427_IRQHandler
    def_irq_handler    RESERVED428_IRQHandler
    def_irq_handler    RESERVED429_IRQHandler
    def_irq_handler    RESERVED430_IRQHandler
    def_irq_handler    RESERVED431_IRQHandler
    def_irq_handler    RESERVED432_IRQHandler
    def_irq_handler    RESERVED433_IRQHandler
    def_irq_handler    RESERVED434_IRQHandler
    def_irq_handler    RESERVED435_IRQHandler
    def_irq_handler    RESERVED436_IRQHandler
    def_irq_handler    RESERVED437_IRQHandler
    def_irq_handler    RESERVED438_IRQHandler
    def_irq_handler    RESERVED439_IRQHandler
    def_irq_handler    RESERVED440_IRQHandler
    def_irq_handler    RESERVED441_IRQHandler
    def_irq_handler    RESERVED442_IRQHandler
    def_irq_handler    RESERVED443_IRQHandler
    def_irq_handler    DMA5_3_32_33_DriverIRQHandler
    def_irq_handler    DMA5_3_34_35_DriverIRQHandler
    def_irq_handler    DMA5_3_36_37_DriverIRQHandler
    def_irq_handler    DMA5_3_38_39_DriverIRQHandler
    def_irq_handler    DMA5_3_40_41_DriverIRQHandler
    def_irq_handler    DMA5_3_42_43_DriverIRQHandler
    def_irq_handler    DMA5_3_44_45_DriverIRQHandler
    def_irq_handler    DMA5_3_46_47_DriverIRQHandler
    def_irq_handler    DMA5_3_48_49_DriverIRQHandler
    def_irq_handler    DMA5_3_50_51_DriverIRQHandler
    def_irq_handler    DMA5_3_52_53_DriverIRQHandler
    def_irq_handler    DMA5_3_54_55_DriverIRQHandler
    def_irq_handler    DMA5_3_56_57_DriverIRQHandler
    def_irq_handler    DMA5_3_58_59_DriverIRQHandler
    def_irq_handler    DMA5_3_60_61_DriverIRQHandler
    def_irq_handler    DMA5_3_62_63_DriverIRQHandler
    def_irq_handler    RESERVED460_IRQHandler
    def_irq_handler    RESERVED461_IRQHandler
    def_irq_handler    RESERVED462_IRQHandler
    def_irq_handler    RESERVED463_IRQHandler
    def_irq_handler    RESERVED464_IRQHandler
    def_irq_handler    RESERVED465_IRQHandler
    def_irq_handler    RESERVED466_IRQHandler
    def_irq_handler    RESERVED467_IRQHandler
    def_irq_handler    RESERVED468_IRQHandler
    def_irq_handler    RESERVED469_IRQHandler
    def_irq_handler    RESERVED470_IRQHandler
    def_irq_handler    RESERVED471_IRQHandler
    def_irq_handler    RESERVED472_IRQHandler
    def_irq_handler    RESERVED473_IRQHandler
    def_irq_handler    RESERVED474_IRQHandler
    def_irq_handler    RESERVED475_IRQHandler
    def_irq_handler    RESERVED476_IRQHandler
    def_irq_handler    RESERVED477_IRQHandler
    def_irq_handler    RESERVED478_IRQHandler
    def_irq_handler    RESERVED479_IRQHandler
    def_irq_handler    RESERVED480_IRQHandler
    def_irq_handler    RESERVED481_IRQHandler
    def_irq_handler    RESERVED482_IRQHandler
    def_irq_handler    RESERVED483_IRQHandler
    def_irq_handler    RESERVED484_IRQHandler
    def_irq_handler    RESERVED485_IRQHandler
    def_irq_handler    RESERVED486_IRQHandler
    def_irq_handler    RESERVED487_IRQHandler
    def_irq_handler    RESERVED488_IRQHandler
    def_irq_handler    RESERVED489_IRQHandler
    def_irq_handler    RESERVED490_IRQHandler
    def_irq_handler    RESERVED491_IRQHandler
    def_irq_handler    RESERVED492_IRQHandler
    def_irq_handler    RESERVED493_IRQHandler
    def_irq_handler    RESERVED494_IRQHandler
    def_irq_handler    RESERVED495_IRQHandler
    def_irq_handler    RESERVED496_IRQHandler
    def_irq_handler    RESERVED497_IRQHandler
    def_irq_handler    RESERVED498_IRQHandler
    def_irq_handler    RESERVED499_IRQHandler
    def_irq_handler    RESERVED500_IRQHandler
    def_irq_handler    RESERVED501_IRQHandler
    def_irq_handler    RESERVED502_IRQHandler
    def_irq_handler    RESERVED503_IRQHandler
    def_irq_handler    RESERVED504_IRQHandler
    def_irq_handler    RESERVED505_IRQHandler
    def_irq_handler    RESERVED506_IRQHandler
    def_irq_handler    RESERVED507_IRQHandler
    def_irq_handler    RESERVED508_IRQHandler
    def_irq_handler    RESERVED509_IRQHandler
    def_irq_handler    RESERVED510_IRQHandler
    def_irq_handler    RESERVED511_IRQHandler
    def_irq_handler    RESERVED512_IRQHandler
    def_irq_handler    RESERVED513_IRQHandler
    def_irq_handler    RESERVED514_IRQHandler
    def_irq_handler    RESERVED515_IRQHandler
    def_irq_handler    RESERVED516_IRQHandler
    def_irq_handler    RESERVED517_IRQHandler
    def_irq_handler    RESERVED518_IRQHandler
    def_irq_handler    RESERVED519_IRQHandler
    def_irq_handler    RESERVED520_IRQHandler
    def_irq_handler    RESERVED521_IRQHandler
    def_irq_handler    RESERVED522_IRQHandler
    def_irq_handler    RESERVED523_IRQHandler
    def_irq_handler    RESERVED524_IRQHandler
    def_irq_handler    RESERVED525_IRQHandler
    def_irq_handler    RESERVED526_IRQHandler
    def_irq_handler    RESERVED527_IRQHandler
    def_irq_handler    RESERVED528_IRQHandler
    def_irq_handler    RESERVED529_IRQHandler
    def_irq_handler    RESERVED530_IRQHandler
    def_irq_handler    RESERVED531_IRQHandler
    def_irq_handler    RESERVED532_IRQHandler
    def_irq_handler    RESERVED533_IRQHandler
    def_irq_handler    RESERVED534_IRQHandler
    def_irq_handler    RESERVED535_IRQHandler
    def_irq_handler    RESERVED536_IRQHandler
    def_irq_handler    RESERVED537_IRQHandler
    def_irq_handler    RESERVED538_IRQHandler
    def_irq_handler    RESERVED539_IRQHandler
    def_irq_handler    RESERVED540_IRQHandler
    def_irq_handler    RESERVED541_IRQHandler
    def_irq_handler    RESERVED542_IRQHandler
    def_irq_handler    RESERVED543_IRQHandler
    def_irq_handler    RESERVED544_IRQHandler
    def_irq_handler    RESERVED545_IRQHandler
    def_irq_handler    RESERVED546_IRQHandler
    def_irq_handler    RESERVED547_IRQHandler
    def_irq_handler    RESERVED548_IRQHandler
    def_irq_handler    RESERVED549_IRQHandler
    def_irq_handler    RESERVED550_IRQHandler
    def_irq_handler    RESERVED551_IRQHandler
    def_irq_handler    RESERVED552_IRQHandler
    def_irq_handler    RESERVED553_IRQHandler
    def_irq_handler    RESERVED554_IRQHandler
    def_irq_handler    RESERVED555_IRQHandler
    def_irq_handler    RESERVED556_IRQHandler
    def_irq_handler    RESERVED557_IRQHandler
    def_irq_handler    RESERVED558_IRQHandler
    def_irq_handler    RESERVED559_IRQHandler
    def_irq_handler    RESERVED560_IRQHandler
    def_irq_handler    RESERVED561_IRQHandler
    def_irq_handler    RESERVED562_IRQHandler
    def_irq_handler    RESERVED563_IRQHandler
    def_irq_handler    RESERVED564_IRQHandler
    def_irq_handler    RESERVED565_IRQHandler
    def_irq_handler    RESERVED566_IRQHandler
    def_irq_handler    RESERVED567_IRQHandler
    def_irq_handler    RESERVED568_IRQHandler
    def_irq_handler    RESERVED569_IRQHandler
    def_irq_handler    RESERVED570_IRQHandler
    def_irq_handler    RESERVED571_IRQHandler
    def_irq_handler    RESERVED572_IRQHandler
    def_irq_handler    RESERVED573_IRQHandler
    def_irq_handler    RESERVED574_IRQHandler
    def_irq_handler    RESERVED575_IRQHandler
    def_irq_handler    RESERVED576_IRQHandler
    def_irq_handler    RESERVED577_IRQHandler
    def_irq_handler    RESERVED578_IRQHandler
    def_irq_handler    RESERVED579_IRQHandler
    def_irq_handler    RESERVED580_IRQHandler
    def_irq_handler    RESERVED581_IRQHandler
    def_irq_handler    RESERVED582_IRQHandler
    def_irq_handler    RESERVED583_IRQHandler
    def_irq_handler    RESERVED584_IRQHandler
    def_irq_handler    RESERVED585_IRQHandler
    def_irq_handler    RESERVED586_IRQHandler
    def_irq_handler    RESERVED587_IRQHandler
    def_irq_handler    RESERVED588_IRQHandler
    def_irq_handler    RESERVED589_IRQHandler
    def_irq_handler    RESERVED590_IRQHandler
    def_irq_handler    RESERVED591_IRQHandler
    def_irq_handler    RESERVED592_IRQHandler
    def_irq_handler    RESERVED593_IRQHandler
    def_irq_handler    RESERVED594_IRQHandler
    def_irq_handler    RESERVED595_IRQHandler
    def_irq_handler    RESERVED596_IRQHandler
    def_irq_handler    RESERVED597_IRQHandler
    def_irq_handler    RESERVED598_IRQHandler
    def_irq_handler    RESERVED599_IRQHandler
    def_irq_handler    RESERVED600_IRQHandler
    def_irq_handler    RESERVED601_IRQHandler
    def_irq_handler    RESERVED602_IRQHandler
    def_irq_handler    RESERVED603_IRQHandler
    def_irq_handler    RESERVED604_IRQHandler
    def_irq_handler    RESERVED605_IRQHandler
    def_irq_handler    RESERVED606_IRQHandler
    def_irq_handler    RESERVED607_IRQHandler
    def_irq_handler    RESERVED608_IRQHandler
    def_irq_handler    RESERVED609_IRQHandler
    def_irq_handler    RESERVED610_IRQHandler
    def_irq_handler    RESERVED611_IRQHandler
    def_irq_handler    RESERVED612_IRQHandler
    def_irq_handler    RESERVED613_IRQHandler
    def_irq_handler    RESERVED614_IRQHandler
    def_irq_handler    RESERVED615_IRQHandler
    def_irq_handler    RESERVED616_IRQHandler
    def_irq_handler    RESERVED617_IRQHandler
    def_irq_handler    RESERVED618_IRQHandler
    def_irq_handler    RESERVED619_IRQHandler
    def_irq_handler    RESERVED620_IRQHandler
    def_irq_handler    RESERVED621_IRQHandler
    def_irq_handler    RESERVED622_IRQHandler
    def_irq_handler    RESERVED623_IRQHandler
    def_irq_handler    RESERVED624_IRQHandler
    def_irq_handler    RESERVED625_IRQHandler
    def_irq_handler    RESERVED626_IRQHandler
    def_irq_handler    RESERVED627_IRQHandler
    def_irq_handler    RESERVED628_IRQHandler
    def_irq_handler    RESERVED629_IRQHandler
    def_irq_handler    RESERVED630_IRQHandler
    def_irq_handler    RESERVED631_IRQHandler
    def_irq_handler    RESERVED632_IRQHandler
    def_irq_handler    RESERVED633_IRQHandler
    def_irq_handler    RESERVED634_IRQHandler
    def_irq_handler    RESERVED635_IRQHandler
    def_irq_handler    RESERVED636_IRQHandler
    def_irq_handler    RESERVED637_IRQHandler
    def_irq_handler    RESERVED638_IRQHandler
    def_irq_handler    RESERVED639_IRQHandler
    def_irq_handler    RESERVED640_IRQHandler
    def_irq_handler    RESERVED641_IRQHandler
    def_irq_handler    RESERVED642_IRQHandler
    def_irq_handler    RESERVED643_IRQHandler
    def_irq_handler    RESERVED644_IRQHandler
    def_irq_handler    RESERVED645_IRQHandler
    def_irq_handler    RESERVED646_IRQHandler
    def_irq_handler    RESERVED647_IRQHandler
    def_irq_handler    RESERVED648_IRQHandler
    def_irq_handler    RESERVED649_IRQHandler
    def_irq_handler    RESERVED650_IRQHandler
    def_irq_handler    LP_HDSK_GSKT_IRQHandler
    def_irq_handler    RESERVED652_IRQHandler
    def_irq_handler    RESERVED653_IRQHandler
    def_irq_handler    RESERVED654_IRQHandler
    def_irq_handler    RESERVED655_IRQHandler
    def_irq_handler    RESERVED656_IRQHandler
    def_irq_handler    RESERVED657_IRQHandler
    def_irq_handler    RESERVED658_IRQHandler
    def_irq_handler    RESERVED659_IRQHandler
    def_irq_handler    RESERVED660_IRQHandler
    def_irq_handler    RESERVED661_IRQHandler
    def_irq_handler    RESERVED662_IRQHandler
    def_irq_handler    RESERVED663_IRQHandler
    def_irq_handler    RESERVED664_IRQHandler
    def_irq_handler    RESERVED665_IRQHandler
    def_irq_handler    RESERVED666_IRQHandler
    def_irq_handler    RESERVED667_IRQHandler
    def_irq_handler    RESERVED668_IRQHandler
    def_irq_handler    RESERVED669_IRQHandler
    def_irq_handler    RESERVED670_IRQHandler
    def_irq_handler    RESERVED671_IRQHandler
    def_irq_handler    RESERVED672_IRQHandler
    def_irq_handler    RESERVED673_IRQHandler
    def_irq_handler    RESERVED674_IRQHandler
    def_irq_handler    RESERVED675_IRQHandler
    def_irq_handler    RESERVED676_IRQHandler
    def_irq_handler    RESERVED677_IRQHandler
    def_irq_handler    RESERVED678_IRQHandler
    def_irq_handler    RESERVED679_IRQHandler
    def_irq_handler    RESERVED680_IRQHandler
    def_irq_handler    RESERVED681_IRQHandler
    def_irq_handler    RESERVED682_IRQHandler
    def_irq_handler    RESERVED683_IRQHandler
    def_irq_handler    RESERVED684_IRQHandler
    def_irq_handler    RESERVED685_IRQHandler
    def_irq_handler    RESERVED686_IRQHandler
    def_irq_handler    RESERVED687_IRQHandler
    def_irq_handler    RESERVED688_IRQHandler
    def_irq_handler    RESERVED689_IRQHandler
    def_irq_handler    RESERVED690_IRQHandler
    def_irq_handler    RESERVED691_IRQHandler
    def_irq_handler    RESERVED692_IRQHandler
    def_irq_handler    RESERVED693_IRQHandler
    def_irq_handler    RESERVED694_IRQHandler
    def_irq_handler    RESERVED695_IRQHandler
    def_irq_handler    RESERVED696_IRQHandler
    def_irq_handler    RESERVED697_IRQHandler
    def_irq_handler    RESERVED698_IRQHandler
    def_irq_handler    RESERVED699_IRQHandler
    def_irq_handler    MU_C2_IRQHandler
    def_irq_handler    MU_C3_IRQHandler
    def_irq_handler    MU_C4_IRQHandler
    def_irq_handler    MU_C5_IRQHandler
    def_irq_handler    MU_C6_IRQHandler
    def_irq_handler    MU_C7_IRQHandler
    def_irq_handler    MU_C8_IRQHandler
    def_irq_handler    MU_C9_IRQHandler
    def_irq_handler    ISI_1_IRQHandler
    def_irq_handler    ISI_2_IRQHandler
    def_irq_handler    ISI_3_IRQHandler
    def_irq_handler    ISI_4_IRQHandler
    def_irq_handler    ISI_5_IRQHandler
    def_irq_handler    ISI_6_IRQHandler
    def_irq_handler    ISI_7_IRQHandler
    def_irq_handler    DMA5_4_ERROR_DriverIRQHandler
    def_irq_handler    RESERVED716_IRQHandler
    def_irq_handler    RESERVED717_IRQHandler
    def_irq_handler    RESERVED718_IRQHandler
    def_irq_handler    RESERVED719_IRQHandler
    def_irq_handler    RESERVED720_IRQHandler
    def_irq_handler    RESERVED721_IRQHandler
    def_irq_handler    RESERVED722_IRQHandler
    def_irq_handler    RESERVED723_IRQHandler
    def_irq_handler    RESERVED724_IRQHandler
    def_irq_handler    RESERVED725_IRQHandler
    def_irq_handler    RESERVED726_IRQHandler
    def_irq_handler    RESERVED727_IRQHandler
    def_irq_handler    RESERVED728_IRQHandler
    def_irq_handler    RESERVED729_IRQHandler
    def_irq_handler    RESERVED730_IRQHandler
    def_irq_handler    RESERVED731_IRQHandler
    def_irq_handler    RESERVED732_IRQHandler
    def_irq_handler    RESERVED733_IRQHandler
    def_irq_handler    RESERVED734_IRQHandler
    def_irq_handler    RESERVED735_IRQHandler
    def_irq_handler    RESERVED736_IRQHandler
    def_irq_handler    RESERVED737_IRQHandler
    def_irq_handler    RESERVED738_IRQHandler
    def_irq_handler    RESERVED739_IRQHandler
    def_irq_handler    RESERVED740_IRQHandler
    def_irq_handler    RESERVED741_IRQHandler
    def_irq_handler    RESERVED742_IRQHandler
    def_irq_handler    RESERVED743_IRQHandler
    def_irq_handler    RESERVED744_IRQHandler
    def_irq_handler    RESERVED745_IRQHandler
    def_irq_handler    RESERVED746_IRQHandler
    def_irq_handler    RESERVED747_IRQHandler
    def_irq_handler    RESERVED748_IRQHandler
    def_irq_handler    RESERVED749_IRQHandler
    def_irq_handler    RESERVED750_IRQHandler
    def_irq_handler    RESERVED751_IRQHandler
    def_irq_handler    RESERVED752_IRQHandler
    def_irq_handler    RESERVED753_IRQHandler
    def_irq_handler    RESERVED754_IRQHandler
    def_irq_handler    RESERVED755_IRQHandler
    def_irq_handler    RESERVED756_IRQHandler
    def_irq_handler    RESERVED757_IRQHandler
    def_irq_handler    RESERVED758_IRQHandler
    def_irq_handler    RESERVED759_IRQHandler
    def_irq_handler    RESERVED760_IRQHandler
    def_irq_handler    RESERVED761_IRQHandler
    def_irq_handler    RESERVED762_IRQHandler
    def_irq_handler    RESERVED763_IRQHandler
    def_irq_handler    DMA5_4_0_1_DriverIRQHandler
    def_irq_handler    DMA5_4_2_3_DriverIRQHandler
    def_irq_handler    DMA5_4_4_5_DriverIRQHandler
    def_irq_handler    DMA5_4_6_7_DriverIRQHandler
    def_irq_handler    DMA5_4_8_9_DriverIRQHandler
    def_irq_handler    DMA5_4_10_11_DriverIRQHandler
    def_irq_handler    DMA5_4_12_13_DriverIRQHandler
    def_irq_handler    DMA5_4_14_15_DriverIRQHandler
    def_irq_handler    DMA5_4_16_17_DriverIRQHandler
    def_irq_handler    DMA5_4_18_19_DriverIRQHandler
    def_irq_handler    DMA5_4_20_21_DriverIRQHandler
    def_irq_handler    DMA5_4_22_23_DriverIRQHandler
    def_irq_handler    DMA5_4_24_25_DriverIRQHandler
    def_irq_handler    DMA5_4_26_27_DriverIRQHandler
    def_irq_handler    DMA5_4_28_29_DriverIRQHandler
    def_irq_handler    DMA5_4_30_31_DriverIRQHandler
    def_irq_handler    RESERVED780_IRQHandler
    def_irq_handler    RESERVED781_IRQHandler
    def_irq_handler    RESERVED782_IRQHandler
    def_irq_handler    RESERVED783_IRQHandler
    def_irq_handler    RESERVED784_IRQHandler
    def_irq_handler    RESERVED785_IRQHandler
    def_irq_handler    RESERVED786_IRQHandler
    def_irq_handler    RESERVED787_IRQHandler
    def_irq_handler    RESERVED788_IRQHandler
    def_irq_handler    RESERVED789_IRQHandler
    def_irq_handler    RESERVED790_IRQHandler
    def_irq_handler    RESERVED791_IRQHandler
    def_irq_handler    RESERVED792_IRQHandler
    def_irq_handler    RESERVED793_IRQHandler
    def_irq_handler    RESERVED794_IRQHandler
    def_irq_handler    RESERVED795_IRQHandler
    def_irq_handler    RESERVED796_IRQHandler
    def_irq_handler    RESERVED797_IRQHandler
    def_irq_handler    RESERVED798_IRQHandler
    def_irq_handler    RESERVED799_IRQHandler
    def_irq_handler    RESERVED800_IRQHandler
    def_irq_handler    RESERVED801_IRQHandler
    def_irq_handler    RESERVED802_IRQHandler
    def_irq_handler    RESERVED803_IRQHandler
    def_irq_handler    RESERVED804_IRQHandler
    def_irq_handler    RESERVED805_IRQHandler
    def_irq_handler    RESERVED806_IRQHandler
    def_irq_handler    RESERVED807_IRQHandler
    def_irq_handler    RESERVED808_IRQHandler
    def_irq_handler    RESERVED809_IRQHandler
    def_irq_handler    RESERVED810_IRQHandler
    def_irq_handler    RESERVED811_IRQHandler
    def_irq_handler    RESERVED812_IRQHandler
    def_irq_handler    RESERVED813_IRQHandler
    def_irq_handler    RESERVED814_IRQHandler
    def_irq_handler    RESERVED815_IRQHandler
    def_irq_handler    RESERVED816_IRQHandler
    def_irq_handler    RESERVED817_IRQHandler
    def_irq_handler    RESERVED818_IRQHandler
    def_irq_handler    RESERVED819_IRQHandler
    def_irq_handler    RESERVED820_IRQHandler
    def_irq_handler    RESERVED821_IRQHandler
    def_irq_handler    RESERVED822_IRQHandler
    def_irq_handler    RESERVED823_IRQHandler
    def_irq_handler    RESERVED824_IRQHandler
    def_irq_handler    RESERVED825_IRQHandler
    def_irq_handler    RESERVED826_IRQHandler
    def_irq_handler    RESERVED827_IRQHandler
    def_irq_handler    RESERVED828_IRQHandler
    def_irq_handler    RESERVED829_IRQHandler
    def_irq_handler    RESERVED830_IRQHandler
    def_irq_handler    RESERVED831_IRQHandler
    def_irq_handler    RESERVED832_IRQHandler
    def_irq_handler    RESERVED833_IRQHandler
    def_irq_handler    CSI1_IRQHandler
    def_irq_handler    CSI2_IRQHandler
    def_irq_handler    ASRC1_DriverIRQHandler
    def_irq_handler    RESERVED837_IRQHandler
    def_irq_handler    RESERVED838_IRQHandler
    def_irq_handler    RESERVED839_IRQHandler
    def_irq_handler    RESERVED840_IRQHandler
    def_irq_handler    RESERVED841_IRQHandler
    def_irq_handler    RESERVED842_IRQHandler
    def_irq_handler    RESERVED843_IRQHandler
    def_irq_handler    RESERVED844_IRQHandler
    def_irq_handler    RESERVED845_IRQHandler
    def_irq_handler    RESERVED846_IRQHandler
    def_irq_handler    RESERVED847_IRQHandler
    def_irq_handler    RESERVED848_IRQHandler
    def_irq_handler    RESERVED849_IRQHandler
    def_irq_handler    RESERVED850_IRQHandler
    def_irq_handler    RESERVED851_IRQHandler
    def_irq_handler    RESERVED852_IRQHandler
    def_irq_handler    RESERVED853_IRQHandler
    def_irq_handler    RESERVED854_IRQHandler
    def_irq_handler    RESERVED855_IRQHandler
    def_irq_handler    RESERVED856_IRQHandler
    def_irq_handler    RESERVED857_IRQHandler
    def_irq_handler    RESERVED858_IRQHandler
    def_irq_handler    RESERVED859_IRQHandler
    def_irq_handler    RESERVED860_IRQHandler
    def_irq_handler    RESERVED861_IRQHandler
    def_irq_handler    RESERVED862_IRQHandler
    def_irq_handler    RESERVED863_IRQHandler
    def_irq_handler    RESERVED864_IRQHandler
    def_irq_handler    RESERVED865_IRQHandler
    def_irq_handler    RESERVED866_IRQHandler
    def_irq_handler    RESERVED867_IRQHandler
    def_irq_handler    RESERVED868_IRQHandler
    def_irq_handler    RESERVED869_IRQHandler
    def_irq_handler    RESERVED870_IRQHandler
    def_irq_handler    RESERVED871_IRQHandler
    def_irq_handler    RESERVED872_IRQHandler
    def_irq_handler    RESERVED873_IRQHandler
    def_irq_handler    RESERVED874_IRQHandler
    def_irq_handler    RESERVED875_IRQHandler
    def_irq_handler    RESERVED876_IRQHandler
    def_irq_handler    RESERVED877_IRQHandler
    def_irq_handler    RESERVED878_IRQHandler
    def_irq_handler    RESERVED879_IRQHandler
    def_irq_handler    RESERVED880_IRQHandler
    def_irq_handler    RESERVED881_IRQHandler
    def_irq_handler    RESERVED882_IRQHandler
    def_irq_handler    RESERVED883_IRQHandler
    def_irq_handler    RESERVED884_IRQHandler
    def_irq_handler    RESERVED885_IRQHandler
    def_irq_handler    RESERVED886_IRQHandler
    def_irq_handler    RESERVED887_IRQHandler
    def_irq_handler    RESERVED888_IRQHandler
    def_irq_handler    RESERVED889_IRQHandler
    def_irq_handler    RESERVED890_IRQHandler
    def_irq_handler    RESERVED891_IRQHandler
    def_irq_handler    ASRC2_DriverIRQHandler
    def_irq_handler    RESERVED893_IRQHandler
    def_irq_handler    RESERVED894_IRQHandler
    def_irq_handler    RESERVED895_IRQHandler
    def_irq_handler    RESERVED896_IRQHandler
    def_irq_handler    RESERVED897_IRQHandler
    def_irq_handler    RESERVED898_IRQHandler
    def_irq_handler    NOC_VPU_IRQHandler
    def_irq_handler    NOC_DISPLAY_IRQHandler
    def_irq_handler    NOC_CAMERA_IRQHandler
    def_irq_handler    NOC_HSIO_IRQHandler
    def_irq_handler    NOC_WAKEUP_IRQHandler
    def_irq_handler    NOC_CENTRAL_IRQHandler
    def_irq_handler    ERM_DISPLAY_IRQHandler
    def_irq_handler    RESERVED906_IRQHandler
    def_irq_handler    SAI6_DriverIRQHandler
    def_irq_handler    RESERVED908_IRQHandler
    def_irq_handler    RESERVED909_IRQHandler
    def_irq_handler    RESERVED910_IRQHandler
    def_irq_handler    RESERVED911_IRQHandler
    def_irq_handler    RESERVED912_IRQHandler
    def_irq_handler    RESERVED913_IRQHandler
    def_irq_handler    RESERVED914_IRQHandler
    def_irq_handler    RESERVED915_IRQHandler
    def_irq_handler    RESERVED916_IRQHandler
    def_irq_handler    RESERVED917_IRQHandler
    def_irq_handler    RESERVED918_IRQHandler
    def_irq_handler    RESERVED919_IRQHandler
    def_irq_handler    RESERVED920_IRQHandler
    def_irq_handler    RESERVED921_IRQHandler
    def_irq_handler    RESERVED922_IRQHandler
    def_irq_handler    RESERVED923_IRQHandler
    def_irq_handler    RESERVED924_IRQHandler
    def_irq_handler    RESERVED925_IRQHandler
    def_irq_handler    RESERVED926_IRQHandler
    def_irq_handler    RESERVED927_IRQHandler
    def_irq_handler    RESERVED928_IRQHandler
    def_irq_handler    RESERVED929_IRQHandler
    def_irq_handler    RESERVED930_IRQHandler
    def_irq_handler    RESERVED931_IRQHandler
    def_irq_handler    RESERVED932_IRQHandler
    def_irq_handler    RESERVED933_IRQHandler
    def_irq_handler    RESERVED934_IRQHandler
    def_irq_handler    RESERVED935_IRQHandler
    def_irq_handler    RESERVED936_IRQHandler
    def_irq_handler    RESERVED937_IRQHandler
    def_irq_handler    RESERVED938_IRQHandler
    def_irq_handler    RESERVED939_IRQHandler
    def_irq_handler    RESERVED940_IRQHandler
    def_irq_handler    RESERVED941_IRQHandler
    def_irq_handler    RESERVED942_IRQHandler
    def_irq_handler    RESERVED943_IRQHandler
    def_irq_handler    RESERVED944_IRQHandler
    def_irq_handler    RESERVED945_IRQHandler
    def_irq_handler    RESERVED946_IRQHandler
    def_irq_handler    RESERVED947_IRQHandler
    def_irq_handler    RESERVED948_IRQHandler
    def_irq_handler    RESERVED949_IRQHandler
    def_irq_handler    RESERVED950_IRQHandler
    def_irq_handler    RESERVED951_IRQHandler
    def_irq_handler    RESERVED952_IRQHandler
    def_irq_handler    RESERVED953_IRQHandler
    def_irq_handler    RESERVED954_IRQHandler
    def_irq_handler    RESERVED955_IRQHandler
    def_irq_handler    XSPI1_0_DriverIRQHandler
    def_irq_handler    XSPI1_1_DriverIRQHandler
    def_irq_handler    XSPI1_2_DriverIRQHandler
    def_irq_handler    XSPI1_3_DriverIRQHandler
    def_irq_handler    XSPI1_4_DriverIRQHandler
    def_irq_handler    RESERVED961_IRQHandler
    def_irq_handler    RESERVED962_IRQHandler
    def_irq_handler    CCM_IRQHandler
    def_irq_handler    MU_D1_IRQHandler
    def_irq_handler    MU_D2_IRQHandler
    def_irq_handler    GPT2_IRQHandler
    def_irq_handler    GPT3_IRQHandler
    def_irq_handler    GPT4_IRQHandler
    def_irq_handler    GPT5_IRQHandler
    def_irq_handler    LPSPI9_DriverIRQHandler

    .end
