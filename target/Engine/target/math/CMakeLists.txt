set(BINARY_NAME math)

add_library(${BINARY_NAME}
    src/public/fn/add.cpp
    inc/${BINARY_NAME}/public/fn/add.h
)

install(TARGETS ${BINARY_NAME} ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT app)
install(FILES
    inc/${BINARY_NAME}/public/fn/add.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}/public/fn
    COMPONENT app
)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

addTestDir(test/all_math_specs)
