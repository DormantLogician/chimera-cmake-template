cmake_minimum_required(VERSION 3.20)

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
