/*
** ###################################################################
**     Processors:          MIMX9594AVZXN_ca55
**                          MIMX9594AVZXN_cm33
**                          MIMX9594AVZXN_cm7
**                          MIMX9596AVTXN_ca55
**                          MIMX9596AVTXN_cm33
**                          MIMX9596AVTXN_cm7
**                          MIMX9596AVYXN_ca55
**                          MIMX9596AVYXN_cm33
**                          MIMX9596AVYXN_cm7
**                          MIMX9596AVZXN_ca55
**                          MIMX9596AVZXN_cm33
**                          MIMX9596AVZXN_cm7
**                          MIMX9596CVTXN_ca55
**                          MIMX9596CVTXN_cm33
**                          MIMX9596CVTXN_cm7
**                          MIMX9596CVYXN_ca55
**                          MIMX9596CVYXN_cm33
**                          MIMX9596CVYXN_cm7
**                          MIMX9596CVZXN_ca55
**                          MIMX9596CVZXN_cm33
**                          MIMX9596CVZXN_cm7
**                          MIMX9596DVTXN_ca55
**                          MIMX9596DVTXN_cm33
**                          MIMX9596DVTXN_cm7
**                          MIMX9596DVYXN_ca55
**                          MIMX9596DVYXN_cm33
**                          MIMX9596DVYXN_cm7
**                          MIMX9596DVYXQ_ca55
**                          MIMX9596DVYXQ_cm33
**                          MIMX9596DVYXQ_cm7
**                          MIMX9596DVZXN_ca55
**                          MIMX9596DVZXN_cm33
**                          MIMX9596DVZXN_cm7
**                          MIMX9596XVTXN_ca55
**                          MIMX9596XVTXN_cm33
**                          MIMX9596XVTXN_cm7
**                          MIMX9596XVYXN_ca55
**                          MIMX9596XVYXN_cm33
**                          MIMX9596XVYXN_cm7
**                          MIMX9596XVZXN_ca55
**                          MIMX9596XVZXN_cm33
**                          MIMX9596XVZXN_cm7
**
**     Version:             rev. 1.0, 2023-01-10
**     Build:               b250415
**
**     Abstract:
**         CMSIS Peripheral Access Layer for NOC_CMU
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2023-01-10)
**         Initial version.
**
** ###################################################################
*/

/*!
 * @file NOC_CMU.h
 * @version 1.0
 * @date 2023-01-10
 * @brief CMSIS Peripheral Access Layer for NOC_CMU
 *
 * CMSIS Peripheral Access Layer for NOC_CMU
 */

