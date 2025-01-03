set(BINARY_NAME math)

add_library(${BINARY_NAME} STATIC
    src/public/fn/add.cpp
    inc/${BINARY_NAME}/public/fn/add.h
)

generate_export_header(${BINARY_NAME}
    EXPORT_FILE_NAME ${BINARY_NAME}_def_exports.h
    EXPORT_MACRO_NAME ${BINARY_NAME}_EXPORT
)

configure_file(${PROJECT_SOURCE_DIR}/util/build/cmake/template/lib_export.h.in ${BINARY_NAME}_export.h)

install(TARGETS ${BINARY_NAME} LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

set_target_properties(${BINARY_NAME} PROPERTIES PUBLIC_HEADER
    "inc/${BINARY_NAME}/public/fn/add.h;
    ${CMAKE_CURRENT_BINARY_DIR}/${BINARY_NAME}_def_exports.h;
    ${CMAKE_CURRENT_BINARY_DIR}/${BINARY_NAME}_export.h"
)

install(TARGETS ${BINARY_NAME}
    EXPORT ${BINARY_NAME}Config
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${BINARY_NAME}
)

export(TARGETS ${BINARY_NAME}
    NAMESPACE ${BINARY_NAME}::
    FILE "${CMAKE_CURRENT_BINARY_DIR}/${BINARY_NAME}Config.cmake"
)

install(EXPORT ${BINARY_NAME}Config
    DESTINATION "pkg/cmake"
    NAMESPACE ${BINARY_NAME}::
)

target_include_directories(${BINARY_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

addTestDir(test)
