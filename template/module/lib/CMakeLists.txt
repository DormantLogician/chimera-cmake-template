set(BINARY_NAME lib)

add_library(${BINARY_NAME}
    # Add sources for library here.
)

install(TARGETS ${BINARY_NAME} ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT lib)

install(FILES
    inc/${BINARY_NAME}/public/fn/fn.h
    inc/${BINARY_NAME}/public/fn/reader_fn.h
    inc/${BINARY_NAME}/public/fn/writer_fn.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}/public/fn
    COMPONENT lib
)

install(FILES
    inc/${BINARY_NAME}/public/cl/cl.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}/public/cl
    COMPONENT lib
)

install(FILES
    inc/${BINARY_NAME}/public/def/def.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}/public/def
    COMPONENT lib
)

setupFlags(${BINARY_NAME})
target_include_directories(${BINARY_NAME} PUBLIC inc)

# Please fill in (if applicable) test targets as described below.
# addTestDir(test/all_lib_specs)


