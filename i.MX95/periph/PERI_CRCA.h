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
**         CMSIS Peripheral Access Layer for CRCA
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
 * @file CRCA.h
 * @version 1.0
 * @date 2023-01-10
 * @brief CMSIS Peripheral Access Layer for CRCA
 *
 * CMSIS Peripheral Access Layer for CRCA
 */

#if !defined(CRCA_H_)
#define CRCA_H_                                  /**< Symbol preventing repeated inclusion */

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
   -- CRCA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRCA_Peripheral_Access_Layer CRCA Peripheral Access Layer
 * @{
 */

/** CRCA - Size of Registers Arrays */
#define CRCA_CHANNEL_COUNT                        3u

/** CRCA - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x10 */
    __IO uint32_t CFG;                               /**< Configuration Register, array offset: 0x0, array step: 0x10 */
    __IO uint32_t INP;                               /**< Input Register, array offset: 0x4, array step: 0x10 */
    __IO uint32_t CSTAT;                             /**< Current Status Register, array offset: 0x8, array step: 0x10 */
    __I  uint32_t OUTP;                              /**< Output Register, array offset: 0xC, array step: 0x10 */
  } CHANNEL[CRCA_CHANNEL_COUNT];
} CRCA_Type;

/* ----------------------------------------------------------------------------
   -- CRCA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRCA_Register_Masks CRCA Register Masks
 * @{
 */

/*! @name CFG - Configuration Register */
/*! @{ */

#define CRCA_CFG_INV_MASK                        (0x1U)
#define CRCA_CFG_INV_SHIFT                       (0U)
/*! INV - Inversion selection
 *  0b0..No inversion selection applied on the CRC_OUTP content
 *  0b1..Inversion selection (bit x bit) applied on the CRC_OUTP content
 */
#define CRCA_CFG_INV(x)                          (((uint32_t)(((uint32_t)(x)) << CRCA_CFG_INV_SHIFT)) & CRCA_CFG_INV_MASK)

#define CRCA_CFG_SWAP_MASK                       (0x2U)
#define CRCA_CFG_SWAP_SHIFT                      (1U)
/*! SWAP - Swap selection
 *  0b0..No swap selection applied on the CRC_OUTP content
 *  0b1..Swap selection (MSB to LSB, LSB to MSB) applied to the CRC_OUTP content
 */
#define CRCA_CFG_SWAP(x)                         (((uint32_t)(((uint32_t)(x)) << CRCA_CFG_SWAP_SHIFT)) & CRCA_CFG_SWAP_MASK)

#define CRCA_CFG_POLYG_MASK                      (0xCU)
#define CRCA_CFG_POLYG_SHIFT                     (2U)
/*! POLYG - Polynomial selection
 *  0b00..CRC-CCITT polynomial
 *  0b01..CRC-32 polynomial
 *  0b10..CRC-8 polynomial
 *  0b11..CRC-8-H2F AUTOSAR polynomial
 */
#define CRCA_CFG_POLYG(x)                        (((uint32_t)(((uint32_t)(x)) << CRCA_CFG_POLYG_SHIFT)) & CRCA_CFG_POLYG_MASK)

#define CRCA_CFG_SWAP_BITWISE_MASK               (0x10U)
#define CRCA_CFG_SWAP_BITWISE_SHIFT              (4U)
/*! SWAP_BITWISE - Swap CRC_INP bit-wise
 *  0b0..Do not swap
 *  0b1..Perform bit-wise swap on CRC_INP input data internally for CRC-8 and CRC-16 and CRC-32 polynomial calculations
 */
#define CRCA_CFG_SWAP_BITWISE(x)                 (((uint32_t)(((uint32_t)(x)) << CRCA_CFG_SWAP_BITWISE_SHIFT)) & CRCA_CFG_SWAP_BITWISE_MASK)

#define CRCA_CFG_SWAP_BYTEWISE_MASK              (0x20U)
#define CRCA_CFG_SWAP_BYTEWISE_SHIFT             (5U)
/*! SWAP_BYTEWISE - Swap CRC_INP byte-wise
 *  0b0..Do not swap
 *  0b1..Perform byte-wise swap on CRC_INP input data internally for CRC-16 and CRC-32 polynomial calculations
 */
#define CRCA_CFG_SWAP_BYTEWISE(x)                (((uint32_t)(((uint32_t)(x)) << CRCA_CFG_SWAP_BYTEWISE_SHIFT)) & CRCA_CFG_SWAP_BYTEWISE_MASK)
/*! @} */

/* The count of CRCA_CFG */
#define CRCA_CFG_COUNT                           (3U)

/*! @name INP - Input Register */
/*! @{ */

#define CRCA_INP_INP_MASK                        (0xFFFFFFFFU)
#define CRCA_INP_INP_SHIFT                       (0U)
/*! INP - Input data for the CRC computation */
#define CRCA_INP_INP(x)                          (((uint32_t)(((uint32_t)(x)) << CRCA_INP_INP_SHIFT)) & CRCA_INP_INP_MASK)
/*! @} */

/* The count of CRCA_INP */
#define CRCA_INP_COUNT                           (3U)

/*! @name CSTAT - Current Status Register */
/*! @{ */

#define CRCA_CSTAT_CSTAT_MASK                    (0xFFFFFFFFU)
#define CRCA_CSTAT_CSTAT_SHIFT                   (0U)
/*! CSTAT - CRC signature status */
#define CRCA_CSTAT_CSTAT(x)                      (((uint32_t)(((uint32_t)(x)) << CRCA_CSTAT_CSTAT_SHIFT)) & CRCA_CSTAT_CSTAT_MASK)
/*! @} */

/* The count of CRCA_CSTAT */
#define CRCA_CSTAT_COUNT                         (3U)

/*! @name OUTP - Output Register */
/*! @{ */

#define CRCA_OUTP_OUTP_MASK                      (0xFFFFFFFFU)
#define CRCA_OUTP_OUTP_SHIFT                     (0U)
/*! OUTP - Final CRC signature */
#define CRCA_OUTP_OUTP(x)                        (((uint32_t)(((uint32_t)(x)) << CRCA_OUTP_OUTP_SHIFT)) & CRCA_OUTP_OUTP_MASK)
/*! @} */

/* The count of CRCA_OUTP */
#define CRCA_OUTP_COUNT                          (3U)


/*!
 * @}
 */ /* end of group CRCA_Register_Masks */


/*!
 * @}
 */ /* end of group CRCA_Peripheral_Access_Layer */


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


#endif  /* CRCA_H_ */

