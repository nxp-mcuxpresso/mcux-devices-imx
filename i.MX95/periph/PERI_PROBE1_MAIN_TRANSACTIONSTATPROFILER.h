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
**         CMSIS Peripheral Access Layer for Probe1_main_TransactionStatProfiler
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
 * @file Probe1_main_TransactionStatProfiler.h
 * @version 1.0
 * @date 2023-01-10
 * @brief CMSIS Peripheral Access Layer for Probe1_main_TransactionStatProfiler
 *
 * CMSIS Peripheral Access Layer for Probe1_main_TransactionStatProfiler
 */

#if !defined(Probe1_main_TransactionStatProfiler_H_)
#define Probe1_main_TransactionStatProfiler_H_   /**< Symbol preventing repeated inclusion */

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
   -- Probe1_main_TransactionStatProfiler Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Probe1_main_TransactionStatProfiler_Peripheral_Access_Layer Probe1_main_TransactionStatProfiler Peripheral Access Layer
 * @{
 */

/** Probe1_main_TransactionStatProfiler - Size of Registers Arrays */
#define Probe1_main_TransactionStatProfiler_OBSERVEDSEL_COUNT 4u
#define Probe1_main_TransactionStatProfiler_NTENURELINES_COUNT 3u
#define Probe1_main_TransactionStatProfiler_THRESHOLDS_COUNT 4u
#define Probe1_main_TransactionStatProfiler_THRESHOLDS_TRANSACTIONSTATPROFILER_THRESHOLDS_J_COUNT 4u

/** Probe1_main_TransactionStatProfiler - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID_COREID;                         /**< Core ID, offset: 0x0 */
  __I  uint32_t ID_REVISIONID;                     /**< Revision ID, offset: 0x4 */
  __IO uint32_t EN;                                /**< Enable, offset: 0x8 */
  __IO uint32_t MODE;                              /**< Mode, offset: 0xC */
  __IO uint32_t TRANSACTIONSTATPROFILER_OBSERVEDSEL[Probe1_main_TransactionStatProfiler_OBSERVEDSEL_COUNT]; /**< ObservedSel n, array offset: 0x10, array step: 0x4 */
  __IO uint32_t NTENURELINES[Probe1_main_TransactionStatProfiler_NTENURELINES_COUNT]; /**< NTenureLines n, array offset: 0x20, array step: 0x4 */
  __IO uint32_t TRANSACTIONSTATPROFILER_THRESHOLDS_[Probe1_main_TransactionStatProfiler_THRESHOLDS_COUNT][Probe1_main_TransactionStatProfiler_THRESHOLDS_TRANSACTIONSTATPROFILER_THRESHOLDS_J_COUNT]; /**< Transaction Profiler Thresholds, array offset: 0x2C, array step: index*0x10, index2*0x4 */
  __I  uint32_t OVERFLOWSTATUS;                    /**< Overflow Status, offset: 0x6C */
  __O  uint32_t OVERFLOWRESET;                     /**< Overflow Reset, offset: 0x70 */
  __IO uint32_t PENDINGEVENTMODE;                  /**< Pending Event Mode, offset: 0x74 */
  __IO uint32_t PRESCALER;                         /**< Pre Scaler, offset: 0x78 */
} Probe1_main_TransactionStatProfiler_Type;

/* ----------------------------------------------------------------------------
   -- Probe1_main_TransactionStatProfiler Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Probe1_main_TransactionStatProfiler_Register_Masks Probe1_main_TransactionStatProfiler Register Masks
 * @{
 */

/*! @name ID_COREID - Core ID */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_ID_COREID_CORETYPEID_MASK (0xFFU)
#define Probe1_main_TransactionStatProfiler_ID_COREID_CORETYPEID_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_ID_COREID_CORETYPEID(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_ID_COREID_CORETYPEID_SHIFT)) & Probe1_main_TransactionStatProfiler_ID_COREID_CORETYPEID_MASK)

