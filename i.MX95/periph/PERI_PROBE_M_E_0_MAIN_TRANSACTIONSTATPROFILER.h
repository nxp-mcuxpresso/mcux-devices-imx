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
**         CMSIS Peripheral Access Layer for
**         Probe_m_e_0_main_TransactionStatProfiler
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
 * @file Probe_m_e_0_main_TransactionStatProfiler.h
 * @version 1.0
 * @date 2023-01-10
 * @brief CMSIS Peripheral Access Layer for
 *        Probe_m_e_0_main_TransactionStatProfiler
 *
 * CMSIS Peripheral Access Layer for Probe_m_e_0_main_TransactionStatProfiler
 */

#if !defined(Probe_m_e_0_main_TransactionStatProfiler_H_)
#define Probe_m_e_0_main_TransactionStatProfiler_H_ /**< Symbol preventing repeated inclusion */

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
   -- Probe_m_e_0_main_TransactionStatProfiler Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Probe_m_e_0_main_TransactionStatProfiler_Peripheral_Access_Layer Probe_m_e_0_main_TransactionStatProfiler Peripheral Access Layer
 * @{
 */

/** Probe_m_e_0_main_TransactionStatProfiler - Size of Registers Arrays */
#define Probe_m_e_0_main_TransactionStatProfiler_OBSERVEDSEL_COUNT 2u
#define Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_COUNT 1u

/** Probe_m_e_0_main_TransactionStatProfiler - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID_COREID;                         /**< Core ID, offset: 0x0 */
  __I  uint32_t ID_REVISIONID;                     /**< Revision ID, offset: 0x4 */
  __IO uint32_t EN;                                /**< Enable, offset: 0x8 */
  __IO uint32_t MODE;                              /**< Mode, offset: 0xC */
  __IO uint32_t TRANSACTIONSTATPROFILER_OBSERVEDSEL[Probe_m_e_0_main_TransactionStatProfiler_OBSERVEDSEL_COUNT]; /**< ObservedSel n, array offset: 0x10, array step: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t NTENURELINES[Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_COUNT]; /**< NTenureLines n, array offset: 0x20, array step: 0x4 */
       uint8_t RESERVED_1[8];
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0; /**< offset: 0x2C */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1; /**< offset: 0x30 */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2; /**< offset: 0x34 */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3; /**< offset: 0x38 */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0; /**< offset: 0x3C */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1; /**< offset: 0x40 */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2; /**< offset: 0x44 */
  __IO uint32_t PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3; /**< offset: 0x48 */
       uint8_t RESERVED_2[32];
  __I  uint32_t OVERFLOWSTATUS;                    /**< Overflow Status, offset: 0x6C */
  __O  uint32_t OVERFLOWRESET;                     /**< Overflow Reset, offset: 0x70 */
  __IO uint32_t PENDINGEVENTMODE;                  /**< Pending Event Mode, offset: 0x74 */
  __IO uint32_t PRESCALER;                         /**< Pre Scaler, offset: 0x78 */
} Probe_m_e_0_main_TransactionStatProfiler_Type;

/* ----------------------------------------------------------------------------
   -- Probe_m_e_0_main_TransactionStatProfiler Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Probe_m_e_0_main_TransactionStatProfiler_Register_Masks Probe_m_e_0_main_TransactionStatProfiler Register Masks
 * @{
 */

/*! @name ID_COREID - Core ID */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORETYPEID_MASK (0xFFU)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORETYPEID_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORETYPEID(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORETYPEID_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORETYPEID_MASK)

#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_MASK (0xFFFFFF00U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_SHIFT (8U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_ID_COREID_CORECHECKSUM_MASK)
/*! @} */

/*! @name ID_REVISIONID - Revision ID */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_USERID_MASK (0xFFU)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_USERID_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_USERID(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_USERID_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_USERID_MASK)

#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_NOCID_MASK (0xFFFFFF00U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_NOCID_SHIFT (8U)
#define Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_NOCID(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_NOCID_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_ID_REVISIONID_NOCID_MASK)
/*! @} */

