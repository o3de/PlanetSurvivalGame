#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
#
# SPDX-License-Identifier: Apache-2.0 OR MIT
#
#

if(LY_MONOLITHIC_GAME)
    include(Platform/Windows/Monolithic/permutation.cmake OPTIONAL)
else()
    include(Platform/Windows/Default/permutation.cmake)
endif()
