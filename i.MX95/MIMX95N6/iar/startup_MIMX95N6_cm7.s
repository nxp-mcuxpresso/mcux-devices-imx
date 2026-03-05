; -------------------------------------------------------------------------
;  @file:    startup_MIMX95N6_cm7.s
;  @purpose: CMSIS Cortex-M7 Core Device Startup File
;            MIMX95N6_cm7
;  @version: 4.0
;  @date:    2026-2-28
;  @build:   b260305
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
        DCD     Reserved16_IRQHandler                         ;Reserved interrupt
        DCD     Reserved17_IRQHandler                         ;DAP interrupt
        DCD     Reserved18_IRQHandler                         ;CTI trigger outputs from CM7 platform
        DCD     Reserved19_IRQHandler                         ;CTI trigger outputs from CM33 platform
        DCD     Reserved20_IRQHandler                         ;CTI trigger outputs from CA55 platform
        DCD     Reserved21_IRQHandler                         ;Performance Unit Interrupts from CA55 platform
        DCD     Reserved22_IRQHandler                         ;ECC error from CA55 platform cache
        DCD     Reserved23_IRQHandler                         ;1-bit or 2-bit ECC or Parity error from CA55 platform cache
        DCD     CAN1_IRQHandler                               ;CAN1 interrupt
        DCD     CAN1_ERROR_IRQHandler                         ;CAN1 error interrupt
        DCD     GPIO1_0_IRQHandler                            ;General Purpose Input/Output 1 interrupt 0
        DCD     GPIO1_1_IRQHandler                            ;General Purpose Input/Output 1 interrupt 1
        DCD     I3C1_IRQHandler                               ;Improved Inter-Integrated Circuit 1 interrupt
        DCD     LPI2C1_IRQHandler                             ;Low Power Inter-Integrated Circuit module 1
        DCD     LPI2C2_IRQHandler                             ;Low Power Inter-Integrated Circuit module 2
        DCD     LPIT1_IRQHandler                              ;Low Power Periodic Interrupt Timer 1
        DCD     LPSPI1_IRQHandler                             ;Low Power Serial Peripheral Interface 1
        DCD     LPSPI2_IRQHandler                             ;Low Power Serial Peripheral Interface 2
        DCD     LPTMR1_IRQHandler                             ;Low Power Timer 1
        DCD     LPUART1_IRQHandler                            ;Low Power UART 1
        DCD     LPUART2_IRQHandler                            ;Low Power UART 2
        DCD     Reserved37_IRQHandler                         ;AONMIX Sentinel MU0 SideA interrupt
        DCD     Reserved38_IRQHandler                         ;AONMIX Sentinel MU1 SideA interrupt
        DCD     Reserved39_IRQHandler                         ;AONMIX Sentinel MU2 SideA interrupt
        DCD     Reserved40_IRQHandler                         ;AONMIX Sentinel MU3 SideA interrupt
        DCD     Reserved41_IRQHandler                         ;AONMIX Sentinel MU4 SideA interrupt
        DCD     Reserved42_IRQHandler                         ;AONMIX Sentinel MU5 SideA interrupt
        DCD     V2X_FH_APCH0_IRQHandler                       ;V2X-FH MU APCH0 (APP0) interrupt
        DCD     V2X_FH_APHSM1_IRQHandler                      ;V2X-FH MU APHSM1 (HSM1) interrupt
        DCD     TPM1_IRQHandler                               ;Timer PWM module 1
        DCD     TPM2_IRQHandler                               ;Timer PWM module 2
        DCD     WDOG1_IRQHandler                              ;Watchdog 1 Interrupt
        DCD     WDOG2_IRQHandler                              ;Watchdog 2 Interrupt
        DCD     TRDC_MGR_A_IRQHandler                         ;AONMIX TRDC transfer error interrupt
        DCD     SAI1_IRQHandler                               ;Serial Audio Interface 1
        DCD     Reserved51_IRQHandler                         ;AONMIX M33 PS Error
        DCD     Reserved52_IRQHandler                         ;AONMIX M33 TCM Error interrupt
        DCD     Reserved53_IRQHandler                         ;M7MIX ECC Multi-bit error
        DCD     CAN2_IRQHandler                               ;CAN2 interrupt
        DCD     CAN2_ERROR_IRQHandler                         ;CAN2 error interrupt
        DCD     CAN3_IRQHandler                               ;CAN3 interrupt
        DCD     CAN3_ERROR_IRQHandler                         ;CAN3 error interrupt
        DCD     CAN4_IRQHandler                               ;CAN4 interrupt
        DCD     CAN4_ERROR_IRQHandler                         ;CAN4 error interrupt
        DCD     CAN5_IRQHandler                               ;CAN5 interrupt
        DCD     CAN5_ERROR_IRQHandler                         ;CAN5 error interrupt
        DCD     FLEXIO1_IRQHandler                            ;Flexible IO 1 interrupt
        DCD     FLEXIO2_IRQHandler                            ;Flexible IO 2 interrupt
        DCD     FlexSPI1_IRQHandler                           ;FlexSPI controller interface interrupt 1
        DCD     GPIO2_0_IRQHandler                            ;General Purpose Input/Output 2 interrupt 0
        DCD     GPIO2_1_IRQHandler                            ;General Purpose Input/Output 2 interrupt 1
        DCD     GPIO3_0_IRQHandler                            ;General Purpose Input/Output 3 interrupt 0
        DCD     GPIO3_1_IRQHandler                            ;General Purpose Input/Output 3 interrupt 1
        DCD     GPIO4_0_IRQHandler                            ;General Purpose Input/Output 4 interrupt 0
        DCD     GPIO4_1_IRQHandler                            ;General Purpose Input/Output 4 interrupt 1
        DCD     GPIO5_0_IRQHandler                            ;General Purpose Input/Output 5 interrupt 0
        DCD     GPIO5_1_IRQHandler                            ;General Purpose Input/Output 5 interrupt 1
        DCD     I3C2_IRQHandler                               ;Improved Inter-Integrated Circuit 2 interrupt
        DCD     LPI2C3_IRQHandler                             ;Low Power Inter-Integrated Circuit module 3
        DCD     LPI2C4_IRQHandler                             ;Low Power Inter-Integrated Circuit module 4
        DCD     LPIT2_IRQHandler                              ;Low Power Periodic Interrupt Timer 2
        DCD     LPSPI3_IRQHandler                             ;Low Power Serial Peripheral Interface 3
        DCD     LPSPI4_IRQHandler                             ;Low Power Serial Peripheral Interface 4
        DCD     LPTMR2_IRQHandler                             ;Low Power Timer 2
        DCD     LPUART3_IRQHandler                            ;Low Power UART 3
        DCD     LPUART4_IRQHandler                            ;Low Power UART 4
        DCD     LPUART5_IRQHandler                            ;Low Power UART 5
        DCD     LPUART6_IRQHandler                            ;Low Power UART 6
        DCD     LPUART7_IRQHandler                            ;Low Power UART 7
        DCD     LPUART8_IRQHandler                            ;Low Power UART 8
        DCD     Reserved86_IRQHandler                         ;MTR Master error interrupt
        DCD     Reserved87_IRQHandler                         ;BBNSM Non-Secure interrupt
        DCD     Reserved88_IRQHandler                         ;System Counter compare interrupt
        DCD     TPM3_IRQHandler                               ;Timer PWM module 3
        DCD     TPM4_IRQHandler                               ;Timer PWM module 4
        DCD     TPM5_IRQHandler                               ;Timer PWM module 5
        DCD     TPM6_IRQHandler                               ;Timer PWM module 6
        DCD     WDOG3_IRQHandler                              ;Watchdog 3 Interrupt
        DCD     WDOG4_IRQHandler                              ;Watchdog 4 Interrupt
        DCD     WDOG5_IRQHandler                              ;Watchdog 5 Interrupt
        DCD     TMPSNS1_THR1_IRQHandler                       ;ANAMIX TempSensor non-secure interrupt from Threshold 1
        DCD     TMPSNS1_THR2_IRQHandler                       ;ANAMIX TempSensor non-secure interrupt from Threshold 2
        DCD     TMPSNS1_DRDY_IRQHandler                       ;ANAMIX TempSensor non-secure data ready interrupt
        DCD     TMPSNS2_THR1_IRQHandler                       ;CORTEXAMIX TempSensor non-secure interrupt from Threshold 1
        DCD     TMPSNS2_THR2_IRQHandler                       ;CORTEXAMIX TempSensor non-secure interrupt from Threshold 2
        DCD     TMPSNS2_DRDY_IRQHandler                       ;CORTEXAMIX TempSensor non-secure data ready interrupt
        DCD     uSDHC1_IRQHandler                             ;ultra Secure Digital Host Controller interrupt 1
        DCD     uSDHC2_IRQHandler                             ;ultra Secure Digital Host Controller interrupt 2
        DCD     Reserved104_IRQHandler                        ;MEGAMIX TRDC transfer error interrupt
        DCD     Reserved105_IRQHandler                        ;NIC_WRAPPER TRDC transfer error interrupt
        DCD     Reserved106_IRQHandler                        ;NOCMIX TRDC transfer error interrupt
        DCD     Reserved107_IRQHandler                        ;DRAM controller Performance Monitor Interrupt
        DCD     Reserved108_IRQHandler                        ;DRAM controller Critical Interrupt
        DCD     Reserved109_IRQHandler                        ;DRAM Phy Critical Interrupt
        DCD     Reserved110_IRQHandler                        ;Reserved
        DCD     DMA3_ERROR_IRQHandler                         ;eDMA1 error interrupt
        DCD     DMA3_0_IRQHandler                             ;eDMA1 channel 0 interrupt
        DCD     DMA3_1_IRQHandler                             ;eDMA1 channel 1 interrupt
        DCD     DMA3_2_IRQHandler                             ;eDMA1 channel 2 interrupt
        DCD     DMA3_3_IRQHandler                             ;eDMA1 channel 3 interrupt
        DCD     DMA3_4_IRQHandler                             ;eDMA1 channel 4 interrupt
        DCD     DMA3_5_IRQHandler                             ;eDMA1 channel 5 interrupt
        DCD     DMA3_6_IRQHandler                             ;eDMA1 channel 6 interrupt
        DCD     DMA3_7_IRQHandler                             ;eDMA1 channel 7 interrupt
        DCD     DMA3_8_IRQHandler                             ;eDMA1 channel 8 interrupt
        DCD     DMA3_9_IRQHandler                             ;eDMA1 channel 9 interrupt
        DCD     DMA3_10_IRQHandler                            ;eDMA1 channel 10 interrupt
        DCD     DMA3_11_IRQHandler                            ;eDMA1 channel 11 interrupt
        DCD     DMA3_12_IRQHandler                            ;eDMA1 channel 12 interrupt
        DCD     DMA3_13_IRQHandler                            ;eDMA1 channel 13 interrupt
        DCD     DMA3_14_IRQHandler                            ;eDMA1 channel 14 interrupt
        DCD     DMA3_15_IRQHandler                            ;eDMA1 channel 15 interrupt
        DCD     DMA3_16_IRQHandler                            ;eDMA1 channel 16 interrupt
        DCD     DMA3_17_IRQHandler                            ;eDMA1 channel 17 interrupt
        DCD     DMA3_18_IRQHandler                            ;eDMA1 channel 18 interrupt
        DCD     DMA3_19_IRQHandler                            ;eDMA1 channel 19 interrupt
        DCD     DMA3_20_IRQHandler                            ;eDMA1 channel 20 interrupt
        DCD     DMA3_21_IRQHandler                            ;eDMA1 channel 21 interrupt
        DCD     DMA3_22_IRQHandler                            ;eDMA1 channel 22 interrupt
        DCD     DMA3_23_IRQHandler                            ;eDMA1 channel 23 interrupt
        DCD     DMA3_24_IRQHandler                            ;eDMA1 channel 24 interrupt
        DCD     DMA3_25_IRQHandler                            ;eDMA1 channel 25 interrupt
        DCD     DMA3_26_IRQHandler                            ;eDMA1 channel 26 interrupt
        DCD     DMA3_27_IRQHandler                            ;eDMA1 channel 27 interrupt
        DCD     DMA3_28_IRQHandler                            ;eDMA1 channel 28 interrupt
        DCD     DMA3_29_IRQHandler                            ;eDMA1 channel 29 interrupt
        DCD     DMA3_30_IRQHandler                            ;eDMA1 channel 30 interrupt
        DCD     DMA5_2_ERROR_IRQHandler                       ;eDMA2 error interrupt
        DCD     DMA5_2_0_1_IRQHandler                         ;eDMA2 channel 0/1 interrupt
        DCD     DMA5_2_2_3_IRQHandler                         ;eDMA2 channel 2/3 interrupt
        DCD     DMA5_2_4_5_IRQHandler                         ;eDMA2 channel 4/5 interrupt
        DCD     DMA5_2_6_7_IRQHandler                         ;eDMA2 channel 6/7 interrupt
        DCD     DMA5_2_8_9_IRQHandler                         ;eDMA2 channel 8/9 interrupt
        DCD     DMA5_2_10_11_IRQHandler                       ;eDMA2 channel 10/11 interrupt
        DCD     DMA5_2_12_13_IRQHandler                       ;eDMA2 channel 12/13 interrupt
        DCD     DMA5_2_14_15_IRQHandler                       ;eDMA2 channel 14/15 interrupt
        DCD     DMA5_2_16_17_IRQHandler                       ;eDMA2 channel 16/17 interrupt
        DCD     DMA5_2_18_19_IRQHandler                       ;eDMA2 channel 18/19 interrupt
        DCD     DMA5_2_20_21_IRQHandler                       ;eDMA2 channel 20/21 interrupt
        DCD     DMA5_2_22_23_IRQHandler                       ;eDMA2 channel 22/23 interrupt
        DCD     DMA5_2_24_25_IRQHandler                       ;eDMA2 channel 24/25 interrupt
        DCD     DMA5_2_26_27_IRQHandler                       ;eDMA2 channel 26/27 interrupt
        DCD     DMA5_2_28_29_IRQHandler                       ;eDMA2 channel 28/29 interrupt
        DCD     DMA5_2_30_31_IRQHandler                       ;eDMA2 channel 30/31 interrupt
        DCD     DMA5_2_32_33_IRQHandler                       ;eDMA2 channel 32/33 interrupt
        DCD     DMA5_2_34_35_IRQHandler                       ;eDMA2 channel 34/35 interrupt
        DCD     DMA5_2_36_37_IRQHandler                       ;eDMA2 channel 36/37 interrupt
        DCD     DMA5_2_38_39_IRQHandler                       ;eDMA2 channel 38/39 interrupt
        DCD     DMA5_2_40_41_IRQHandler                       ;eDMA2 channel 40/41 interrupt
        DCD     DMA5_2_42_43_IRQHandler                       ;eDMA2 channel 42/43 interrupt
        DCD     DMA5_2_44_45_IRQHandler                       ;eDMA2 channel 44/45 interrupt
        DCD     DMA5_2_46_47_IRQHandler                       ;eDMA2 channel 46/47 interrupt
        DCD     DMA5_2_48_49_IRQHandler                       ;eDMA2 channel 48/49 interrupt
        DCD     DMA5_2_50_51_IRQHandler                       ;eDMA2 channel 50/51 interrupt
        DCD     DMA5_2_52_53_IRQHandler                       ;eDMA2 channel 52/53 interrupt
        DCD     DMA5_2_54_55_IRQHandler                       ;eDMA2 channel 54/55 interrupt
        DCD     DMA5_2_56_57_IRQHandler                       ;eDMA2 channel 56/57 interrupt
        DCD     DMA5_2_58_59_IRQHandler                       ;eDMA2 channel 58/59 interrupt
        DCD     DMA5_2_60_61_IRQHandler                       ;eDMA2 channel 60/61 interrupt
        DCD     DMA5_2_62_63_IRQHandler                       ;eDMA2 channel 62/63 interrupt
        DCD     Reserved176_IRQHandler                        ;Sentinel Group 1 reset source if no s500 reference clock is detected. Output synchronized to 32khz clk.
        DCD     Reserved177_IRQHandler                        ;Sentinel Group 2 reset source s500 reference clock is not detected or too slow. Output synchronized to ref1_clk.
        DCD     Reserved178_IRQHandler                        ;Sentinel Group 2 reset source s500 reference clock is not detected or too slow. Output synchronized to ref1_clk.
        DCD     Reserved179_IRQHandler                        ;JTAGSW DAP MDM-AP SRC reset source
        DCD     Reserved180_IRQHandler                        ;JTAGC SRC reset source
        DCD     Reserved181_IRQHandler                        ;CM33 SYSREQRST SRC reset source
        DCD     Reserved182_IRQHandler                        ;CM33 LOCKUP SRC reset source
        DCD     Reserved183_IRQHandler                        ;CM7 SYSREQRST SRC reset source
        DCD     Reserved184_IRQHandler                        ;CM7 LOCKUP SRC reset source
        DCD     SAI2_IRQHandler                               ;Serial Audio Interface 2
        DCD     SAI3_IRQHandler                               ;Serial Audio Interface 3
        DCD     SAI4_IRQHandler                               ;Serial Audio Interface 4
        DCD     SAI5_IRQHandler                               ;Serial Audio Interface 5
        DCD     Reserved189_IRQHandler                        ;USB-1 Wake-up Interrupt
        DCD     Reserved190_IRQHandler                        ;USB-2 Wake-up Interrupt
        DCD     USB1_IRQHandler                               ;USB-1 Interrupt
        DCD     USB2_IRQHandler                               ;USB-2 Interrupt
        DCD     LPSPI5_IRQHandler                             ;Low Power Serial Peripheral Interface 5
        DCD     LPSPI6_IRQHandler                             ;Low Power Serial Peripheral Interface 6
        DCD     LPSPI7_IRQHandler                             ;Low Power Serial Peripheral Interface 7
        DCD     LPSPI8_IRQHandler                             ;Low Power Serial Peripheral Interface 8
        DCD     LPI2C5_IRQHandler                             ;Low Power Inter-Integrated Circuit module 5
        DCD     LPI2C6_IRQHandler                             ;Low Power Inter-Integrated Circuit module 6
        DCD     LPI2C7_IRQHandler                             ;Low Power Inter-Integrated Circuit module 7
        DCD     LPI2C8_IRQHandler                             ;Low Power Inter-Integrated Circuit module 8
        DCD     PDM_HWVAD_ERROR_IRQHandler                    ;PDM interrupt
        DCD     PDM_HWVAD_EVENT_IRQHandler                    ;PDM interrupt
        DCD     PDM_ERROR_IRQHandler                          ;PDM interrupt
        DCD     PDM_EVENT_IRQHandler                          ;PDM interrupt
        DCD     Reserved205_IRQHandler                        ;AUDIO XCVR interrupt
        DCD     Reserved206_IRQHandler                        ;AUDIO XCVR interrupt
        DCD     uSDHC3_IRQHandler                             ;ultra Secure Digital Host Controller interrupt 3
        DCD     Reserved208_IRQHandler                        ;OCRAM MECC interrupt
        DCD     Reserved209_IRQHandler                        ;OCRAM MECC interrupt
        DCD     Reserved210_IRQHandler                        ;CM33 MCM interrupt
        DCD     Reserved211_IRQHandler                        ;ANAMIX SFA interrupt
        DCD     Reserved212_IRQHandler                        ;GIC700 Fault
        DCD     Reserved213_IRQHandler                        ;GIC700 Error
        DCD     Reserved214_IRQHandler                        ;GIC700 PMU Counter Overflow
        DCD     ADC_ER_IRQHandler                             ;ADC interrupt
        DCD     ADC_WD_IRQHandler                             ;ADC interrupt
        DCD     ADC_EOC_IRQHandler                            ;ADC interrupt
        DCD     Reserved218_IRQHandler                        ;s500 glue logic IRQ
        DCD     Reserved219_IRQHandler                        ;I3C1 wakeup irq after double sync
        DCD     Reserved220_IRQHandler                        ;I3C2 wakeup irq after double sync
        DCD     MU5_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU6_A_IRQHandler                              ;AONMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     MU7_B_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     MU8_B_IRQHandler                              ;WAKEUPMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUB
        DCD     Reserved225_IRQHandler                        ;WAKEUPMIX XSPI Responder
        DCD     Reserved226_IRQHandler                        ;AONMIX FCCU Interrupt Reaction 0
        DCD     Reserved227_IRQHandler                        ;AONMIX FCCU Interrupt Reaction 1
        DCD     Reserved228_IRQHandler                        ;AONMIX FCCU Interrupt Reaction 2
        DCD     Reserved229_IRQHandler                        ;AONMIX STCU Selftest end Interrupt
        DCD     DISP_IRQSTEER0_IRQHandler                     ;DISPLAYMIX IRQSTEER 0
        DCD     DISP_IRQSTEER1_IRQHandler                     ;DISPLAYMIX IRQSTEER 1
        DCD     DISP_IRQSTEER2_IRQHandler                     ;DISPLAYMIX IRQSTEER 2
        DCD     DISP_IRQSTEER3_IRQHandler                     ;DISPLAYMIX IRQSTEER 3
        DCD     DISP_IRQSTEER4_IRQHandler                     ;DISPLAYMIX IRQSTEER 4
        DCD     DISP_IRQSTEER7_IRQHandler                     ;DISPLAYMIX IRQSTEER 7
        DCD     Reserved236_IRQHandler                        ;CAMERAMIX MU Ored of all (tx,rx,gp,core,murip) interrupt to MUA
        DCD     ISI_IRQHandler                                ;CAMERAMIX ISI interrupt Channel 0
        DCD     ISP_IRQHandler                                ;ISP Processing Interrupt - Context 0
        DCD     Reserved239_IRQHandler                        ;M7MIX MCM interrupt
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
        DCD     MSGINTR1_IRQHandler                           ;MSGINTR Instance 1, Interrupt
        DCD     MSGINTR2_IRQHandler                           ;MSGINTR Instance 2, Interrupts
        DCD     Reserved264_IRQHandler                        ;V2X-FH MU APCH1 (APP1) interrupt
        DCD     Reserved265_IRQHandler                        ;V2X-FH MU APHSM2 (HSM2) interrupt
        DCD     Reserved266_IRQHandler                        ;Reserved interrupt
        DCD     Reserved267_IRQHandler                        ;Reserved interrupt
        DCD     Reserved268_IRQHandler                        ;Reserved interrupt
        DCD     Reserved269_IRQHandler                        ;Reserved interrupt
        DCD     Reserved270_IRQHandler                        ;Reserved interrupt
        DCD     Reserved271_IRQHandler                        ;Reserved interrupt
        DCD     Reserved272_IRQHandler                        ;Reserved interrupt
        DCD     Reserved273_IRQHandler                        ;Reserved interrupt
        DCD     Reserved274_IRQHandler                        ;Reserved interrupt
        DCD     Reserved275_IRQHandler                        ;Reserved interrupt
        DCD     Reserved276_IRQHandler                        ;Reserved interrupt
        DCD     Reserved277_IRQHandler                        ;Reserved interrupt
        DCD     Reserved278_IRQHandler                        ;Reserved interrupt
        DCD     Reserved279_IRQHandler                        ;Reserved interrupt
        DCD     Reserved280_IRQHandler                        ;Reserved interrupt
        DCD     Reserved281_IRQHandler                        ;Reserved interrupt
        DCD     Reserved282_IRQHandler                        ;Reserved interrupt
        DCD     Reserved283_IRQHandler                        ;Reserved interrupt
        DCD     Reserved284_IRQHandler                        ;Reserved interrupt
        DCD     Reserved285_IRQHandler                        ;Reserved interrupt
        DCD     Reserved286_IRQHandler                        ;Reserved interrupt
        DCD     Reserved287_IRQHandler                        ;Reserved interrupt
        DCD     Reserved288_IRQHandler                        ;Reserved interrupt
        DCD     Reserved289_IRQHandler                        ;Reserved interrupt
        DCD     Reserved290_IRQHandler                        ;Reserved interrupt
        DCD     Reserved291_IRQHandler                        ;Reserved interrupt
        DCD     Reserved292_IRQHandler                        ;Reserved interrupt
        DCD     Reserved293_IRQHandler                        ;Reserved interrupt
        DCD     Reserved294_IRQHandler                        ;Reserved interrupt
        DCD     Reserved295_IRQHandler                        ;Reserved interrupt
        DCD     Reserved296_IRQHandler                        ;Reserved interrupt
        DCD     Reserved297_IRQHandler                        ;Reserved interrupt
        DCD     Reserved298_IRQHandler                        ;Reserved interrupt
        DCD     Reserved299_IRQHandler                        ;Reserved interrupt
        DCD     Reserved300_IRQHandler                        ;Reserved interrupt
        DCD     Reserved301_IRQHandler                        ;Reserved interrupt
        DCD     Reserved302_IRQHandler                        ;Reserved interrupt
        DCD     Reserved303_IRQHandler                        ;Reserved interrupt
        DCD     Reserved304_IRQHandler                        ;Reserved interrupt
        DCD     Reserved305_IRQHandler                        ;Reserved interrupt
        DCD     Reserved306_IRQHandler                        ;Reserved interrupt
        DCD     Reserved307_IRQHandler                        ;Reserved interrupt
        DCD     Reserved308_IRQHandler                        ;Reserved interrupt
        DCD     Reserved309_IRQHandler                        ;Reserved interrupt
        DCD     Reserved310_IRQHandler                        ;Reserved interrupt
        DCD     Reserved311_IRQHandler                        ;Reserved interrupt
        DCD     Reserved312_IRQHandler                        ;Reserved interrupt
        DCD     Reserved313_IRQHandler                        ;Reserved interrupt
        DCD     Reserved314_IRQHandler                        ;CAMERAMIX TRDC transfer error interrupt
        DCD     Reserved315_IRQHandler                        ;DISPLAYMIX TRDC transfer error interrupt
        DCD     Reserved316_IRQHandler                        ;NETCMIX TRDC transfer error interrupt
        DCD     Reserved317_IRQHandler                        ;GPUMIX TRDC transfer error interrupt
        DCD     Reserved318_IRQHandler                        ;HSIOMIX TRDC transfer error interrupt
        DCD     Reserved319_IRQHandler                        ;VPUMIX TRDC transfer error interrupt
        DCD     Reserved320_IRQHandler                        ;AONMIX ERM Single bit corrected ECC Error
        DCD     Reserved321_IRQHandler                        ;M7MIX ERM Single bit corrected ECC Error
        DCD     Reserved322_IRQHandler                        ;WAKEUPMIX ERM Single bit corrected ECC Error
        DCD     Reserved323_IRQHandler                        ;NPUMIX ERM Single bit corrected ECC Error
        DCD     Reserved324_IRQHandler                        ;WAKEUPMIX ACP EDMA error interrupt
        DCD     Reserved325_IRQHandler                        ;OCRAM_C ECC multiple bit or address error
        DCD     Reserved326_IRQHandler                        ;CAMERAMIX Cortex-M0+ Cache write-buffer error
        DCD     Reserved327_IRQHandler                        ;CAMERAMIX Cortex-M0+ Cache data parity error
        DCD     Reserved328_IRQHandler                        ;V2X-FH MU APSHE (SHE) interrupt
        DCD     Reserved329_IRQHandler                        ;V2X-FH MU SCU/APDEBUG (DEBUG) interrupt
        DCD     Reserved330_IRQHandler                        ;Reserved interrupt
        DCD     Reserved331_IRQHandler                        ;Reserved interrupt
        DCD     Reserved332_IRQHandler                        ;Reserved interrupt
        DCD     Reserved333_IRQHandler                        ;Reserved interrupt
        DCD     Reserved334_IRQHandler                        ;Reserved interrupt
        DCD     Reserved335_IRQHandler                        ;Reserved interrupt
        DCD     Reserved336_IRQHandler                        ;Reserved interrupt
        DCD     Reserved337_IRQHandler                        ;Reserved interrupt
        DCD     Reserved338_IRQHandler                        ;Reserved interrupt
        DCD     Reserved339_IRQHandler                        ;Reserved interrupt
        DCD     Reserved340_IRQHandler                        ;Reserved interrupt
        DCD     Reserved341_IRQHandler                        ;Reserved interrupt
        DCD     Reserved342_IRQHandler                        ;Reserved interrupt
        DCD     Reserved343_IRQHandler                        ;Reserved interrupt
        DCD     Reserved344_IRQHandler                        ;Reserved interrupt
        DCD     Reserved345_IRQHandler                        ;Reserved interrupt
        DCD     Reserved346_IRQHandler                        ;Reserved interrupt
        DCD     Reserved347_IRQHandler                        ;Reserved interrupt
        DCD     Reserved348_IRQHandler                        ;Reserved interrupt
        DCD     Reserved349_IRQHandler                        ;Reserved interrupt
        DCD     Reserved350_IRQHandler                        ;Reserved interrupt
        DCD     Reserved351_IRQHandler                        ;Reserved interrupt
        DCD     Reserved352_IRQHandler                        ;Reserved interrupt
        DCD     Reserved353_IRQHandler                        ;Reserved interrupt
        DCD     Reserved354_IRQHandler                        ;Reserved interrupt
        DCD     Reserved355_IRQHandler                        ;Reserved interrupt
        DCD     Reserved356_IRQHandler                        ;Reserved interrupt
        DCD     Reserved357_IRQHandler                        ;Reserved interrupt
        DCD     Reserved358_IRQHandler                        ;Reserved interrupt
        DCD     Reserved359_IRQHandler                        ;Reserved interrupt
        DCD     Reserved360_IRQHandler                        ;Reserved interrupt
        DCD     Reserved361_IRQHandler                        ;Reserved interrupt
        DCD     Reserved362_IRQHandler                        ;Reserved interrupt
        DCD     Reserved363_IRQHandler                        ;Reserved interrupt
        DCD     Reserved364_IRQHandler                        ;Reserved interrupt
        DCD     Reserved365_IRQHandler                        ;Reserved interrupt
        DCD     Reserved366_IRQHandler                        ;Reserved interrupt
        DCD     Reserved367_IRQHandler                        ;Reserved interrupt
        DCD     Reserved368_IRQHandler                        ;Reserved interrupt
        DCD     Reserved369_IRQHandler                        ;Reserved interrupt
        DCD     Reserved370_IRQHandler                        ;Reserved interrupt
        DCD     Reserved371_IRQHandler                        ;Reserved interrupt
        DCD     Reserved372_IRQHandler                        ;Reserved interrupt
        DCD     Reserved373_IRQHandler                        ;Reserved interrupt
        DCD     Reserved374_IRQHandler                        ;Reserved interrupt
        DCD     Reserved375_IRQHandler                        ;Reserved interrupt
        DCD     Reserved376_IRQHandler                        ;Reserved interrupt
        DCD     Reserved377_IRQHandler                        ;Reserved interrupt
        DCD     DMA5_3_0_1_IRQHandler                         ;eDMA3 channel 0/1 interrupt
        DCD     DMA5_3_2_3_IRQHandler                         ;eDMA3 channel 2/3 interrupt
        DCD     DMA5_3_4_5_IRQHandler                         ;eDMA3 channel 4/5 interrupt
        DCD     DMA5_3_6_7_IRQHandler                         ;eDMA3 channel 6/7 interrupt
        DCD     DMA5_3_8_9_IRQHandler                         ;eDMA3 channel 8/9 interrupt
        DCD     DMA5_3_10_11_IRQHandler                       ;eDMA3 channel 10/11 interrupt
        DCD     DMA5_3_12_13_IRQHandler                       ;eDMA3 channel 12/13 interrupt
        DCD     DMA5_3_14_15_IRQHandler                       ;eDMA3 channel 14/15 interrupt
        DCD     DMA5_3_16_17_IRQHandler                       ;eDMA3 channel 16/17 interrupt
        DCD     DMA5_3_18_19_IRQHandler                       ;eDMA3 channel 18/19 interrupt
        DCD     DMA5_3_20_21_IRQHandler                       ;eDMA3 channel 20/21 interrupt
        DCD     DMA5_3_22_23_IRQHandler                       ;eDMA3 channel 22/23 interrupt
        DCD     DMA5_3_24_25_IRQHandler                       ;eDMA3 channel 24/25 interrupt
        DCD     DMA5_3_26_27_IRQHandler                       ;eDMA3 channel 26/27 interrupt
        DCD     DMA5_3_28_29_IRQHandler                       ;eDMA3 channel 28/29 interrupt
        DCD     DMA5_3_30_31_IRQHandler                       ;eDMA3 channel 30/31 interrupt
        DCD     Reserved394_IRQHandler                        ;Reserved interrupt
        DCD     Reserved395_IRQHandler                        ;Reserved interrupt
        DCD     Reserved396_IRQHandler                        ;Reserved interrupt
        DCD     Reserved397_IRQHandler                        ;Reserved interrupt
        DCD     Reserved398_IRQHandler                        ;Reserved interrupt
        DCD     Reserved399_IRQHandler                        ;Reserved interrupt
        DCD     Reserved400_IRQHandler                        ;Reserved interrupt
        DCD     Reserved401_IRQHandler                        ;Reserved interrupt
        DCD     Reserved402_IRQHandler                        ;Reserved interrupt
        DCD     Reserved403_IRQHandler                        ;Reserved interrupt
        DCD     Reserved404_IRQHandler                        ;Reserved interrupt
        DCD     Reserved405_IRQHandler                        ;Reserved interrupt
        DCD     Reserved406_IRQHandler                        ;Reserved interrupt
        DCD     Reserved407_IRQHandler                        ;Reserved interrupt
        DCD     Reserved408_IRQHandler                        ;Reserved interrupt
        DCD     Reserved409_IRQHandler                        ;Reserved interrupt
        DCD     Reserved410_IRQHandler                        ;Reserved interrupt
        DCD     Reserved411_IRQHandler                        ;Reserved interrupt
        DCD     Reserved412_IRQHandler                        ;Reserved interrupt
        DCD     Reserved413_IRQHandler                        ;Reserved interrupt
        DCD     Reserved414_IRQHandler                        ;Reserved interrupt
        DCD     Reserved415_IRQHandler                        ;Reserved interrupt
        DCD     Reserved416_IRQHandler                        ;Reserved interrupt
        DCD     Reserved417_IRQHandler                        ;Reserved interrupt
        DCD     Reserved418_IRQHandler                        ;Reserved interrupt
        DCD     Reserved419_IRQHandler                        ;Reserved interrupt
        DCD     Reserved420_IRQHandler                        ;Reserved interrupt
        DCD     Reserved421_IRQHandler                        ;Reserved interrupt
        DCD     Reserved422_IRQHandler                        ;Reserved interrupt
        DCD     Reserved423_IRQHandler                        ;Reserved interrupt
        DCD     Reserved424_IRQHandler                        ;Reserved interrupt
        DCD     Reserved425_IRQHandler                        ;Reserved interrupt
        DCD     Reserved426_IRQHandler                        ;Reserved interrupt
        DCD     Reserved427_IRQHandler                        ;Reserved interrupt
        DCD     Reserved428_IRQHandler                        ;Reserved interrupt
        DCD     Reserved429_IRQHandler                        ;Reserved interrupt
        DCD     Reserved430_IRQHandler                        ;Reserved interrupt
        DCD     Reserved431_IRQHandler                        ;Reserved interrupt
        DCD     Reserved432_IRQHandler                        ;Reserved interrupt
        DCD     Reserved433_IRQHandler                        ;Reserved interrupt
        DCD     Reserved434_IRQHandler                        ;Reserved interrupt
        DCD     Reserved435_IRQHandler                        ;Reserved interrupt
        DCD     Reserved436_IRQHandler                        ;Reserved interrupt
        DCD     Reserved437_IRQHandler                        ;Reserved interrupt
        DCD     Reserved438_IRQHandler                        ;Reserved interrupt
        DCD     Reserved439_IRQHandler                        ;Reserved interrupt
        DCD     Reserved440_IRQHandler                        ;Reserved interrupt
        DCD     Reserved441_IRQHandler                        ;Reserved interrupt
        DCD     DMA5_3_32_33_IRQHandler                       ;eDMA3 channel 32/33 interrupt
        DCD     DMA5_3_34_35_IRQHandler                       ;eDMA3 channel 34/35 interrupt
        DCD     DMA5_3_36_37_IRQHandler                       ;eDMA3 channel 36/37 interrupt
        DCD     DMA5_3_38_39_IRQHandler                       ;eDMA3 channel 38/39 interrupt
        DCD     DMA5_3_40_41_IRQHandler                       ;eDMA3 channel 40/41 interrupt
        DCD     DMA5_3_42_43_IRQHandler                       ;eDMA3 channel 42/43 interrupt
        DCD     DMA5_3_44_45_IRQHandler                       ;eDMA3 channel 44/45 interrupt
        DCD     DMA5_3_46_47_IRQHandler                       ;eDMA3 channel 46/47 interrupt
        DCD     DMA5_3_48_49_IRQHandler                       ;eDMA3 channel 48/49 interrupt
        DCD     DMA5_3_50_51_IRQHandler                       ;eDMA3 channel 50/51 interrupt
        DCD     DMA5_3_52_53_IRQHandler                       ;eDMA3 channel 52/53 interrupt
        DCD     DMA5_3_54_55_IRQHandler                       ;eDMA3 channel 54/55 interrupt
        DCD     DMA5_3_56_57_IRQHandler                       ;eDMA3 channel 56/57 interrupt
        DCD     DMA5_3_58_59_IRQHandler                       ;eDMA3 channel 58/59 interrupt
        DCD     DMA5_3_60_61_IRQHandler                       ;eDMA3 channel 60/61 interrupt
        DCD     DMA5_3_62_63_IRQHandler                       ;eDMA3 channel 62/63 interrupt
        DCD     Reserved458_IRQHandler                        ;Reserved interrupt
        DCD     Reserved459_IRQHandler                        ;Reserved interrupt
        DCD     Reserved460_IRQHandler                        ;Reserved interrupt
        DCD     Reserved461_IRQHandler                        ;Reserved interrupt
        DCD     Reserved462_IRQHandler                        ;Reserved interrupt
        DCD     Reserved463_IRQHandler                        ;Reserved interrupt
        DCD     Reserved464_IRQHandler                        ;Reserved interrupt
        DCD     Reserved465_IRQHandler                        ;Reserved interrupt
        DCD     Reserved466_IRQHandler                        ;Reserved interrupt
        DCD     Reserved467_IRQHandler                        ;Reserved interrupt
        DCD     Reserved468_IRQHandler                        ;Reserved interrupt
        DCD     Reserved469_IRQHandler                        ;Reserved interrupt
        DCD     Reserved470_IRQHandler                        ;Reserved interrupt
        DCD     Reserved471_IRQHandler                        ;Reserved interrupt
        DCD     Reserved472_IRQHandler                        ;Reserved interrupt
        DCD     Reserved473_IRQHandler                        ;Reserved interrupt
        DCD     Reserved474_IRQHandler                        ;Reserved interrupt
        DCD     Reserved475_IRQHandler                        ;Reserved interrupt
        DCD     Reserved476_IRQHandler                        ;Reserved interrupt
        DCD     Reserved477_IRQHandler                        ;Reserved interrupt
        DCD     Reserved478_IRQHandler                        ;Reserved interrupt
        DCD     Reserved479_IRQHandler                        ;Reserved interrupt
        DCD     Reserved480_IRQHandler                        ;Reserved interrupt
        DCD     Reserved481_IRQHandler                        ;Reserved interrupt
        DCD     Reserved482_IRQHandler                        ;Reserved interrupt
        DCD     Reserved483_IRQHandler                        ;Reserved interrupt
        DCD     Reserved484_IRQHandler                        ;Reserved interrupt
        DCD     Reserved485_IRQHandler                        ;Reserved interrupt
        DCD     Reserved486_IRQHandler                        ;Reserved interrupt
        DCD     Reserved487_IRQHandler                        ;Reserved interrupt
        DCD     Reserved488_IRQHandler                        ;Reserved interrupt
        DCD     Reserved489_IRQHandler                        ;Reserved interrupt
        DCD     Reserved490_IRQHandler                        ;Reserved interrupt
        DCD     Reserved491_IRQHandler                        ;Reserved interrupt
        DCD     Reserved492_IRQHandler                        ;Reserved interrupt
        DCD     Reserved493_IRQHandler                        ;Reserved interrupt
        DCD     Reserved494_IRQHandler                        ;Reserved interrupt
        DCD     Reserved495_IRQHandler                        ;Reserved interrupt
        DCD     Reserved496_IRQHandler                        ;Reserved interrupt
        DCD     Reserved497_IRQHandler                        ;Reserved interrupt
        DCD     Reserved498_IRQHandler                        ;Reserved interrupt
        DCD     Reserved499_IRQHandler                        ;Reserved interrupt
        DCD     Reserved500_IRQHandler                        ;Reserved interrupt
        DCD     Reserved501_IRQHandler                        ;Reserved interrupt
        DCD     Reserved502_IRQHandler                        ;Reserved interrupt
        DCD     Reserved503_IRQHandler                        ;Reserved interrupt
        DCD     Reserved504_IRQHandler                        ;Reserved interrupt
        DCD     Reserved505_IRQHandler                        ;Reserved interrupt
        DCD     Reserved506_IRQHandler                        ;GPUMIX GPU Interrupt
        DCD     Reserved507_IRQHandler                        ;GPUMIX Job Interrupt
        DCD     Reserved508_IRQHandler                        ;GPUMIX MMU Interrupt
        DCD     Reserved509_IRQHandler                        ;Reserved INTERRUPT
        DCD     Reserved510_IRQHandler                        ;Reserved interrupt
        DCD     Reserved511_IRQHandler                        ;Reserved interrupt
        DCD     Reserved512_IRQHandler                        ;Reserved interrupt
        DCD     Reserved513_IRQHandler                        ;Reserved interrupt
        DCD     Reserved514_IRQHandler                        ;Reserved interrupt
        DCD     Reserved515_IRQHandler                        ;Reserved interrupt
        DCD     Reserved516_IRQHandler                        ;Reserved interrupt
        DCD     Reserved517_IRQHandler                        ;Reserved interrupt
        DCD     Reserved518_IRQHandler                        ;Reserved interrupt
        DCD     Reserved519_IRQHandler                        ;Reserved interrupt
        DCD     Reserved520_IRQHandler                        ;Reserved interrupt
        DCD     Reserved521_IRQHandler                        ;Reserved interrupt
        DCD     Reserved522_IRQHandler                        ;Reserved interrupt
        DCD     Reserved523_IRQHandler                        ;Reserved interrupt
        DCD     Reserved524_IRQHandler                        ;Reserved interrupt
        DCD     Reserved525_IRQHandler                        ;Reserved interrupt
        DCD     Reserved526_IRQHandler                        ;Reserved interrupt
        DCD     Reserved527_IRQHandler                        ;Reserved interrupt
        DCD     Reserved528_IRQHandler                        ;Reserved interrupt
        DCD     Reserved529_IRQHandler                        ;Reserved interrupt
        DCD     Reserved530_IRQHandler                        ;Reserved interrupt
        DCD     Reserved531_IRQHandler                        ;Reserved interrupt
        DCD     Reserved532_IRQHandler                        ;Reserved interrupt
        DCD     Reserved533_IRQHandler                        ;Reserved interrupt
        DCD     Reserved534_IRQHandler                        ;Reserved interrupt
        DCD     Reserved535_IRQHandler                        ;Reserved interrupt
        DCD     Reserved536_IRQHandler                        ;Reserved interrupt
        DCD     Reserved537_IRQHandler                        ;Reserved interrupt
        DCD     Reserved538_IRQHandler                        ;Reserved interrupt
        DCD     Reserved539_IRQHandler                        ;Reserved interrupt
        DCD     Reserved540_IRQHandler                        ;Reserved interrupt
        DCD     Reserved541_IRQHandler                        ;Reserved interrupt
        DCD     Reserved542_IRQHandler                        ;Reserved interrupt
        DCD     Reserved543_IRQHandler                        ;Reserved interrupt
        DCD     Reserved544_IRQHandler                        ;Reserved interrupt
        DCD     Reserved545_IRQHandler                        ;Reserved interrupt
        DCD     Reserved546_IRQHandler                        ;Reserved interrupt
        DCD     Reserved547_IRQHandler                        ;Reserved interrupt
        DCD     Reserved548_IRQHandler                        ;Reserved interrupt
        DCD     Reserved549_IRQHandler                        ;Reserved interrupt
        DCD     Reserved550_IRQHandler                        ;Reserved interrupt
        DCD     Reserved551_IRQHandler                        ;Reserved interrupt
        DCD     Reserved552_IRQHandler                        ;Reserved interrupt
        DCD     Reserved553_IRQHandler                        ;Reserved interrupt
        DCD     Reserved554_IRQHandler                        ;Reserved interrupt
        DCD     Reserved555_IRQHandler                        ;Reserved interrupt
        DCD     Reserved556_IRQHandler                        ;Reserved interrupt
        DCD     Reserved557_IRQHandler                        ;Reserved interrupt
        DCD     Reserved558_IRQHandler                        ;Reserved interrupt
        DCD     Reserved559_IRQHandler                        ;Reserved interrupt
        DCD     Reserved560_IRQHandler                        ;Reserved interrupt
        DCD     Reserved561_IRQHandler                        ;Reserved interrupt
        DCD     Reserved562_IRQHandler                        ;Reserved interrupt
        DCD     Reserved563_IRQHandler                        ;Reserved interrupt
        DCD     Reserved564_IRQHandler                        ;Reserved interrupt
        DCD     Reserved565_IRQHandler                        ;Reserved interrupt
        DCD     Reserved566_IRQHandler                        ;Reserved interrupt
        DCD     Reserved567_IRQHandler                        ;Reserved interrupt
        DCD     Reserved568_IRQHandler                        ;Reserved interrupt
        DCD     Reserved569_IRQHandler                        ;Reserved interrupt
        DCD     Reserved570_IRQHandler                        ;NETC iEPRC PCI INT
        DCD     Reserved571_IRQHandler                        ;NETC iEPRC PCI INT
        DCD     Reserved572_IRQHandler                        ;PCIe Controller 1 INTA
        DCD     Reserved573_IRQHandler                        ;PCIe Controller 1 INTB
        DCD     Reserved574_IRQHandler                        ;PCIe Controller 1 INTC
        DCD     Reserved575_IRQHandler                        ;PCIe Controller 1 INTD
        DCD     Reserved576_IRQHandler                        ;PCIe interrupts
        DCD     Reserved577_IRQHandler                        ;PCIe Controller EDMA channel interrupt
        DCD     Reserved578_IRQHandler                        ;PCIe Controller 1 INTA
        DCD     Reserved579_IRQHandler                        ;PCIe Controller 1 INTB
        DCD     Reserved580_IRQHandler                        ;PCIe Controller 1 INTC
        DCD     Reserved581_IRQHandler                        ;PCIe Controller 1 INTD
        DCD     Reserved582_IRQHandler                        ;PCIe miscellaneous interrupts
        DCD     Reserved583_IRQHandler                        ;PCIe Controller EDMA channel interrupt
        DCD     Reserved584_IRQHandler                        ;Wakeup interrupt from CLKREQ#, WAKEUP#, BEACON_DET
        DCD     Reserved585_IRQHandler                        ;NPUMIX Functional interrupt
        DCD     Reserved586_IRQHandler                        ;Reserved interrupt
        DCD     Reserved587_IRQHandler                        ;Reserved interrupt
        DCD     Reserved588_IRQHandler                        ;Reserved interrupt
        DCD     Reserved589_IRQHandler                        ;Reserved interrupt
        DCD     Reserved590_IRQHandler                        ;Reserved interrupt
        DCD     Reserved591_IRQHandler                        ;Reserved interrupt
        DCD     Reserved592_IRQHandler                        ;Reserved interrupt
        DCD     Reserved593_IRQHandler                        ;Reserved interrupt
        DCD     Reserved594_IRQHandler                        ;Reserved interrupt
        DCD     Reserved595_IRQHandler                        ;Reserved interrupt
        DCD     Reserved596_IRQHandler                        ;Reserved interrupt
        DCD     Reserved597_IRQHandler                        ;Reserved interrupt
        DCD     Reserved598_IRQHandler                        ;Reserved interrupt
        DCD     Reserved599_IRQHandler                        ;Reserved interrupt
        DCD     Reserved600_IRQHandler                        ;Reserved interrupt
        DCD     Reserved601_IRQHandler                        ;Reserved interrupt
        DCD     Reserved602_IRQHandler                        ;Reserved interrupt
        DCD     Reserved603_IRQHandler                        ;Reserved interrupt
        DCD     Reserved604_IRQHandler                        ;Reserved interrupt
        DCD     Reserved605_IRQHandler                        ;Reserved interrupt
        DCD     Reserved606_IRQHandler                        ;Reserved interrupt
        DCD     Reserved607_IRQHandler                        ;Reserved interrupt
        DCD     Reserved608_IRQHandler                        ;Reserved interrupt
        DCD     Reserved609_IRQHandler                        ;Reserved interrupt
        DCD     Reserved610_IRQHandler                        ;Reserved interrupt
        DCD     Reserved611_IRQHandler                        ;Reserved interrupt
        DCD     Reserved612_IRQHandler                        ;Reserved interrupt
        DCD     Reserved613_IRQHandler                        ;Reserved interrupt
        DCD     Reserved614_IRQHandler                        ;Reserved interrupt
        DCD     Reserved615_IRQHandler                        ;Reserved interrupt
        DCD     Reserved616_IRQHandler                        ;Reserved interrupt
        DCD     Reserved617_IRQHandler                        ;Reserved interrupt
        DCD     Reserved618_IRQHandler                        ;Reserved interrupt
        DCD     Reserved619_IRQHandler                        ;Reserved interrupt
        DCD     Reserved620_IRQHandler                        ;Reserved interrupt
        DCD     Reserved621_IRQHandler                        ;Reserved interrupt
        DCD     Reserved622_IRQHandler                        ;Reserved interrupt
        DCD     Reserved623_IRQHandler                        ;Reserved interrupt
        DCD     Reserved624_IRQHandler                        ;Reserved interrupt
        DCD     Reserved625_IRQHandler                        ;Reserved interrupt
        DCD     Reserved626_IRQHandler                        ;Reserved interrupt
        DCD     Reserved627_IRQHandler                        ;Reserved interrupt
        DCD     Reserved628_IRQHandler                        ;Reserved interrupt
        DCD     Reserved629_IRQHandler                        ;Reserved interrupt
        DCD     Reserved630_IRQHandler                        ;Reserved interrupt
        DCD     Reserved631_IRQHandler                        ;Reserved interrupt
        DCD     Reserved632_IRQHandler                        ;Reserved interrupt
        DCD     Reserved633_IRQHandler                        ;Reserved interrupt
        DCD     Reserved634_IRQHandler                        ;DISPLAYMIX Real-time traffic TBU: Fault Handling RAS Interrupt for a contained error
        DCD     Reserved635_IRQHandler                        ;DISPLAYMIX Real-time traffic TBU: Error Handling RAS Interrupt for an uncontained error
        DCD     Reserved636_IRQHandler                        ;DISPLAYMIX Real-time traffic TBU: Critical Error Interrupt for an uncontainable error
        DCD     Reserved637_IRQHandler                        ;DISPLAYMIX Real-time traffic TBU: PMU Interrupt
        DCD     Reserved638_IRQHandler                        ;TCU Event queue, secure interrupt
        DCD     Reserved639_IRQHandler                        ;TCU Event queue, non-secure interrupt
        DCD     Reserved640_IRQHandler                        ;TCU SYNC complete, non-secure interrupt
        DCD     Reserved641_IRQHandler                        ;TCU SYNC complete, secure interrupt
        DCD     Reserved642_IRQHandler                        ;TCU global non-secure interrupt
        DCD     Reserved643_IRQHandler                        ;TCU global secure interrupt
        DCD     Reserved644_IRQHandler                        ;TCU fault handling RAS interrupt for a contained error
        DCD     Reserved645_IRQHandler                        ;TCU error recovery RAS interrupt for an uncontained error
        DCD     Reserved646_IRQHandler                        ;TCU critical error interrupt, for an uncontainable uncorrected error
        DCD     Reserved647_IRQHandler                        ;TCU PMU interrupt
        DCD     Reserved648_IRQHandler                        ;TCU Page Request Interface
        DCD     Reserved649_IRQHandler                        ;SRC GPC Low Power Handshake Gasket interrupt request for system management
        DCD     Reserved650_IRQHandler                        ;Reserved interrupt
        DCD     Reserved651_IRQHandler                        ;Reserved interrupt
        DCD     Reserved652_IRQHandler                        ;Reserved interrupt
        DCD     Reserved653_IRQHandler                        ;Reserved interrupt
        DCD     Reserved654_IRQHandler                        ;Reserved interrupt
        DCD     Reserved655_IRQHandler                        ;Reserved interrupt
        DCD     Reserved656_IRQHandler                        ;Reserved interrupt
        DCD     Reserved657_IRQHandler                        ;Reserved interrupt
        DCD     Reserved658_IRQHandler                        ;Reserved interrupt
        DCD     Reserved659_IRQHandler                        ;Reserved interrupt
        DCD     Reserved660_IRQHandler                        ;Reserved interrupt
        DCD     Reserved661_IRQHandler                        ;Reserved interrupt
        DCD     Reserved662_IRQHandler                        ;Reserved interrupt
        DCD     Reserved663_IRQHandler                        ;Reserved interrupt
        DCD     Reserved664_IRQHandler                        ;Reserved interrupt
        DCD     Reserved665_IRQHandler                        ;Reserved interrupt
        DCD     Reserved666_IRQHandler                        ;Reserved interrupt
        DCD     Reserved667_IRQHandler                        ;Reserved interrupt
        DCD     Reserved668_IRQHandler                        ;Reserved interrupt
        DCD     Reserved669_IRQHandler                        ;Reserved interrupt
        DCD     Reserved670_IRQHandler                        ;Reserved interrupt
        DCD     Reserved671_IRQHandler                        ;Reserved interrupt
        DCD     Reserved672_IRQHandler                        ;Reserved interrupt
        DCD     Reserved673_IRQHandler                        ;Reserved interrupt
        DCD     Reserved674_IRQHandler                        ;Reserved interrupt
        DCD     Reserved675_IRQHandler                        ;Reserved interrupt
        DCD     Reserved676_IRQHandler                        ;Reserved interrupt
        DCD     Reserved677_IRQHandler                        ;Reserved interrupt
        DCD     Reserved678_IRQHandler                        ;Reserved interrupt
        DCD     Reserved679_IRQHandler                        ;Reserved interrupt
        DCD     Reserved680_IRQHandler                        ;Reserved interrupt
        DCD     Reserved681_IRQHandler                        ;Reserved interrupt
        DCD     Reserved682_IRQHandler                        ;Reserved interrupt
        DCD     Reserved683_IRQHandler                        ;Reserved interrupt
        DCD     Reserved684_IRQHandler                        ;Reserved interrupt
        DCD     Reserved685_IRQHandler                        ;Reserved interrupt
        DCD     Reserved686_IRQHandler                        ;Reserved interrupt
        DCD     Reserved687_IRQHandler                        ;Reserved interrupt
        DCD     Reserved688_IRQHandler                        ;Reserved interrupt
        DCD     Reserved689_IRQHandler                        ;Reserved interrupt
        DCD     Reserved690_IRQHandler                        ;Reserved interrupt
        DCD     Reserved691_IRQHandler                        ;Reserved interrupt
        DCD     Reserved692_IRQHandler                        ;Reserved interrupt
        DCD     Reserved693_IRQHandler                        ;Reserved interrupt
        DCD     Reserved694_IRQHandler                        ;Reserved interrupt
        DCD     Reserved695_IRQHandler                        ;Reserved interrupt
        DCD     Reserved696_IRQHandler                        ;Reserved interrupt
        DCD     Reserved697_IRQHandler                        ;Reserved interrupt
        DCD     Reserved698_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved699_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved700_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved701_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved702_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved703_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved704_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved705_IRQHandler                        ;CAMERAMIX MU Ored of all
        DCD     Reserved706_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 1
        DCD     Reserved707_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 2
        DCD     Reserved708_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 3
        DCD     Reserved709_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 4
        DCD     Reserved710_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 5
        DCD     Reserved711_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 6
        DCD     Reserved712_IRQHandler                        ;CAMERAMIX ISI interrupt Channel 7
        DCD     DMA5_4_ERROR_IRQHandler                       ;CAMERAMIX EDMA error interrupt
        DCD     Reserved714_IRQHandler                        ;Reserved interrupt
        DCD     Reserved715_IRQHandler                        ;Reserved interrupt
        DCD     Reserved716_IRQHandler                        ;Reserved interrupt
        DCD     Reserved717_IRQHandler                        ;Reserved interrupt
        DCD     Reserved718_IRQHandler                        ;Reserved interrupt
        DCD     Reserved719_IRQHandler                        ;Reserved interrupt
        DCD     Reserved720_IRQHandler                        ;Reserved interrupt
        DCD     Reserved721_IRQHandler                        ;Reserved interrupt
        DCD     Reserved722_IRQHandler                        ;Reserved interrupt
        DCD     Reserved723_IRQHandler                        ;Reserved interrupt
        DCD     Reserved724_IRQHandler                        ;Reserved interrupt
        DCD     Reserved725_IRQHandler                        ;Reserved interrupt
        DCD     Reserved726_IRQHandler                        ;Reserved interrupt
        DCD     Reserved727_IRQHandler                        ;Reserved interrupt
        DCD     Reserved728_IRQHandler                        ;Reserved interrupt
        DCD     Reserved729_IRQHandler                        ;Reserved interrupt
        DCD     Reserved730_IRQHandler                        ;Reserved interrupt
        DCD     Reserved731_IRQHandler                        ;Reserved interrupt
        DCD     Reserved732_IRQHandler                        ;Reserved interrupt
        DCD     Reserved733_IRQHandler                        ;Reserved interrupt
        DCD     Reserved734_IRQHandler                        ;Reserved interrupt
        DCD     Reserved735_IRQHandler                        ;Reserved interrupt
        DCD     Reserved736_IRQHandler                        ;Reserved interrupt
        DCD     Reserved737_IRQHandler                        ;Reserved interrupt
        DCD     Reserved738_IRQHandler                        ;Reserved interrupt
        DCD     Reserved739_IRQHandler                        ;Reserved interrupt
        DCD     Reserved740_IRQHandler                        ;Reserved interrupt
        DCD     Reserved741_IRQHandler                        ;Reserved interrupt
        DCD     Reserved742_IRQHandler                        ;Reserved interrupt
        DCD     Reserved743_IRQHandler                        ;Reserved interrupt
        DCD     Reserved744_IRQHandler                        ;Reserved interrupt
        DCD     Reserved745_IRQHandler                        ;Reserved interrupt
        DCD     Reserved746_IRQHandler                        ;Reserved interrupt
        DCD     Reserved747_IRQHandler                        ;Reserved interrupt
        DCD     Reserved748_IRQHandler                        ;Reserved interrupt
        DCD     Reserved749_IRQHandler                        ;Reserved interrupt
        DCD     Reserved750_IRQHandler                        ;Reserved interrupt
        DCD     Reserved751_IRQHandler                        ;Reserved interrupt
        DCD     Reserved752_IRQHandler                        ;Reserved interrupt
        DCD     Reserved753_IRQHandler                        ;Reserved interrupt
        DCD     Reserved754_IRQHandler                        ;Reserved interrupt
        DCD     Reserved755_IRQHandler                        ;Reserved interrupt
        DCD     Reserved756_IRQHandler                        ;Reserved interrupt
        DCD     Reserved757_IRQHandler                        ;Reserved interrupt
        DCD     Reserved758_IRQHandler                        ;Reserved interrupt
        DCD     Reserved759_IRQHandler                        ;Reserved interrupt
        DCD     Reserved760_IRQHandler                        ;Reserved interrupt
        DCD     Reserved761_IRQHandler                        ;Reserved interrupt
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
        DCD     Reserved778_IRQHandler                        ;Reserved interrupt
        DCD     Reserved779_IRQHandler                        ;Reserved interrupt
        DCD     Reserved780_IRQHandler                        ;Reserved interrupt
        DCD     Reserved781_IRQHandler                        ;Reserved interrupt
        DCD     Reserved782_IRQHandler                        ;Reserved interrupt
        DCD     Reserved783_IRQHandler                        ;Reserved interrupt
        DCD     Reserved784_IRQHandler                        ;Reserved interrupt
        DCD     Reserved785_IRQHandler                        ;Reserved interrupt
        DCD     Reserved786_IRQHandler                        ;Reserved interrupt
        DCD     Reserved787_IRQHandler                        ;Reserved interrupt
        DCD     Reserved788_IRQHandler                        ;Reserved interrupt
        DCD     Reserved789_IRQHandler                        ;Reserved interrupt
        DCD     Reserved790_IRQHandler                        ;Reserved interrupt
        DCD     Reserved791_IRQHandler                        ;Reserved interrupt
        DCD     Reserved792_IRQHandler                        ;Reserved interrupt
        DCD     Reserved793_IRQHandler                        ;Reserved interrupt
        DCD     Reserved794_IRQHandler                        ;Reserved interrupt
        DCD     Reserved795_IRQHandler                        ;Reserved interrupt
        DCD     Reserved796_IRQHandler                        ;Reserved interrupt
        DCD     Reserved797_IRQHandler                        ;Reserved interrupt
        DCD     Reserved798_IRQHandler                        ;Reserved interrupt
        DCD     Reserved799_IRQHandler                        ;Reserved interrupt
        DCD     Reserved800_IRQHandler                        ;Reserved interrupt
        DCD     Reserved801_IRQHandler                        ;Reserved interrupt
        DCD     Reserved802_IRQHandler                        ;Reserved interrupt
        DCD     Reserved803_IRQHandler                        ;Reserved interrupt
        DCD     Reserved804_IRQHandler                        ;Reserved interrupt
        DCD     Reserved805_IRQHandler                        ;Reserved interrupt
        DCD     Reserved806_IRQHandler                        ;Reserved interrupt
        DCD     Reserved807_IRQHandler                        ;Reserved interrupt
        DCD     Reserved808_IRQHandler                        ;Reserved interrupt
        DCD     Reserved809_IRQHandler                        ;Reserved interrupt
        DCD     Reserved810_IRQHandler                        ;Reserved interrupt
        DCD     Reserved811_IRQHandler                        ;Reserved interrupt
        DCD     Reserved812_IRQHandler                        ;Reserved interrupt
        DCD     Reserved813_IRQHandler                        ;Reserved interrupt
        DCD     Reserved814_IRQHandler                        ;Reserved interrupt
        DCD     Reserved815_IRQHandler                        ;Reserved interrupt
        DCD     Reserved816_IRQHandler                        ;Reserved interrupt
        DCD     Reserved817_IRQHandler                        ;Reserved interrupt
        DCD     Reserved818_IRQHandler                        ;Reserved interrupt
        DCD     Reserved819_IRQHandler                        ;Reserved interrupt
        DCD     Reserved820_IRQHandler                        ;Reserved interrupt
        DCD     Reserved821_IRQHandler                        ;Reserved interrupt
        DCD     Reserved822_IRQHandler                        ;Reserved interrupt
        DCD     Reserved823_IRQHandler                        ;Reserved interrupt
        DCD     Reserved824_IRQHandler                        ;Reserved interrupt
        DCD     Reserved825_IRQHandler                        ;Reserved interrupt
        DCD     Reserved826_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Buffer overflow
        DCD     Reserved827_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Interlaced Error
        DCD     Reserved828_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 1: Pixel Data Type Error
        DCD     Reserved829_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Buffer overflow
        DCD     Reserved830_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Interlaced Error
        DCD     Reserved831_IRQHandler                        ;CAMERAMIX CSI Formatting Unit 2: Pixel Data Type Error
        DCD     Reserved832_IRQHandler                        ;CAMERAMIX CSI1
        DCD     Reserved833_IRQHandler                        ;CAMERAMIX CSI2
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

        PUBWEAK Reserved16_IRQHandler
        PUBWEAK Reserved17_IRQHandler
        PUBWEAK Reserved18_IRQHandler
        PUBWEAK Reserved19_IRQHandler
        PUBWEAK Reserved20_IRQHandler
        PUBWEAK Reserved21_IRQHandler
        PUBWEAK Reserved22_IRQHandler
        PUBWEAK Reserved23_IRQHandler
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

        PUBWEAK Reserved37_IRQHandler
        PUBWEAK Reserved38_IRQHandler
        PUBWEAK Reserved39_IRQHandler
        PUBWEAK Reserved40_IRQHandler
        PUBWEAK Reserved41_IRQHandler
        PUBWEAK Reserved42_IRQHandler
        PUBWEAK V2X_FH_APCH0_IRQHandler
        PUBWEAK V2X_FH_APHSM1_IRQHandler
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

        PUBWEAK Reserved51_IRQHandler
        PUBWEAK Reserved52_IRQHandler
        PUBWEAK Reserved53_IRQHandler
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

        PUBWEAK CAN4_IRQHandler
        PUBWEAK CAN4_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN4_IRQHandler
        LDR     R0, =CAN4_DriverIRQHandler
        BX      R0

        PUBWEAK CAN4_ERROR_IRQHandler
        PUBWEAK CAN4_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN4_ERROR_IRQHandler
        LDR     R0, =CAN4_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK CAN5_IRQHandler
        PUBWEAK CAN5_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN5_IRQHandler
        LDR     R0, =CAN5_DriverIRQHandler
        BX      R0

        PUBWEAK CAN5_ERROR_IRQHandler
        PUBWEAK CAN5_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