#if !defined(NOC_CMU_H_)
#define NOC_CMU_H_                               /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMX9594AVZXN_ca55))
#include "MIMX9594_ca55_COMMON.h"
#elif (defined(CPU_MIMX9594AVZXN_cm33))
#include "MIMX9594_cm33_COMMON.h"
#elif (defined(CPU_MIMX9594AVZXN_cm7))
#include "MIMX9594_cm7_COMMON.h"
#elif (defined(CPU_MIMX9596AVTXN_ca55) || defined(CPU_MIMX9596AVYXN_ca55) || defined(CPU_MIMX9596AVZXN_ca55) || defined(CPU_MIMX9596CVTXN_ca55) || defined(CPU_MIMX9596CVYXN_ca55) || defined(CPU_MIMX9596CVZXN_ca55) || defined(CPU_MIMX9596DVTXN_ca55) || defined(CPU_MIMX9596DVYXN_ca55) || defined(CPU_MIMX9596DVYXQ_ca55) || defined(CPU_MIMX9596DVZXN_ca55) || defined(CPU_MIMX9596XVTXN_ca55) || defined(CPU_MIMX9596XVYXN_ca55) || defined(CPU_MIMX9596XVZXN_ca55))
#include "MIMX9596_ca55_COMMON.h"
#elif (defined(CPU_MIMX9596AVTXN_cm33) || defined(CPU_MIMX9596AVYXN_cm33) || defined(CPU_MIMX9596AVZXN_cm33) || defined(CPU_MIMX9596CVTXN_cm33) || defined(CPU_MIMX9596CVYXN_cm33) || defined(CPU_MIMX9596CVZXN_cm33) || defined(CPU_MIMX9596DVTXN_cm33) || defined(CPU_MIMX9596DVYXN_cm33) || defined(CPU_MIMX9596DVYXQ_cm33) || defined(CPU_MIMX9596DVZXN_cm33) || defined(CPU_MIMX9596XVTXN_cm33) || defined(CPU_MIMX9596XVYXN_cm33) || defined(CPU_MIMX9596XVZXN_cm33))
#include "MIMX9596_cm33_COMMON.h"
#elif (defined(CPU_MIMX9596AVTXN_cm7) || defined(CPU_MIMX9596AVYXN_cm7) || defined(CPU_MIMX9596AVZXN_cm7) || defined(CPU_MIMX9596CVTXN_cm7) || defined(CPU_MIMX9596CVYXN_cm7) || defined(CPU_MIMX9596CVZXN_cm7) || defined(CPU_MIMX9596DVTXN_cm7) || defined(CPU_MIMX9596DVYXN_cm7) || defined(CPU_MIMX9596DVYXQ_cm7) || defined(CPU_MIMX9596DVZXN_cm7) || defined(CPU_MIMX9596XVTXN_cm7) || defined(CPU_MIMX9596XVYXN_cm7) || defined(CPU_MIMX9596XVZXN_cm7))
#include "MIMX9596_cm7_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- NOC_CMU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NOC_CMU_Peripheral_Access_Layer NOC_CMU Peripheral Access Layer
 * @{
 */

/** NOC_CMU - Register Layout Typedef */
typedef struct {
  __IO uint32_t GCR;                               /**< Global Configuration Register, offset: 0x0 */
  __IO uint32_t RCCR;                              /**< Reference Count Configuration Register, offset: 0x4 */
  __IO uint32_t HTCR;                              /**< High Threshold Configuration Register, offset: 0x8 */
  __IO uint32_t LTCR;                              /**< Low Threshold Configuration Register, offset: 0xC */
  __IO uint32_t SR;                                /**< Status Register, offset: 0x10 */
  __IO uint32_t IER;                               /**< Interrupt Enable Register, offset: 0x14 */
} NOC_CMU_Type;

/* ----------------------------------------------------------------------------
   -- NOC_CMU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NOC_CMU_Register_Masks NOC_CMU Register Masks
 * @{
 */

/*! @name GCR - Global Configuration Register */
/*! @{ */

#define NOC_CMU_GCR_FCE_MASK                     (0x1U)
#define NOC_CMU_GCR_FCE_SHIFT                    (0U)
/*! FCE - Frequency Check Enable
 *  0b0..Stops frequency checking
 *  0b1..Starts frequency checking
 */
#define NOC_CMU_GCR_FCE(x)                       (((uint32_t)(((uint32_t)(x)) << NOC_CMU_GCR_FCE_SHIFT)) & NOC_CMU_GCR_FCE_MASK)
/*! @} */

/*! @name RCCR - Reference Count Configuration Register */
/*! @{ */

#define NOC_CMU_RCCR_REF_CNT_MASK                (0xFFFFU)
#define NOC_CMU_RCCR_REF_CNT_SHIFT               (0U)
/*! REF_CNT - Reference clock count */
#define NOC_CMU_RCCR_REF_CNT(x)                  (((uint32_t)(((uint32_t)(x)) << NOC_CMU_RCCR_REF_CNT_SHIFT)) & NOC_CMU_RCCR_REF_CNT_MASK)
/*! @} */

/*! @name HTCR - High Threshold Configuration Register */
/*! @{ */

#define NOC_CMU_HTCR_HFREF_MASK                  (0xFFFFFFU)
#define NOC_CMU_HTCR_HFREF_SHIFT                 (0U)
/*! HFREF - High frequency reference threshold */
#define NOC_CMU_HTCR_HFREF(x)                    (((uint32_t)(((uint32_t)(x)) << NOC_CMU_HTCR_HFREF_SHIFT)) & NOC_CMU_HTCR_HFREF_MASK)
/*! @} */

/*! @name LTCR - Low Threshold Configuration Register */
/*! @{ */

#define NOC_CMU_LTCR_LFREF_MASK                  (0xFFFFFFU)
#define NOC_CMU_LTCR_LFREF_SHIFT                 (0U)
/*! LFREF - Low Frequency Reference Threshold */
#define NOC_CMU_LTCR_LFREF(x)                    (((uint32_t)(((uint32_t)(x)) << NOC_CMU_LTCR_LFREF_SHIFT)) & NOC_CMU_LTCR_LFREF_MASK)
/*! @} */

/*! @name SR - Status Register */
/*! @{ */

#define NOC_CMU_SR_FLL_MASK                      (0x1U)
#define NOC_CMU_SR_FLL_SHIFT                     (0U)
/*! FLL - Frequency lower than low frequency reference threshold event status
 *  0b0..No FLL event
 *  0b1..FLL event occurred
 */
#define NOC_CMU_SR_FLL(x)                        (((uint32_t)(((uint32_t)(x)) << NOC_CMU_SR_FLL_SHIFT)) & NOC_CMU_SR_FLL_MASK)

#define NOC_CMU_SR_FHH_MASK                      (0x2U)
#define NOC_CMU_SR_FHH_SHIFT                     (1U)
/*! FHH - Frequency higher than high frequency reference threshold event status
 *  0b0..No FHH event
 *  0b1..FHH event occurred
 */
#define NOC_CMU_SR_FHH(x)                        (((uint32_t)(((uint32_t)(x)) << NOC_CMU_SR_FHH_SHIFT)) & NOC_CMU_SR_FHH_MASK)

#define NOC_CMU_SR_RS_MASK                       (0x10U)
#define NOC_CMU_SR_RS_SHIFT                      (4U)
/*! RS - Run Status
 *  0b0..Frequency check stopped
 *  0b1..Frequency check running
 */
#define NOC_CMU_SR_RS(x)                         (((uint32_t)(((uint32_t)(x)) << NOC_CMU_SR_RS_SHIFT)) & NOC_CMU_SR_RS_MASK)
/*! @} */

/*! @name IER - Interrupt Enable Register */
/*! @{ */

#define NOC_CMU_IER_FLLAIE_MASK                  (0x4U)
#define NOC_CMU_IER_FLLAIE_SHIFT                 (2U)
/*! FLLAIE - Frequency Lower than Low Frequency Reference Threshold Asynchronous Interrupt Enable
 *  0b0..Asynchronous FLL event interrupt disabled
 *  0b1..Asynchronous FLL event interrupt enabled
 */
#define NOC_CMU_IER_FLLAIE(x)                    (((uint32_t)(((uint32_t)(x)) << NOC_CMU_IER_FLLAIE_SHIFT)) & NOC_CMU_IER_FLLAIE_MASK)

#define NOC_CMU_IER_FHHAIE_MASK                  (0x8U)
#define NOC_CMU_IER_FHHAIE_SHIFT                 (3U)
/*! FHHAIE - Frequency Higher than High Frequency Reference Threshold Asynchronous Interrupt Enable
 *  0b0..Asynchronous FHH event interrupt disabled
 *  0b1..Asynchronous FHH event interrupt enabled
 */
#define NOC_CMU_IER_FHHAIE(x)                    (((uint32_t)(((uint32_t)(x)) << NOC_CMU_IER_FHHAIE_SHIFT)) & NOC_CMU_IER_FHHAIE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group NOC_CMU_Register_Masks */


/*!
 * @}
 */ /* end of group NOC_CMU_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* NOC_CMU_H_ */

