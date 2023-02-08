cmake_minimum_required(VERSION 3.20)

project(MathConanPackageTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(BINARY_NAME math_conan_package_test)

add_executable(${BINARY_NAME}
    ${BINARY_NAME}.cpp
)

target_link_libraries(${BINARY_NAME} PRIVATE ${CONAN_LIBS_MATH})