CAN5_ERROR_IRQHandler
        LDR     R0, =CAN5_ERROR_DriverIRQHandler
        BX      R0

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

        PUBWEAK FlexSPI1_IRQHandler
        PUBWEAK FlexSPI1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
FlexSPI1_IRQHandler
        LDR     R0, =FlexSPI1_DriverIRQHandler
        BX      R0

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

        PUBWEAK Reserved86_IRQHandler
        PUBWEAK Reserved87_IRQHandler
        PUBWEAK Reserved88_IRQHandler
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
        PUBWEAK uSDHC1_IRQHandler
        PUBWEAK uSDHC1_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
uSDHC1_IRQHandler
        LDR     R0, =uSDHC1_DriverIRQHandler
        BX      R0

        PUBWEAK uSDHC2_IRQHandler
        PUBWEAK uSDHC2_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
uSDHC2_IRQHandler
        LDR     R0, =uSDHC2_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved104_IRQHandler
        PUBWEAK Reserved105_IRQHandler
        PUBWEAK Reserved106_IRQHandler
        PUBWEAK Reserved107_IRQHandler
        PUBWEAK Reserved108_IRQHandler
        PUBWEAK Reserved109_IRQHandler
        PUBWEAK Reserved110_IRQHandler
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

        PUBWEAK Reserved176_IRQHandler
        PUBWEAK Reserved177_IRQHandler
        PUBWEAK Reserved178_IRQHandler
        PUBWEAK Reserved179_IRQHandler
        PUBWEAK Reserved180_IRQHandler
        PUBWEAK Reserved181_IRQHandler
        PUBWEAK Reserved182_IRQHandler
        PUBWEAK Reserved183_IRQHandler
        PUBWEAK Reserved184_IRQHandler
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

        PUBWEAK Reserved189_IRQHandler
        PUBWEAK Reserved190_IRQHandler
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

        PUBWEAK Reserved205_IRQHandler
        PUBWEAK Reserved206_IRQHandler
        PUBWEAK uSDHC3_IRQHandler
        PUBWEAK uSDHC3_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
