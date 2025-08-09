# Copyright 2024-2025 NXP
#
# SPDX-License-Identifier: BSD-3-Clause

#### device spepcific drivers
mcux_add_cmakelists(${SdkRootDirPath}/${device_root}/i.MX/i.MX8MM/MIMX8MM6/drivers)
mcux_add_cmakelists(${SdkRootDirPath}/devices/i.MX/i.MX8MM/${device}/${core_id})

#### i.MX shared drivers/components/middlewares, project segments
include(${SdkRootDirPath}/devices/i.MX/shared.cmake)
