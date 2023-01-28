# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.20)

set(PROJECT_IS_ROOT CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)

# Set default to 'Release' to avoid pushing out debug builds accidentally.
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Forbid in-source builds in order to keep root project directory from being polluted with binary files.
if (${PROJECT_IS_ROOT} AND
    NOT (CMAKE_BINARY_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR))
    message(FATAL_ERROR "In-source builds are prohibited, please run CMake relative to 'built' directory.")
endif()

project(Example LANGUAGES CXX)

set(SETUP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/util/build/cmake/setup) # Directory used by this CMake configuartion for setup-related includes.

include(${SETUP_DIR}/setup.cmake) # Perform general configuration related to project before continuing.
include(${SETUP_DIR}/common.cmake) # Define functions that are used later.
include(${SETUP_DIR}/deps.cmake)
include(${SETUP_DIR}/linting.cmake) # Deps not included in linting because they are retrieved above.

# Add project's targets to build.
set(TARGET_DIR ${CMAKE_CURRENT_SOURCE_DIR}/target)

add_subdirectory(${TARGET_DIR}/lib/math)
add_subdirectory(${TARGET_DIR}/app/example)