uSDHC3_IRQHandler
        LDR     R0, =uSDHC3_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved208_IRQHandler
        PUBWEAK Reserved209_IRQHandler
        PUBWEAK Reserved210_IRQHandler
        PUBWEAK Reserved211_IRQHandler
        PUBWEAK Reserved212_IRQHandler
        PUBWEAK Reserved213_IRQHandler
        PUBWEAK Reserved214_IRQHandler
        PUBWEAK ADC_ER_IRQHandler
        PUBWEAK ADC_WD_IRQHandler
        PUBWEAK ADC_EOC_IRQHandler
        PUBWEAK Reserved218_IRQHandler
        PUBWEAK Reserved219_IRQHandler
        PUBWEAK Reserved220_IRQHandler
        PUBWEAK MU5_A_IRQHandler
        PUBWEAK MU6_A_IRQHandler
        PUBWEAK MU7_B_IRQHandler
        PUBWEAK MU8_B_IRQHandler
        PUBWEAK Reserved225_IRQHandler
        PUBWEAK Reserved226_IRQHandler
        PUBWEAK Reserved227_IRQHandler
        PUBWEAK Reserved228_IRQHandler
        PUBWEAK Reserved229_IRQHandler
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

        PUBWEAK Reserved236_IRQHandler
        PUBWEAK ISI_IRQHandler
        PUBWEAK ISP_IRQHandler
        PUBWEAK Reserved239_IRQHandler
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
        PUBWEAK Reserved264_IRQHandler
        PUBWEAK Reserved265_IRQHandler
        PUBWEAK Reserved266_IRQHandler
        PUBWEAK Reserved267_IRQHandler
        PUBWEAK Reserved268_IRQHandler
        PUBWEAK Reserved269_IRQHandler
        PUBWEAK Reserved270_IRQHandler
        PUBWEAK Reserved271_IRQHandler
        PUBWEAK Reserved272_IRQHandler
        PUBWEAK Reserved273_IRQHandler
        PUBWEAK Reserved274_IRQHandler
        PUBWEAK Reserved275_IRQHandler
        PUBWEAK Reserved276_IRQHandler
        PUBWEAK Reserved277_IRQHandler
        PUBWEAK Reserved278_IRQHandler
        PUBWEAK Reserved279_IRQHandler
        PUBWEAK Reserved280_IRQHandler
        PUBWEAK Reserved281_IRQHandler
        PUBWEAK Reserved282_IRQHandler
        PUBWEAK Reserved283_IRQHandler
        PUBWEAK Reserved284_IRQHandler
        PUBWEAK Reserved285_IRQHandler
        PUBWEAK Reserved286_IRQHandler
        PUBWEAK Reserved287_IRQHandler
        PUBWEAK Reserved288_IRQHandler
        PUBWEAK Reserved289_IRQHandler
        PUBWEAK Reserved290_IRQHandler
        PUBWEAK Reserved291_IRQHandler
        PUBWEAK Reserved292_IRQHandler
        PUBWEAK Reserved293_IRQHandler
        PUBWEAK Reserved294_IRQHandler
        PUBWEAK Reserved295_IRQHandler
        PUBWEAK Reserved296_IRQHandler
        PUBWEAK Reserved297_IRQHandler
        PUBWEAK Reserved298_IRQHandler
        PUBWEAK Reserved299_IRQHandler
        PUBWEAK Reserved300_IRQHandler
        PUBWEAK Reserved301_IRQHandler
        PUBWEAK Reserved302_IRQHandler
        PUBWEAK Reserved303_IRQHandler
        PUBWEAK Reserved304_IRQHandler
        PUBWEAK Reserved305_IRQHandler
        PUBWEAK Reserved306_IRQHandler
        PUBWEAK Reserved307_IRQHandler
        PUBWEAK Reserved308_IRQHandler
        PUBWEAK Reserved309_IRQHandler
        PUBWEAK Reserved310_IRQHandler
        PUBWEAK Reserved311_IRQHandler
        PUBWEAK Reserved312_IRQHandler
        PUBWEAK Reserved313_IRQHandler
        PUBWEAK Reserved314_IRQHandler
        PUBWEAK Reserved315_IRQHandler
        PUBWEAK Reserved316_IRQHandler
        PUBWEAK Reserved317_IRQHandler
        PUBWEAK Reserved318_IRQHandler
        PUBWEAK Reserved319_IRQHandler
        PUBWEAK Reserved320_IRQHandler
        PUBWEAK Reserved321_IRQHandler
        PUBWEAK Reserved322_IRQHandler
        PUBWEAK Reserved323_IRQHandler
        PUBWEAK Reserved324_IRQHandler
        PUBWEAK Reserved325_IRQHandler
        PUBWEAK Reserved326_IRQHandler
        PUBWEAK Reserved327_IRQHandler
        PUBWEAK Reserved328_IRQHandler
        PUBWEAK Reserved329_IRQHandler
        PUBWEAK Reserved330_IRQHandler
        PUBWEAK Reserved331_IRQHandler
        PUBWEAK Reserved332_IRQHandler
        PUBWEAK Reserved333_IRQHandler
        PUBWEAK Reserved334_IRQHandler
        PUBWEAK Reserved335_IRQHandler
        PUBWEAK Reserved336_IRQHandler
        PUBWEAK Reserved337_IRQHandler
        PUBWEAK Reserved338_IRQHandler
        PUBWEAK Reserved339_IRQHandler
        PUBWEAK Reserved340_IRQHandler
        PUBWEAK Reserved341_IRQHandler
        PUBWEAK Reserved342_IRQHandler
        PUBWEAK Reserved343_IRQHandler
        PUBWEAK Reserved344_IRQHandler
        PUBWEAK Reserved345_IRQHandler
        PUBWEAK Reserved346_IRQHandler
        PUBWEAK Reserved347_IRQHandler
        PUBWEAK Reserved348_IRQHandler
        PUBWEAK Reserved349_IRQHandler
        PUBWEAK Reserved350_IRQHandler
        PUBWEAK Reserved351_IRQHandler
        PUBWEAK Reserved352_IRQHandler
        PUBWEAK Reserved353_IRQHandler
        PUBWEAK Reserved354_IRQHandler
        PUBWEAK Reserved355_IRQHandler
        PUBWEAK Reserved356_IRQHandler
        PUBWEAK Reserved357_IRQHandler
        PUBWEAK Reserved358_IRQHandler
        PUBWEAK Reserved359_IRQHandler
        PUBWEAK Reserved360_IRQHandler
        PUBWEAK Reserved361_IRQHandler
        PUBWEAK Reserved362_IRQHandler
        PUBWEAK Reserved363_IRQHandler
        PUBWEAK Reserved364_IRQHandler
        PUBWEAK Reserved365_IRQHandler
        PUBWEAK Reserved366_IRQHandler
        PUBWEAK Reserved367_IRQHandler
        PUBWEAK Reserved368_IRQHandler
        PUBWEAK Reserved369_IRQHandler
        PUBWEAK Reserved370_IRQHandler
        PUBWEAK Reserved371_IRQHandler
        PUBWEAK Reserved372_IRQHandler
        PUBWEAK Reserved373_IRQHandler
        PUBWEAK Reserved374_IRQHandler
        PUBWEAK Reserved375_IRQHandler
        PUBWEAK Reserved376_IRQHandler
        PUBWEAK Reserved377_IRQHandler
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

        PUBWEAK Reserved394_IRQHandler
        PUBWEAK Reserved395_IRQHandler
        PUBWEAK Reserved396_IRQHandler
        PUBWEAK Reserved397_IRQHandler
        PUBWEAK Reserved398_IRQHandler
        PUBWEAK Reserved399_IRQHandler
        PUBWEAK Reserved400_IRQHandler
        PUBWEAK Reserved401_IRQHandler
        PUBWEAK Reserved402_IRQHandler
        PUBWEAK Reserved403_IRQHandler
        PUBWEAK Reserved404_IRQHandler
        PUBWEAK Reserved405_IRQHandler
        PUBWEAK Reserved406_IRQHandler
        PUBWEAK Reserved407_IRQHandler
        PUBWEAK Reserved408_IRQHandler
        PUBWEAK Reserved409_IRQHandler
        PUBWEAK Reserved410_IRQHandler
        PUBWEAK Reserved411_IRQHandler
        PUBWEAK Reserved412_IRQHandler
        PUBWEAK Reserved413_IRQHandler
        PUBWEAK Reserved414_IRQHandler
        PUBWEAK Reserved415_IRQHandler
        PUBWEAK Reserved416_IRQHandler
        PUBWEAK Reserved417_IRQHandler
        PUBWEAK Reserved418_IRQHandler
        PUBWEAK Reserved419_IRQHandler
        PUBWEAK Reserved420_IRQHandler
        PUBWEAK Reserved421_IRQHandler
        PUBWEAK Reserved422_IRQHandler
        PUBWEAK Reserved423_IRQHandler
        PUBWEAK Reserved424_IRQHandler
        PUBWEAK Reserved425_IRQHandler
        PUBWEAK Reserved426_IRQHandler
        PUBWEAK Reserved427_IRQHandler
        PUBWEAK Reserved428_IRQHandler
        PUBWEAK Reserved429_IRQHandler
        PUBWEAK Reserved430_IRQHandler
        PUBWEAK Reserved431_IRQHandler
        PUBWEAK Reserved432_IRQHandler
        PUBWEAK Reserved433_IRQHandler
        PUBWEAK Reserved434_IRQHandler
        PUBWEAK Reserved435_IRQHandler
        PUBWEAK Reserved436_IRQHandler
        PUBWEAK Reserved437_IRQHandler
        PUBWEAK Reserved438_IRQHandler
        PUBWEAK Reserved439_IRQHandler
        PUBWEAK Reserved440_IRQHandler
        PUBWEAK Reserved441_IRQHandler
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

        PUBWEAK Reserved458_IRQHandler
        PUBWEAK Reserved459_IRQHandler
        PUBWEAK Reserved460_IRQHandler
        PUBWEAK Reserved461_IRQHandler
        PUBWEAK Reserved462_IRQHandler
        PUBWEAK Reserved463_IRQHandler
        PUBWEAK Reserved464_IRQHandler
        PUBWEAK Reserved465_IRQHandler
        PUBWEAK Reserved466_IRQHandler
        PUBWEAK Reserved467_IRQHandler
        PUBWEAK Reserved468_IRQHandler
        PUBWEAK Reserved469_IRQHandler
        PUBWEAK Reserved470_IRQHandler
        PUBWEAK Reserved471_IRQHandler
        PUBWEAK Reserved472_IRQHandler
        PUBWEAK Reserved473_IRQHandler
        PUBWEAK Reserved474_IRQHandler
        PUBWEAK Reserved475_IRQHandler
        PUBWEAK Reserved476_IRQHandler
        PUBWEAK Reserved477_IRQHandler
        PUBWEAK Reserved478_IRQHandler
        PUBWEAK Reserved479_IRQHandler
        PUBWEAK Reserved480_IRQHandler
        PUBWEAK Reserved481_IRQHandler
        PUBWEAK Reserved482_IRQHandler
        PUBWEAK Reserved483_IRQHandler
        PUBWEAK Reserved484_IRQHandler
        PUBWEAK Reserved485_IRQHandler
        PUBWEAK Reserved486_IRQHandler
        PUBWEAK Reserved487_IRQHandler
        PUBWEAK Reserved488_IRQHandler
        PUBWEAK Reserved489_IRQHandler
        PUBWEAK Reserved490_IRQHandler
        PUBWEAK Reserved491_IRQHandler
        PUBWEAK Reserved492_IRQHandler
        PUBWEAK Reserved493_IRQHandler
        PUBWEAK Reserved494_IRQHandler
        PUBWEAK Reserved495_IRQHandler
        PUBWEAK Reserved496_IRQHandler
        PUBWEAK Reserved497_IRQHandler
        PUBWEAK Reserved498_IRQHandler
        PUBWEAK Reserved499_IRQHandler
        PUBWEAK Reserved500_IRQHandler
        PUBWEAK Reserved501_IRQHandler
        PUBWEAK Reserved502_IRQHandler
        PUBWEAK Reserved503_IRQHandler
        PUBWEAK Reserved504_IRQHandler
        PUBWEAK Reserved505_IRQHandler
        PUBWEAK Reserved506_IRQHandler
        PUBWEAK Reserved507_IRQHandler
        PUBWEAK Reserved508_IRQHandler
        PUBWEAK Reserved509_IRQHandler
        PUBWEAK Reserved510_IRQHandler
        PUBWEAK Reserved511_IRQHandler
        PUBWEAK Reserved512_IRQHandler
        PUBWEAK Reserved513_IRQHandler
        PUBWEAK Reserved514_IRQHandler
        PUBWEAK Reserved515_IRQHandler
        PUBWEAK Reserved516_IRQHandler
        PUBWEAK Reserved517_IRQHandler
        PUBWEAK Reserved518_IRQHandler
        PUBWEAK Reserved519_IRQHandler
        PUBWEAK Reserved520_IRQHandler
        PUBWEAK Reserved521_IRQHandler
        PUBWEAK Reserved522_IRQHandler
        PUBWEAK Reserved523_IRQHandler
        PUBWEAK Reserved524_IRQHandler
        PUBWEAK Reserved525_IRQHandler
        PUBWEAK Reserved526_IRQHandler
        PUBWEAK Reserved527_IRQHandler
        PUBWEAK Reserved528_IRQHandler
        PUBWEAK Reserved529_IRQHandler
        PUBWEAK Reserved530_IRQHandler
        PUBWEAK Reserved531_IRQHandler
        PUBWEAK Reserved532_IRQHandler
        PUBWEAK Reserved533_IRQHandler
        PUBWEAK Reserved534_IRQHandler
        PUBWEAK Reserved535_IRQHandler
        PUBWEAK Reserved536_IRQHandler
        PUBWEAK Reserved537_IRQHandler
        PUBWEAK Reserved538_IRQHandler
        PUBWEAK Reserved539_IRQHandler
        PUBWEAK Reserved540_IRQHandler
        PUBWEAK Reserved541_IRQHandler
        PUBWEAK Reserved542_IRQHandler
        PUBWEAK Reserved543_IRQHandler
        PUBWEAK Reserved544_IRQHandler
        PUBWEAK Reserved545_IRQHandler
        PUBWEAK Reserved546_IRQHandler
        PUBWEAK Reserved547_IRQHandler
        PUBWEAK Reserved548_IRQHandler
        PUBWEAK Reserved549_IRQHandler
        PUBWEAK Reserved550_IRQHandler
        PUBWEAK Reserved551_IRQHandler
        PUBWEAK Reserved552_IRQHandler
        PUBWEAK Reserved553_IRQHandler
        PUBWEAK Reserved554_IRQHandler
        PUBWEAK Reserved555_IRQHandler
        PUBWEAK Reserved556_IRQHandler
        PUBWEAK Reserved557_IRQHandler
        PUBWEAK Reserved558_IRQHandler
        PUBWEAK Reserved559_IRQHandler
        PUBWEAK Reserved560_IRQHandler
        PUBWEAK Reserved561_IRQHandler
        PUBWEAK Reserved562_IRQHandler
        PUBWEAK Reserved563_IRQHandler
        PUBWEAK Reserved564_IRQHandler
        PUBWEAK Reserved565_IRQHandler
        PUBWEAK Reserved566_IRQHandler
        PUBWEAK Reserved567_IRQHandler
        PUBWEAK Reserved568_IRQHandler
        PUBWEAK Reserved569_IRQHandler
        PUBWEAK Reserved570_IRQHandler
        PUBWEAK Reserved571_IRQHandler
        PUBWEAK Reserved572_IRQHandler
        PUBWEAK Reserved573_IRQHandler
        PUBWEAK Reserved574_IRQHandler
        PUBWEAK Reserved575_IRQHandler
        PUBWEAK Reserved576_IRQHandler
        PUBWEAK Reserved577_IRQHandler
        PUBWEAK Reserved578_IRQHandler
        PUBWEAK Reserved579_IRQHandler
        PUBWEAK Reserved580_IRQHandler
        PUBWEAK Reserved581_IRQHandler
        PUBWEAK Reserved582_IRQHandler
        PUBWEAK Reserved583_IRQHandler
        PUBWEAK Reserved584_IRQHandler
        PUBWEAK Reserved585_IRQHandler
        PUBWEAK Reserved586_IRQHandler
        PUBWEAK Reserved587_IRQHandler
        PUBWEAK Reserved588_IRQHandler
        PUBWEAK Reserved589_IRQHandler
        PUBWEAK Reserved590_IRQHandler
        PUBWEAK Reserved591_IRQHandler
        PUBWEAK Reserved592_IRQHandler
        PUBWEAK Reserved593_IRQHandler
        PUBWEAK Reserved594_IRQHandler
        PUBWEAK Reserved595_IRQHandler
        PUBWEAK Reserved596_IRQHandler
        PUBWEAK Reserved597_IRQHandler
        PUBWEAK Reserved598_IRQHandler
        PUBWEAK Reserved599_IRQHandler
        PUBWEAK Reserved600_IRQHandler
        PUBWEAK Reserved601_IRQHandler
        PUBWEAK Reserved602_IRQHandler
        PUBWEAK Reserved603_IRQHandler
        PUBWEAK Reserved604_IRQHandler
        PUBWEAK Reserved605_IRQHandler
        PUBWEAK Reserved606_IRQHandler
        PUBWEAK Reserved607_IRQHandler
        PUBWEAK Reserved608_IRQHandler
        PUBWEAK Reserved609_IRQHandler
        PUBWEAK Reserved610_IRQHandler
        PUBWEAK Reserved611_IRQHandler
        PUBWEAK Reserved612_IRQHandler
        PUBWEAK Reserved613_IRQHandler
        PUBWEAK Reserved614_IRQHandler
        PUBWEAK Reserved615_IRQHandler
        PUBWEAK Reserved616_IRQHandler
        PUBWEAK Reserved617_IRQHandler
        PUBWEAK Reserved618_IRQHandler
        PUBWEAK Reserved619_IRQHandler
        PUBWEAK Reserved620_IRQHandler
        PUBWEAK Reserved621_IRQHandler
        PUBWEAK Reserved622_IRQHandler
        PUBWEAK Reserved623_IRQHandler
        PUBWEAK Reserved624_IRQHandler
        PUBWEAK Reserved625_IRQHandler
        PUBWEAK Reserved626_IRQHandler
        PUBWEAK Reserved627_IRQHandler
        PUBWEAK Reserved628_IRQHandler
        PUBWEAK Reserved629_IRQHandler
        PUBWEAK Reserved630_IRQHandler
        PUBWEAK Reserved631_IRQHandler
        PUBWEAK Reserved632_IRQHandler
        PUBWEAK Reserved633_IRQHandler
        PUBWEAK Reserved634_IRQHandler
        PUBWEAK Reserved635_IRQHandler
        PUBWEAK Reserved636_IRQHandler
        PUBWEAK Reserved637_IRQHandler
        PUBWEAK Reserved638_IRQHandler
        PUBWEAK Reserved639_IRQHandler
        PUBWEAK Reserved640_IRQHandler
        PUBWEAK Reserved641_IRQHandler
        PUBWEAK Reserved642_IRQHandler
        PUBWEAK Reserved643_IRQHandler
        PUBWEAK Reserved644_IRQHandler
        PUBWEAK Reserved645_IRQHandler
        PUBWEAK Reserved646_IRQHandler
        PUBWEAK Reserved647_IRQHandler
        PUBWEAK Reserved648_IRQHandler
        PUBWEAK Reserved649_IRQHandler
        PUBWEAK Reserved650_IRQHandler
        PUBWEAK Reserved651_IRQHandler
        PUBWEAK Reserved652_IRQHandler
        PUBWEAK Reserved653_IRQHandler
        PUBWEAK Reserved654_IRQHandler
        PUBWEAK Reserved655_IRQHandler
        PUBWEAK Reserved656_IRQHandler
        PUBWEAK Reserved657_IRQHandler
        PUBWEAK Reserved658_IRQHandler
        PUBWEAK Reserved659_IRQHandler
        PUBWEAK Reserved660_IRQHandler
        PUBWEAK Reserved661_IRQHandler
        PUBWEAK Reserved662_IRQHandler
        PUBWEAK Reserved663_IRQHandler
        PUBWEAK Reserved664_IRQHandler
        PUBWEAK Reserved665_IRQHandler
        PUBWEAK Reserved666_IRQHandler
        PUBWEAK Reserved667_IRQHandler
        PUBWEAK Reserved668_IRQHandler
        PUBWEAK Reserved669_IRQHandler
        PUBWEAK Reserved670_IRQHandler
        PUBWEAK Reserved671_IRQHandler
        PUBWEAK Reserved672_IRQHandler
        PUBWEAK Reserved673_IRQHandler
        PUBWEAK Reserved674_IRQHandler
        PUBWEAK Reserved675_IRQHandler
        PUBWEAK Reserved676_IRQHandler
        PUBWEAK Reserved677_IRQHandler
        PUBWEAK Reserved678_IRQHandler
        PUBWEAK Reserved679_IRQHandler
        PUBWEAK Reserved680_IRQHandler
        PUBWEAK Reserved681_IRQHandler
        PUBWEAK Reserved682_IRQHandler
        PUBWEAK Reserved683_IRQHandler
        PUBWEAK Reserved684_IRQHandler
        PUBWEAK Reserved685_IRQHandler
        PUBWEAK Reserved686_IRQHandler
        PUBWEAK Reserved687_IRQHandler
        PUBWEAK Reserved688_IRQHandler
        PUBWEAK Reserved689_IRQHandler
        PUBWEAK Reserved690_IRQHandler
        PUBWEAK Reserved691_IRQHandler
        PUBWEAK Reserved692_IRQHandler
        PUBWEAK Reserved693_IRQHandler
        PUBWEAK Reserved694_IRQHandler
        PUBWEAK Reserved695_IRQHandler
        PUBWEAK Reserved696_IRQHandler
        PUBWEAK Reserved697_IRQHandler
        PUBWEAK Reserved698_IRQHandler
        PUBWEAK Reserved699_IRQHandler
        PUBWEAK Reserved700_IRQHandler
        PUBWEAK Reserved701_IRQHandler
        PUBWEAK Reserved702_IRQHandler
        PUBWEAK Reserved703_IRQHandler
        PUBWEAK Reserved704_IRQHandler
        PUBWEAK Reserved705_IRQHandler
        PUBWEAK Reserved706_IRQHandler
        PUBWEAK Reserved707_IRQHandler
        PUBWEAK Reserved708_IRQHandler
        PUBWEAK Reserved709_IRQHandler
        PUBWEAK Reserved710_IRQHandler
        PUBWEAK Reserved711_IRQHandler
        PUBWEAK Reserved712_IRQHandler
        PUBWEAK DMA5_4_ERROR_IRQHandler
        PUBWEAK DMA5_4_ERROR_DriverIRQHandler
        SECTION .text:CODE:REORDER:NOROOT(2)
