# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

if (CONFIG_MCUX_COMPONENT_driver.clock)
    mcux_add_source( SOURCES fsl_clock.c fsl_clock.h )
    mcux_add_include( INCLUDES . )
endif()

if (CONFIG_MCUX_COMPONENT_driver.iomuxc)
    mcux_add_source( SOURCES fsl_iomuxc.h )
    mcux_add_include( INCLUDES . )
endif()
