; -------------------------------------------------------------------------
;  @file:    startup_MIMX9522_cm7.s
;  @purpose: CMSIS Cortex-M7 Core Device Startup File
;            MIMX9522_cm7
;  @version: 2.0
;  @date:    2024-10-29
;  @build:   b260324
; -------------------------------------------------------------------------
;
; Copyright 1997-2016 Freescale Semiconductor, Inc.
; Copyright 2016-2026 NXP
; SPDX-License-Identifier: BSD-3-Clause
;
; The modules in this file are included in the libraries, and may be replaced
; by any user-defined modules that define the PUBLIC symbol _program_start or
; a user defined start symbol.
; To override the cstartup defined in the library, simply add your modified
; version to the workbench project.
;
; The vector table is normally located at address 0.
; When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
; The name "__vector_table" has special meaning for C-SPY:
; it is where the SP start value is found, and the NVIC vector
; table register (VTOR) is initialized to this address if != 0.
;
; Cortex-M version
;

        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .intvec:CODE:NOROOT(2)

        EXTERN  __iar_program_start
        EXTERN  SystemInit
        PUBLIC  __vector_table
        PUBLIC  __vector_table_0x1c
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA

__iar_init$$done:              ; The vector table is not needed
                      ; until after copy initialization is done

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler

        DCD     NMI_Handler                                   ;NMI Handler
        DCD     HardFault_Handler                             ;Hard Fault Handler
        DCD     MemManage_Handler                             ;MPU Fault Handler
        DCD     BusFault_Handler                              ;Bus Fault Handler
        DCD     UsageFault_Handler                            ;Usage Fault Handler
