set(BINARY_NAME math)

add_library(${BINARY_NAME}
    src/add.cpp
    
    inc/${BINARY_NAME}/add.h
)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

addTestDir(test/all_math_specs)