#define Probe1_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_MASK (0xFFFFFF00U)
#define Probe1_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_SHIFT (8U)
#define Probe1_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_SHIFT)) & Probe1_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_MASK)
/*! @} */

/*! @name ID_REVISIONID - Revision ID */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_USERID_MASK (0xFFU)
#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_USERID_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_USERID(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_ID_REVISIONID_USERID_SHIFT)) & Probe1_main_TransactionStatProfiler_ID_REVISIONID_USERID_MASK)

#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_NOCID_MASK (0xFFFFFF00U)
#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_NOCID_SHIFT (8U)
#define Probe1_main_TransactionStatProfiler_ID_REVISIONID_NOCID(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_ID_REVISIONID_NOCID_SHIFT)) & Probe1_main_TransactionStatProfiler_ID_REVISIONID_NOCID_MASK)
/*! @} */

/*! @name EN - Enable */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_EN_EN_MASK (0x1U)
#define Probe1_main_TransactionStatProfiler_EN_EN_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_EN_EN(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_EN_EN_SHIFT)) & Probe1_main_TransactionStatProfiler_EN_EN_MASK)
/*! @} */

/*! @name MODE - Mode */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_MODE_MODE_MASK (0xFU)
#define Probe1_main_TransactionStatProfiler_MODE_MODE_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_MODE_MODE(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_MODE_MODE_SHIFT)) & Probe1_main_TransactionStatProfiler_MODE_MODE_MASK)
/*! @} */

/*! @name TRANSACTIONSTATPROFILER_OBSERVEDSEL - ObservedSel n */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_MASK (0xFU)
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_SHIFT)) & Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_MASK)
/*! @} */

/* The count of Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL */
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_COUNT (4U)

/*! @name NTENURELINES - NTenureLines n */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_MASK (0x3FU)
#define Probe1_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_SHIFT (0U)
/*! NTENURELINES_n - NTenureLines_2 */
#define Probe1_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_SHIFT)) & Probe1_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_MASK)
/*! @} */

/*! @name TRANSACTIONSTATPROFILER_THRESHOLDS_ - Transaction Profiler Thresholds */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__THRESHOLDS_MASK (0x3FFU)
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__THRESHOLDS_SHIFT (0U)
/*! THRESHOLDS - Thresholds 3 3 */
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__THRESHOLDS(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__THRESHOLDS_SHIFT)) & Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__THRESHOLDS_MASK)
/*! @} */

/* The count of Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS_ */
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__COUNT (4U)

/* The count of Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS_ */
#define Probe1_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_THRESHOLDS__COUNT2 (4U)

/*! @name OVERFLOWSTATUS - Overflow Status */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_MASK (0xFU)
#define Probe1_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_SHIFT)) & Probe1_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_MASK)
/*! @} */

/*! @name OVERFLOWRESET - Overflow Reset */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_MASK (0xFU)
#define Probe1_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_SHIFT)) & Probe1_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_MASK)
/*! @} */

/*! @name PENDINGEVENTMODE - Pending Event Mode */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_MASK (0x1U)
#define Probe1_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_SHIFT)) & Probe1_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_MASK)
/*! @} */

/*! @name PRESCALER - Pre Scaler */
/*! @{ */

#define Probe1_main_TransactionStatProfiler_PRESCALER_PRESCALER_MASK (0xFFU)
#define Probe1_main_TransactionStatProfiler_PRESCALER_PRESCALER_SHIFT (0U)
#define Probe1_main_TransactionStatProfiler_PRESCALER_PRESCALER(x) (((uint32_t)(((uint32_t)(x)) << Probe1_main_TransactionStatProfiler_PRESCALER_PRESCALER_SHIFT)) & Probe1_main_TransactionStatProfiler_PRESCALER_PRESCALER_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group Probe1_main_TransactionStatProfiler_Register_Masks */


/*!
 * @}
 */ /* end of group Probe1_main_TransactionStatProfiler_Peripheral_Access_Layer */


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


#endif  /* Probe1_main_TransactionStatProfiler_H_ */

