/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FSL_IRQSTEER_SOC_H_
#define FSL_IRQSTEER_SOC_H_

#include "fsl_common.h"

/* Max number of irqsteer instance for CA55 */
#define IRQSTEER_MAX_INST    1

/* Define instance index of irqsteer */
#define IRQSTEERA55_INST     0

/* IRQ channel index (not output channel index) */
#define IRQSTEER_IRQ_CHAN_IDX 0

#define EDMA2_INSTANCE  1
#define EDMA3_INSTANCE  2
#define EDMA4_INSTANCE  3

/*
 * IRQSTEERA55 Configuration:
 * - reg: AON__IRQSTEERA55_BASE (0x446A0000)
 * - intNum: 960 (max number of input interrupts)
 * - irqChanNum: 1 (number of irq channels per instance)
 * - irqChanIdx: 0 (channel index for CA55)
 */
#define MULTI_IRQSTEER_INFO \
    { \
        { (void *)AON__IRQSTEERA55_BASE, FSL_FEATURE_IRQSTEER_EXT_INT_MAX_NUM, FSL_FEATURE_IRQSTEER_IRQ_CHAN_MAX_NUM, IRQSTEER_IRQ_CHAN_IDX } \
    }

/* Clock configuration - IRQSTEERA55 uses same clock as other instances */
#define MULTI_IRQSTEER_CLOCKS \
    {kCLOCK_IpInvalid}

/*
 * IRQSTEER output channels connected to CA55 GIC
 * CA55 uses IRQSTEERM33_CH0..CH5 (256-261) as output channels
 */
#define MULTI_IRQSTEER_IRQS \
    { \
        { \
            IRQSTEERM33_CH0_IRQn, IRQSTEERM33_CH1_IRQn, IRQSTEERM33_CH2_IRQn, \
            IRQSTEERM33_CH3_IRQn, IRQSTEERM33_CH4_IRQn, IRQSTEERM33_CH5_IRQn \
        } \
    }

#endif /* FSL_IRQSTEER_SOC_H_ */
