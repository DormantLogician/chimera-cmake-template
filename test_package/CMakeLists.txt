cmake_minimum_required(VERSION 3.21)

project(ConanPackageTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(chimera-example CONFIG REQUIRED)

set(BINARY_NAME conan_package_test)

add_executable(${BINARY_NAME}
    ${BINARY_NAME}.cpp
)

target_link_libraries(${BINARY_NAME} PRIVATE chimera-example::chimera-example)