__vector_table_0x1c
        DCD     0                                             ;Reserved
        DCD     0                                             ;Reserved
        DCD     0                                             ;Reserved
        DCD     0                                             ;Reserved
        DCD     SVC_Handler                                   ;SVCall Handler
        DCD     DebugMon_Handler                              ;Debug Monitor Handler
        DCD     0                                             ;Reserved
        DCD     PendSV_Handler                                ;PendSV Handler
        DCD     SysTick_Handler                               ;SysTick Handler

                                                              ;External Interrupts
        DCD     RESERVED16_IRQHandler                         ;Reserved interrupt
        DCD     RESERVED17_IRQHandler                         ;DAP Interrupt
        DCD     RESERVED18_IRQHandler                         ;CTI trigger outputs from CM7 platform  (internal: CTIIRQ[0])
        DCD     RESERVED19_IRQHandler                         ;CTI trigger outputs from CM33 platform  (internal: CTIIRQ[0])
        DCD     RESERVED20_IRQHandler                         ;CTI trigger outputs from CA55 platform  (internal: nCTIIRQ[0])
        DCD     RESERVED21_IRQHandler                         ;Performance Unit Interrupts from CA55 platform (interrnally:  PMUIRQ[0])
        DCD     RESERVED22_IRQHandler                         ;ECC error with potential data corruption or loss of coherency from CA55 platform L3 Cache
        DCD     RESERVED23_IRQHandler                         ;1-bit or 2-bit ECC or Parity error from CA55 platform L3 Cache
        DCD     CAN1_IRQHandler                               ;AONMIX CAN-FD Interrupt from busoff
        DCD     CAN1_ERROR_IRQHandler                         ;AONMIX CAN-FD Correctable error interrupt
        DCD     GPIO1_0_IRQHandler                            ;AONMIX GPIO interrupt request 0
        DCD     GPIO1_1_IRQHandler                            ;AONMIX GPIO interrupt request 1
        DCD     I3C1_IRQHandler                               ;AONMIX I3C interrupt request
        DCD     LPI2C1_IRQHandler                             ;AONMIX LPI2C Master interrupt
        DCD     LPI2C2_IRQHandler                             ;AONMIX LPI2C Master interrupt
        DCD     LPIT1_IRQHandler                              ;AONMIX LPIT global interrupt
        DCD     LPSPI1_IRQHandler                             ;AONMIX LPSPI interrupt
        DCD     LPSPI2_IRQHandler                             ;AONMIX LPSPI interrupt
        DCD     LPTMR1_IRQHandler                             ;AONMIX LPTMR async interrupt
        DCD     LPUART1_IRQHandler                            ;AONMIX LPUART TX interrupt
        DCD     LPUART2_IRQHandler                            ;AONMIX LPUART TX interrupt
        DCD     RESERVED37_IRQHandler                         ;AONMIX Sentinel MU0 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED38_IRQHandler                         ;AONMIX Sentinel MU1 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED39_IRQHandler                         ;AONMIX Sentinel MU2 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED40_IRQHandler                         ;AONMIX Sentinel MU3 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED41_IRQHandler                         ;AONMIX Sentinel MU4 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED42_IRQHandler                         ;AONMIX Sentinel MU5 SideA RX full interrupt, masked by BLK_CTRL_S_AONMIX
        DCD     RESERVED43_IRQHandler                         ;V2X-FH MU APCH0 (APP0) A_TX interrupt
        DCD     RESERVED44_IRQHandler                         ;V2X-FH MU APHSM1 (HSM1) A_TX interrupt
        DCD     TPM1_IRQHandler                               ;AONMIX LPTPM global interrupt
        DCD     TPM2_IRQHandler                               ;AONMIX LPTPM global interrupt
        DCD     WDOG1_IRQHandler                              ;AONMIX Watchdog interrupt request.  SRC reset source.
        DCD     WDOG2_IRQHandler                              ;AONMIX Watchdog interrupt request.  SRC reset source.
        DCD     TRDC_MGR_A_IRQHandler                         ;AONMIX TRDC transfer error interrupt
        DCD     SAI1_IRQHandler                               ;AONMIX SAI TX interrupt
        DCD     RESERVED51_IRQHandler                         ;AONMIX M33 PS Tag Parity Error
        DCD     CM33_ECC_MCM_IRQHandler                       ;AONMIX M33 TCM Error interrupt
        DCD     RESERVED53_IRQHandler                         ;M7MIX ECC Multi-bit error
        DCD     CAN2_IRQHandler                               ;WAKEUPMIX CAN-FD Interrupt from busoff
        DCD     CAN2_ERROR_IRQHandler                         ;WAKEUPMIX CAN-FD Correctable error interrupt
        DCD     CAN3_IRQHandler                               ;WAKEUPMIX CAN-FD Interrupt from busoff
        DCD     CAN3_ERROR_IRQHandler                         ;WAKEUPMIX CAN-FD Correctable error interrupt
        DCD     WDOG6_IRQHandler                              ;DISPLAYMIX Watchdog interrupt request. SRC reset source.
        DCD     RESERVED59_IRQHandler                         ;Additional inverted version of Interrupt added for s500_scm_halt_ack_irq. Which could be uzseful for Sentinel Wakeup
        DCD     RESERVED60_IRQHandler                         ;s500.sentinel_irq_glue_s500_irq_req4 is connected with ocotp_cont_edc_err
        DCD     DISPLAY_MIX_IRQHandler                        ;Local Dimming Interrupt
        DCD     FLEXIO1_IRQHandler                            ;WAKEUPMIX FLEXIO interrupt
        DCD     FLEXIO2_IRQHandler                            ;WAKEUPMIX FLEXIO interrupt
        DCD     RESERVED64_IRQHandler                         ;Reserved
        DCD     GPIO2_0_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 0
        DCD     GPIO2_1_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 1
        DCD     GPIO3_0_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 0
        DCD     GPIO3_1_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 1
        DCD     GPIO4_0_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 0
        DCD     GPIO4_1_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 1
        DCD     GPIO5_0_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 0
        DCD     GPIO5_1_IRQHandler                            ;WAKEUPMIX GPIO interrupt request 1
        DCD     I3C2_IRQHandler                               ;WAKEUPMIX I3C interrupt request
        DCD     LPI2C3_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     LPI2C4_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     LPIT2_IRQHandler                              ;WAKEUPMIX LPIT global interrupt
        DCD     LPSPI3_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPSPI4_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPTMR2_IRQHandler                             ;WAKEUPMIX LPTMR async interrupt
        DCD     LPUART3_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     LPUART4_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     LPUART5_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     LPUART6_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     LPUART7_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     LPUART8_IRQHandler                            ;WAKEUPMIX LPUART TX interrupt
        DCD     MTR_MSTR_IRQHandler                           ;AONMIX MTR Master error interrupt
        DCD     BBNSM_IRQHandler                              ;BBNSM Non-Secure external wakeup alarm
        DCD     SYS_CTR1_IRQHandler                           ;WAKEUPMIX System Counter compare interrupt 0
        DCD     TPM3_IRQHandler                               ;WAKEUPMIX LPTPM global interrupt
        DCD     TPM4_IRQHandler                               ;WAKEUPMIX LPTPM global interrupt
        DCD     TPM5_IRQHandler                               ;WAKEUPMIX LPTPM async interrupt
        DCD     TPM6_IRQHandler                               ;WAKEUPMIX LPTPM async interrupt
        DCD     WDOG3_IRQHandler                              ;WAKEUPMIX Watchdog interrupt request. SRC reset source.
        DCD     WDOG4_IRQHandler                              ;WAKEUPMIX Watchdog interrupt request. SRC reset source.
        DCD     WDOG5_IRQHandler                              ;WAKEUPMIX Watchdog interrupt request. SRC reset source.
        DCD     TMPSNS1_THR1_IRQHandler                       ;ANAMIX TempSensor non-secure interrupt from Threshold 1
        DCD     TMPSNS1_THR2_IRQHandler                       ;ANAMIX TempSensor non-secure interrupt from Threshold 2
        DCD     TMPSNS1_DRDY_IRQHandler                       ;ANAMIX TempSensor non-secure data ready interrupt
        DCD     TMPSNS2_THR1_IRQHandler                       ;CORTEXAMIX TempSensor non-secure interrupt from Threshold 1
        DCD     TMPSNS2_THR2_IRQHandler                       ;CORTEXAMIX TempSensor non-secure interrupt from Threshold 2
        DCD     TMPSNS2_DRDY_IRQHandler                       ;CORTEXAMIX TempSensor non-secure data ready interrupt
        DCD     USDHC1_IRQHandler                             ;MEGAMIX uSDHC Enhanced SDHC Interrupt Request
        DCD     USDHC2_IRQHandler                             ;MEGAMIX uSDHC Enhanced SDHC Interrupt Request
        DCD     TRDC_MGR_W1_IRQHandler                        ;WAKEUPMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_W2_IRQHandler                        ;WAKEUPMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_N_IRQHandler                         ;NOCMIX TRDC transfer error interrupt
        DCD     RESERVED107_IRQHandler                        ;DRAM controller Performance Monitor Interrupt
        DCD     RESERVED108_IRQHandler                        ;DRAM controller Critical Interrupt
        DCD     RESERVED109_IRQHandler                        ;DRAM Phy Critical Interrupt 0
        DCD     INTG_BOOTROM_DEBUG_CTRL_IRQHandler            ;Cortex-A Cluster Debug Wakeup Request
        DCD     DMA3_ERROR_IRQHandler                         ;AONMIX EDMA error interrupt
        DCD     DMA3_0_IRQHandler                             ;AONMIX EDMA channel 0 interrupt
        DCD     DMA3_1_IRQHandler                             ;AONMIX EDMA channel 1 interrupt
        DCD     DMA3_2_IRQHandler                             ;AONMIX EDMA channel 2 interrupt
        DCD     DMA3_3_IRQHandler                             ;AONMIX EDMA channel 3 interrupt
        DCD     DMA3_4_IRQHandler                             ;AONMIX EDMA channel 4 interrupt
        DCD     DMA3_5_IRQHandler                             ;AONMIX EDMA channel 5 interrupt
        DCD     DMA3_6_IRQHandler                             ;AONMIX EDMA channel 6 interrupt
        DCD     DMA3_7_IRQHandler                             ;AONMIX EDMA channel 7 interrupt
        DCD     DMA3_8_IRQHandler                             ;AONMIX EDMA channel 8 interrupt
        DCD     DMA3_9_IRQHandler                             ;AONMIX EDMA channel 9 interrupt
        DCD     DMA3_10_IRQHandler                            ;AONMIX EDMA channel 10 interrupt
        DCD     DMA3_11_IRQHandler                            ;AONMIX EDMA channel 11 interrupt
        DCD     DMA3_12_IRQHandler                            ;AONMIX EDMA channel 12 interrupt
        DCD     DMA3_13_IRQHandler                            ;AONMIX EDMA channel 13 interrupt
        DCD     DMA3_14_IRQHandler                            ;AONMIX EDMA channel 14 interrupt
        DCD     DMA3_15_IRQHandler                            ;AONMIX EDMA channel 15 interrupt
        DCD     DMA3_16_IRQHandler                            ;AONMIX EDMA channel 16 interrupt
        DCD     DMA3_17_IRQHandler                            ;AONMIX EDMA channel 17 interrupt
        DCD     DMA3_18_IRQHandler                            ;AONMIX EDMA channel 18 interrupt
        DCD     DMA3_19_IRQHandler                            ;AONMIX EDMA channel 19 interrupt
        DCD     DMA3_20_IRQHandler                            ;AONMIX EDMA channel 20 interrupt
        DCD     DMA3_21_IRQHandler                            ;AONMIX EDMA channel 21 interrupt
        DCD     DMA3_22_IRQHandler                            ;AONMIX EDMA channel 22 interrupt
        DCD     DMA3_23_IRQHandler                            ;AONMIX EDMA channel 23 interrupt
        DCD     DMA3_24_IRQHandler                            ;AONMIX EDMA channel 24 interrupt
        DCD     DMA3_25_IRQHandler                            ;AONMIX EDMA channel 25 interrupt
        DCD     DMA3_26_IRQHandler                            ;AONMIX EDMA channel 26 interrupt
        DCD     DMA3_27_IRQHandler                            ;AONMIX EDMA channel 27 interrupt
        DCD     DMA3_28_IRQHandler                            ;AONMIX EDMA channel 28 interrupt
        DCD     DMA3_29_IRQHandler                            ;AONMIX EDMA channel 29 interrupt
        DCD     DMA3_30_IRQHandler                            ;AONMIX EDMA channel 30 interrupt
        DCD     DMA5_2_ERROR_IRQHandler                       ;WAKEUPMIX EDMA error interrupt
        DCD     DMA5_2_0_1_IRQHandler                         ;WAKEUPMIX EDMA channel 0 interrupt
        DCD     DMA5_2_2_3_IRQHandler                         ;WAKEUPMIX EDMA channel 2 interrupt
        DCD     DMA5_2_4_5_IRQHandler                         ;WAKEUPMIX EDMA channel 4 interrupt
        DCD     DMA5_2_6_7_IRQHandler                         ;WAKEUPMIX EDMA channel 6 interrupt
        DCD     DMA5_2_8_9_IRQHandler                         ;WAKEUPMIX EDMA channel 8 interrupt
        DCD     DMA5_2_10_11_IRQHandler                       ;WAKEUPMIX EDMA channel 10 interrupt
        DCD     DMA5_2_12_13_IRQHandler                       ;WAKEUPMIX EDMA channel 12 interrupt
        DCD     DMA5_2_14_15_IRQHandler                       ;WAKEUPMIX EDMA channel 14 interrupt
        DCD     DMA5_2_16_17_IRQHandler                       ;WAKEUPMIX EDMA channel 16 interrupt
        DCD     DMA5_2_18_19_IRQHandler                       ;WAKEUPMIX EDMA channel 18 interrupt
        DCD     DMA5_2_20_21_IRQHandler                       ;WAKEUPMIX EDMA channel 20 interrupt
        DCD     DMA5_2_22_23_IRQHandler                       ;WAKEUPMIX EDMA channel 22 interrupt
        DCD     DMA5_2_24_25_IRQHandler                       ;WAKEUPMIX EDMA channel 24 interrupt
        DCD     DMA5_2_26_27_IRQHandler                       ;WAKEUPMIX EDMA channel 26 interrupt
        DCD     DMA5_2_28_29_IRQHandler                       ;WAKEUPMIX EDMA channel 28 interrupt
        DCD     DMA5_2_30_31_IRQHandler                       ;WAKEUPMIX EDMA channel 30 interrupt
        DCD     DMA5_2_32_33_IRQHandler                       ;WAKEUPMIX EDMA channel 32 interrupt
        DCD     DMA5_2_34_35_IRQHandler                       ;WAKEUPMIX EDMA channel 34 interrupt
        DCD     DMA5_2_36_37_IRQHandler                       ;WAKEUPMIX EDMA channel 36 interrupt
        DCD     DMA5_2_38_39_IRQHandler                       ;WAKEUPMIX EDMA channel 38 interrupt
        DCD     DMA5_2_40_41_IRQHandler                       ;WAKEUPMIX EDMA channel 40 interrupt
        DCD     DMA5_2_42_43_IRQHandler                       ;WAKEUPMIX EDMA channel 42 interrupt
        DCD     DMA5_2_44_45_IRQHandler                       ;WAKEUPMIX EDMA channel 44 interrupt
        DCD     DMA5_2_46_47_IRQHandler                       ;WAKEUPMIX EDMA channel 46 interrupt
        DCD     DMA5_2_48_49_IRQHandler                       ;WAKEUPMIX EDMA channel 48 interrupt
        DCD     DMA5_2_50_51_IRQHandler                       ;WAKEUPMIX EDMA channel 50 interrupt
        DCD     DMA5_2_52_53_IRQHandler                       ;WAKEUPMIX EDMA channel 52 interrupt
        DCD     DMA5_2_54_55_IRQHandler                       ;WAKEUPMIX EDMA channel 54 interrupt
        DCD     DMA5_2_56_57_IRQHandler                       ;WAKEUPMIX EDMA channel 56 interrupt
        DCD     DMA5_2_58_59_IRQHandler                       ;WAKEUPMIX EDMA channel 58 interrupt
        DCD     DMA5_2_60_61_IRQHandler                       ;WAKEUPMIX EDMA channel 60 interrupt
        DCD     DMA5_2_62_63_IRQHandler                       ;WAKEUPMIX EDMA channel 62 interrupt
        DCD     ELE_GROUP1_IRQHandler                         ;Sentinel Group 1 reset source if no s500 reference clock is detected.  Output synchronized to 32khz clk.
        DCD     ELE_GROUP2_IRQHandler                         ;Sentinel Group 2 reset source s500 reference clock is not detected or too slow.  Output synchronized to ref1_clk.
        DCD     ELE_GROUP3_IRQHandler                         ;Sentinel Group 3 reset source s500 reference clock is not detected or too slow.  Output synchronized to ref1_clk.
        DCD     DBG_TRACE_IRQHandler                          ;JTAGSW DAP MDM-AP SRC reset source
        DCD     JTAGC_IRQHandler                              ;JTAGC SRC reset source (the JTAGC used for boundary scan, not JTAGC used for password authentication)
        DCD     SYSREQRST_CM33_IRQHandler                     ;CM33 SYSREQRST SRC reset source
        DCD     LOCKUP_CM33_IRQHandler                        ;CM33 LOCKUP SRC reset source
        DCD     SYSREQRST_CM7_IRQHandler                      ;CM7 SYSREQRST SRC reset source
        DCD     LOCKUP_CM7_IRQHandler                         ;CM7 LOCKUP SRC reset source
        DCD     SAI2_IRQHandler                               ;NETCMIX SAI TX interrupt
        DCD     SAI3_IRQHandler                               ;WAKEUPMIX SAI TX interrupt
        DCD     SAI4_IRQHandler                               ;WAKEUPMIX SAI TX interrupt
        DCD     SAI5_IRQHandler                               ;WAKEUPMIX SAI TX interrupt
        DCD     USB1_WAKEUP_IRQHandler                        ;USB-1 (USB 2.0) Wake-up Interrupt
        DCD     USB2_WAKEUP_IRQHandler                        ;USB-2 (USB 2.0) Wake-up Interrupt
        DCD     USB1_IRQHandler                               ;USB-1 (USB 2.0 Controller) Interrupt
        DCD     USB2_IRQHandler                               ;USB-2 (USB 2.0 Controller) Interrupt
        DCD     LPSPI5_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPSPI6_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPSPI7_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPSPI8_IRQHandler                             ;WAKEUPMIX LPSPI interrupt
        DCD     LPI2C5_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     LPI2C6_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     LPI2C7_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     LPI2C8_IRQHandler                             ;WAKEUPMIX LPI2C Master interrupt
        DCD     PDM_HWVAD_ERROR_IRQHandler                    ;AONMIXMIX PDM interrupt
        DCD     PDM_HWVAD_EVENT_IRQHandler                    ;AONMIXMIX PDM interrupt
        DCD     PDM_ERROR_IRQHandler                          ;AONMIXMIX PDM interrupt
        DCD     PDM_EVENT_IRQHandler                          ;AONMIXMIX PDM interrupt
        DCD     RESERVED205_IRQHandler                        ;WAKEUPMIX AUDIO XCVR interrupt
        DCD     RESERVED206_IRQHandler                        ;WAKEUPMIX AUDIO XCVR interrupt
        DCD     USDHC3_IRQHandler                             ;MEGAMIX uSDHC Enhanced SDHC Interrupt Request
        DCD     RESERVED208_IRQHandler                        ;OCRAM ECC single bit error
        DCD     RESERVED209_IRQHandler                        ;OCRAM ECC multi bit error
        DCD     RESERVED210_IRQHandler                        ;CM33 MCM interrupt
        DCD     RESERVED211_IRQHandler                        ;ANAMIX SFA interrupt
        DCD     RESERVED212_IRQHandler                        ;GIC700 Fault
        DCD     RESERVED213_IRQHandler                        ;GIC700 Error
        DCD     RESERVED214_IRQHandler                        ;GIC700 PMU Counter Overflow
        DCD     ADC_ER_IRQHandler                             ;ADC interrupt
        DCD     ADC_WD_IRQHandler                             ;ADC interrupt
        DCD     ADC_EOC_IRQHandler                            ;ADC interrupt
        DCD     RESERVED218_IRQHandler                        ;s500 glue logic IRQ
        DCD     I3C1_RAW_IRQ_GLUE_IRQHandler                  ;I3C1 wakeup irq after double sync
        DCD     I3C2_RAW_IRQ_GLUE_IRQHandler                  ;I3C2 wakeup irq after double sync
        DCD     MU5_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU6_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU7_B_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU8_B_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     XSPI_SLV_IRQHandler                           ;WAKEUPMIX XSPI Responder
        DCD     FCCU0_IRQHandler                              ;AONMIX FCCU Interrupt Reaction 0
        DCD     FCCU1_IRQHandler                              ;AONMIX FCCU Interrupt Reaction 1
        DCD     FCCU2_IRQHandler                              ;AONMIX FCCU Interrupt Reaction 2
        DCD     STCU_IRQHandler                               ;AONMIX STCU Selftest end Interrupt
        DCD     DISP_IRQSTEER0_IRQHandler                     ;DISPLAYMIX IRQSTEER 0: Common Control
        DCD     DISP_IRQSTEER1_IRQHandler                     ;DISPLAYMIX IRQSTEER 1: Display 0 Domain 0
        DCD     DISP_IRQSTEER2_IRQHandler                     ;DISPLAYMIX IRQSTEER 2: Display 0 Domain 1
        DCD     DISP_IRQSTEER3_IRQHandler                     ;DISPLAYMIX IRQSTEER 3: Display 1 Domain 0
        DCD     DISP_IRQSTEER4_IRQHandler                     ;DISPLAYMIX IRQSTEER 4: Display 1 Domain 1
        DCD     DISP_IRQSTEER7_IRQHandler                     ;DISPLAYMIX IRQSTEER 7: Blitter
        DCD     MU_C1_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     ISI_0_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 0
        DCD     ISP_IRQHandler                                ;ISP Processing Interrupt - Context 0
        DCD     M7MIX_IRQHandler                              ;M7MIX MCM interrupt
        DCD     IRQSTEER_0_IRQHandler                         ;IRQSTEER0 interrupt
        DCD     IRQSTEER_1_IRQHandler                         ;IRQSTEER1 interrupt
        DCD     IRQSTEER_2_IRQHandler                         ;IRQSTEER2 interrupt
        DCD     IRQSTEER_3_IRQHandler                         ;IRQSTEER3 interrupt
        DCD     IRQSTEER_4_IRQHandler                         ;IRQSTEER4 interrupt
        DCD     IRQSTEER_5_IRQHandler                         ;IRQSTEER5 interrupt
        DCD     IRQSTEER_6_IRQHandler                         ;IRQSTEER6 interrupt
        DCD     IRQSTEER_7_IRQHandler                         ;IRQSTEER7 interrupt
        DCD     IRQSTEER_8_IRQHandler                         ;IRQSTEER8 interrupt
        DCD     IRQSTEER_9_IRQHandler                         ;IRQSTEER9 interrupt
        DCD     IRQSTEER_10_IRQHandler                        ;IRQSTEER10 interrupt
        DCD     IRQSTEER_11_IRQHandler                        ;IRQSTEER11 interrupt
        DCD     MU1_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU1_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU2_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU2_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU3_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU3_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU4_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU4_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU5_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU6_B_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU7_A_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU8_A_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MSGINTR1_IRQHandler                           ;MSGINTR Instance 1, Interrupt 1
        DCD     MSGINTR2_IRQHandler                           ;MSGINTR Instance 2, Interrupt 1
        DCD     V2X_APCH1_IRQHandler                          ;V2X-FH MU APCH1 (APP1) A_TX interrupt
        DCD     V2X_HSM2_IRQHandler                           ;V2X-FH MU APHSM2 (HSM2) A_TX interrupt
        DCD     RESERVED268_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED269_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED270_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED271_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED272_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED273_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED274_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED275_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED276_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED277_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED278_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED279_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED280_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED281_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED282_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED283_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED284_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED285_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED286_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED287_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED288_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED289_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED290_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED291_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED292_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED293_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED294_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED295_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED296_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED297_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED298_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED299_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED300_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED301_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED302_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED303_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED304_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED305_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED306_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED307_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED308_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED309_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED310_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED311_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED312_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED313_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED314_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED315_IRQHandler                        ;Reserved interrupt
        DCD     TRDC_MGR_C_IRQHandler                         ;CAMERAMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_D_IRQHandler                         ;DISPLAYMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_E_IRQHandler                         ;NETCMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_G_IRQHandler                         ;GPUMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_H_IRQHandler                         ;HSIOMIX TRDC transfer error interrupt
        DCD     TRDC_MGR_V_IRQHandler                         ;VPUMIX TRDC transfer error interrupt
        DCD     ERM_A_IRQHandler                              ;AONMIX ERM Single bit corrected ECC Error
        DCD     RESERVED323_IRQHandler                        ;M7MIX ERM Single bit corrected ECC Error
        DCD     ERM_W_IRQHandler                              ;WAKEUPMIX ERM Single bit corrected ECC Error
        DCD     ERM_ML_IRQHandler                             ;NPUMIX ERM Single bit corrected ECC Error
        DCD     DMA5_3_ERROR_IRQHandler                       ;WAKEUPMIX ACP EDMA error interrupt
        DCD     OCRAM_C_IRQHandler                            ;OCRAM_C ECC multiple bit or address error
        DCD     RESERVED328_IRQHandler                        ;CAMERAMIX Cortex-M0+ Cache write-buffer error
        DCD     RESERVED329_IRQHandler                        ;CAMERAMIX Cortex-M0+ Cache data parity error
        DCD     RESERVED330_IRQHandler                        ;V2X-FH MU APSHE (SHE) A_TX interrupt
        DCD     RESERVED331_IRQHandler                        ;V2X-FH MU SCU/APDEBUG (DEBUG) B_TX interrupt
        DCD     RESERVED332_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED333_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED334_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED335_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED336_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED337_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED338_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED339_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED340_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED341_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED342_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED343_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED344_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED345_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED346_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED347_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED348_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED349_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED350_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED351_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED352_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED353_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED354_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED355_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED356_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED357_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED358_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED359_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED360_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED361_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED362_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED363_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED364_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED365_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED366_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED367_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED368_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED369_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED370_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED371_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED372_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED373_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED374_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED375_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED376_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED377_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED378_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED379_IRQHandler                        ;Reserved interrupt
        DCD     DMA5_3_0_1_IRQHandler                         ;WAKEUPMIX ACP EDMA channel 0 interrupt
        DCD     DMA5_3_2_3_IRQHandler                         ;WAKEUPMIX ACP EDMA channel 2 interrupt
        DCD     DMA5_3_4_5_IRQHandler                         ;WAKEUPMIX ACP EDMA channel 4 interrupt
        DCD     DMA5_3_6_7_IRQHandler                         ;WAKEUPMIX ACP EDMA channel 6 interrupt
        DCD     DMA5_3_8_9_IRQHandler                         ;WAKEUPMIX ACP EDMA channel 8 interrupt
        DCD     DMA5_3_10_11_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 10 interrupt
        DCD     DMA5_3_12_13_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 12 interrupt
        DCD     DMA5_3_14_15_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 14 interrupt
        DCD     DMA5_3_16_17_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 16 interrupt
        DCD     DMA5_3_18_19_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 18 interrupt
        DCD     DMA5_3_20_21_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 20 interrupt
        DCD     DMA5_3_22_23_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 22 interrupt
        DCD     DMA5_3_24_25_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 24 interrupt
        DCD     DMA5_3_26_27_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 26 interrupt
        DCD     DMA5_3_28_29_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 28 interrupt
        DCD     DMA5_3_30_31_IRQHandler                       ;WAKEUPMIX ACP EDMA channel 30 interrupt
        DCD     RESERVED396_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED397_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED398_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED399_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED400_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED401_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED402_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED403_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED404_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED405_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED406_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED407_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED408_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED409_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED410_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED411_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED412_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED413_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED414_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED415_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED416_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED417_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED418_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED419_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED420_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED421_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED422_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED423_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED424_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED425_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED426_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED427_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED428_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED429_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED430_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED431_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED432_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED433_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED434_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED435_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED436_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED437_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED438_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED439_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED440_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED441_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED442_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED443_IRQHandler                        ;Reserved interrupt
        DCD     DMA5_3_32_33_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 32 interrupt
        DCD     DMA5_3_34_35_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 34 interrupt
        DCD     DMA5_3_36_37_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 36 interrupt
        DCD     DMA5_3_38_39_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 38 interrupt
        DCD     DMA5_3_40_41_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 40 interrupt
        DCD     DMA5_3_42_43_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 42 interrupt
        DCD     DMA5_3_44_45_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 44 interrupt
        DCD     DMA5_3_46_47_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 46 interrupt
        DCD     DMA5_3_48_49_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 48 interrupt
        DCD     DMA5_3_50_51_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 50 interrupt
        DCD     DMA5_3_52_53_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 52 interrupt
        DCD     DMA5_3_54_55_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 54 interrupt
        DCD     DMA5_3_56_57_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 56 interrupt
        DCD     DMA5_3_58_59_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 58 interrupt
        DCD     DMA5_3_60_61_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 60 interrupt
        DCD     DMA5_3_62_63_IRQHandler                       ; WAKEUPMIX ACP EDMA channel 62 interrupt
        DCD     RESERVED460_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED461_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED462_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED463_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED464_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED465_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED466_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED467_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED468_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED469_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED470_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED471_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED472_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED473_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED474_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED475_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED476_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED477_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED478_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED479_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED480_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED481_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED482_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED483_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED484_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED485_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED486_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED487_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED488_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED489_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED490_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED491_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED492_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED493_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED494_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED495_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED496_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED497_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED498_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED499_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED500_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED501_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED502_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED503_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED504_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED505_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED506_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED507_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED508_IRQHandler                        ;GPUMIX GPU Interrupt
        DCD     RESERVED509_IRQHandler                        ;GPUMIX Job Interrupt
        DCD     RESERVED510_IRQHandler                        ;GPUMIX MMU Interrupt
        DCD     RESERVED511_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED512_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED513_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED514_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED515_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED516_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED517_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED518_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED519_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED520_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED521_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED522_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED523_IRQHandler                        ;CODA980 VPU Encoder
        DCD     RESERVED524_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED525_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED526_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED527_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED528_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED529_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED530_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED531_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED532_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED533_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED534_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED535_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED536_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED537_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED538_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED539_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED540_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED541_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED542_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED543_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED544_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED545_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED546_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED547_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED548_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED549_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED550_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED551_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED552_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED553_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED554_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED555_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED556_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED557_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED558_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED559_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED560_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED561_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED562_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED563_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED564_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED565_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED566_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED567_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED568_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED569_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED570_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED571_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED572_IRQHandler                        ;NETC iEPRC PCI INT (one per each of two RC-EC)
        DCD     RESERVED573_IRQHandler                        ;NETC iEPRC PCI INT (one per each of two RC-EC)
        DCD     RESERVED574_IRQHandler                        ;PCIe Controller 1 INTA
        DCD     RESERVED575_IRQHandler                        ;PCIe Controller 1 INTB
        DCD     RESERVED576_IRQHandler                        ;PCIe Controller 1 INTC
        DCD     RESERVED577_IRQHandler                        ;PCIe Controller 1 INTD
        DCD     RESERVED578_IRQHandler                        ;PCIe miscellaneous interrupts
        DCD     RESERVED579_IRQHandler                        ;PCIe Controller EDMA channel interrupt
        DCD     RESERVED580_IRQHandler                        ;Reserved
        DCD     RESERVED581_IRQHandler                        ;Reserved
        DCD     RESERVED582_IRQHandler                        ;Reserved
        DCD     RESERVED583_IRQHandler                        ;Reserved
        DCD     RESERVED584_IRQHandler                        ;Reserved
        DCD     RESERVED585_IRQHandler                        ;Reserved
        DCD     RESERVED586_IRQHandler                        ;NPU Functional interrupt
        DCD     RESERVED587_IRQHandler                        ;NPU Fault interrupt
        DCD     RESERVED588_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED589_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED590_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED591_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED592_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED593_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED594_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED595_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED596_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED597_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED598_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED599_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED600_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED601_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED602_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED603_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED604_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED605_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED606_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED607_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED608_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED609_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED610_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED611_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED612_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED613_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED614_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED615_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED616_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED617_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED618_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED619_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED620_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED621_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED622_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED623_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED624_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED625_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED626_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED627_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED628_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED629_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED630_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED631_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED632_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED633_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED634_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED635_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED636_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED637_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED638_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED639_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED640_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED641_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED642_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED643_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED644_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED645_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED646_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED647_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED648_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED649_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED650_IRQHandler                        ;Reserved interrupt
        DCD     LP_HDSK_GSKT_IRQHandler                       ;SRC/GPC Low Power Handshake Gasket interrupt request for system management
        DCD     RESERVED652_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED653_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED654_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED655_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED656_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED657_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED658_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED659_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED660_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED661_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED662_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED663_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED664_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED665_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED666_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED667_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED668_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED669_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED670_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED671_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED672_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED673_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED674_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED675_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED676_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED677_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED678_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED679_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED680_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED681_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED682_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED683_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED684_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED685_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED686_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED687_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED688_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED689_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED690_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED691_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED692_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED693_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED694_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED695_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED696_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED697_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED698_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED699_IRQHandler                        ;Reserved interrupt
        DCD     MU_C2_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C3_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C4_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C5_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C6_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C7_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C8_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_C9_IRQHandler                              ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     ISI_1_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 1
        DCD     ISI_2_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 2
        DCD     ISI_3_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 3
        DCD     ISI_4_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 4
        DCD     ISI_5_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 5
        DCD     ISI_6_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 6
        DCD     ISI_7_IRQHandler                              ;CAMERAMIX ISI interrupt Channel 7
        DCD     DMA5_4_ERROR_IRQHandler                       ;CAMERAMIX EDMA error interrupt
        DCD     RESERVED716_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED717_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED718_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED719_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED720_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED721_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED722_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED723_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED724_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED725_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED726_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED727_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED728_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED729_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED730_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED731_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED732_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED733_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED734_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED735_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED736_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED737_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED738_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED739_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED740_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED741_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED742_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED743_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED744_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED745_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED746_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED747_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED748_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED749_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED750_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED751_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED752_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED753_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED754_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED755_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED756_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED757_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED758_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED759_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED760_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED761_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED762_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED763_IRQHandler                        ;Reserved interrupt
        DCD     DMA5_4_0_1_IRQHandler                         ;CAMERAMIX EDMA channel 0 interrupt
        DCD     DMA5_4_2_3_IRQHandler                         ;CAMERAMIX EDMA channel 2 interrupt
        DCD     DMA5_4_4_5_IRQHandler                         ;CAMERAMIX EDMA channel 4 interrupt
        DCD     DMA5_4_6_7_IRQHandler                         ;CAMERAMIX EDMA channel 6 interrupt
        DCD     DMA5_4_8_9_IRQHandler                         ;CAMERAMIX EDMA channel 8 interrupt
        DCD     DMA5_4_10_11_IRQHandler                       ;CAMERAMIX EDMA channel 10 interrupt
        DCD     DMA5_4_12_13_IRQHandler                       ;CAMERAMIX EDMA channel 12 interrupt
        DCD     DMA5_4_14_15_IRQHandler                       ;CAMERAMIX EDMA channel 14 interrupt
        DCD     DMA5_4_16_17_IRQHandler                       ;CAMERAMIX EDMA channel 16 interrupt
        DCD     DMA5_4_18_19_IRQHandler                       ;CAMERAMIX EDMA channel 18 interrupt
        DCD     DMA5_4_20_21_IRQHandler                       ;CAMERAMIX EDMA channel 20 interrupt
        DCD     DMA5_4_22_23_IRQHandler                       ;CAMERAMIX EDMA channel 22 interrupt
        DCD     DMA5_4_24_25_IRQHandler                       ;CAMERAMIX EDMA channel 24 interrupt
        DCD     DMA5_4_26_27_IRQHandler                       ;CAMERAMIX EDMA channel 26 interrupt
        DCD     DMA5_4_28_29_IRQHandler                       ;CAMERAMIX EDMA channel 28 interrupt
        DCD     DMA5_4_30_31_IRQHandler                       ;CAMERAMIX EDMA channel 30 interrupt
        DCD     RESERVED780_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED781_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED782_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED783_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED784_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED785_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED786_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED787_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED788_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED789_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED790_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED791_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED792_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED793_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED794_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED795_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED796_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED797_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED798_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED799_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED800_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED801_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED802_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED803_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED804_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED805_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED806_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED807_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED808_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED809_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED810_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED811_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED812_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED813_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED814_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED815_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED816_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED817_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED818_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED819_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED820_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED821_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED822_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED823_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED824_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED825_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED826_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED827_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED828_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Buffer overflow
        DCD     RESERVED829_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Interlaced Error
        DCD     RESERVED830_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Pixel Data Type Error
        DCD     RESERVED831_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Buffer overflow
        DCD     RESERVED832_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Interlaced Error
        DCD     RESERVED833_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Pixel Data Type Error
        DCD     CSI1_IRQHandler                               ;CAMERAMIX CSI1 (Standalone MIPI-CSI) interrupt
        DCD     CSI2_IRQHandler                               ;CAMERAMIX CSI2 (Combo MIPI-CSI/DSI) interrupt
        DCD     ASRC1_IRQHandler                              ;mirq_asrc1_b
        DCD     RESERVED837_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED838_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED839_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED840_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED841_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED842_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED843_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED844_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED845_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED846_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED847_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED848_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED849_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED850_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED851_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED852_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED853_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED854_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED855_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED856_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED857_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED858_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED859_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED860_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED861_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED862_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED863_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED864_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED865_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED866_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED867_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED868_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED869_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED870_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED871_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED872_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED873_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED874_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED875_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED876_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED877_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED878_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED879_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED880_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED881_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED882_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED883_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED884_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED885_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED886_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED887_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED888_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED889_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED890_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED891_IRQHandler                        ;Reserved interrupt
        DCD     ASRC2_IRQHandler                              ;mirq_asrc2_b
        DCD     RESERVED893_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED894_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED895_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED896_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED897_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED898_IRQHandler                        ;Reserved interrupt
        DCD     NOC_VPU_IRQHandler                            ;Reserved interrupt
        DCD     NOC_DISPLAY_IRQHandler                        ;Reserved interrupt
        DCD     NOC_CAMERA_IRQHandler                         ;Reserved interrupt
        DCD     NOC_HSIO_IRQHandler                           ;Reserved interrupt
        DCD     NOC_WAKEUP_IRQHandler                         ;Reserved interrupt
        DCD     NOC_CENTRAL_IRQHandler                        ;Reserved interrupt
        DCD     ERM_DISPLAY_IRQHandler                        ;DISPLAYMIX ERM Single bit corrected ECC Error
        DCD     RESERVED906_IRQHandler                        ;Reserved
        DCD     SAI6_IRQHandler                               ;WAKEUPMIX SAI TX interrupt
        DCD     RESERVED908_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED909_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED910_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED911_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED912_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED913_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED914_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED915_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED916_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED917_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED918_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED919_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED920_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED921_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED922_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED923_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED924_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED925_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED926_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED927_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED928_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED929_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED930_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED931_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED932_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED933_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED934_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED935_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED936_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED937_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED938_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED939_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED940_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED941_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED942_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED943_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED944_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED945_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED946_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED947_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED948_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED949_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED950_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED951_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED952_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED953_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED954_IRQHandler                        ;Reserved interrupt
        DCD     RESERVED955_IRQHandler                        ;Reserved interrupt
        DCD     XSPI1_0_IRQHandler                            ;xspi1 all interrupts ORed output for EENV0 (MEENV)
        DCD     XSPI1_1_IRQHandler                            ;xspi1 all interrupts ORed output for EENV1 (MEENV)
        DCD     XSPI1_2_IRQHandler                            ;xspi1 all interrupts ORed output for EENV2 (MEENV)
        DCD     XSPI1_3_IRQHandler                            ;xspi1 all interrupts ORed output for EENV3 (MEENV)
        DCD     XSPI1_4_IRQHandler                            ;xspi1 all interrupts ORed output for EENV4 (MEENV)
        DCD     RESERVED961_IRQHandler                        ;Anamix Gllitch Detector output (da_ip_voltage_glitch_detector_cln16ffc). It's a latch signal. It can be cleared.  Positive polarity i.e interrupt is generated when 0-->1
        DCD     RESERVED962_IRQHandler                        ;Anamix VDET output (da_ip_vdetect_c16ffc). Detects high threshold on Core supply. It's a latch signal. It can be cleared.  Positive polarity i.e interrupt is generated when 0-->1
        DCD     CCM_IRQHandler                                ;LPCG Timeout interrupt generated by CCGR (CCM)
        DCD     MU_D1_IRQHandler                              ;DISPLAYMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU_D2_IRQHandler                              ;DISPLAYMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     GPT2_IRQHandler                               ;WAKEUPMIX GPT2 interrupt
        DCD     GPT3_IRQHandler                               ;WAKEUPMIX GPT2 interrupt
        DCD     GPT4_IRQHandler                               ;WAKEUPMIX GPT2 interrupt
        DCD     GPT5_IRQHandler                               ;WAKEUPMIX GPT2 interrupt
        DCD     LPSPI9_IRQHandler                             ;DISPLAYMIX LPSPI interrupt
        DCD     0xFFFFFFFF                                    ; Reserved for user TRIM value
