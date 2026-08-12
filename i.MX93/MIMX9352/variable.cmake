# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

#### chip related
include(${SdkRootDirPath}/devices/i.MX/variable.cmake)
mcux_set_variable(device MIMX9352)
mcux_set_variable(device_root devices)
mcux_set_variable(soc_series i.MX93)
mcux_set_variable(soc_periph periph)

if (DEFINED core_id AND core_id STREQUAL "ca55")
    include(${SdkRootDirPath}/devices/i.MX/${soc_series}/${device}/ca55/variable.cmake)
else()
    mcux_set_variable(core_id_suffix_name _cm33)
    mcux_set_variable(multicore_foldername cm33)
endif()

#### Source record