DMA5_4_ERROR_IRQHandler
        LDR     R0, =DMA5_4_ERROR_DriverIRQHandler
        BX      R0

        PUBWEAK Reserved714_IRQHandler
        PUBWEAK Reserved715_IRQHandler
        PUBWEAK Reserved716_IRQHandler
        PUBWEAK Reserved717_IRQHandler
        PUBWEAK Reserved718_IRQHandler
        PUBWEAK Reserved719_IRQHandler
        PUBWEAK Reserved720_IRQHandler
        PUBWEAK Reserved721_IRQHandler
        PUBWEAK Reserved722_IRQHandler
        PUBWEAK Reserved723_IRQHandler
        PUBWEAK Reserved724_IRQHandler
        PUBWEAK Reserved725_IRQHandler
        PUBWEAK Reserved726_IRQHandler
        PUBWEAK Reserved727_IRQHandler
        PUBWEAK Reserved728_IRQHandler
        PUBWEAK Reserved729_IRQHandler
        PUBWEAK Reserved730_IRQHandler
        PUBWEAK Reserved731_IRQHandler
        PUBWEAK Reserved732_IRQHandler
        PUBWEAK Reserved733_IRQHandler
        PUBWEAK Reserved734_IRQHandler
        PUBWEAK Reserved735_IRQHandler
        PUBWEAK Reserved736_IRQHandler
        PUBWEAK Reserved737_IRQHandler
        PUBWEAK Reserved738_IRQHandler
        PUBWEAK Reserved739_IRQHandler
        PUBWEAK Reserved740_IRQHandler
        PUBWEAK Reserved741_IRQHandler
        PUBWEAK Reserved742_IRQHandler
        PUBWEAK Reserved743_IRQHandler
        PUBWEAK Reserved744_IRQHandler
        PUBWEAK Reserved745_IRQHandler
        PUBWEAK Reserved746_IRQHandler
        PUBWEAK Reserved747_IRQHandler
        PUBWEAK Reserved748_IRQHandler
        PUBWEAK Reserved749_IRQHandler
        PUBWEAK Reserved750_IRQHandler
        PUBWEAK Reserved751_IRQHandler
        PUBWEAK Reserved752_IRQHandler
        PUBWEAK Reserved753_IRQHandler
        PUBWEAK Reserved754_IRQHandler
        PUBWEAK Reserved755_IRQHandler
        PUBWEAK Reserved756_IRQHandler
        PUBWEAK Reserved757_IRQHandler
        PUBWEAK Reserved758_IRQHandler
        PUBWEAK Reserved759_IRQHandler
        PUBWEAK Reserved760_IRQHandler
        PUBWEAK Reserved761_IRQHandler
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

        PUBWEAK Reserved778_IRQHandler
        PUBWEAK Reserved779_IRQHandler
        PUBWEAK Reserved780_IRQHandler
        PUBWEAK Reserved781_IRQHandler
        PUBWEAK Reserved782_IRQHandler
        PUBWEAK Reserved783_IRQHandler
        PUBWEAK Reserved784_IRQHandler
        PUBWEAK Reserved785_IRQHandler
        PUBWEAK Reserved786_IRQHandler
        PUBWEAK Reserved787_IRQHandler
        PUBWEAK Reserved788_IRQHandler
        PUBWEAK Reserved789_IRQHandler
        PUBWEAK Reserved790_IRQHandler
        PUBWEAK Reserved791_IRQHandler
        PUBWEAK Reserved792_IRQHandler
        PUBWEAK Reserved793_IRQHandler
        PUBWEAK Reserved794_IRQHandler
        PUBWEAK Reserved795_IRQHandler
        PUBWEAK Reserved796_IRQHandler
        PUBWEAK Reserved797_IRQHandler
        PUBWEAK Reserved798_IRQHandler
        PUBWEAK Reserved799_IRQHandler
        PUBWEAK Reserved800_IRQHandler
        PUBWEAK Reserved801_IRQHandler
        PUBWEAK Reserved802_IRQHandler
        PUBWEAK Reserved803_IRQHandler
        PUBWEAK Reserved804_IRQHandler
        PUBWEAK Reserved805_IRQHandler
        PUBWEAK Reserved806_IRQHandler
        PUBWEAK Reserved807_IRQHandler
        PUBWEAK Reserved808_IRQHandler
        PUBWEAK Reserved809_IRQHandler
        PUBWEAK Reserved810_IRQHandler
        PUBWEAK Reserved811_IRQHandler
        PUBWEAK Reserved812_IRQHandler
        PUBWEAK Reserved813_IRQHandler
        PUBWEAK Reserved814_IRQHandler
        PUBWEAK Reserved815_IRQHandler
        PUBWEAK Reserved816_IRQHandler
        PUBWEAK Reserved817_IRQHandler
        PUBWEAK Reserved818_IRQHandler
        PUBWEAK Reserved819_IRQHandler
        PUBWEAK Reserved820_IRQHandler
        PUBWEAK Reserved821_IRQHandler
        PUBWEAK Reserved822_IRQHandler
        PUBWEAK Reserved823_IRQHandler
        PUBWEAK Reserved824_IRQHandler
        PUBWEAK Reserved825_IRQHandler
        PUBWEAK Reserved826_IRQHandler
        PUBWEAK Reserved827_IRQHandler
        PUBWEAK Reserved828_IRQHandler
        PUBWEAK Reserved829_IRQHandler
        PUBWEAK Reserved830_IRQHandler
        PUBWEAK Reserved831_IRQHandler
        PUBWEAK Reserved832_IRQHandler
        PUBWEAK Reserved833_IRQHandler
        PUBWEAK DefaultISR
        SECTION .text:CODE:REORDER:NOROOT(1)