__Vectors_End

__Vectors       EQU   __vector_table
__Vectors_Size  EQU   __Vectors_End - __Vectors


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;
        THUMB

        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler
        CPSID   I               ; Mask interrupts
        LDR     R0, =0xE000ED08
        LDR     R1, =__vector_table
        STR     R1, [R0]
        LDR     R2, [R1]
        MSR     MSP, R2
        LDR     R0, =SystemInit
        BLX     R0
;
; Add DTCM initializaiton
; TCM controller must perform a read-modify-write for any access < 32-bit to keep the ECC updated.
; The Software must ensure the TCM is ECC clean by initializing all memories that have the potential to be accessed as < 32-bit.
        MOV    R0, #0
        LDR    R1, =0x20000000
        LDR    R2, =0x2003ffff
.LC0:
        CMP    R1, R2
        ITT    LT
        STRLT  R0, [R1], #4
        BLT    .LC0
; End RW / stack / heap initialization
;
        CPSIE   I               ; Unmask interrupts
        LDR     R0, =__iar_program_start
        BX      R0

        PUBWEAK NMI_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
        B .

        PUBWEAK HardFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
        B .

        PUBWEAK MemManage_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MemManage_Handler
        B .

        PUBWEAK BusFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
BusFault_Handler
        B .

        PUBWEAK UsageFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UsageFault_Handler
        B .

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
        B .

        PUBWEAK DebugMon_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
DebugMon_Handler
        B .

        PUBWEAK PendSV_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
        B .

        PUBWEAK SysTick_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
        B .

        PUBWEAK RESERVED16_IRQHandler
        PUBWEAK RESERVED17_IRQHandler
        PUBWEAK RESERVED18_IRQHandler
        PUBWEAK RESERVED19_IRQHandler
        PUBWEAK RESERVED20_IRQHandler
        PUBWEAK RESERVED21_IRQHandler
        PUBWEAK RESERVED22_IRQHandler
        PUBWEAK RESERVED23_IRQHandler
        PUBWEAK CAN1_IRQHandler
        PUBWEAK CAN1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN1_IRQHandler
        LDR     R0, =CAN1_DriverIRQHandler
        BX      R0

        PUBWEAK CAN1_ERROR_IRQHandler
        PUBWEAK CAN1_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN1_ERROR_IRQHandler
        LDR     R0, =CAN1_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK GPIO1_0_IRQHandler
        PUBWEAK GPIO1_1_IRQHandler
        PUBWEAK I3C1_IRQHandler
        PUBWEAK I3C1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C1_IRQHandler
        LDR     R0, =I3C1_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C1_IRQHandler
        PUBWEAK LPI2C1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C1_IRQHandler
        LDR     R0, =LPI2C1_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C2_IRQHandler
        PUBWEAK LPI2C2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C2_IRQHandler
        LDR     R0, =LPI2C2_DriverIRQHandler
        BX      R0

        PUBWEAK LPIT1_IRQHandler
        PUBWEAK LPSPI1_IRQHandler
        PUBWEAK LPSPI1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI1_IRQHandler
        LDR     R0, =LPSPI1_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI2_IRQHandler
        PUBWEAK LPSPI2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI2_IRQHandler
        LDR     R0, =LPSPI2_DriverIRQHandler
        BX      R0

        PUBWEAK LPTMR1_IRQHandler
        PUBWEAK LPUART1_IRQHandler
        PUBWEAK LPUART1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART1_IRQHandler
        LDR     R0, =LPUART1_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART2_IRQHandler
        PUBWEAK LPUART2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART2_IRQHandler
        LDR     R0, =LPUART2_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED37_IRQHandler
        PUBWEAK RESERVED38_IRQHandler
        PUBWEAK RESERVED39_IRQHandler
        PUBWEAK RESERVED40_IRQHandler
        PUBWEAK RESERVED41_IRQHandler
        PUBWEAK RESERVED42_IRQHandler
        PUBWEAK RESERVED43_IRQHandler
        PUBWEAK RESERVED44_IRQHandler
        PUBWEAK TPM1_IRQHandler
        PUBWEAK TPM2_IRQHandler
        PUBWEAK WDOG1_IRQHandler
        PUBWEAK WDOG2_IRQHandler
        PUBWEAK TRDC_MGR_A_IRQHandler
        PUBWEAK SAI1_IRQHandler
        PUBWEAK SAI1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI1_IRQHandler
        LDR     R0, =SAI1_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED51_IRQHandler
        PUBWEAK CM33_ECC_MCM_IRQHandler
        PUBWEAK RESERVED53_IRQHandler
        PUBWEAK CAN2_IRQHandler
        PUBWEAK CAN2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN2_IRQHandler
        LDR     R0, =CAN2_DriverIRQHandler
        BX      R0

        PUBWEAK CAN2_ERROR_IRQHandler
        PUBWEAK CAN2_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN2_ERROR_IRQHandler
        LDR     R0, =CAN2_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK CAN3_IRQHandler
        PUBWEAK CAN3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN3_IRQHandler
        LDR     R0, =CAN3_DriverIRQHandler
        BX      R0

        PUBWEAK CAN3_ERROR_IRQHandler
        PUBWEAK CAN3_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN3_ERROR_IRQHandler
        LDR     R0, =CAN3_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK WDOG6_IRQHandler
        PUBWEAK RESERVED59_IRQHandler
        PUBWEAK RESERVED60_IRQHandler
        PUBWEAK DISPLAY_MIX_IRQHandler
        PUBWEAK FLEXIO1_IRQHandler
        PUBWEAK FLEXIO1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXIO1_IRQHandler
        LDR     R0, =FLEXIO1_DriverIRQHandler
        BX      R0

        PUBWEAK FLEXIO2_IRQHandler
        PUBWEAK FLEXIO2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FLEXIO2_IRQHandler
        LDR     R0, =FLEXIO2_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED64_IRQHandler
        PUBWEAK GPIO2_0_IRQHandler
        PUBWEAK GPIO2_1_IRQHandler
        PUBWEAK GPIO3_0_IRQHandler
        PUBWEAK GPIO3_1_IRQHandler
        PUBWEAK GPIO4_0_IRQHandler
        PUBWEAK GPIO4_1_IRQHandler
        PUBWEAK GPIO5_0_IRQHandler
        PUBWEAK GPIO5_1_IRQHandler
        PUBWEAK I3C2_IRQHandler
        PUBWEAK I3C2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C2_IRQHandler
        LDR     R0, =I3C2_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C3_IRQHandler
        PUBWEAK LPI2C3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C3_IRQHandler
        LDR     R0, =LPI2C3_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C4_IRQHandler
        PUBWEAK LPI2C4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C4_IRQHandler
        LDR     R0, =LPI2C4_DriverIRQHandler
        BX      R0

        PUBWEAK LPIT2_IRQHandler
        PUBWEAK LPSPI3_IRQHandler
        PUBWEAK LPSPI3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI3_IRQHandler
        LDR     R0, =LPSPI3_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI4_IRQHandler
        PUBWEAK LPSPI4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI4_IRQHandler
        LDR     R0, =LPSPI4_DriverIRQHandler
        BX      R0

        PUBWEAK LPTMR2_IRQHandler
        PUBWEAK LPUART3_IRQHandler
        PUBWEAK LPUART3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART3_IRQHandler
        LDR     R0, =LPUART3_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART4_IRQHandler
        PUBWEAK LPUART4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART4_IRQHandler
        LDR     R0, =LPUART4_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART5_IRQHandler
        PUBWEAK LPUART5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART5_IRQHandler
        LDR     R0, =LPUART5_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART6_IRQHandler
        PUBWEAK LPUART6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART6_IRQHandler
        LDR     R0, =LPUART6_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART7_IRQHandler
        PUBWEAK LPUART7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART7_IRQHandler
        LDR     R0, =LPUART7_DriverIRQHandler
        BX      R0

        PUBWEAK LPUART8_IRQHandler
        PUBWEAK LPUART8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPUART8_IRQHandler
        LDR     R0, =LPUART8_DriverIRQHandler
        BX      R0

        PUBWEAK MTR_MSTR_IRQHandler
        PUBWEAK BBNSM_IRQHandler
        PUBWEAK SYS_CTR1_IRQHandler
        PUBWEAK TPM3_IRQHandler
        PUBWEAK TPM4_IRQHandler
        PUBWEAK TPM5_IRQHandler
        PUBWEAK TPM6_IRQHandler
        PUBWEAK WDOG3_IRQHandler
        PUBWEAK WDOG4_IRQHandler
        PUBWEAK WDOG5_IRQHandler
        PUBWEAK TMPSNS1_THR1_IRQHandler
        PUBWEAK TMPSNS1_THR2_IRQHandler
        PUBWEAK TMPSNS1_DRDY_IRQHandler
        PUBWEAK TMPSNS2_THR1_IRQHandler
        PUBWEAK TMPSNS2_THR2_IRQHandler
        PUBWEAK TMPSNS2_DRDY_IRQHandler
        PUBWEAK USDHC1_IRQHandler
        PUBWEAK USDHC1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
USDHC1_IRQHandler
        LDR     R0, =USDHC1_DriverIRQHandler
        BX      R0

        PUBWEAK USDHC2_IRQHandler
        PUBWEAK USDHC2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
