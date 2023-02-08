set(BINARY_NAME math)

add_library(${BINARY_NAME}
    src/add.cpp
    
    inc/${BINARY_NAME}/add.h
)

set_target_properties(${BINARY_NAME} PROPERTIES PUBLIC_HEADER inc/${BINARY_NAME}/add.h)

install(TARGETS ${BINARY_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES
    inc/${BINARY_NAME}/add.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}
)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

addTestDir(test/all_math_specs)