Reserved16_IRQHandler
Reserved17_IRQHandler
Reserved18_IRQHandler
Reserved19_IRQHandler
Reserved20_IRQHandler
Reserved21_IRQHandler
Reserved22_IRQHandler
Reserved23_IRQHandler
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
Reserved37_IRQHandler
Reserved38_IRQHandler
Reserved39_IRQHandler
Reserved40_IRQHandler
Reserved41_IRQHandler
Reserved42_IRQHandler
V2X_FH_APCH0_IRQHandler
V2X_FH_APHSM1_IRQHandler
TPM1_IRQHandler
TPM2_IRQHandler
WDOG1_IRQHandler
WDOG2_IRQHandler
TRDC_MGR_A_IRQHandler
SAI1_DriverIRQHandler
Reserved51_IRQHandler
Reserved52_IRQHandler
Reserved53_IRQHandler
CAN2_DriverIRQHandler
CAN2_ERROR_DriverIRQHandler
CAN3_DriverIRQHandler
CAN3_ERROR_DriverIRQHandler
CAN4_DriverIRQHandler
CAN4_ERROR_DriverIRQHandler
CAN5_DriverIRQHandler
CAN5_ERROR_DriverIRQHandler
FLEXIO1_DriverIRQHandler
FLEXIO2_DriverIRQHandler
FlexSPI1_DriverIRQHandler
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
Reserved86_IRQHandler
Reserved87_IRQHandler
Reserved88_IRQHandler
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
uSDHC1_DriverIRQHandler
uSDHC2_DriverIRQHandler
Reserved104_IRQHandler
Reserved105_IRQHandler
Reserved106_IRQHandler
Reserved107_IRQHandler
Reserved108_IRQHandler
Reserved109_IRQHandler
Reserved110_IRQHandler
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
Reserved176_IRQHandler
Reserved177_IRQHandler
Reserved178_IRQHandler
Reserved179_IRQHandler
Reserved180_IRQHandler
Reserved181_IRQHandler
Reserved182_IRQHandler
Reserved183_IRQHandler
Reserved184_IRQHandler
SAI2_DriverIRQHandler
SAI3_DriverIRQHandler
SAI4_DriverIRQHandler
SAI5_DriverIRQHandler
Reserved189_IRQHandler
Reserved190_IRQHandler
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
Reserved205_IRQHandler
Reserved206_IRQHandler
uSDHC3_DriverIRQHandler
Reserved208_IRQHandler
Reserved209_IRQHandler
Reserved210_IRQHandler
Reserved211_IRQHandler
Reserved212_IRQHandler
Reserved213_IRQHandler
Reserved214_IRQHandler
ADC_ER_IRQHandler
ADC_WD_IRQHandler
ADC_EOC_IRQHandler
Reserved218_IRQHandler
Reserved219_IRQHandler
Reserved220_IRQHandler
MU5_A_IRQHandler
MU6_A_IRQHandler
MU7_B_IRQHandler
MU8_B_IRQHandler
Reserved225_IRQHandler
Reserved226_IRQHandler
Reserved227_IRQHandler
Reserved228_IRQHandler
Reserved229_IRQHandler
DISP_IRQSTEER0_DriverIRQHandler
DISP_IRQSTEER1_DriverIRQHandler
DISP_IRQSTEER2_DriverIRQHandler
DISP_IRQSTEER3_DriverIRQHandler
DISP_IRQSTEER4_DriverIRQHandler
DISP_IRQSTEER7_DriverIRQHandler
Reserved236_IRQHandler
ISI_IRQHandler
ISP_IRQHandler
Reserved239_IRQHandler
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
Reserved264_IRQHandler
Reserved265_IRQHandler
Reserved266_IRQHandler
Reserved267_IRQHandler
Reserved268_IRQHandler
Reserved269_IRQHandler
Reserved270_IRQHandler
Reserved271_IRQHandler
Reserved272_IRQHandler
Reserved273_IRQHandler
Reserved274_IRQHandler
Reserved275_IRQHandler
Reserved276_IRQHandler
Reserved277_IRQHandler
Reserved278_IRQHandler
Reserved279_IRQHandler
Reserved280_IRQHandler
Reserved281_IRQHandler
Reserved282_IRQHandler
Reserved283_IRQHandler
Reserved284_IRQHandler
Reserved285_IRQHandler
Reserved286_IRQHandler
Reserved287_IRQHandler
Reserved288_IRQHandler
Reserved289_IRQHandler
Reserved290_IRQHandler
Reserved291_IRQHandler
Reserved292_IRQHandler
Reserved293_IRQHandler
Reserved294_IRQHandler
Reserved295_IRQHandler
Reserved296_IRQHandler
Reserved297_IRQHandler
Reserved298_IRQHandler
Reserved299_IRQHandler
Reserved300_IRQHandler
Reserved301_IRQHandler
Reserved302_IRQHandler
Reserved303_IRQHandler
Reserved304_IRQHandler
Reserved305_IRQHandler
Reserved306_IRQHandler
Reserved307_IRQHandler
Reserved308_IRQHandler
Reserved309_IRQHandler
Reserved310_IRQHandler
Reserved311_IRQHandler
Reserved312_IRQHandler
Reserved313_IRQHandler
Reserved314_IRQHandler
Reserved315_IRQHandler
Reserved316_IRQHandler
Reserved317_IRQHandler
Reserved318_IRQHandler
Reserved319_IRQHandler
Reserved320_IRQHandler
Reserved321_IRQHandler
Reserved322_IRQHandler
Reserved323_IRQHandler
Reserved324_IRQHandler
Reserved325_IRQHandler
Reserved326_IRQHandler
Reserved327_IRQHandler
Reserved328_IRQHandler
Reserved329_IRQHandler
Reserved330_IRQHandler
Reserved331_IRQHandler
Reserved332_IRQHandler
Reserved333_IRQHandler
Reserved334_IRQHandler
Reserved335_IRQHandler
Reserved336_IRQHandler
Reserved337_IRQHandler
Reserved338_IRQHandler
Reserved339_IRQHandler
Reserved340_IRQHandler
Reserved341_IRQHandler
Reserved342_IRQHandler
Reserved343_IRQHandler
Reserved344_IRQHandler
Reserved345_IRQHandler
Reserved346_IRQHandler
Reserved347_IRQHandler
Reserved348_IRQHandler
Reserved349_IRQHandler
Reserved350_IRQHandler
Reserved351_IRQHandler
Reserved352_IRQHandler
Reserved353_IRQHandler
Reserved354_IRQHandler
Reserved355_IRQHandler
Reserved356_IRQHandler
Reserved357_IRQHandler
Reserved358_IRQHandler
Reserved359_IRQHandler
Reserved360_IRQHandler
Reserved361_IRQHandler
Reserved362_IRQHandler
Reserved363_IRQHandler
Reserved364_IRQHandler
Reserved365_IRQHandler
Reserved366_IRQHandler
Reserved367_IRQHandler
Reserved368_IRQHandler
Reserved369_IRQHandler
Reserved370_IRQHandler
Reserved371_IRQHandler
Reserved372_IRQHandler
Reserved373_IRQHandler
Reserved374_IRQHandler
Reserved375_IRQHandler
Reserved376_IRQHandler
Reserved377_IRQHandler
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
Reserved394_IRQHandler
Reserved395_IRQHandler
Reserved396_IRQHandler
Reserved397_IRQHandler
Reserved398_IRQHandler
Reserved399_IRQHandler
Reserved400_IRQHandler
Reserved401_IRQHandler
Reserved402_IRQHandler
Reserved403_IRQHandler
Reserved404_IRQHandler
Reserved405_IRQHandler
Reserved406_IRQHandler
Reserved407_IRQHandler
Reserved408_IRQHandler
Reserved409_IRQHandler
Reserved410_IRQHandler
Reserved411_IRQHandler
Reserved412_IRQHandler
Reserved413_IRQHandler
Reserved414_IRQHandler
Reserved415_IRQHandler
Reserved416_IRQHandler
Reserved417_IRQHandler
Reserved418_IRQHandler
Reserved419_IRQHandler
Reserved420_IRQHandler
Reserved421_IRQHandler
Reserved422_IRQHandler
Reserved423_IRQHandler
Reserved424_IRQHandler
Reserved425_IRQHandler
Reserved426_IRQHandler
Reserved427_IRQHandler
Reserved428_IRQHandler
Reserved429_IRQHandler
Reserved430_IRQHandler
Reserved431_IRQHandler
Reserved432_IRQHandler
Reserved433_IRQHandler
Reserved434_IRQHandler
Reserved435_IRQHandler
Reserved436_IRQHandler
Reserved437_IRQHandler
Reserved438_IRQHandler
Reserved439_IRQHandler
Reserved440_IRQHandler
Reserved441_IRQHandler
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
Reserved458_IRQHandler
Reserved459_IRQHandler
Reserved460_IRQHandler
Reserved461_IRQHandler
Reserved462_IRQHandler
Reserved463_IRQHandler
Reserved464_IRQHandler
Reserved465_IRQHandler
Reserved466_IRQHandler
Reserved467_IRQHandler
Reserved468_IRQHandler
Reserved469_IRQHandler
Reserved470_IRQHandler
Reserved471_IRQHandler
Reserved472_IRQHandler
Reserved473_IRQHandler
Reserved474_IRQHandler
Reserved475_IRQHandler
Reserved476_IRQHandler
Reserved477_IRQHandler
Reserved478_IRQHandler
Reserved479_IRQHandler
Reserved480_IRQHandler
Reserved481_IRQHandler
Reserved482_IRQHandler
Reserved483_IRQHandler
Reserved484_IRQHandler
Reserved485_IRQHandler
Reserved486_IRQHandler
Reserved487_IRQHandler
Reserved488_IRQHandler
Reserved489_IRQHandler
Reserved490_IRQHandler
Reserved491_IRQHandler
Reserved492_IRQHandler
Reserved493_IRQHandler
Reserved494_IRQHandler
Reserved495_IRQHandler
Reserved496_IRQHandler
Reserved497_IRQHandler
Reserved498_IRQHandler
Reserved499_IRQHandler
Reserved500_IRQHandler
Reserved501_IRQHandler
Reserved502_IRQHandler
Reserved503_IRQHandler
Reserved504_IRQHandler
Reserved505_IRQHandler
Reserved506_IRQHandler
Reserved507_IRQHandler
Reserved508_IRQHandler
Reserved509_IRQHandler
Reserved510_IRQHandler
Reserved511_IRQHandler
Reserved512_IRQHandler
Reserved513_IRQHandler
Reserved514_IRQHandler
Reserved515_IRQHandler
Reserved516_IRQHandler
Reserved517_IRQHandler
Reserved518_IRQHandler
Reserved519_IRQHandler
Reserved520_IRQHandler
Reserved521_IRQHandler
Reserved522_IRQHandler
Reserved523_IRQHandler
Reserved524_IRQHandler
Reserved525_IRQHandler
Reserved526_IRQHandler
Reserved527_IRQHandler
Reserved528_IRQHandler
Reserved529_IRQHandler
Reserved530_IRQHandler
Reserved531_IRQHandler
Reserved532_IRQHandler
Reserved533_IRQHandler
Reserved534_IRQHandler
Reserved535_IRQHandler
Reserved536_IRQHandler
Reserved537_IRQHandler
Reserved538_IRQHandler
Reserved539_IRQHandler
Reserved540_IRQHandler
Reserved541_IRQHandler
Reserved542_IRQHandler
Reserved543_IRQHandler
Reserved544_IRQHandler
Reserved545_IRQHandler
Reserved546_IRQHandler
Reserved547_IRQHandler
Reserved548_IRQHandler
Reserved549_IRQHandler
Reserved550_IRQHandler
Reserved551_IRQHandler
Reserved552_IRQHandler
Reserved553_IRQHandler
Reserved554_IRQHandler
Reserved555_IRQHandler
Reserved556_IRQHandler
Reserved557_IRQHandler
Reserved558_IRQHandler
Reserved559_IRQHandler
Reserved560_IRQHandler
Reserved561_IRQHandler
Reserved562_IRQHandler
Reserved563_IRQHandler
Reserved564_IRQHandler
Reserved565_IRQHandler
Reserved566_IRQHandler
Reserved567_IRQHandler
Reserved568_IRQHandler
Reserved569_IRQHandler
Reserved570_IRQHandler
Reserved571_IRQHandler
Reserved572_IRQHandler
Reserved573_IRQHandler
Reserved574_IRQHandler
Reserved575_IRQHandler
Reserved576_IRQHandler
Reserved577_IRQHandler
Reserved578_IRQHandler
Reserved579_IRQHandler
Reserved580_IRQHandler
Reserved581_IRQHandler
Reserved582_IRQHandler
Reserved583_IRQHandler
Reserved584_IRQHandler
Reserved585_IRQHandler
Reserved586_IRQHandler
Reserved587_IRQHandler
Reserved588_IRQHandler
Reserved589_IRQHandler
Reserved590_IRQHandler
Reserved591_IRQHandler
Reserved592_IRQHandler
Reserved593_IRQHandler
Reserved594_IRQHandler
Reserved595_IRQHandler
Reserved596_IRQHandler
Reserved597_IRQHandler
Reserved598_IRQHandler
Reserved599_IRQHandler
Reserved600_IRQHandler
Reserved601_IRQHandler
Reserved602_IRQHandler
Reserved603_IRQHandler
Reserved604_IRQHandler
Reserved605_IRQHandler
Reserved606_IRQHandler
Reserved607_IRQHandler
Reserved608_IRQHandler
Reserved609_IRQHandler
Reserved610_IRQHandler
Reserved611_IRQHandler
Reserved612_IRQHandler
Reserved613_IRQHandler
Reserved614_IRQHandler
Reserved615_IRQHandler
Reserved616_IRQHandler
Reserved617_IRQHandler
Reserved618_IRQHandler
Reserved619_IRQHandler
Reserved620_IRQHandler
Reserved621_IRQHandler
Reserved622_IRQHandler
Reserved623_IRQHandler
Reserved624_IRQHandler
Reserved625_IRQHandler
Reserved626_IRQHandler
Reserved627_IRQHandler
Reserved628_IRQHandler
Reserved629_IRQHandler
Reserved630_IRQHandler
Reserved631_IRQHandler
Reserved632_IRQHandler
Reserved633_IRQHandler
Reserved634_IRQHandler
Reserved635_IRQHandler
Reserved636_IRQHandler
Reserved637_IRQHandler
Reserved638_IRQHandler
Reserved639_IRQHandler
Reserved640_IRQHandler
Reserved641_IRQHandler
Reserved642_IRQHandler
Reserved643_IRQHandler
Reserved644_IRQHandler
Reserved645_IRQHandler
Reserved646_IRQHandler
Reserved647_IRQHandler
Reserved648_IRQHandler
Reserved649_IRQHandler
Reserved650_IRQHandler
Reserved651_IRQHandler
Reserved652_IRQHandler
Reserved653_IRQHandler
Reserved654_IRQHandler
Reserved655_IRQHandler
Reserved656_IRQHandler
Reserved657_IRQHandler
Reserved658_IRQHandler
Reserved659_IRQHandler
Reserved660_IRQHandler
Reserved661_IRQHandler
Reserved662_IRQHandler
Reserved663_IRQHandler
Reserved664_IRQHandler
Reserved665_IRQHandler
Reserved666_IRQHandler
Reserved667_IRQHandler
Reserved668_IRQHandler
Reserved669_IRQHandler
Reserved670_IRQHandler
Reserved671_IRQHandler
Reserved672_IRQHandler
Reserved673_IRQHandler
Reserved674_IRQHandler
Reserved675_IRQHandler
Reserved676_IRQHandler
Reserved677_IRQHandler
Reserved678_IRQHandler
Reserved679_IRQHandler
Reserved680_IRQHandler
Reserved681_IRQHandler
Reserved682_IRQHandler
Reserved683_IRQHandler
Reserved684_IRQHandler
Reserved685_IRQHandler
Reserved686_IRQHandler
Reserved687_IRQHandler
Reserved688_IRQHandler
Reserved689_IRQHandler
Reserved690_IRQHandler
Reserved691_IRQHandler
Reserved692_IRQHandler
Reserved693_IRQHandler
Reserved694_IRQHandler
Reserved695_IRQHandler
Reserved696_IRQHandler
Reserved697_IRQHandler
Reserved698_IRQHandler
Reserved699_IRQHandler
Reserved700_IRQHandler
Reserved701_IRQHandler
Reserved702_IRQHandler
Reserved703_IRQHandler
Reserved704_IRQHandler
Reserved705_IRQHandler
Reserved706_IRQHandler
Reserved707_IRQHandler
Reserved708_IRQHandler
Reserved709_IRQHandler
Reserved710_IRQHandler
Reserved711_IRQHandler
Reserved712_IRQHandler
DMA5_4_ERROR_DriverIRQHandler
Reserved714_IRQHandler
Reserved715_IRQHandler
Reserved716_IRQHandler
Reserved717_IRQHandler
Reserved718_IRQHandler
Reserved719_IRQHandler
Reserved720_IRQHandler
Reserved721_IRQHandler
Reserved722_IRQHandler
Reserved723_IRQHandler
Reserved724_IRQHandler
Reserved725_IRQHandler
Reserved726_IRQHandler
Reserved727_IRQHandler
Reserved728_IRQHandler
Reserved729_IRQHandler
Reserved730_IRQHandler
Reserved731_IRQHandler
Reserved732_IRQHandler
Reserved733_IRQHandler
Reserved734_IRQHandler
Reserved735_IRQHandler
Reserved736_IRQHandler
Reserved737_IRQHandler
Reserved738_IRQHandler
Reserved739_IRQHandler
Reserved740_IRQHandler
Reserved741_IRQHandler
Reserved742_IRQHandler
Reserved743_IRQHandler
Reserved744_IRQHandler
Reserved745_IRQHandler
Reserved746_IRQHandler
Reserved747_IRQHandler
Reserved748_IRQHandler
Reserved749_IRQHandler
Reserved750_IRQHandler
Reserved751_IRQHandler
Reserved752_IRQHandler
Reserved753_IRQHandler
Reserved754_IRQHandler
Reserved755_IRQHandler
Reserved756_IRQHandler
Reserved757_IRQHandler
Reserved758_IRQHandler
Reserved759_IRQHandler
Reserved760_IRQHandler
Reserved761_IRQHandler
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
Reserved778_IRQHandler
Reserved779_IRQHandler
Reserved780_IRQHandler
Reserved781_IRQHandler
Reserved782_IRQHandler
Reserved783_IRQHandler
Reserved784_IRQHandler
Reserved785_IRQHandler
Reserved786_IRQHandler
Reserved787_IRQHandler
Reserved788_IRQHandler
Reserved789_IRQHandler
Reserved790_IRQHandler
Reserved791_IRQHandler
Reserved792_IRQHandler
Reserved793_IRQHandler
Reserved794_IRQHandler
Reserved795_IRQHandler
Reserved796_IRQHandler
Reserved797_IRQHandler
Reserved798_IRQHandler
Reserved799_IRQHandler
Reserved800_IRQHandler
Reserved801_IRQHandler
Reserved802_IRQHandler
Reserved803_IRQHandler
Reserved804_IRQHandler
Reserved805_IRQHandler
Reserved806_IRQHandler
Reserved807_IRQHandler
Reserved808_IRQHandler
Reserved809_IRQHandler
Reserved810_IRQHandler
Reserved811_IRQHandler
Reserved812_IRQHandler
Reserved813_IRQHandler
Reserved814_IRQHandler
Reserved815_IRQHandler
Reserved816_IRQHandler
Reserved817_IRQHandler
Reserved818_IRQHandler
Reserved819_IRQHandler
Reserved820_IRQHandler
Reserved821_IRQHandler
Reserved822_IRQHandler
Reserved823_IRQHandler
Reserved824_IRQHandler
Reserved825_IRQHandler
Reserved826_IRQHandler
Reserved827_IRQHandler
Reserved828_IRQHandler
Reserved829_IRQHandler
Reserved830_IRQHandler
Reserved831_IRQHandler
Reserved832_IRQHandler
Reserved833_IRQHandler
DefaultISR
        B DefaultISR

        END
