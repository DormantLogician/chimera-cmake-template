set(BINARY_NAME lib_target)

add_library(${BINARY_NAME}
    # Add sources for library here.
)

install(TARGETS ${BINARY_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES
    inc/${BINARY_NAME}/unit_name.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}
)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

# Please fill in (if applicable) test targets as described below.
# addTestDir(test/all_lib_target_specs)
