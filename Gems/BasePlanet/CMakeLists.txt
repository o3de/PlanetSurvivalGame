#
# Copyright (c) Contributors to the Open 3D Engine Project.
# For complete copyright and license terms please see the LICENSE at the root of this distribution.
#
# Other additions:
# SPDX-License-Identifier: Apache-2.0 OR MIT
# ^ any code, text, data or non-image files in this repository.
#
# SPDX-License-Identifier: CC-BY-4.0
# ^ any additional content/assets, images, 3D geometry, etc.
#
#

# This will export its "SourcePaths" to the generated "cmake_dependencies.<project>.assetbuilder.setreg"
if(PAL_TRAIT_BUILD_HOST_TOOLS)
    ly_create_alias(NAME BasePlanet.Builders NAMESPACE Gem)
endif()