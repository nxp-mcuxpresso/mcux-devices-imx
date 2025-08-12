# Copyright 2024-2025 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

#### device spepcific drivers
mcux_add_cmakelists(${SdkRootDirPath}/${device_root}/i.MX/i.MX8MP/MIMX8ML8/drivers)
mcux_add_cmakelists(${SdkRootDirPath}/devices/i.MX/i.MX8MP/${device}/${core_id})

#### i.MX shared drivers/components/middlewares, project segments
include(${SdkRootDirPath}/devices/i.MX/shared.cmake)