USDHC2_IRQHandler
        LDR     R0, =USDHC2_DriverIRQHandler
        BX      R0

        PUBWEAK TRDC_MGR_W1_IRQHandler
        PUBWEAK TRDC_MGR_W2_IRQHandler
        PUBWEAK TRDC_MGR_N_IRQHandler
        PUBWEAK RESERVED107_IRQHandler
        PUBWEAK RESERVED108_IRQHandler
        PUBWEAK RESERVED109_IRQHandler
        PUBWEAK INTG_BOOTROM_DEBUG_CTRL_IRQHandler
        PUBWEAK DMA3_ERROR_IRQHandler
        PUBWEAK DMA3_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_ERROR_IRQHandler
        LDR     R0, =DMA3_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_0_IRQHandler
        PUBWEAK DMA3_0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_0_IRQHandler
        LDR     R0, =DMA3_0_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_1_IRQHandler
        PUBWEAK DMA3_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_1_IRQHandler
        LDR     R0, =DMA3_1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_2_IRQHandler
        PUBWEAK DMA3_2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_2_IRQHandler
        LDR     R0, =DMA3_2_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_3_IRQHandler
        PUBWEAK DMA3_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_3_IRQHandler
        LDR     R0, =DMA3_3_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_4_IRQHandler
        PUBWEAK DMA3_4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_4_IRQHandler
        LDR     R0, =DMA3_4_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_5_IRQHandler
        PUBWEAK DMA3_5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_5_IRQHandler
        LDR     R0, =DMA3_5_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_6_IRQHandler
        PUBWEAK DMA3_6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_6_IRQHandler
        LDR     R0, =DMA3_6_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_7_IRQHandler
        PUBWEAK DMA3_7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_7_IRQHandler
        LDR     R0, =DMA3_7_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_8_IRQHandler
        PUBWEAK DMA3_8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_8_IRQHandler
        LDR     R0, =DMA3_8_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_9_IRQHandler
        PUBWEAK DMA3_9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_9_IRQHandler
        LDR     R0, =DMA3_9_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_10_IRQHandler
        PUBWEAK DMA3_10_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_10_IRQHandler
        LDR     R0, =DMA3_10_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_11_IRQHandler
        PUBWEAK DMA3_11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_11_IRQHandler
        LDR     R0, =DMA3_11_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_12_IRQHandler
        PUBWEAK DMA3_12_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_12_IRQHandler
        LDR     R0, =DMA3_12_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_13_IRQHandler
        PUBWEAK DMA3_13_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_13_IRQHandler
        LDR     R0, =DMA3_13_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_14_IRQHandler
        PUBWEAK DMA3_14_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_14_IRQHandler
        LDR     R0, =DMA3_14_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_15_IRQHandler
        PUBWEAK DMA3_15_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_15_IRQHandler
        LDR     R0, =DMA3_15_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_16_IRQHandler
        PUBWEAK DMA3_16_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_16_IRQHandler
        LDR     R0, =DMA3_16_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_17_IRQHandler
        PUBWEAK DMA3_17_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_17_IRQHandler
        LDR     R0, =DMA3_17_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_18_IRQHandler
        PUBWEAK DMA3_18_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_18_IRQHandler
        LDR     R0, =DMA3_18_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_19_IRQHandler
        PUBWEAK DMA3_19_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_19_IRQHandler
        LDR     R0, =DMA3_19_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_20_IRQHandler
        PUBWEAK DMA3_20_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_20_IRQHandler
        LDR     R0, =DMA3_20_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_21_IRQHandler
        PUBWEAK DMA3_21_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_21_IRQHandler
        LDR     R0, =DMA3_21_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_22_IRQHandler
        PUBWEAK DMA3_22_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_22_IRQHandler
        LDR     R0, =DMA3_22_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_23_IRQHandler
        PUBWEAK DMA3_23_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_23_IRQHandler
        LDR     R0, =DMA3_23_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_24_IRQHandler
        PUBWEAK DMA3_24_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_24_IRQHandler
        LDR     R0, =DMA3_24_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_25_IRQHandler
        PUBWEAK DMA3_25_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_25_IRQHandler
        LDR     R0, =DMA3_25_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_26_IRQHandler
        PUBWEAK DMA3_26_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_26_IRQHandler
        LDR     R0, =DMA3_26_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_27_IRQHandler
        PUBWEAK DMA3_27_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_27_IRQHandler
        LDR     R0, =DMA3_27_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_28_IRQHandler
        PUBWEAK DMA3_28_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_28_IRQHandler
        LDR     R0, =DMA3_28_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_29_IRQHandler
        PUBWEAK DMA3_29_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_29_IRQHandler
        LDR     R0, =DMA3_29_DriverIRQHandler
        BX      R0

        PUBWEAK DMA3_30_IRQHandler
        PUBWEAK DMA3_30_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA3_30_IRQHandler
        LDR     R0, =DMA3_30_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_ERROR_IRQHandler
        PUBWEAK DMA5_2_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_ERROR_IRQHandler
        LDR     R0, =DMA5_2_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_0_1_IRQHandler
        PUBWEAK DMA5_2_0_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_0_1_IRQHandler
        LDR     R0, =DMA5_2_0_1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_2_3_IRQHandler
        PUBWEAK DMA5_2_2_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_2_3_IRQHandler
        LDR     R0, =DMA5_2_2_3_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_4_5_IRQHandler
        PUBWEAK DMA5_2_4_5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_4_5_IRQHandler
        LDR     R0, =DMA5_2_4_5_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_6_7_IRQHandler
        PUBWEAK DMA5_2_6_7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_6_7_IRQHandler
        LDR     R0, =DMA5_2_6_7_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_8_9_IRQHandler
        PUBWEAK DMA5_2_8_9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_8_9_IRQHandler
        LDR     R0, =DMA5_2_8_9_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_10_11_IRQHandler
        PUBWEAK DMA5_2_10_11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_10_11_IRQHandler
        LDR     R0, =DMA5_2_10_11_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_12_13_IRQHandler
        PUBWEAK DMA5_2_12_13_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_12_13_IRQHandler
        LDR     R0, =DMA5_2_12_13_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_14_15_IRQHandler
        PUBWEAK DMA5_2_14_15_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_14_15_IRQHandler
        LDR     R0, =DMA5_2_14_15_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_16_17_IRQHandler
        PUBWEAK DMA5_2_16_17_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_16_17_IRQHandler
        LDR     R0, =DMA5_2_16_17_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_18_19_IRQHandler
        PUBWEAK DMA5_2_18_19_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_18_19_IRQHandler
        LDR     R0, =DMA5_2_18_19_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_20_21_IRQHandler
        PUBWEAK DMA5_2_20_21_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_20_21_IRQHandler
        LDR     R0, =DMA5_2_20_21_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_22_23_IRQHandler
        PUBWEAK DMA5_2_22_23_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_22_23_IRQHandler
        LDR     R0, =DMA5_2_22_23_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_24_25_IRQHandler
        PUBWEAK DMA5_2_24_25_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_24_25_IRQHandler
        LDR     R0, =DMA5_2_24_25_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_26_27_IRQHandler
        PUBWEAK DMA5_2_26_27_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_26_27_IRQHandler
        LDR     R0, =DMA5_2_26_27_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_28_29_IRQHandler
        PUBWEAK DMA5_2_28_29_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_28_29_IRQHandler
        LDR     R0, =DMA5_2_28_29_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_30_31_IRQHandler
        PUBWEAK DMA5_2_30_31_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_30_31_IRQHandler
        LDR     R0, =DMA5_2_30_31_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_32_33_IRQHandler
        PUBWEAK DMA5_2_32_33_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_32_33_IRQHandler
        LDR     R0, =DMA5_2_32_33_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_34_35_IRQHandler
        PUBWEAK DMA5_2_34_35_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_34_35_IRQHandler
        LDR     R0, =DMA5_2_34_35_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_36_37_IRQHandler
        PUBWEAK DMA5_2_36_37_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_36_37_IRQHandler
        LDR     R0, =DMA5_2_36_37_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_38_39_IRQHandler
        PUBWEAK DMA5_2_38_39_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_38_39_IRQHandler
        LDR     R0, =DMA5_2_38_39_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_40_41_IRQHandler
        PUBWEAK DMA5_2_40_41_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_40_41_IRQHandler
        LDR     R0, =DMA5_2_40_41_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_42_43_IRQHandler
        PUBWEAK DMA5_2_42_43_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_42_43_IRQHandler
        LDR     R0, =DMA5_2_42_43_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_44_45_IRQHandler
        PUBWEAK DMA5_2_44_45_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_44_45_IRQHandler
        LDR     R0, =DMA5_2_44_45_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_46_47_IRQHandler
        PUBWEAK DMA5_2_46_47_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_46_47_IRQHandler
        LDR     R0, =DMA5_2_46_47_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_48_49_IRQHandler
        PUBWEAK DMA5_2_48_49_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_48_49_IRQHandler
        LDR     R0, =DMA5_2_48_49_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_50_51_IRQHandler
        PUBWEAK DMA5_2_50_51_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_50_51_IRQHandler
        LDR     R0, =DMA5_2_50_51_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_52_53_IRQHandler
        PUBWEAK DMA5_2_52_53_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_52_53_IRQHandler
        LDR     R0, =DMA5_2_52_53_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_54_55_IRQHandler
        PUBWEAK DMA5_2_54_55_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_54_55_IRQHandler
        LDR     R0, =DMA5_2_54_55_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_56_57_IRQHandler
        PUBWEAK DMA5_2_56_57_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_56_57_IRQHandler
        LDR     R0, =DMA5_2_56_57_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_58_59_IRQHandler
        PUBWEAK DMA5_2_58_59_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_58_59_IRQHandler
        LDR     R0, =DMA5_2_58_59_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_60_61_IRQHandler
        PUBWEAK DMA5_2_60_61_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_60_61_IRQHandler
        LDR     R0, =DMA5_2_60_61_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_2_62_63_IRQHandler
        PUBWEAK DMA5_2_62_63_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_2_62_63_IRQHandler
        LDR     R0, =DMA5_2_62_63_DriverIRQHandler
        BX      R0

        PUBWEAK ELE_GROUP1_IRQHandler
        PUBWEAK ELE_GROUP2_IRQHandler
        PUBWEAK ELE_GROUP3_IRQHandler
        PUBWEAK DBG_TRACE_IRQHandler
        PUBWEAK JTAGC_IRQHandler
        PUBWEAK SYSREQRST_CM33_IRQHandler
        PUBWEAK LOCKUP_CM33_IRQHandler
        PUBWEAK SYSREQRST_CM7_IRQHandler
        PUBWEAK LOCKUP_CM7_IRQHandler
        PUBWEAK SAI2_IRQHandler
        PUBWEAK SAI2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI2_IRQHandler
        LDR     R0, =SAI2_DriverIRQHandler
        BX      R0

        PUBWEAK SAI3_IRQHandler
        PUBWEAK SAI3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI3_IRQHandler
        LDR     R0, =SAI3_DriverIRQHandler
        BX      R0

        PUBWEAK SAI4_IRQHandler
        PUBWEAK SAI4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI4_IRQHandler
        LDR     R0, =SAI4_DriverIRQHandler
        BX      R0

        PUBWEAK SAI5_IRQHandler
        PUBWEAK SAI5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI5_IRQHandler
        LDR     R0, =SAI5_DriverIRQHandler
        BX      R0

        PUBWEAK USB1_WAKEUP_IRQHandler
        PUBWEAK USB2_WAKEUP_IRQHandler
        PUBWEAK USB1_IRQHandler
        PUBWEAK USB2_IRQHandler
        PUBWEAK LPSPI5_IRQHandler
        PUBWEAK LPSPI5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI5_IRQHandler
        LDR     R0, =LPSPI5_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI6_IRQHandler
        PUBWEAK LPSPI6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI6_IRQHandler
        LDR     R0, =LPSPI6_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI7_IRQHandler
        PUBWEAK LPSPI7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI7_IRQHandler
        LDR     R0, =LPSPI7_DriverIRQHandler
        BX      R0

        PUBWEAK LPSPI8_IRQHandler
        PUBWEAK LPSPI8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI8_IRQHandler
        LDR     R0, =LPSPI8_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C5_IRQHandler
        PUBWEAK LPI2C5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C5_IRQHandler
        LDR     R0, =LPI2C5_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C6_IRQHandler
        PUBWEAK LPI2C6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C6_IRQHandler
        LDR     R0, =LPI2C6_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C7_IRQHandler
        PUBWEAK LPI2C7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C7_IRQHandler
        LDR     R0, =LPI2C7_DriverIRQHandler
        BX      R0

        PUBWEAK LPI2C8_IRQHandler
        PUBWEAK LPI2C8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPI2C8_IRQHandler
        LDR     R0, =LPI2C8_DriverIRQHandler
        BX      R0

        PUBWEAK PDM_HWVAD_ERROR_IRQHandler
        PUBWEAK PDM_HWVAD_EVENT_IRQHandler
        PUBWEAK PDM_ERROR_IRQHandler
        PUBWEAK PDM_EVENT_IRQHandler
        PUBWEAK PDM_EVENT_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
PDM_EVENT_IRQHandler
        LDR     R0, =PDM_EVENT_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED205_IRQHandler
        PUBWEAK RESERVED206_IRQHandler
        PUBWEAK USDHC3_IRQHandler
        PUBWEAK USDHC3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
USDHC3_IRQHandler
        LDR     R0, =USDHC3_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED208_IRQHandler
        PUBWEAK RESERVED209_IRQHandler
        PUBWEAK RESERVED210_IRQHandler
        PUBWEAK RESERVED211_IRQHandler
        PUBWEAK RESERVED212_IRQHandler
        PUBWEAK RESERVED213_IRQHandler
        PUBWEAK RESERVED214_IRQHandler
        PUBWEAK ADC_ER_IRQHandler
        PUBWEAK ADC_WD_IRQHandler
        PUBWEAK ADC_EOC_IRQHandler
        PUBWEAK RESERVED218_IRQHandler
        PUBWEAK I3C1_RAW_IRQ_GLUE_IRQHandler
        PUBWEAK I3C1_RAW_IRQ_GLUE_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C1_RAW_IRQ_GLUE_IRQHandler
        LDR     R0, =I3C1_RAW_IRQ_GLUE_DriverIRQHandler
        BX      R0

        PUBWEAK I3C2_RAW_IRQ_GLUE_IRQHandler
        PUBWEAK I3C2_RAW_IRQ_GLUE_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
I3C2_RAW_IRQ_GLUE_IRQHandler
        LDR     R0, =I3C2_RAW_IRQ_GLUE_DriverIRQHandler
        BX      R0

        PUBWEAK MU5_A_IRQHandler
        PUBWEAK MU6_A_IRQHandler
        PUBWEAK MU7_B_IRQHandler
        PUBWEAK MU8_B_IRQHandler
        PUBWEAK XSPI_SLV_IRQHandler
        PUBWEAK XSPI_SLV_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI_SLV_IRQHandler
        LDR     R0, =XSPI_SLV_DriverIRQHandler
        BX      R0

        PUBWEAK FCCU0_IRQHandler
        PUBWEAK FCCU1_IRQHandler
        PUBWEAK FCCU2_IRQHandler
        PUBWEAK STCU_IRQHandler
        PUBWEAK DISP_IRQSTEER0_IRQHandler
        PUBWEAK DISP_IRQSTEER0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER0_IRQHandler
        LDR     R0, =DISP_IRQSTEER0_DriverIRQHandler
        BX      R0

        PUBWEAK DISP_IRQSTEER1_IRQHandler
        PUBWEAK DISP_IRQSTEER1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER1_IRQHandler
        LDR     R0, =DISP_IRQSTEER1_DriverIRQHandler
        BX      R0

        PUBWEAK DISP_IRQSTEER2_IRQHandler
        PUBWEAK DISP_IRQSTEER2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER2_IRQHandler
        LDR     R0, =DISP_IRQSTEER2_DriverIRQHandler
        BX      R0

        PUBWEAK DISP_IRQSTEER3_IRQHandler
        PUBWEAK DISP_IRQSTEER3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER3_IRQHandler
        LDR     R0, =DISP_IRQSTEER3_DriverIRQHandler
        BX      R0

        PUBWEAK DISP_IRQSTEER4_IRQHandler
        PUBWEAK DISP_IRQSTEER4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER4_IRQHandler
        LDR     R0, =DISP_IRQSTEER4_DriverIRQHandler
        BX      R0

        PUBWEAK DISP_IRQSTEER7_IRQHandler
        PUBWEAK DISP_IRQSTEER7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DISP_IRQSTEER7_IRQHandler
        LDR     R0, =DISP_IRQSTEER7_DriverIRQHandler
        BX      R0

        PUBWEAK MU_C1_IRQHandler
        PUBWEAK ISI_0_IRQHandler
        PUBWEAK ISP_IRQHandler
        PUBWEAK M7MIX_IRQHandler
        PUBWEAK IRQSTEER_0_IRQHandler
        PUBWEAK IRQSTEER_0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_0_IRQHandler
        LDR     R0, =IRQSTEER_0_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_1_IRQHandler
        PUBWEAK IRQSTEER_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_1_IRQHandler
        LDR     R0, =IRQSTEER_1_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_2_IRQHandler
        PUBWEAK IRQSTEER_2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_2_IRQHandler
        LDR     R0, =IRQSTEER_2_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_3_IRQHandler
        PUBWEAK IRQSTEER_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_3_IRQHandler
        LDR     R0, =IRQSTEER_3_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_4_IRQHandler
        PUBWEAK IRQSTEER_4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_4_IRQHandler
        LDR     R0, =IRQSTEER_4_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_5_IRQHandler
        PUBWEAK IRQSTEER_5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_5_IRQHandler
        LDR     R0, =IRQSTEER_5_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_6_IRQHandler
        PUBWEAK IRQSTEER_6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_6_IRQHandler
        LDR     R0, =IRQSTEER_6_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_7_IRQHandler
        PUBWEAK IRQSTEER_7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_7_IRQHandler
        LDR     R0, =IRQSTEER_7_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_8_IRQHandler
        PUBWEAK IRQSTEER_8_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_8_IRQHandler
        LDR     R0, =IRQSTEER_8_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_9_IRQHandler
        PUBWEAK IRQSTEER_9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_9_IRQHandler
        LDR     R0, =IRQSTEER_9_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_10_IRQHandler
        PUBWEAK IRQSTEER_10_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_10_IRQHandler
        LDR     R0, =IRQSTEER_10_DriverIRQHandler
        BX      R0

        PUBWEAK IRQSTEER_11_IRQHandler
        PUBWEAK IRQSTEER_11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
