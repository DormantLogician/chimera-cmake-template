set(BINARY_NAME lib_target)

add_library(${BINARY_NAME}
    # Add sources for library here.
)

set_target_properties(${BINARY_NAME} PROPERTIES PUBLIC_HEADER inc/lib_target/unit_name.h)

install(TARGETS ${BINARY_NAME} PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lib_target)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

# Please fill in (if applicable) test targets as described below.
# addTestDir(test/all_lib_target_specs)
