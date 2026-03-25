/*
 * Copyright 2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_irqsteer.h"
#include "fsl_edma.h"

static IRQSTEER_IRQ_Info_t s_IRQ_Info[FSL_IRQSTEER_CH_NUM][FSL_IRQSTEER_INT_NUM];

int IRQSTEER_Register_Callback(uint8_t ch, uint16_t irq, uint8_t edma_id, uint8_t edma_ch, void *pfunc)
{
    IRQSTEER_IRQ_Info_t *pinfo = NULL;

    if (ch >= FSL_IRQSTEER_CH_NUM)
        return -1;

    if (irq >= FSL_IRQSTEER_INT_NUM)
        return -2;

    pinfo = &s_IRQ_Info[ch][irq];

    pinfo->chan_id = ch;
    pinfo->edma_id = edma_id;
    pinfo->edma_ch = edma_ch;
    pinfo->pfunc = pfunc;

    return 0;
}

void IRQSTEER_Driver_IRQ_Handler(uint8_t ch)
{
    int irq_oft_idx = FSL_FEATURE_IRQSTEER_IRQ_START_INDEX;  // 224
    int irq_end_idx = FSL_IRQSTEER_CH_MAX * (ch + 1);
    int irq_beg_idx = FSL_IRQSTEER_CH_MAX * ch;
    IRQSTEER_IRQ_Info_t *pinfo = NULL;
    irq_steer_func_t pfunc = NULL;
    IRQn_Type irq;
    int i = 0;

    for (i = irq_beg_idx; i < irq_end_idx; i++)
    {
        irq = (IRQn_Type)(irq_oft_idx + i);

        if (IRQSTEER_IsInterruptSet(IRQSTEERA55_INST, irq))
        {
            pinfo = &s_IRQ_Info[ch][i];

            if (pinfo->pfunc)
            {
                pfunc = (irq_steer_func_t)pinfo->pfunc;
                pfunc(pinfo->chan_id, pinfo->edma_id, pinfo->edma_ch);
            }
        }
    }
}