IRQSTEER_11_IRQHandler
        LDR     R0, =IRQSTEER_11_DriverIRQHandler
        BX      R0

        PUBWEAK MU1_A_IRQHandler
        PUBWEAK MU1_B_IRQHandler
        PUBWEAK MU2_A_IRQHandler
        PUBWEAK MU2_B_IRQHandler
        PUBWEAK MU3_A_IRQHandler
        PUBWEAK MU3_B_IRQHandler
        PUBWEAK MU4_A_IRQHandler
        PUBWEAK MU4_B_IRQHandler
        PUBWEAK MU5_B_IRQHandler
        PUBWEAK MU6_B_IRQHandler
        PUBWEAK MU7_A_IRQHandler
        PUBWEAK MU8_A_IRQHandler
        PUBWEAK MSGINTR1_IRQHandler
        PUBWEAK MSGINTR2_IRQHandler
        PUBWEAK V2X_APCH1_IRQHandler
        PUBWEAK V2X_HSM2_IRQHandler
        PUBWEAK RESERVED268_IRQHandler
        PUBWEAK RESERVED269_IRQHandler
        PUBWEAK RESERVED270_IRQHandler
        PUBWEAK RESERVED271_IRQHandler
        PUBWEAK RESERVED272_IRQHandler
        PUBWEAK RESERVED273_IRQHandler
        PUBWEAK RESERVED274_IRQHandler
        PUBWEAK RESERVED275_IRQHandler
        PUBWEAK RESERVED276_IRQHandler
        PUBWEAK RESERVED277_IRQHandler
        PUBWEAK RESERVED278_IRQHandler
        PUBWEAK RESERVED279_IRQHandler
        PUBWEAK RESERVED280_IRQHandler
        PUBWEAK RESERVED281_IRQHandler
        PUBWEAK RESERVED282_IRQHandler
        PUBWEAK RESERVED283_IRQHandler
        PUBWEAK RESERVED284_IRQHandler
        PUBWEAK RESERVED285_IRQHandler
        PUBWEAK RESERVED286_IRQHandler
        PUBWEAK RESERVED287_IRQHandler
        PUBWEAK RESERVED288_IRQHandler
        PUBWEAK RESERVED289_IRQHandler
        PUBWEAK RESERVED290_IRQHandler
        PUBWEAK RESERVED291_IRQHandler
        PUBWEAK RESERVED292_IRQHandler
        PUBWEAK RESERVED293_IRQHandler
        PUBWEAK RESERVED294_IRQHandler
        PUBWEAK RESERVED295_IRQHandler
        PUBWEAK RESERVED296_IRQHandler
        PUBWEAK RESERVED297_IRQHandler
        PUBWEAK RESERVED298_IRQHandler
        PUBWEAK RESERVED299_IRQHandler
        PUBWEAK RESERVED300_IRQHandler
        PUBWEAK RESERVED301_IRQHandler
        PUBWEAK RESERVED302_IRQHandler
        PUBWEAK RESERVED303_IRQHandler
        PUBWEAK RESERVED304_IRQHandler
        PUBWEAK RESERVED305_IRQHandler
        PUBWEAK RESERVED306_IRQHandler
        PUBWEAK RESERVED307_IRQHandler
        PUBWEAK RESERVED308_IRQHandler
        PUBWEAK RESERVED309_IRQHandler
        PUBWEAK RESERVED310_IRQHandler
        PUBWEAK RESERVED311_IRQHandler
        PUBWEAK RESERVED312_IRQHandler
        PUBWEAK RESERVED313_IRQHandler
        PUBWEAK RESERVED314_IRQHandler
        PUBWEAK RESERVED315_IRQHandler
        PUBWEAK TRDC_MGR_C_IRQHandler
        PUBWEAK TRDC_MGR_D_IRQHandler
        PUBWEAK TRDC_MGR_E_IRQHandler
        PUBWEAK TRDC_MGR_G_IRQHandler
        PUBWEAK TRDC_MGR_H_IRQHandler
        PUBWEAK TRDC_MGR_V_IRQHandler
        PUBWEAK ERM_A_IRQHandler
        PUBWEAK RESERVED323_IRQHandler
        PUBWEAK ERM_W_IRQHandler
        PUBWEAK ERM_ML_IRQHandler
        PUBWEAK DMA5_3_ERROR_IRQHandler
        PUBWEAK DMA5_3_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_ERROR_IRQHandler
        LDR     R0, =DMA5_3_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK OCRAM_C_IRQHandler
        PUBWEAK RESERVED328_IRQHandler
        PUBWEAK RESERVED329_IRQHandler
        PUBWEAK RESERVED330_IRQHandler
        PUBWEAK RESERVED331_IRQHandler
        PUBWEAK RESERVED332_IRQHandler
        PUBWEAK RESERVED333_IRQHandler
        PUBWEAK RESERVED334_IRQHandler
        PUBWEAK RESERVED335_IRQHandler
        PUBWEAK RESERVED336_IRQHandler
        PUBWEAK RESERVED337_IRQHandler
        PUBWEAK RESERVED338_IRQHandler
        PUBWEAK RESERVED339_IRQHandler
        PUBWEAK RESERVED340_IRQHandler
        PUBWEAK RESERVED341_IRQHandler
        PUBWEAK RESERVED342_IRQHandler
        PUBWEAK RESERVED343_IRQHandler
        PUBWEAK RESERVED344_IRQHandler
        PUBWEAK RESERVED345_IRQHandler
        PUBWEAK RESERVED346_IRQHandler
        PUBWEAK RESERVED347_IRQHandler
        PUBWEAK RESERVED348_IRQHandler
        PUBWEAK RESERVED349_IRQHandler
        PUBWEAK RESERVED350_IRQHandler
        PUBWEAK RESERVED351_IRQHandler
        PUBWEAK RESERVED352_IRQHandler
        PUBWEAK RESERVED353_IRQHandler
        PUBWEAK RESERVED354_IRQHandler
        PUBWEAK RESERVED355_IRQHandler
        PUBWEAK RESERVED356_IRQHandler
        PUBWEAK RESERVED357_IRQHandler
        PUBWEAK RESERVED358_IRQHandler
        PUBWEAK RESERVED359_IRQHandler
        PUBWEAK RESERVED360_IRQHandler
        PUBWEAK RESERVED361_IRQHandler
        PUBWEAK RESERVED362_IRQHandler
        PUBWEAK RESERVED363_IRQHandler
        PUBWEAK RESERVED364_IRQHandler
        PUBWEAK RESERVED365_IRQHandler
        PUBWEAK RESERVED366_IRQHandler
        PUBWEAK RESERVED367_IRQHandler
        PUBWEAK RESERVED368_IRQHandler
        PUBWEAK RESERVED369_IRQHandler
        PUBWEAK RESERVED370_IRQHandler
        PUBWEAK RESERVED371_IRQHandler
        PUBWEAK RESERVED372_IRQHandler
        PUBWEAK RESERVED373_IRQHandler
        PUBWEAK RESERVED374_IRQHandler
        PUBWEAK RESERVED375_IRQHandler
        PUBWEAK RESERVED376_IRQHandler
        PUBWEAK RESERVED377_IRQHandler
        PUBWEAK RESERVED378_IRQHandler
        PUBWEAK RESERVED379_IRQHandler
        PUBWEAK DMA5_3_0_1_IRQHandler
        PUBWEAK DMA5_3_0_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_0_1_IRQHandler
        LDR     R0, =DMA5_3_0_1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_2_3_IRQHandler
        PUBWEAK DMA5_3_2_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_2_3_IRQHandler
        LDR     R0, =DMA5_3_2_3_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_4_5_IRQHandler
        PUBWEAK DMA5_3_4_5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_4_5_IRQHandler
        LDR     R0, =DMA5_3_4_5_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_6_7_IRQHandler
        PUBWEAK DMA5_3_6_7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_6_7_IRQHandler
        LDR     R0, =DMA5_3_6_7_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_8_9_IRQHandler
        PUBWEAK DMA5_3_8_9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_8_9_IRQHandler
        LDR     R0, =DMA5_3_8_9_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_10_11_IRQHandler
        PUBWEAK DMA5_3_10_11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_10_11_IRQHandler
        LDR     R0, =DMA5_3_10_11_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_12_13_IRQHandler
        PUBWEAK DMA5_3_12_13_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_12_13_IRQHandler
        LDR     R0, =DMA5_3_12_13_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_14_15_IRQHandler
        PUBWEAK DMA5_3_14_15_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_14_15_IRQHandler
        LDR     R0, =DMA5_3_14_15_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_16_17_IRQHandler
        PUBWEAK DMA5_3_16_17_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_16_17_IRQHandler
        LDR     R0, =DMA5_3_16_17_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_18_19_IRQHandler
        PUBWEAK DMA5_3_18_19_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_18_19_IRQHandler
        LDR     R0, =DMA5_3_18_19_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_20_21_IRQHandler
        PUBWEAK DMA5_3_20_21_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_20_21_IRQHandler
        LDR     R0, =DMA5_3_20_21_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_22_23_IRQHandler
        PUBWEAK DMA5_3_22_23_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_22_23_IRQHandler
        LDR     R0, =DMA5_3_22_23_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_24_25_IRQHandler
        PUBWEAK DMA5_3_24_25_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_24_25_IRQHandler
        LDR     R0, =DMA5_3_24_25_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_26_27_IRQHandler
        PUBWEAK DMA5_3_26_27_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_26_27_IRQHandler
        LDR     R0, =DMA5_3_26_27_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_28_29_IRQHandler
        PUBWEAK DMA5_3_28_29_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_28_29_IRQHandler
        LDR     R0, =DMA5_3_28_29_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_30_31_IRQHandler
        PUBWEAK DMA5_3_30_31_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_30_31_IRQHandler
        LDR     R0, =DMA5_3_30_31_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED396_IRQHandler
        PUBWEAK RESERVED397_IRQHandler
        PUBWEAK RESERVED398_IRQHandler
        PUBWEAK RESERVED399_IRQHandler
        PUBWEAK RESERVED400_IRQHandler
        PUBWEAK RESERVED401_IRQHandler
        PUBWEAK RESERVED402_IRQHandler
        PUBWEAK RESERVED403_IRQHandler
        PUBWEAK RESERVED404_IRQHandler
        PUBWEAK RESERVED405_IRQHandler
        PUBWEAK RESERVED406_IRQHandler
        PUBWEAK RESERVED407_IRQHandler
        PUBWEAK RESERVED408_IRQHandler
        PUBWEAK RESERVED409_IRQHandler
        PUBWEAK RESERVED410_IRQHandler
        PUBWEAK RESERVED411_IRQHandler
        PUBWEAK RESERVED412_IRQHandler
        PUBWEAK RESERVED413_IRQHandler
        PUBWEAK RESERVED414_IRQHandler
        PUBWEAK RESERVED415_IRQHandler
        PUBWEAK RESERVED416_IRQHandler
        PUBWEAK RESERVED417_IRQHandler
        PUBWEAK RESERVED418_IRQHandler
        PUBWEAK RESERVED419_IRQHandler
        PUBWEAK RESERVED420_IRQHandler
        PUBWEAK RESERVED421_IRQHandler
        PUBWEAK RESERVED422_IRQHandler
        PUBWEAK RESERVED423_IRQHandler
        PUBWEAK RESERVED424_IRQHandler
        PUBWEAK RESERVED425_IRQHandler
        PUBWEAK RESERVED426_IRQHandler
        PUBWEAK RESERVED427_IRQHandler
        PUBWEAK RESERVED428_IRQHandler
        PUBWEAK RESERVED429_IRQHandler
        PUBWEAK RESERVED430_IRQHandler
        PUBWEAK RESERVED431_IRQHandler
        PUBWEAK RESERVED432_IRQHandler
        PUBWEAK RESERVED433_IRQHandler
        PUBWEAK RESERVED434_IRQHandler
        PUBWEAK RESERVED435_IRQHandler
        PUBWEAK RESERVED436_IRQHandler
        PUBWEAK RESERVED437_IRQHandler
        PUBWEAK RESERVED438_IRQHandler
        PUBWEAK RESERVED439_IRQHandler
        PUBWEAK RESERVED440_IRQHandler
        PUBWEAK RESERVED441_IRQHandler
        PUBWEAK RESERVED442_IRQHandler
        PUBWEAK RESERVED443_IRQHandler
        PUBWEAK DMA5_3_32_33_IRQHandler
        PUBWEAK DMA5_3_32_33_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_32_33_IRQHandler
        LDR     R0, =DMA5_3_32_33_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_34_35_IRQHandler
        PUBWEAK DMA5_3_34_35_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_34_35_IRQHandler
        LDR     R0, =DMA5_3_34_35_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_36_37_IRQHandler
        PUBWEAK DMA5_3_36_37_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_36_37_IRQHandler
        LDR     R0, =DMA5_3_36_37_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_38_39_IRQHandler
        PUBWEAK DMA5_3_38_39_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_38_39_IRQHandler
        LDR     R0, =DMA5_3_38_39_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_40_41_IRQHandler
        PUBWEAK DMA5_3_40_41_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_40_41_IRQHandler
        LDR     R0, =DMA5_3_40_41_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_42_43_IRQHandler
        PUBWEAK DMA5_3_42_43_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_42_43_IRQHandler
        LDR     R0, =DMA5_3_42_43_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_44_45_IRQHandler
        PUBWEAK DMA5_3_44_45_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_44_45_IRQHandler
        LDR     R0, =DMA5_3_44_45_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_46_47_IRQHandler
        PUBWEAK DMA5_3_46_47_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_46_47_IRQHandler
        LDR     R0, =DMA5_3_46_47_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_48_49_IRQHandler
        PUBWEAK DMA5_3_48_49_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_48_49_IRQHandler
        LDR     R0, =DMA5_3_48_49_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_50_51_IRQHandler
        PUBWEAK DMA5_3_50_51_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_50_51_IRQHandler
        LDR     R0, =DMA5_3_50_51_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_52_53_IRQHandler
        PUBWEAK DMA5_3_52_53_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_52_53_IRQHandler
        LDR     R0, =DMA5_3_52_53_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_54_55_IRQHandler
        PUBWEAK DMA5_3_54_55_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_54_55_IRQHandler
        LDR     R0, =DMA5_3_54_55_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_56_57_IRQHandler
        PUBWEAK DMA5_3_56_57_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_56_57_IRQHandler
        LDR     R0, =DMA5_3_56_57_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_58_59_IRQHandler
        PUBWEAK DMA5_3_58_59_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_58_59_IRQHandler
        LDR     R0, =DMA5_3_58_59_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_60_61_IRQHandler
        PUBWEAK DMA5_3_60_61_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_60_61_IRQHandler
        LDR     R0, =DMA5_3_60_61_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_3_62_63_IRQHandler
        PUBWEAK DMA5_3_62_63_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_3_62_63_IRQHandler
        LDR     R0, =DMA5_3_62_63_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED460_IRQHandler
        PUBWEAK RESERVED461_IRQHandler
        PUBWEAK RESERVED462_IRQHandler
        PUBWEAK RESERVED463_IRQHandler
        PUBWEAK RESERVED464_IRQHandler
        PUBWEAK RESERVED465_IRQHandler
        PUBWEAK RESERVED466_IRQHandler
        PUBWEAK RESERVED467_IRQHandler
        PUBWEAK RESERVED468_IRQHandler
        PUBWEAK RESERVED469_IRQHandler
        PUBWEAK RESERVED470_IRQHandler
        PUBWEAK RESERVED471_IRQHandler
        PUBWEAK RESERVED472_IRQHandler
        PUBWEAK RESERVED473_IRQHandler
        PUBWEAK RESERVED474_IRQHandler
        PUBWEAK RESERVED475_IRQHandler
        PUBWEAK RESERVED476_IRQHandler
        PUBWEAK RESERVED477_IRQHandler
        PUBWEAK RESERVED478_IRQHandler
        PUBWEAK RESERVED479_IRQHandler
        PUBWEAK RESERVED480_IRQHandler
        PUBWEAK RESERVED481_IRQHandler
        PUBWEAK RESERVED482_IRQHandler
        PUBWEAK RESERVED483_IRQHandler
        PUBWEAK RESERVED484_IRQHandler
        PUBWEAK RESERVED485_IRQHandler
        PUBWEAK RESERVED486_IRQHandler
        PUBWEAK RESERVED487_IRQHandler
        PUBWEAK RESERVED488_IRQHandler
        PUBWEAK RESERVED489_IRQHandler
        PUBWEAK RESERVED490_IRQHandler
        PUBWEAK RESERVED491_IRQHandler
        PUBWEAK RESERVED492_IRQHandler
        PUBWEAK RESERVED493_IRQHandler
        PUBWEAK RESERVED494_IRQHandler
        PUBWEAK RESERVED495_IRQHandler
        PUBWEAK RESERVED496_IRQHandler
        PUBWEAK RESERVED497_IRQHandler
        PUBWEAK RESERVED498_IRQHandler
        PUBWEAK RESERVED499_IRQHandler
        PUBWEAK RESERVED500_IRQHandler
        PUBWEAK RESERVED501_IRQHandler
        PUBWEAK RESERVED502_IRQHandler
        PUBWEAK RESERVED503_IRQHandler
        PUBWEAK RESERVED504_IRQHandler
        PUBWEAK RESERVED505_IRQHandler
        PUBWEAK RESERVED506_IRQHandler
        PUBWEAK RESERVED507_IRQHandler
        PUBWEAK RESERVED508_IRQHandler
        PUBWEAK RESERVED509_IRQHandler
        PUBWEAK RESERVED510_IRQHandler
        PUBWEAK RESERVED511_IRQHandler
        PUBWEAK RESERVED512_IRQHandler
        PUBWEAK RESERVED513_IRQHandler
        PUBWEAK RESERVED514_IRQHandler
        PUBWEAK RESERVED515_IRQHandler
        PUBWEAK RESERVED516_IRQHandler
        PUBWEAK RESERVED517_IRQHandler
        PUBWEAK RESERVED518_IRQHandler
        PUBWEAK RESERVED519_IRQHandler
        PUBWEAK RESERVED520_IRQHandler
        PUBWEAK RESERVED521_IRQHandler
        PUBWEAK RESERVED522_IRQHandler
        PUBWEAK RESERVED523_IRQHandler
        PUBWEAK RESERVED524_IRQHandler
        PUBWEAK RESERVED525_IRQHandler
        PUBWEAK RESERVED526_IRQHandler
        PUBWEAK RESERVED527_IRQHandler
        PUBWEAK RESERVED528_IRQHandler
        PUBWEAK RESERVED529_IRQHandler
        PUBWEAK RESERVED530_IRQHandler
        PUBWEAK RESERVED531_IRQHandler
        PUBWEAK RESERVED532_IRQHandler
        PUBWEAK RESERVED533_IRQHandler
        PUBWEAK RESERVED534_IRQHandler
        PUBWEAK RESERVED535_IRQHandler
        PUBWEAK RESERVED536_IRQHandler
        PUBWEAK RESERVED537_IRQHandler
        PUBWEAK RESERVED538_IRQHandler
        PUBWEAK RESERVED539_IRQHandler
        PUBWEAK RESERVED540_IRQHandler
        PUBWEAK RESERVED541_IRQHandler
        PUBWEAK RESERVED542_IRQHandler
        PUBWEAK RESERVED543_IRQHandler
        PUBWEAK RESERVED544_IRQHandler
        PUBWEAK RESERVED545_IRQHandler
        PUBWEAK RESERVED546_IRQHandler
        PUBWEAK RESERVED547_IRQHandler
        PUBWEAK RESERVED548_IRQHandler
        PUBWEAK RESERVED549_IRQHandler
        PUBWEAK RESERVED550_IRQHandler
        PUBWEAK RESERVED551_IRQHandler
        PUBWEAK RESERVED552_IRQHandler
        PUBWEAK RESERVED553_IRQHandler
        PUBWEAK RESERVED554_IRQHandler
        PUBWEAK RESERVED555_IRQHandler
        PUBWEAK RESERVED556_IRQHandler
        PUBWEAK RESERVED557_IRQHandler
        PUBWEAK RESERVED558_IRQHandler
        PUBWEAK RESERVED559_IRQHandler
        PUBWEAK RESERVED560_IRQHandler
        PUBWEAK RESERVED561_IRQHandler
        PUBWEAK RESERVED562_IRQHandler
        PUBWEAK RESERVED563_IRQHandler
        PUBWEAK RESERVED564_IRQHandler
        PUBWEAK RESERVED565_IRQHandler
        PUBWEAK RESERVED566_IRQHandler
        PUBWEAK RESERVED567_IRQHandler
        PUBWEAK RESERVED568_IRQHandler
        PUBWEAK RESERVED569_IRQHandler
        PUBWEAK RESERVED570_IRQHandler
        PUBWEAK RESERVED571_IRQHandler
        PUBWEAK RESERVED572_IRQHandler
        PUBWEAK RESERVED573_IRQHandler
        PUBWEAK RESERVED574_IRQHandler
        PUBWEAK RESERVED575_IRQHandler
        PUBWEAK RESERVED576_IRQHandler
        PUBWEAK RESERVED577_IRQHandler
        PUBWEAK RESERVED578_IRQHandler
        PUBWEAK RESERVED579_IRQHandler
        PUBWEAK RESERVED580_IRQHandler
        PUBWEAK RESERVED581_IRQHandler
        PUBWEAK RESERVED582_IRQHandler
        PUBWEAK RESERVED583_IRQHandler
        PUBWEAK RESERVED584_IRQHandler
        PUBWEAK RESERVED585_IRQHandler
        PUBWEAK RESERVED586_IRQHandler
        PUBWEAK RESERVED587_IRQHandler
        PUBWEAK RESERVED588_IRQHandler
        PUBWEAK RESERVED589_IRQHandler
        PUBWEAK RESERVED590_IRQHandler
        PUBWEAK RESERVED591_IRQHandler
        PUBWEAK RESERVED592_IRQHandler
        PUBWEAK RESERVED593_IRQHandler
        PUBWEAK RESERVED594_IRQHandler
        PUBWEAK RESERVED595_IRQHandler
        PUBWEAK RESERVED596_IRQHandler
        PUBWEAK RESERVED597_IRQHandler
        PUBWEAK RESERVED598_IRQHandler
        PUBWEAK RESERVED599_IRQHandler
        PUBWEAK RESERVED600_IRQHandler
        PUBWEAK RESERVED601_IRQHandler
        PUBWEAK RESERVED602_IRQHandler
        PUBWEAK RESERVED603_IRQHandler
        PUBWEAK RESERVED604_IRQHandler
        PUBWEAK RESERVED605_IRQHandler
        PUBWEAK RESERVED606_IRQHandler
        PUBWEAK RESERVED607_IRQHandler
        PUBWEAK RESERVED608_IRQHandler
        PUBWEAK RESERVED609_IRQHandler
        PUBWEAK RESERVED610_IRQHandler
        PUBWEAK RESERVED611_IRQHandler
        PUBWEAK RESERVED612_IRQHandler
        PUBWEAK RESERVED613_IRQHandler
        PUBWEAK RESERVED614_IRQHandler
        PUBWEAK RESERVED615_IRQHandler
        PUBWEAK RESERVED616_IRQHandler
        PUBWEAK RESERVED617_IRQHandler
        PUBWEAK RESERVED618_IRQHandler
        PUBWEAK RESERVED619_IRQHandler
        PUBWEAK RESERVED620_IRQHandler
        PUBWEAK RESERVED621_IRQHandler
        PUBWEAK RESERVED622_IRQHandler
        PUBWEAK RESERVED623_IRQHandler
        PUBWEAK RESERVED624_IRQHandler
        PUBWEAK RESERVED625_IRQHandler
        PUBWEAK RESERVED626_IRQHandler
        PUBWEAK RESERVED627_IRQHandler
        PUBWEAK RESERVED628_IRQHandler
        PUBWEAK RESERVED629_IRQHandler
        PUBWEAK RESERVED630_IRQHandler
        PUBWEAK RESERVED631_IRQHandler
        PUBWEAK RESERVED632_IRQHandler
        PUBWEAK RESERVED633_IRQHandler
        PUBWEAK RESERVED634_IRQHandler
        PUBWEAK RESERVED635_IRQHandler
        PUBWEAK RESERVED636_IRQHandler
        PUBWEAK RESERVED637_IRQHandler
        PUBWEAK RESERVED638_IRQHandler
        PUBWEAK RESERVED639_IRQHandler
        PUBWEAK RESERVED640_IRQHandler
        PUBWEAK RESERVED641_IRQHandler
        PUBWEAK RESERVED642_IRQHandler
        PUBWEAK RESERVED643_IRQHandler
        PUBWEAK RESERVED644_IRQHandler
        PUBWEAK RESERVED645_IRQHandler
        PUBWEAK RESERVED646_IRQHandler
        PUBWEAK RESERVED647_IRQHandler
        PUBWEAK RESERVED648_IRQHandler
        PUBWEAK RESERVED649_IRQHandler
        PUBWEAK RESERVED650_IRQHandler
        PUBWEAK LP_HDSK_GSKT_IRQHandler
        PUBWEAK RESERVED652_IRQHandler
        PUBWEAK RESERVED653_IRQHandler
        PUBWEAK RESERVED654_IRQHandler
        PUBWEAK RESERVED655_IRQHandler
        PUBWEAK RESERVED656_IRQHandler
        PUBWEAK RESERVED657_IRQHandler
        PUBWEAK RESERVED658_IRQHandler
        PUBWEAK RESERVED659_IRQHandler
        PUBWEAK RESERVED660_IRQHandler
        PUBWEAK RESERVED661_IRQHandler
        PUBWEAK RESERVED662_IRQHandler
        PUBWEAK RESERVED663_IRQHandler
        PUBWEAK RESERVED664_IRQHandler
        PUBWEAK RESERVED665_IRQHandler
        PUBWEAK RESERVED666_IRQHandler
        PUBWEAK RESERVED667_IRQHandler
        PUBWEAK RESERVED668_IRQHandler
        PUBWEAK RESERVED669_IRQHandler
        PUBWEAK RESERVED670_IRQHandler
        PUBWEAK RESERVED671_IRQHandler
        PUBWEAK RESERVED672_IRQHandler
        PUBWEAK RESERVED673_IRQHandler
        PUBWEAK RESERVED674_IRQHandler
        PUBWEAK RESERVED675_IRQHandler
        PUBWEAK RESERVED676_IRQHandler
        PUBWEAK RESERVED677_IRQHandler
        PUBWEAK RESERVED678_IRQHandler
        PUBWEAK RESERVED679_IRQHandler
        PUBWEAK RESERVED680_IRQHandler
        PUBWEAK RESERVED681_IRQHandler
        PUBWEAK RESERVED682_IRQHandler
        PUBWEAK RESERVED683_IRQHandler
        PUBWEAK RESERVED684_IRQHandler
        PUBWEAK RESERVED685_IRQHandler
        PUBWEAK RESERVED686_IRQHandler
        PUBWEAK RESERVED687_IRQHandler
        PUBWEAK RESERVED688_IRQHandler
        PUBWEAK RESERVED689_IRQHandler
        PUBWEAK RESERVED690_IRQHandler
        PUBWEAK RESERVED691_IRQHandler
        PUBWEAK RESERVED692_IRQHandler
        PUBWEAK RESERVED693_IRQHandler
        PUBWEAK RESERVED694_IRQHandler
        PUBWEAK RESERVED695_IRQHandler
        PUBWEAK RESERVED696_IRQHandler
        PUBWEAK RESERVED697_IRQHandler
        PUBWEAK RESERVED698_IRQHandler
        PUBWEAK RESERVED699_IRQHandler
        PUBWEAK MU_C2_IRQHandler
        PUBWEAK MU_C3_IRQHandler
        PUBWEAK MU_C4_IRQHandler
        PUBWEAK MU_C5_IRQHandler
        PUBWEAK MU_C6_IRQHandler
        PUBWEAK MU_C7_IRQHandler
        PUBWEAK MU_C8_IRQHandler
        PUBWEAK MU_C9_IRQHandler
        PUBWEAK ISI_1_IRQHandler
        PUBWEAK ISI_2_IRQHandler
        PUBWEAK ISI_3_IRQHandler
        PUBWEAK ISI_4_IRQHandler
        PUBWEAK ISI_5_IRQHandler
        PUBWEAK ISI_6_IRQHandler
        PUBWEAK ISI_7_IRQHandler
        PUBWEAK DMA5_4_ERROR_IRQHandler
        PUBWEAK DMA5_4_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_ERROR_IRQHandler
        LDR     R0, =DMA5_4_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED716_IRQHandler
        PUBWEAK RESERVED717_IRQHandler
        PUBWEAK RESERVED718_IRQHandler
        PUBWEAK RESERVED719_IRQHandler
        PUBWEAK RESERVED720_IRQHandler
        PUBWEAK RESERVED721_IRQHandler
        PUBWEAK RESERVED722_IRQHandler
        PUBWEAK RESERVED723_IRQHandler
        PUBWEAK RESERVED724_IRQHandler
        PUBWEAK RESERVED725_IRQHandler
        PUBWEAK RESERVED726_IRQHandler
        PUBWEAK RESERVED727_IRQHandler
        PUBWEAK RESERVED728_IRQHandler
        PUBWEAK RESERVED729_IRQHandler
        PUBWEAK RESERVED730_IRQHandler
        PUBWEAK RESERVED731_IRQHandler
        PUBWEAK RESERVED732_IRQHandler
        PUBWEAK RESERVED733_IRQHandler
        PUBWEAK RESERVED734_IRQHandler
        PUBWEAK RESERVED735_IRQHandler
        PUBWEAK RESERVED736_IRQHandler
        PUBWEAK RESERVED737_IRQHandler
        PUBWEAK RESERVED738_IRQHandler
        PUBWEAK RESERVED739_IRQHandler
        PUBWEAK RESERVED740_IRQHandler
        PUBWEAK RESERVED741_IRQHandler
        PUBWEAK RESERVED742_IRQHandler
        PUBWEAK RESERVED743_IRQHandler
        PUBWEAK RESERVED744_IRQHandler
        PUBWEAK RESERVED745_IRQHandler
        PUBWEAK RESERVED746_IRQHandler
        PUBWEAK RESERVED747_IRQHandler
        PUBWEAK RESERVED748_IRQHandler
        PUBWEAK RESERVED749_IRQHandler
        PUBWEAK RESERVED750_IRQHandler
        PUBWEAK RESERVED751_IRQHandler
        PUBWEAK RESERVED752_IRQHandler
        PUBWEAK RESERVED753_IRQHandler
        PUBWEAK RESERVED754_IRQHandler
        PUBWEAK RESERVED755_IRQHandler
        PUBWEAK RESERVED756_IRQHandler
        PUBWEAK RESERVED757_IRQHandler
        PUBWEAK RESERVED758_IRQHandler
        PUBWEAK RESERVED759_IRQHandler
        PUBWEAK RESERVED760_IRQHandler
        PUBWEAK RESERVED761_IRQHandler
        PUBWEAK RESERVED762_IRQHandler
        PUBWEAK RESERVED763_IRQHandler
        PUBWEAK DMA5_4_0_1_IRQHandler
        PUBWEAK DMA5_4_0_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_0_1_IRQHandler
        LDR     R0, =DMA5_4_0_1_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_2_3_IRQHandler
        PUBWEAK DMA5_4_2_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_2_3_IRQHandler
        LDR     R0, =DMA5_4_2_3_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_4_5_IRQHandler
        PUBWEAK DMA5_4_4_5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_4_5_IRQHandler
        LDR     R0, =DMA5_4_4_5_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_6_7_IRQHandler
        PUBWEAK DMA5_4_6_7_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_6_7_IRQHandler
        LDR     R0, =DMA5_4_6_7_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_8_9_IRQHandler
        PUBWEAK DMA5_4_8_9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_8_9_IRQHandler
        LDR     R0, =DMA5_4_8_9_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_10_11_IRQHandler
        PUBWEAK DMA5_4_10_11_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_10_11_IRQHandler
        LDR     R0, =DMA5_4_10_11_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_12_13_IRQHandler
        PUBWEAK DMA5_4_12_13_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_12_13_IRQHandler
        LDR     R0, =DMA5_4_12_13_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_14_15_IRQHandler
        PUBWEAK DMA5_4_14_15_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_14_15_IRQHandler
        LDR     R0, =DMA5_4_14_15_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_16_17_IRQHandler
        PUBWEAK DMA5_4_16_17_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_16_17_IRQHandler
        LDR     R0, =DMA5_4_16_17_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_18_19_IRQHandler
        PUBWEAK DMA5_4_18_19_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_18_19_IRQHandler
        LDR     R0, =DMA5_4_18_19_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_20_21_IRQHandler
        PUBWEAK DMA5_4_20_21_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_20_21_IRQHandler
        LDR     R0, =DMA5_4_20_21_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_22_23_IRQHandler
        PUBWEAK DMA5_4_22_23_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_22_23_IRQHandler
        LDR     R0, =DMA5_4_22_23_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_24_25_IRQHandler
        PUBWEAK DMA5_4_24_25_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_24_25_IRQHandler
        LDR     R0, =DMA5_4_24_25_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_26_27_IRQHandler
        PUBWEAK DMA5_4_26_27_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_26_27_IRQHandler
        LDR     R0, =DMA5_4_26_27_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_28_29_IRQHandler
        PUBWEAK DMA5_4_28_29_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_28_29_IRQHandler
        LDR     R0, =DMA5_4_28_29_DriverIRQHandler
        BX      R0

        PUBWEAK DMA5_4_30_31_IRQHandler
        PUBWEAK DMA5_4_30_31_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_30_31_IRQHandler
        LDR     R0, =DMA5_4_30_31_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED780_IRQHandler
        PUBWEAK RESERVED781_IRQHandler
        PUBWEAK RESERVED782_IRQHandler
        PUBWEAK RESERVED783_IRQHandler
        PUBWEAK RESERVED784_IRQHandler
        PUBWEAK RESERVED785_IRQHandler
        PUBWEAK RESERVED786_IRQHandler
        PUBWEAK RESERVED787_IRQHandler
        PUBWEAK RESERVED788_IRQHandler
        PUBWEAK RESERVED789_IRQHandler
        PUBWEAK RESERVED790_IRQHandler
        PUBWEAK RESERVED791_IRQHandler
        PUBWEAK RESERVED792_IRQHandler
        PUBWEAK RESERVED793_IRQHandler
        PUBWEAK RESERVED794_IRQHandler
        PUBWEAK RESERVED795_IRQHandler
        PUBWEAK RESERVED796_IRQHandler
        PUBWEAK RESERVED797_IRQHandler
        PUBWEAK RESERVED798_IRQHandler
        PUBWEAK RESERVED799_IRQHandler
        PUBWEAK RESERVED800_IRQHandler
        PUBWEAK RESERVED801_IRQHandler
        PUBWEAK RESERVED802_IRQHandler
        PUBWEAK RESERVED803_IRQHandler
        PUBWEAK RESERVED804_IRQHandler
        PUBWEAK RESERVED805_IRQHandler
        PUBWEAK RESERVED806_IRQHandler
        PUBWEAK RESERVED807_IRQHandler
        PUBWEAK RESERVED808_IRQHandler
        PUBWEAK RESERVED809_IRQHandler
        PUBWEAK RESERVED810_IRQHandler
        PUBWEAK RESERVED811_IRQHandler
        PUBWEAK RESERVED812_IRQHandler
        PUBWEAK RESERVED813_IRQHandler
        PUBWEAK RESERVED814_IRQHandler
        PUBWEAK RESERVED815_IRQHandler
        PUBWEAK RESERVED816_IRQHandler
        PUBWEAK RESERVED817_IRQHandler
        PUBWEAK RESERVED818_IRQHandler
        PUBWEAK RESERVED819_IRQHandler
        PUBWEAK RESERVED820_IRQHandler
        PUBWEAK RESERVED821_IRQHandler
        PUBWEAK RESERVED822_IRQHandler
        PUBWEAK RESERVED823_IRQHandler
        PUBWEAK RESERVED824_IRQHandler
        PUBWEAK RESERVED825_IRQHandler
        PUBWEAK RESERVED826_IRQHandler
        PUBWEAK RESERVED827_IRQHandler
        PUBWEAK RESERVED828_IRQHandler
        PUBWEAK RESERVED829_IRQHandler
        PUBWEAK RESERVED830_IRQHandler
        PUBWEAK RESERVED831_IRQHandler
        PUBWEAK RESERVED832_IRQHandler
        PUBWEAK RESERVED833_IRQHandler
        PUBWEAK CSI1_IRQHandler
        PUBWEAK CSI2_IRQHandler
        PUBWEAK ASRC1_IRQHandler
        PUBWEAK ASRC1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ASRC1_IRQHandler
        LDR     R0, =ASRC1_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED837_IRQHandler
        PUBWEAK RESERVED838_IRQHandler
        PUBWEAK RESERVED839_IRQHandler
        PUBWEAK RESERVED840_IRQHandler
        PUBWEAK RESERVED841_IRQHandler
        PUBWEAK RESERVED842_IRQHandler
        PUBWEAK RESERVED843_IRQHandler
        PUBWEAK RESERVED844_IRQHandler
        PUBWEAK RESERVED845_IRQHandler
        PUBWEAK RESERVED846_IRQHandler
        PUBWEAK RESERVED847_IRQHandler
        PUBWEAK RESERVED848_IRQHandler
        PUBWEAK RESERVED849_IRQHandler
        PUBWEAK RESERVED850_IRQHandler
        PUBWEAK RESERVED851_IRQHandler
        PUBWEAK RESERVED852_IRQHandler
        PUBWEAK RESERVED853_IRQHandler
        PUBWEAK RESERVED854_IRQHandler
        PUBWEAK RESERVED855_IRQHandler
        PUBWEAK RESERVED856_IRQHandler
        PUBWEAK RESERVED857_IRQHandler
        PUBWEAK RESERVED858_IRQHandler
        PUBWEAK RESERVED859_IRQHandler
        PUBWEAK RESERVED860_IRQHandler
        PUBWEAK RESERVED861_IRQHandler
        PUBWEAK RESERVED862_IRQHandler
        PUBWEAK RESERVED863_IRQHandler
        PUBWEAK RESERVED864_IRQHandler
        PUBWEAK RESERVED865_IRQHandler
        PUBWEAK RESERVED866_IRQHandler
        PUBWEAK RESERVED867_IRQHandler
        PUBWEAK RESERVED868_IRQHandler
        PUBWEAK RESERVED869_IRQHandler
        PUBWEAK RESERVED870_IRQHandler
        PUBWEAK RESERVED871_IRQHandler
        PUBWEAK RESERVED872_IRQHandler
        PUBWEAK RESERVED873_IRQHandler
        PUBWEAK RESERVED874_IRQHandler
        PUBWEAK RESERVED875_IRQHandler
        PUBWEAK RESERVED876_IRQHandler
        PUBWEAK RESERVED877_IRQHandler
        PUBWEAK RESERVED878_IRQHandler
        PUBWEAK RESERVED879_IRQHandler
        PUBWEAK RESERVED880_IRQHandler
        PUBWEAK RESERVED881_IRQHandler
        PUBWEAK RESERVED882_IRQHandler
        PUBWEAK RESERVED883_IRQHandler
        PUBWEAK RESERVED884_IRQHandler
        PUBWEAK RESERVED885_IRQHandler
        PUBWEAK RESERVED886_IRQHandler
        PUBWEAK RESERVED887_IRQHandler
        PUBWEAK RESERVED888_IRQHandler
        PUBWEAK RESERVED889_IRQHandler
        PUBWEAK RESERVED890_IRQHandler
        PUBWEAK RESERVED891_IRQHandler
        PUBWEAK ASRC2_IRQHandler
        PUBWEAK ASRC2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
