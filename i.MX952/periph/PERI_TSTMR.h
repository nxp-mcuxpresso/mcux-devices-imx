/*
** ###################################################################
**     Processors:          MIMX9529xxVTx_ca55
**                          MIMX9529xxVTx_cm33
**                          MIMX9529xxVTx_cm7
**                          MIMX9529xxVYx_ca55
**                          MIMX9529xxVYx_cm33
**                          MIMX9529xxVYx_cm7
**                          MIMX9529xxVZx_ca55
**                          MIMX9529xxVZx_cm33
**                          MIMX9529xxVZx_cm7
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b260206
**
**     Abstract:
**         CMSIS Peripheral Access Layer for TSTMR
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
**
** ###################################################################
*/

/*!
 * @file PERI_TSTMR.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for TSTMR
 *
 * CMSIS Peripheral Access Layer for TSTMR
 */

#if !defined(PERI_TSTMR_H_)
#define PERI_TSTMR_H_                            /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMX9529xxVTx_ca55) || defined(CPU_MIMX9529xxVYx_ca55) || defined(CPU_MIMX9529xxVZx_ca55))
#include "MIMX9529_ca55_COMMON.h"
#elif (defined(CPU_MIMX9529xxVTx_cm33) || defined(CPU_MIMX9529xxVYx_cm33) || defined(CPU_MIMX9529xxVZx_cm33))
#include "MIMX9529_cm33_COMMON.h"
#elif (defined(CPU_MIMX9529xxVTx_cm7) || defined(CPU_MIMX9529xxVYx_cm7) || defined(CPU_MIMX9529xxVZx_cm7))
#include "MIMX9529_cm7_COMMON.h"
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
   -- TSTMR Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TSTMR_Peripheral_Access_Layer TSTMR Peripheral Access Layer
 * @{
 */

/** TSTMR - Register Layout Typedef */
typedef struct {
  __I  uint32_t L;                                 /**< Timestamp Timer Low, offset: 0x0 */
  __I  uint32_t H;                                 /**< Timestamp Timer High, offset: 0x4 */
} TSTMR_Type;

/* ----------------------------------------------------------------------------
   -- TSTMR Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TSTMR_Register_Masks TSTMR Register Masks
 * @{
 */

/*! @name L - Timestamp Timer Low */
/*! @{ */

#define TSTMR_L_VALUE_MASK                       (0xFFFFFFFFU)
#define TSTMR_L_VALUE_SHIFT                      (0U)
/*! VALUE - Timestamp Timer Low */
#define TSTMR_L_VALUE(x)                         (((uint32_t)(((uint32_t)(x)) << TSTMR_L_VALUE_SHIFT)) & TSTMR_L_VALUE_MASK)
/*! @} */

/*! @name H - Timestamp Timer High */
/*! @{ */

#define TSTMR_H_VALUE_MASK                       (0xFFFFFFU)
#define TSTMR_H_VALUE_SHIFT                      (0U)
/*! VALUE - Timestamp Timer High */
#define TSTMR_H_VALUE(x)                         (((uint32_t)(((uint32_t)(x)) << TSTMR_H_VALUE_SHIFT)) & TSTMR_H_VALUE_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group TSTMR_Register_Masks */


/*!
 * @}
 */ /* end of group TSTMR_Peripheral_Access_Layer */


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


#endif  /* PERI_TSTMR_H_ */

