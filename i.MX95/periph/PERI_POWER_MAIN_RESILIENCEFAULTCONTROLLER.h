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
**         CMSIS Peripheral Access Layer for power_main_ResilienceFaultController
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
 * @file power_main_ResilienceFaultController.h
 * @version 1.0
 * @date 2023-01-10
 * @brief CMSIS Peripheral Access Layer for power_main_ResilienceFaultController
 *
 * CMSIS Peripheral Access Layer for power_main_ResilienceFaultController
 */

#if !defined(power_main_ResilienceFaultController_H_)
#define power_main_ResilienceFaultController_H_  /**< Symbol preventing repeated inclusion */

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
   -- power_main_ResilienceFaultController Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup power_main_ResilienceFaultController_Peripheral_Access_Layer power_main_ResilienceFaultController Peripheral Access Layer
 * @{
 */

/** power_main_ResilienceFaultController - Size of Registers Arrays */
#define power_main_ResilienceFaultController_MISSIONFAULT_COUNT 4u
#define power_main_ResilienceFaultController_LATENTFAULT_COUNT 4u

/** power_main_ResilienceFaultController - Register Layout Typedef */
typedef struct {
  __I  uint32_t ID_COREID;                         /**< Core ID, offset: 0x0 */
  __I  uint32_t ID_REVISIONID;                     /**< Revision ID, offset: 0x4 */
  __I  uint32_t MISSIONFAULT[power_main_ResilienceFaultController_MISSIONFAULT_COUNT]; /**< Mission Fault n, array offset: 0x8, array step: 0x4 */
  __I  uint32_t LATENTFAULT[power_main_ResilienceFaultController_LATENTFAULT_COUNT]; /**< Latent Fault n, array offset: 0x18, array step: 0x4 */
  __I  uint32_t FAULTS;                            /**< Faults, offset: 0x28 */
  __IO uint32_t INTEN;                             /**< Interrupt Enable, offset: 0x2C */
  __O  uint32_t INTCLR;                            /**< InterruptClear, offset: 0x30 */
  __O  uint32_t BISTCTL;                           /**< BistControl, offset: 0x34 */
  __I  uint32_t BISTDONE;                          /**< BistDone, offset: 0x38 */
  __IO uint32_t BISTTO1;                           /**< Bist T01, offset: 0x3C */
  __IO uint32_t BISTTO2;                           /**< Bist T02, offset: 0x40 */
} power_main_ResilienceFaultController_Type;

/* ----------------------------------------------------------------------------
   -- power_main_ResilienceFaultController Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup power_main_ResilienceFaultController_Register_Masks power_main_ResilienceFaultController Register Masks
 * @{
 */

/*! @name ID_COREID - Core ID */
/*! @{ */

#define power_main_ResilienceFaultController_ID_COREID_CORETYPEID_MASK (0xFFU)
#define power_main_ResilienceFaultController_ID_COREID_CORETYPEID_SHIFT (0U)
#define power_main_ResilienceFaultController_ID_COREID_CORETYPEID(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_ID_COREID_CORETYPEID_SHIFT)) & power_main_ResilienceFaultController_ID_COREID_CORETYPEID_MASK)

#define power_main_ResilienceFaultController_ID_COREID_CORECHECKSUM_MASK (0xFFFFFF00U)
#define power_main_ResilienceFaultController_ID_COREID_CORECHECKSUM_SHIFT (8U)
#define power_main_ResilienceFaultController_ID_COREID_CORECHECKSUM(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_ID_COREID_CORECHECKSUM_SHIFT)) & power_main_ResilienceFaultController_ID_COREID_CORECHECKSUM_MASK)
/*! @} */

/*! @name ID_REVISIONID - Revision ID */
/*! @{ */

#define power_main_ResilienceFaultController_ID_REVISIONID_USERID_MASK (0xFFU)
#define power_main_ResilienceFaultController_ID_REVISIONID_USERID_SHIFT (0U)
#define power_main_ResilienceFaultController_ID_REVISIONID_USERID(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_ID_REVISIONID_USERID_SHIFT)) & power_main_ResilienceFaultController_ID_REVISIONID_USERID_MASK)

#define power_main_ResilienceFaultController_ID_REVISIONID_NOCID_MASK (0xFFFFFF00U)
#define power_main_ResilienceFaultController_ID_REVISIONID_NOCID_SHIFT (8U)
#define power_main_ResilienceFaultController_ID_REVISIONID_NOCID(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_ID_REVISIONID_NOCID_SHIFT)) & power_main_ResilienceFaultController_ID_REVISIONID_NOCID_MASK)
/*! @} */

/*! @name MISSIONFAULT - Mission Fault n */
/*! @{ */

#define power_main_ResilienceFaultController_MISSIONFAULT_MISSIONFAULT_MASK (0xFFFFFFFFU)
#define power_main_ResilienceFaultController_MISSIONFAULT_MISSIONFAULT_SHIFT (0U)
#define power_main_ResilienceFaultController_MISSIONFAULT_MISSIONFAULT(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_MISSIONFAULT_MISSIONFAULT_SHIFT)) & power_main_ResilienceFaultController_MISSIONFAULT_MISSIONFAULT_MASK)
/*! @} */

/*! @name LATENTFAULT - Latent Fault n */
/*! @{ */

#define power_main_ResilienceFaultController_LATENTFAULT_LATENTFAULT_MASK (0xFFFFFFFFU)
#define power_main_ResilienceFaultController_LATENTFAULT_LATENTFAULT_SHIFT (0U)
#define power_main_ResilienceFaultController_LATENTFAULT_LATENTFAULT(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_LATENTFAULT_LATENTFAULT_SHIFT)) & power_main_ResilienceFaultController_LATENTFAULT_LATENTFAULT_MASK)
/*! @} */

/*! @name FAULTS - Faults */
/*! @{ */

#define power_main_ResilienceFaultController_FAULTS_LATENTFAULT_MASK (0x1U)
#define power_main_ResilienceFaultController_FAULTS_LATENTFAULT_SHIFT (0U)
#define power_main_ResilienceFaultController_FAULTS_LATENTFAULT(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_FAULTS_LATENTFAULT_SHIFT)) & power_main_ResilienceFaultController_FAULTS_LATENTFAULT_MASK)

#define power_main_ResilienceFaultController_FAULTS_MISSIONFAULT_MASK (0x2U)
#define power_main_ResilienceFaultController_FAULTS_MISSIONFAULT_SHIFT (1U)
#define power_main_ResilienceFaultController_FAULTS_MISSIONFAULT(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_FAULTS_MISSIONFAULT_SHIFT)) & power_main_ResilienceFaultController_FAULTS_MISSIONFAULT_MASK)
/*! @} */

/*! @name INTEN - Interrupt Enable */
/*! @{ */

#define power_main_ResilienceFaultController_INTEN_BISTDONEEN_MASK (0x1U)
#define power_main_ResilienceFaultController_INTEN_BISTDONEEN_SHIFT (0U)
#define power_main_ResilienceFaultController_INTEN_BISTDONEEN(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_INTEN_BISTDONEEN_SHIFT)) & power_main_ResilienceFaultController_INTEN_BISTDONEEN_MASK)

#define power_main_ResilienceFaultController_INTEN_MISSIONFAULTEN_MASK (0x2U)
#define power_main_ResilienceFaultController_INTEN_MISSIONFAULTEN_SHIFT (1U)
#define power_main_ResilienceFaultController_INTEN_MISSIONFAULTEN(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_INTEN_MISSIONFAULTEN_SHIFT)) & power_main_ResilienceFaultController_INTEN_MISSIONFAULTEN_MASK)
/*! @} */

/*! @name INTCLR - InterruptClear */
/*! @{ */

#define power_main_ResilienceFaultController_INTCLR_LATENTFAULTCLR_MASK (0x1U)
#define power_main_ResilienceFaultController_INTCLR_LATENTFAULTCLR_SHIFT (0U)
#define power_main_ResilienceFaultController_INTCLR_LATENTFAULTCLR(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_INTCLR_LATENTFAULTCLR_SHIFT)) & power_main_ResilienceFaultController_INTCLR_LATENTFAULTCLR_MASK)

#define power_main_ResilienceFaultController_INTCLR_MISSIONFAULTCLR_MASK (0x2U)
#define power_main_ResilienceFaultController_INTCLR_MISSIONFAULTCLR_SHIFT (1U)
#define power_main_ResilienceFaultController_INTCLR_MISSIONFAULTCLR(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_INTCLR_MISSIONFAULTCLR_SHIFT)) & power_main_ResilienceFaultController_INTCLR_MISSIONFAULTCLR_MASK)
/*! @} */

/*! @name BISTCTL - BistControl */
/*! @{ */

#define power_main_ResilienceFaultController_BISTCTL_BISTSTART_MASK (0x1U)
#define power_main_ResilienceFaultController_BISTCTL_BISTSTART_SHIFT (0U)
#define power_main_ResilienceFaultController_BISTCTL_BISTSTART(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTCTL_BISTSTART_SHIFT)) & power_main_ResilienceFaultController_BISTCTL_BISTSTART_MASK)

#define power_main_ResilienceFaultController_BISTCTL_BISTDONECLR_MASK (0x2U)
#define power_main_ResilienceFaultController_BISTCTL_BISTDONECLR_SHIFT (1U)
#define power_main_ResilienceFaultController_BISTCTL_BISTDONECLR(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTCTL_BISTDONECLR_SHIFT)) & power_main_ResilienceFaultController_BISTCTL_BISTDONECLR_MASK)
/*! @} */

/*! @name BISTDONE - BistDone */
/*! @{ */

#define power_main_ResilienceFaultController_BISTDONE_BISTDONE_MASK (0x1U)
#define power_main_ResilienceFaultController_BISTDONE_BISTDONE_SHIFT (0U)
#define power_main_ResilienceFaultController_BISTDONE_BISTDONE(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTDONE_BISTDONE_SHIFT)) & power_main_ResilienceFaultController_BISTDONE_BISTDONE_MASK)

#define power_main_ResilienceFaultController_BISTDONE_MISSIONMODE_MASK (0x2U)
#define power_main_ResilienceFaultController_BISTDONE_MISSIONMODE_SHIFT (1U)
#define power_main_ResilienceFaultController_BISTDONE_MISSIONMODE(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTDONE_MISSIONMODE_SHIFT)) & power_main_ResilienceFaultController_BISTDONE_MISSIONMODE_MASK)
/*! @} */

/*! @name BISTTO1 - Bist T01 */
/*! @{ */

#define power_main_ResilienceFaultController_BISTTO1_BISTTO1_MASK (0xFFFFU)
#define power_main_ResilienceFaultController_BISTTO1_BISTTO1_SHIFT (0U)
#define power_main_ResilienceFaultController_BISTTO1_BISTTO1(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTTO1_BISTTO1_SHIFT)) & power_main_ResilienceFaultController_BISTTO1_BISTTO1_MASK)
/*! @} */

/*! @name BISTTO2 - Bist T02 */
/*! @{ */

#define power_main_ResilienceFaultController_BISTTO2_BISTTO2_MASK (0xFFU)
#define power_main_ResilienceFaultController_BISTTO2_BISTTO2_SHIFT (0U)
#define power_main_ResilienceFaultController_BISTTO2_BISTTO2(x) (((uint32_t)(((uint32_t)(x)) << power_main_ResilienceFaultController_BISTTO2_BISTTO2_SHIFT)) & power_main_ResilienceFaultController_BISTTO2_BISTTO2_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group power_main_ResilienceFaultController_Register_Masks */


/*!
 * @}
 */ /* end of group power_main_ResilienceFaultController_Peripheral_Access_Layer */


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


#endif  /* power_main_ResilienceFaultController_H_ */