ASRC2_IRQHandler
        LDR     R0, =ASRC2_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED893_IRQHandler
        PUBWEAK RESERVED894_IRQHandler
        PUBWEAK RESERVED895_IRQHandler
        PUBWEAK RESERVED896_IRQHandler
        PUBWEAK RESERVED897_IRQHandler
        PUBWEAK RESERVED898_IRQHandler
        PUBWEAK NOC_VPU_IRQHandler
        PUBWEAK NOC_DISPLAY_IRQHandler
        PUBWEAK NOC_CAMERA_IRQHandler
        PUBWEAK NOC_HSIO_IRQHandler
        PUBWEAK NOC_WAKEUP_IRQHandler
        PUBWEAK NOC_CENTRAL_IRQHandler
        PUBWEAK ERM_DISPLAY_IRQHandler
        PUBWEAK RESERVED906_IRQHandler
        PUBWEAK SAI6_IRQHandler
        PUBWEAK SAI6_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
SAI6_IRQHandler
        LDR     R0, =SAI6_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED908_IRQHandler
        PUBWEAK RESERVED909_IRQHandler
        PUBWEAK RESERVED910_IRQHandler
        PUBWEAK RESERVED911_IRQHandler
        PUBWEAK RESERVED912_IRQHandler
        PUBWEAK RESERVED913_IRQHandler
        PUBWEAK RESERVED914_IRQHandler
        PUBWEAK RESERVED915_IRQHandler
        PUBWEAK RESERVED916_IRQHandler
        PUBWEAK RESERVED917_IRQHandler
        PUBWEAK RESERVED918_IRQHandler
        PUBWEAK RESERVED919_IRQHandler
        PUBWEAK RESERVED920_IRQHandler
        PUBWEAK RESERVED921_IRQHandler
        PUBWEAK RESERVED922_IRQHandler
        PUBWEAK RESERVED923_IRQHandler
        PUBWEAK RESERVED924_IRQHandler
        PUBWEAK RESERVED925_IRQHandler
        PUBWEAK RESERVED926_IRQHandler
        PUBWEAK RESERVED927_IRQHandler
        PUBWEAK RESERVED928_IRQHandler
        PUBWEAK RESERVED929_IRQHandler
        PUBWEAK RESERVED930_IRQHandler
        PUBWEAK RESERVED931_IRQHandler
        PUBWEAK RESERVED932_IRQHandler
        PUBWEAK RESERVED933_IRQHandler
        PUBWEAK RESERVED934_IRQHandler
        PUBWEAK RESERVED935_IRQHandler
        PUBWEAK RESERVED936_IRQHandler
        PUBWEAK RESERVED937_IRQHandler
        PUBWEAK RESERVED938_IRQHandler
        PUBWEAK RESERVED939_IRQHandler
        PUBWEAK RESERVED940_IRQHandler
        PUBWEAK RESERVED941_IRQHandler
        PUBWEAK RESERVED942_IRQHandler
        PUBWEAK RESERVED943_IRQHandler
        PUBWEAK RESERVED944_IRQHandler
        PUBWEAK RESERVED945_IRQHandler
        PUBWEAK RESERVED946_IRQHandler
        PUBWEAK RESERVED947_IRQHandler
        PUBWEAK RESERVED948_IRQHandler
        PUBWEAK RESERVED949_IRQHandler
        PUBWEAK RESERVED950_IRQHandler
        PUBWEAK RESERVED951_IRQHandler
        PUBWEAK RESERVED952_IRQHandler
        PUBWEAK RESERVED953_IRQHandler
        PUBWEAK RESERVED954_IRQHandler
        PUBWEAK RESERVED955_IRQHandler
        PUBWEAK XSPI1_0_IRQHandler
        PUBWEAK XSPI1_0_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI1_0_IRQHandler
        LDR     R0, =XSPI1_0_DriverIRQHandler
        BX      R0

        PUBWEAK XSPI1_1_IRQHandler
        PUBWEAK XSPI1_1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI1_1_IRQHandler
        LDR     R0, =XSPI1_1_DriverIRQHandler
        BX      R0

        PUBWEAK XSPI1_2_IRQHandler
        PUBWEAK XSPI1_2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI1_2_IRQHandler
        LDR     R0, =XSPI1_2_DriverIRQHandler
        BX      R0

        PUBWEAK XSPI1_3_IRQHandler
        PUBWEAK XSPI1_3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI1_3_IRQHandler
        LDR     R0, =XSPI1_3_DriverIRQHandler
        BX      R0

        PUBWEAK XSPI1_4_IRQHandler
        PUBWEAK XSPI1_4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