/*! @name EN - Enable */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_EN_EN_MASK (0x1U)
#define Probe_m_e_0_main_TransactionStatProfiler_EN_EN_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_EN_EN(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_EN_EN_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_EN_EN_MASK)
/*! @} */

/*! @name MODE - Mode */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_MODE_MODE_MASK (0x3U)
#define Probe_m_e_0_main_TransactionStatProfiler_MODE_MODE_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_MODE_MODE(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_MODE_MODE_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_MODE_MODE_MASK)
/*! @} */

/*! @name TRANSACTIONSTATPROFILER_OBSERVEDSEL - ObservedSel n */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_MASK (0x1U)
#define Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_OBSERVEDSEL_MASK)
/*! @} */

/* The count of Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL */
#define Probe_m_e_0_main_TransactionStatProfiler_TRANSACTIONSTATPROFILER_OBSERVEDSEL_COUNT (2U)

/*! @name NTENURELINES - NTenureLines n */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_MASK (0xFU)
#define Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_SHIFT (0U)
/*! NTENURELINES_n - NTenureLines_0 */
#define Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_NTENURELINES_NTENURELINES_n_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_0_THRESHOLDS_0_0_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_1_THRESHOLDS_0_1_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_2_THRESHOLDS_0_2_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3_THRESHOLDS_0_3_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3_THRESHOLDS_0_3_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3_THRESHOLDS_0_3(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3_THRESHOLDS_0_3_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_0_3_THRESHOLDS_0_3_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0_THRESHOLDS_1_0_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0_THRESHOLDS_1_0_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0_THRESHOLDS_1_0(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0_THRESHOLDS_1_0_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_0_THRESHOLDS_1_0_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1_THRESHOLDS_1_1_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1_THRESHOLDS_1_1_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1_THRESHOLDS_1_1(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1_THRESHOLDS_1_1_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_1_THRESHOLDS_1_1_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2_THRESHOLDS_1_2_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2_THRESHOLDS_1_2_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2_THRESHOLDS_1_2(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2_THRESHOLDS_1_2_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_2_THRESHOLDS_1_2_MASK)
/*! @} */

/*! @name PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3 -  */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3_THRESHOLDS_1_3_MASK (0x7FFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3_THRESHOLDS_1_3_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3_THRESHOLDS_1_3(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3_THRESHOLDS_1_3_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PROBE_M_E_0_MAIN_TRANSACTIONSTATPROFILER_THRESHOLDS_1_3_THRESHOLDS_1_3_MASK)
/*! @} */

/*! @name OVERFLOWSTATUS - Overflow Status */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_MASK (0x3U)
#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWSTATUS_OVERFLOWSTATUS_MASK)
/*! @} */

/*! @name OVERFLOWRESET - Overflow Reset */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_MASK (0x3U)
#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_OVERFLOWRESET_OVERFLOWRESET_MASK)
/*! @} */

/*! @name PENDINGEVENTMODE - Pending Event Mode */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_MASK (0x1U)
#define Probe_m_e_0_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PENDINGEVENTMODE_PENDINGEVENTMODE_MASK)
/*! @} */

/*! @name PRESCALER - Pre Scaler */
/*! @{ */

#define Probe_m_e_0_main_TransactionStatProfiler_PRESCALER_PRESCALER_MASK (0xFFU)
#define Probe_m_e_0_main_TransactionStatProfiler_PRESCALER_PRESCALER_SHIFT (0U)
#define Probe_m_e_0_main_TransactionStatProfiler_PRESCALER_PRESCALER(x) (((uint32_t)(((uint32_t)(x)) << Probe_m_e_0_main_TransactionStatProfiler_PRESCALER_PRESCALER_SHIFT)) & Probe_m_e_0_main_TransactionStatProfiler_PRESCALER_PRESCALER_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group Probe_m_e_0_main_TransactionStatProfiler_Register_Masks */


/*!
 * @}
 */ /* end of group Probe_m_e_0_main_TransactionStatProfiler_Peripheral_Access_Layer */


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


#endif  /* Probe_m_e_0_main_TransactionStatProfiler_H_ */

