cmake_minimum_required(VERSION 3.21)

project(MathConanPackageTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

set(BINARY_NAME math_conan_package_test)

add_executable(${BINARY_NAME}
    ${BINARY_NAME}.cpp
)

find_package(chimera-example REQUIRED)
target_link_libraries(${BINARY_NAME} PRIVATE chimera-example::chimera-example)
