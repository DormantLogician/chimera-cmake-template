set(BINARY_NAME math)

add_library(${BINARY_NAME}
    src/add.cpp
    
    inc/${BINARY_NAME}/add.h
)

set_target_properties(${BINARY_NAME} PROPERTIES PUBLIC_HEADER inc/math/add.h)

install(TARGETS ${BINARY_NAME} PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/math)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

addTestDir(test/all_math_specs)