XSPI1_4_IRQHandler
        LDR     R0, =XSPI1_4_DriverIRQHandler
        BX      R0

        PUBWEAK RESERVED961_IRQHandler
        PUBWEAK RESERVED962_IRQHandler
        PUBWEAK CCM_IRQHandler
        PUBWEAK MU_D1_IRQHandler
        PUBWEAK MU_D2_IRQHandler
        PUBWEAK GPT2_IRQHandler
        PUBWEAK GPT3_IRQHandler
        PUBWEAK GPT4_IRQHandler
        PUBWEAK GPT5_IRQHandler
        PUBWEAK LPSPI9_IRQHandler
        PUBWEAK LPSPI9_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
LPSPI9_IRQHandler
        LDR     R0, =LPSPI9_DriverIRQHandler
        BX      R0

        PUBWEAK DefaultISR
        SECTION .text:CODE:REORDER:NOROOT(1)
RESERVED16_IRQHandler
RESERVED17_IRQHandler
RESERVED18_IRQHandler
RESERVED19_IRQHandler
RESERVED20_IRQHandler
RESERVED21_IRQHandler
RESERVED22_IRQHandler
RESERVED23_IRQHandler
CAN1_DriverIRQHandler
CAN1_ERROR_DriverIRQHandler
GPIO1_0_IRQHandler
GPIO1_1_IRQHandler
I3C1_DriverIRQHandler
LPI2C1_DriverIRQHandler
LPI2C2_DriverIRQHandler
LPIT1_IRQHandler
LPSPI1_DriverIRQHandler
LPSPI2_DriverIRQHandler
LPTMR1_IRQHandler
LPUART1_DriverIRQHandler
LPUART2_DriverIRQHandler
RESERVED37_IRQHandler
RESERVED38_IRQHandler
RESERVED39_IRQHandler
RESERVED40_IRQHandler
RESERVED41_IRQHandler
RESERVED42_IRQHandler
RESERVED43_IRQHandler
RESERVED44_IRQHandler
TPM1_IRQHandler
TPM2_IRQHandler
WDOG1_IRQHandler
WDOG2_IRQHandler
TRDC_MGR_A_IRQHandler
SAI1_DriverIRQHandler
RESERVED51_IRQHandler
CM33_ECC_MCM_IRQHandler
RESERVED53_IRQHandler
CAN2_DriverIRQHandler
CAN2_ERROR_DriverIRQHandler
CAN3_DriverIRQHandler
CAN3_ERROR_DriverIRQHandler
WDOG6_IRQHandler
RESERVED59_IRQHandler
RESERVED60_IRQHandler
DISPLAY_MIX_IRQHandler
FLEXIO1_DriverIRQHandler
FLEXIO2_DriverIRQHandler
RESERVED64_IRQHandler
GPIO2_0_IRQHandler
GPIO2_1_IRQHandler
GPIO3_0_IRQHandler
GPIO3_1_IRQHandler
GPIO4_0_IRQHandler
GPIO4_1_IRQHandler
GPIO5_0_IRQHandler
GPIO5_1_IRQHandler
I3C2_DriverIRQHandler
LPI2C3_DriverIRQHandler
LPI2C4_DriverIRQHandler
LPIT2_IRQHandler
LPSPI3_DriverIRQHandler
LPSPI4_DriverIRQHandler
LPTMR2_IRQHandler
LPUART3_DriverIRQHandler
LPUART4_DriverIRQHandler
LPUART5_DriverIRQHandler
LPUART6_DriverIRQHandler
LPUART7_DriverIRQHandler
LPUART8_DriverIRQHandler
MTR_MSTR_IRQHandler
BBNSM_IRQHandler
SYS_CTR1_IRQHandler
TPM3_IRQHandler
TPM4_IRQHandler
TPM5_IRQHandler
TPM6_IRQHandler
WDOG3_IRQHandler
WDOG4_IRQHandler
WDOG5_IRQHandler
TMPSNS1_THR1_IRQHandler
TMPSNS1_THR2_IRQHandler
TMPSNS1_DRDY_IRQHandler
TMPSNS2_THR1_IRQHandler
TMPSNS2_THR2_IRQHandler
TMPSNS2_DRDY_IRQHandler
USDHC1_DriverIRQHandler
USDHC2_DriverIRQHandler
TRDC_MGR_W1_IRQHandler
TRDC_MGR_W2_IRQHandler
TRDC_MGR_N_IRQHandler
RESERVED107_IRQHandler
RESERVED108_IRQHandler
RESERVED109_IRQHandler
INTG_BOOTROM_DEBUG_CTRL_IRQHandler
DMA3_ERROR_DriverIRQHandler
DMA3_0_DriverIRQHandler
DMA3_1_DriverIRQHandler
DMA3_2_DriverIRQHandler
DMA3_3_DriverIRQHandler
DMA3_4_DriverIRQHandler
DMA3_5_DriverIRQHandler
DMA3_6_DriverIRQHandler
DMA3_7_DriverIRQHandler
DMA3_8_DriverIRQHandler
DMA3_9_DriverIRQHandler
DMA3_10_DriverIRQHandler
DMA3_11_DriverIRQHandler
DMA3_12_DriverIRQHandler
DMA3_13_DriverIRQHandler
DMA3_14_DriverIRQHandler
DMA3_15_DriverIRQHandler
DMA3_16_DriverIRQHandler
DMA3_17_DriverIRQHandler
DMA3_18_DriverIRQHandler
DMA3_19_DriverIRQHandler
DMA3_20_DriverIRQHandler
DMA3_21_DriverIRQHandler
DMA3_22_DriverIRQHandler
DMA3_23_DriverIRQHandler
DMA3_24_DriverIRQHandler
DMA3_25_DriverIRQHandler
DMA3_26_DriverIRQHandler
DMA3_27_DriverIRQHandler
DMA3_28_DriverIRQHandler
DMA3_29_DriverIRQHandler
DMA3_30_DriverIRQHandler
DMA5_2_ERROR_DriverIRQHandler
DMA5_2_0_1_DriverIRQHandler
DMA5_2_2_3_DriverIRQHandler
DMA5_2_4_5_DriverIRQHandler
DMA5_2_6_7_DriverIRQHandler
DMA5_2_8_9_DriverIRQHandler
DMA5_2_10_11_DriverIRQHandler
DMA5_2_12_13_DriverIRQHandler
DMA5_2_14_15_DriverIRQHandler
DMA5_2_16_17_DriverIRQHandler
DMA5_2_18_19_DriverIRQHandler
DMA5_2_20_21_DriverIRQHandler
DMA5_2_22_23_DriverIRQHandler
DMA5_2_24_25_DriverIRQHandler
DMA5_2_26_27_DriverIRQHandler
DMA5_2_28_29_DriverIRQHandler
DMA5_2_30_31_DriverIRQHandler
DMA5_2_32_33_DriverIRQHandler
DMA5_2_34_35_DriverIRQHandler
DMA5_2_36_37_DriverIRQHandler
DMA5_2_38_39_DriverIRQHandler
DMA5_2_40_41_DriverIRQHandler
DMA5_2_42_43_DriverIRQHandler
DMA5_2_44_45_DriverIRQHandler
DMA5_2_46_47_DriverIRQHandler
DMA5_2_48_49_DriverIRQHandler
DMA5_2_50_51_DriverIRQHandler
DMA5_2_52_53_DriverIRQHandler
DMA5_2_54_55_DriverIRQHandler
DMA5_2_56_57_DriverIRQHandler
DMA5_2_58_59_DriverIRQHandler
DMA5_2_60_61_DriverIRQHandler
DMA5_2_62_63_DriverIRQHandler
ELE_GROUP1_IRQHandler
ELE_GROUP2_IRQHandler
ELE_GROUP3_IRQHandler
DBG_TRACE_IRQHandler
JTAGC_IRQHandler
SYSREQRST_CM33_IRQHandler
LOCKUP_CM33_IRQHandler
SYSREQRST_CM7_IRQHandler
LOCKUP_CM7_IRQHandler
SAI2_DriverIRQHandler
SAI3_DriverIRQHandler
SAI4_DriverIRQHandler
SAI5_DriverIRQHandler
USB1_WAKEUP_IRQHandler
USB2_WAKEUP_IRQHandler
USB1_IRQHandler
USB2_IRQHandler
LPSPI5_DriverIRQHandler
LPSPI6_DriverIRQHandler
LPSPI7_DriverIRQHandler
LPSPI8_DriverIRQHandler
LPI2C5_DriverIRQHandler
LPI2C6_DriverIRQHandler
LPI2C7_DriverIRQHandler
LPI2C8_DriverIRQHandler
PDM_HWVAD_ERROR_IRQHandler
PDM_HWVAD_EVENT_IRQHandler
PDM_ERROR_IRQHandler
PDM_EVENT_DriverIRQHandler
RESERVED205_IRQHandler
RESERVED206_IRQHandler
USDHC3_DriverIRQHandler
RESERVED208_IRQHandler
RESERVED209_IRQHandler
RESERVED210_IRQHandler
RESERVED211_IRQHandler
RESERVED212_IRQHandler
RESERVED213_IRQHandler
RESERVED214_IRQHandler
ADC_ER_IRQHandler
ADC_WD_IRQHandler
ADC_EOC_IRQHandler
RESERVED218_IRQHandler
I3C1_RAW_IRQ_GLUE_DriverIRQHandler
I3C2_RAW_IRQ_GLUE_DriverIRQHandler
MU5_A_IRQHandler
MU6_A_IRQHandler
MU7_B_IRQHandler
MU8_B_IRQHandler
XSPI_SLV_DriverIRQHandler
FCCU0_IRQHandler
FCCU1_IRQHandler
FCCU2_IRQHandler
STCU_IRQHandler
DISP_IRQSTEER0_DriverIRQHandler
DISP_IRQSTEER1_DriverIRQHandler
DISP_IRQSTEER2_DriverIRQHandler
DISP_IRQSTEER3_DriverIRQHandler
DISP_IRQSTEER4_DriverIRQHandler
DISP_IRQSTEER7_DriverIRQHandler
MU_C1_IRQHandler
ISI_0_IRQHandler
ISP_IRQHandler
M7MIX_IRQHandler
IRQSTEER_0_DriverIRQHandler
IRQSTEER_1_DriverIRQHandler
IRQSTEER_2_DriverIRQHandler
IRQSTEER_3_DriverIRQHandler
IRQSTEER_4_DriverIRQHandler
IRQSTEER_5_DriverIRQHandler
IRQSTEER_6_DriverIRQHandler
IRQSTEER_7_DriverIRQHandler
IRQSTEER_8_DriverIRQHandler
IRQSTEER_9_DriverIRQHandler
IRQSTEER_10_DriverIRQHandler
IRQSTEER_11_DriverIRQHandler
MU1_A_IRQHandler
MU1_B_IRQHandler
MU2_A_IRQHandler
MU2_B_IRQHandler
MU3_A_IRQHandler
MU3_B_IRQHandler
MU4_A_IRQHandler
MU4_B_IRQHandler
MU5_B_IRQHandler
MU6_B_IRQHandler
MU7_A_IRQHandler
MU8_A_IRQHandler
MSGINTR1_IRQHandler
MSGINTR2_IRQHandler
V2X_APCH1_IRQHandler
V2X_HSM2_IRQHandler
RESERVED268_IRQHandler
RESERVED269_IRQHandler
RESERVED270_IRQHandler
RESERVED271_IRQHandler
RESERVED272_IRQHandler
RESERVED273_IRQHandler
RESERVED274_IRQHandler
RESERVED275_IRQHandler
RESERVED276_IRQHandler
RESERVED277_IRQHandler
RESERVED278_IRQHandler
RESERVED279_IRQHandler
RESERVED280_IRQHandler
RESERVED281_IRQHandler
RESERVED282_IRQHandler
RESERVED283_IRQHandler
RESERVED284_IRQHandler
RESERVED285_IRQHandler
RESERVED286_IRQHandler
RESERVED287_IRQHandler
RESERVED288_IRQHandler
RESERVED289_IRQHandler
RESERVED290_IRQHandler
RESERVED291_IRQHandler
RESERVED292_IRQHandler
RESERVED293_IRQHandler
RESERVED294_IRQHandler
RESERVED295_IRQHandler
RESERVED296_IRQHandler
RESERVED297_IRQHandler
RESERVED298_IRQHandler
RESERVED299_IRQHandler
RESERVED300_IRQHandler
RESERVED301_IRQHandler
RESERVED302_IRQHandler
RESERVED303_IRQHandler
RESERVED304_IRQHandler
RESERVED305_IRQHandler
RESERVED306_IRQHandler
RESERVED307_IRQHandler
RESERVED308_IRQHandler
RESERVED309_IRQHandler
RESERVED310_IRQHandler
RESERVED311_IRQHandler
RESERVED312_IRQHandler
RESERVED313_IRQHandler
RESERVED314_IRQHandler
RESERVED315_IRQHandler
TRDC_MGR_C_IRQHandler
TRDC_MGR_D_IRQHandler
TRDC_MGR_E_IRQHandler
TRDC_MGR_G_IRQHandler
TRDC_MGR_H_IRQHandler
TRDC_MGR_V_IRQHandler
ERM_A_IRQHandler
RESERVED323_IRQHandler
ERM_W_IRQHandler
ERM_ML_IRQHandler
DMA5_3_ERROR_DriverIRQHandler
OCRAM_C_IRQHandler
RESERVED328_IRQHandler
RESERVED329_IRQHandler
RESERVED330_IRQHandler
RESERVED331_IRQHandler
RESERVED332_IRQHandler
RESERVED333_IRQHandler
RESERVED334_IRQHandler
RESERVED335_IRQHandler
RESERVED336_IRQHandler
RESERVED337_IRQHandler
RESERVED338_IRQHandler
RESERVED339_IRQHandler
RESERVED340_IRQHandler
RESERVED341_IRQHandler
RESERVED342_IRQHandler
RESERVED343_IRQHandler
RESERVED344_IRQHandler
RESERVED345_IRQHandler
RESERVED346_IRQHandler
RESERVED347_IRQHandler
RESERVED348_IRQHandler
RESERVED349_IRQHandler
RESERVED350_IRQHandler
RESERVED351_IRQHandler
RESERVED352_IRQHandler
RESERVED353_IRQHandler
RESERVED354_IRQHandler
RESERVED355_IRQHandler
RESERVED356_IRQHandler
RESERVED357_IRQHandler
RESERVED358_IRQHandler
RESERVED359_IRQHandler
RESERVED360_IRQHandler
RESERVED361_IRQHandler
RESERVED362_IRQHandler
RESERVED363_IRQHandler
RESERVED364_IRQHandler
RESERVED365_IRQHandler
RESERVED366_IRQHandler
RESERVED367_IRQHandler
RESERVED368_IRQHandler
RESERVED369_IRQHandler
RESERVED370_IRQHandler
RESERVED371_IRQHandler
RESERVED372_IRQHandler
RESERVED373_IRQHandler
RESERVED374_IRQHandler
RESERVED375_IRQHandler
RESERVED376_IRQHandler
RESERVED377_IRQHandler
RESERVED378_IRQHandler
RESERVED379_IRQHandler
DMA5_3_0_1_DriverIRQHandler
DMA5_3_2_3_DriverIRQHandler
DMA5_3_4_5_DriverIRQHandler
DMA5_3_6_7_DriverIRQHandler
DMA5_3_8_9_DriverIRQHandler
DMA5_3_10_11_DriverIRQHandler
DMA5_3_12_13_DriverIRQHandler
DMA5_3_14_15_DriverIRQHandler
DMA5_3_16_17_DriverIRQHandler
DMA5_3_18_19_DriverIRQHandler
DMA5_3_20_21_DriverIRQHandler
DMA5_3_22_23_DriverIRQHandler
DMA5_3_24_25_DriverIRQHandler
DMA5_3_26_27_DriverIRQHandler
DMA5_3_28_29_DriverIRQHandler
DMA5_3_30_31_DriverIRQHandler
RESERVED396_IRQHandler
RESERVED397_IRQHandler
RESERVED398_IRQHandler
RESERVED399_IRQHandler
RESERVED400_IRQHandler
RESERVED401_IRQHandler
RESERVED402_IRQHandler
RESERVED403_IRQHandler
RESERVED404_IRQHandler
RESERVED405_IRQHandler
RESERVED406_IRQHandler
RESERVED407_IRQHandler
RESERVED408_IRQHandler
RESERVED409_IRQHandler
RESERVED410_IRQHandler
RESERVED411_IRQHandler
RESERVED412_IRQHandler
RESERVED413_IRQHandler
RESERVED414_IRQHandler
RESERVED415_IRQHandler
RESERVED416_IRQHandler
RESERVED417_IRQHandler
RESERVED418_IRQHandler
RESERVED419_IRQHandler
RESERVED420_IRQHandler
RESERVED421_IRQHandler
RESERVED422_IRQHandler
RESERVED423_IRQHandler
RESERVED424_IRQHandler
RESERVED425_IRQHandler
RESERVED426_IRQHandler
RESERVED427_IRQHandler
RESERVED428_IRQHandler
RESERVED429_IRQHandler
RESERVED430_IRQHandler
RESERVED431_IRQHandler
RESERVED432_IRQHandler
RESERVED433_IRQHandler
RESERVED434_IRQHandler
RESERVED435_IRQHandler
RESERVED436_IRQHandler
RESERVED437_IRQHandler
RESERVED438_IRQHandler
RESERVED439_IRQHandler
RESERVED440_IRQHandler
RESERVED441_IRQHandler
RESERVED442_IRQHandler
RESERVED443_IRQHandler
DMA5_3_32_33_DriverIRQHandler
DMA5_3_34_35_DriverIRQHandler
DMA5_3_36_37_DriverIRQHandler
DMA5_3_38_39_DriverIRQHandler
DMA5_3_40_41_DriverIRQHandler
DMA5_3_42_43_DriverIRQHandler
DMA5_3_44_45_DriverIRQHandler
DMA5_3_46_47_DriverIRQHandler
DMA5_3_48_49_DriverIRQHandler
DMA5_3_50_51_DriverIRQHandler
DMA5_3_52_53_DriverIRQHandler
DMA5_3_54_55_DriverIRQHandler
DMA5_3_56_57_DriverIRQHandler
DMA5_3_58_59_DriverIRQHandler
DMA5_3_60_61_DriverIRQHandler
DMA5_3_62_63_DriverIRQHandler
RESERVED460_IRQHandler
RESERVED461_IRQHandler
RESERVED462_IRQHandler
RESERVED463_IRQHandler
RESERVED464_IRQHandler
RESERVED465_IRQHandler
RESERVED466_IRQHandler
RESERVED467_IRQHandler
RESERVED468_IRQHandler
RESERVED469_IRQHandler
RESERVED470_IRQHandler
RESERVED471_IRQHandler
RESERVED472_IRQHandler
RESERVED473_IRQHandler
RESERVED474_IRQHandler
RESERVED475_IRQHandler
RESERVED476_IRQHandler
RESERVED477_IRQHandler
RESERVED478_IRQHandler
RESERVED479_IRQHandler
RESERVED480_IRQHandler
RESERVED481_IRQHandler
RESERVED482_IRQHandler
RESERVED483_IRQHandler
RESERVED484_IRQHandler
RESERVED485_IRQHandler
RESERVED486_IRQHandler
RESERVED487_IRQHandler
RESERVED488_IRQHandler
RESERVED489_IRQHandler
RESERVED490_IRQHandler
RESERVED491_IRQHandler
RESERVED492_IRQHandler
RESERVED493_IRQHandler
RESERVED494_IRQHandler
RESERVED495_IRQHandler
RESERVED496_IRQHandler
RESERVED497_IRQHandler
RESERVED498_IRQHandler
RESERVED499_IRQHandler
RESERVED500_IRQHandler
RESERVED501_IRQHandler
RESERVED502_IRQHandler
RESERVED503_IRQHandler
RESERVED504_IRQHandler
RESERVED505_IRQHandler
RESERVED506_IRQHandler
RESERVED507_IRQHandler
RESERVED508_IRQHandler
RESERVED509_IRQHandler
RESERVED510_IRQHandler
RESERVED511_IRQHandler
RESERVED512_IRQHandler
RESERVED513_IRQHandler
RESERVED514_IRQHandler
RESERVED515_IRQHandler
RESERVED516_IRQHandler
RESERVED517_IRQHandler
RESERVED518_IRQHandler
RESERVED519_IRQHandler
RESERVED520_IRQHandler
RESERVED521_IRQHandler
RESERVED522_IRQHandler
RESERVED523_IRQHandler
RESERVED524_IRQHandler
RESERVED525_IRQHandler
RESERVED526_IRQHandler
RESERVED527_IRQHandler
RESERVED528_IRQHandler
RESERVED529_IRQHandler
RESERVED530_IRQHandler
RESERVED531_IRQHandler
RESERVED532_IRQHandler
RESERVED533_IRQHandler
RESERVED534_IRQHandler
RESERVED535_IRQHandler
RESERVED536_IRQHandler
RESERVED537_IRQHandler
RESERVED538_IRQHandler
RESERVED539_IRQHandler
RESERVED540_IRQHandler
RESERVED541_IRQHandler
RESERVED542_IRQHandler
RESERVED543_IRQHandler
RESERVED544_IRQHandler
RESERVED545_IRQHandler
RESERVED546_IRQHandler
RESERVED547_IRQHandler
RESERVED548_IRQHandler
RESERVED549_IRQHandler
RESERVED550_IRQHandler
RESERVED551_IRQHandler
RESERVED552_IRQHandler
RESERVED553_IRQHandler
RESERVED554_IRQHandler
RESERVED555_IRQHandler
RESERVED556_IRQHandler
RESERVED557_IRQHandler
RESERVED558_IRQHandler
RESERVED559_IRQHandler
RESERVED560_IRQHandler
RESERVED561_IRQHandler
RESERVED562_IRQHandler
RESERVED563_IRQHandler
RESERVED564_IRQHandler
RESERVED565_IRQHandler
RESERVED566_IRQHandler
RESERVED567_IRQHandler
RESERVED568_IRQHandler
RESERVED569_IRQHandler
RESERVED570_IRQHandler
RESERVED571_IRQHandler
RESERVED572_IRQHandler
RESERVED573_IRQHandler
RESERVED574_IRQHandler
RESERVED575_IRQHandler
RESERVED576_IRQHandler
RESERVED577_IRQHandler
RESERVED578_IRQHandler
RESERVED579_IRQHandler
RESERVED580_IRQHandler
RESERVED581_IRQHandler
RESERVED582_IRQHandler
RESERVED583_IRQHandler
RESERVED584_IRQHandler
RESERVED585_IRQHandler
RESERVED586_IRQHandler
RESERVED587_IRQHandler
RESERVED588_IRQHandler
RESERVED589_IRQHandler
RESERVED590_IRQHandler
RESERVED591_IRQHandler
RESERVED592_IRQHandler
RESERVED593_IRQHandler
RESERVED594_IRQHandler
RESERVED595_IRQHandler
RESERVED596_IRQHandler
RESERVED597_IRQHandler
RESERVED598_IRQHandler
RESERVED599_IRQHandler
RESERVED600_IRQHandler
RESERVED601_IRQHandler
RESERVED602_IRQHandler
RESERVED603_IRQHandler
RESERVED604_IRQHandler
RESERVED605_IRQHandler
RESERVED606_IRQHandler
RESERVED607_IRQHandler
RESERVED608_IRQHandler
RESERVED609_IRQHandler
RESERVED610_IRQHandler
RESERVED611_IRQHandler
RESERVED612_IRQHandler
RESERVED613_IRQHandler
RESERVED614_IRQHandler
RESERVED615_IRQHandler
RESERVED616_IRQHandler
RESERVED617_IRQHandler
RESERVED618_IRQHandler
RESERVED619_IRQHandler
RESERVED620_IRQHandler
RESERVED621_IRQHandler
RESERVED622_IRQHandler
RESERVED623_IRQHandler
RESERVED624_IRQHandler
RESERVED625_IRQHandler
RESERVED626_IRQHandler
RESERVED627_IRQHandler
RESERVED628_IRQHandler
RESERVED629_IRQHandler
RESERVED630_IRQHandler
RESERVED631_IRQHandler
RESERVED632_IRQHandler
RESERVED633_IRQHandler
RESERVED634_IRQHandler
RESERVED635_IRQHandler
RESERVED636_IRQHandler
RESERVED637_IRQHandler
RESERVED638_IRQHandler
RESERVED639_IRQHandler
RESERVED640_IRQHandler
RESERVED641_IRQHandler
RESERVED642_IRQHandler
RESERVED643_IRQHandler
RESERVED644_IRQHandler
RESERVED645_IRQHandler
RESERVED646_IRQHandler
RESERVED647_IRQHandler
RESERVED648_IRQHandler
RESERVED649_IRQHandler
RESERVED650_IRQHandler
LP_HDSK_GSKT_IRQHandler
RESERVED652_IRQHandler
RESERVED653_IRQHandler
RESERVED654_IRQHandler
RESERVED655_IRQHandler
RESERVED656_IRQHandler
RESERVED657_IRQHandler
RESERVED658_IRQHandler
RESERVED659_IRQHandler
RESERVED660_IRQHandler
RESERVED661_IRQHandler
RESERVED662_IRQHandler
RESERVED663_IRQHandler
RESERVED664_IRQHandler
RESERVED665_IRQHandler
RESERVED666_IRQHandler
RESERVED667_IRQHandler
RESERVED668_IRQHandler
RESERVED669_IRQHandler
RESERVED670_IRQHandler
RESERVED671_IRQHandler
RESERVED672_IRQHandler
RESERVED673_IRQHandler
RESERVED674_IRQHandler
RESERVED675_IRQHandler
RESERVED676_IRQHandler
RESERVED677_IRQHandler
RESERVED678_IRQHandler
RESERVED679_IRQHandler
RESERVED680_IRQHandler
RESERVED681_IRQHandler
RESERVED682_IRQHandler
RESERVED683_IRQHandler
RESERVED684_IRQHandler
RESERVED685_IRQHandler
RESERVED686_IRQHandler
RESERVED687_IRQHandler
RESERVED688_IRQHandler
RESERVED689_IRQHandler
RESERVED690_IRQHandler
RESERVED691_IRQHandler
RESERVED692_IRQHandler
RESERVED693_IRQHandler
RESERVED694_IRQHandler
RESERVED695_IRQHandler
RESERVED696_IRQHandler
RESERVED697_IRQHandler
RESERVED698_IRQHandler
RESERVED699_IRQHandler
MU_C2_IRQHandler
MU_C3_IRQHandler
MU_C4_IRQHandler
MU_C5_IRQHandler
MU_C6_IRQHandler
MU_C7_IRQHandler
MU_C8_IRQHandler
MU_C9_IRQHandler
ISI_1_IRQHandler
ISI_2_IRQHandler
ISI_3_IRQHandler
ISI_4_IRQHandler
ISI_5_IRQHandler
ISI_6_IRQHandler
ISI_7_IRQHandler
DMA5_4_ERROR_DriverIRQHandler
RESERVED716_IRQHandler
RESERVED717_IRQHandler
RESERVED718_IRQHandler
RESERVED719_IRQHandler
RESERVED720_IRQHandler
RESERVED721_IRQHandler
RESERVED722_IRQHandler
RESERVED723_IRQHandler
RESERVED724_IRQHandler
RESERVED725_IRQHandler
RESERVED726_IRQHandler
RESERVED727_IRQHandler
RESERVED728_IRQHandler
RESERVED729_IRQHandler
RESERVED730_IRQHandler
RESERVED731_IRQHandler
RESERVED732_IRQHandler
RESERVED733_IRQHandler
RESERVED734_IRQHandler
RESERVED735_IRQHandler
RESERVED736_IRQHandler
RESERVED737_IRQHandler
RESERVED738_IRQHandler
RESERVED739_IRQHandler
RESERVED740_IRQHandler
RESERVED741_IRQHandler
RESERVED742_IRQHandler
RESERVED743_IRQHandler
RESERVED744_IRQHandler
RESERVED745_IRQHandler
RESERVED746_IRQHandler
RESERVED747_IRQHandler
RESERVED748_IRQHandler
RESERVED749_IRQHandler
RESERVED750_IRQHandler
RESERVED751_IRQHandler
RESERVED752_IRQHandler
RESERVED753_IRQHandler
RESERVED754_IRQHandler
RESERVED755_IRQHandler
RESERVED756_IRQHandler
RESERVED757_IRQHandler
RESERVED758_IRQHandler
RESERVED759_IRQHandler
RESERVED760_IRQHandler
RESERVED761_IRQHandler
RESERVED762_IRQHandler
RESERVED763_IRQHandler
DMA5_4_0_1_DriverIRQHandler
DMA5_4_2_3_DriverIRQHandler
DMA5_4_4_5_DriverIRQHandler
DMA5_4_6_7_DriverIRQHandler
DMA5_4_8_9_DriverIRQHandler
DMA5_4_10_11_DriverIRQHandler
DMA5_4_12_13_DriverIRQHandler
DMA5_4_14_15_DriverIRQHandler
DMA5_4_16_17_DriverIRQHandler
DMA5_4_18_19_DriverIRQHandler
DMA5_4_20_21_DriverIRQHandler
DMA5_4_22_23_DriverIRQHandler
DMA5_4_24_25_DriverIRQHandler
DMA5_4_26_27_DriverIRQHandler
DMA5_4_28_29_DriverIRQHandler
DMA5_4_30_31_DriverIRQHandler
RESERVED780_IRQHandler
RESERVED781_IRQHandler
RESERVED782_IRQHandler
RESERVED783_IRQHandler
RESERVED784_IRQHandler
RESERVED785_IRQHandler
RESERVED786_IRQHandler
RESERVED787_IRQHandler
RESERVED788_IRQHandler
RESERVED789_IRQHandler
RESERVED790_IRQHandler
RESERVED791_IRQHandler
RESERVED792_IRQHandler
RESERVED793_IRQHandler
RESERVED794_IRQHandler
RESERVED795_IRQHandler
RESERVED796_IRQHandler
RESERVED797_IRQHandler
RESERVED798_IRQHandler
RESERVED799_IRQHandler
RESERVED800_IRQHandler
RESERVED801_IRQHandler
RESERVED802_IRQHandler
RESERVED803_IRQHandler
RESERVED804_IRQHandler
RESERVED805_IRQHandler
RESERVED806_IRQHandler
RESERVED807_IRQHandler
RESERVED808_IRQHandler
RESERVED809_IRQHandler
RESERVED810_IRQHandler
RESERVED811_IRQHandler
RESERVED812_IRQHandler
RESERVED813_IRQHandler
RESERVED814_IRQHandler
RESERVED815_IRQHandler
RESERVED816_IRQHandler
RESERVED817_IRQHandler
RESERVED818_IRQHandler
RESERVED819_IRQHandler
RESERVED820_IRQHandler
RESERVED821_IRQHandler
RESERVED822_IRQHandler
RESERVED823_IRQHandler
RESERVED824_IRQHandler
RESERVED825_IRQHandler
RESERVED826_IRQHandler
RESERVED827_IRQHandler
RESERVED828_IRQHandler
RESERVED829_IRQHandler
RESERVED830_IRQHandler
RESERVED831_IRQHandler
RESERVED832_IRQHandler
RESERVED833_IRQHandler
CSI1_IRQHandler
CSI2_IRQHandler
ASRC1_DriverIRQHandler
RESERVED837_IRQHandler
RESERVED838_IRQHandler
RESERVED839_IRQHandler
RESERVED840_IRQHandler
RESERVED841_IRQHandler
RESERVED842_IRQHandler
RESERVED843_IRQHandler
RESERVED844_IRQHandler
RESERVED845_IRQHandler
RESERVED846_IRQHandler
RESERVED847_IRQHandler
RESERVED848_IRQHandler
RESERVED849_IRQHandler
RESERVED850_IRQHandler
RESERVED851_IRQHandler
RESERVED852_IRQHandler
RESERVED853_IRQHandler
RESERVED854_IRQHandler
RESERVED855_IRQHandler
RESERVED856_IRQHandler
RESERVED857_IRQHandler
RESERVED858_IRQHandler
RESERVED859_IRQHandler
RESERVED860_IRQHandler
RESERVED861_IRQHandler
RESERVED862_IRQHandler
RESERVED863_IRQHandler
RESERVED864_IRQHandler
RESERVED865_IRQHandler
RESERVED866_IRQHandler
RESERVED867_IRQHandler
RESERVED868_IRQHandler
RESERVED869_IRQHandler
RESERVED870_IRQHandler
RESERVED871_IRQHandler
RESERVED872_IRQHandler
RESERVED873_IRQHandler
RESERVED874_IRQHandler
RESERVED875_IRQHandler
RESERVED876_IRQHandler
RESERVED877_IRQHandler
RESERVED878_IRQHandler
RESERVED879_IRQHandler
RESERVED880_IRQHandler
RESERVED881_IRQHandler
RESERVED882_IRQHandler
RESERVED883_IRQHandler
RESERVED884_IRQHandler
RESERVED885_IRQHandler
RESERVED886_IRQHandler
RESERVED887_IRQHandler
RESERVED888_IRQHandler
RESERVED889_IRQHandler
RESERVED890_IRQHandler
RESERVED891_IRQHandler
ASRC2_DriverIRQHandler
RESERVED893_IRQHandler
RESERVED894_IRQHandler
RESERVED895_IRQHandler
RESERVED896_IRQHandler
RESERVED897_IRQHandler
RESERVED898_IRQHandler
NOC_VPU_IRQHandler
NOC_DISPLAY_IRQHandler
NOC_CAMERA_IRQHandler
NOC_HSIO_IRQHandler
NOC_WAKEUP_IRQHandler
NOC_CENTRAL_IRQHandler
ERM_DISPLAY_IRQHandler
RESERVED906_IRQHandler
SAI6_DriverIRQHandler
RESERVED908_IRQHandler
RESERVED909_IRQHandler
RESERVED910_IRQHandler
RESERVED911_IRQHandler
RESERVED912_IRQHandler
RESERVED913_IRQHandler
RESERVED914_IRQHandler
RESERVED915_IRQHandler
RESERVED916_IRQHandler
RESERVED917_IRQHandler
RESERVED918_IRQHandler
RESERVED919_IRQHandler
RESERVED920_IRQHandler
RESERVED921_IRQHandler
RESERVED922_IRQHandler
RESERVED923_IRQHandler
RESERVED924_IRQHandler
RESERVED925_IRQHandler
RESERVED926_IRQHandler
RESERVED927_IRQHandler
RESERVED928_IRQHandler
RESERVED929_IRQHandler
RESERVED930_IRQHandler
RESERVED931_IRQHandler
RESERVED932_IRQHandler
RESERVED933_IRQHandler
RESERVED934_IRQHandler
RESERVED935_IRQHandler
RESERVED936_IRQHandler
RESERVED937_IRQHandler
RESERVED938_IRQHandler
RESERVED939_IRQHandler
RESERVED940_IRQHandler
RESERVED941_IRQHandler
RESERVED942_IRQHandler
RESERVED943_IRQHandler
RESERVED944_IRQHandler
RESERVED945_IRQHandler
RESERVED946_IRQHandler
RESERVED947_IRQHandler
RESERVED948_IRQHandler
RESERVED949_IRQHandler
RESERVED950_IRQHandler
RESERVED951_IRQHandler
RESERVED952_IRQHandler
RESERVED953_IRQHandler
RESERVED954_IRQHandler
RESERVED955_IRQHandler
XSPI1_0_DriverIRQHandler
XSPI1_1_DriverIRQHandler
XSPI1_2_DriverIRQHandler
XSPI1_3_DriverIRQHandler
XSPI1_4_DriverIRQHandler
RESERVED961_IRQHandler
RESERVED962_IRQHandler
CCM_IRQHandler
MU_D1_IRQHandler
MU_D2_IRQHandler
GPT2_IRQHandler
GPT3_IRQHandler
GPT4_IRQHandler
GPT5_IRQHandler
LPSPI9_DriverIRQHandler
DefaultISR
        B DefaultISR

        END
