cmake_minimum_required(VERSION 3.21)

set(CMAKE_CONFIGURATION_TYPES Debug Release RelWithDebInfo MinSizeRel Test Profile Coverage)

if (NOT GENERATOR_IS_MULTI_CONFIG AND NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

project(ChimeraExample 
    LANGUAGES CXX
    DESCRIPTION "Example application and library included in Chimera CMake project template."
    VERSION 1.0
)

set(SETUP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/util/build/cmake/setup) # Directory used by this CMake configuartion for setup-related includes.

include(${SETUP_DIR}/setup.cmake) # Perform general configuration related to project before continuing.
include(${SETUP_DIR}/common.cmake) # Define functions that are used later.
include(${SETUP_DIR}/dep.cmake)
include(${SETUP_DIR}/program.cmake) # Deps not included in linting because they are retrieved above.
include(${SETUP_DIR}/packing.cmake) # Configure CPack so we can package our binaries and sources.

# Add project's targets to build.
set(TARGET_DIR target)

add_subdirectory(${TARGET_DIR}/math)
add_subdirectory(${TARGET_DIR}/example)

install(FILES LICENSE.txt DESTINATION ${CMAKE_INSTALL_DOCDIR})

# Enable binary and source packaging targets (for certain generators).
include(CPack)
