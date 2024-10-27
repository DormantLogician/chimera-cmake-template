set(SUITE_NAME unitname_fn)
set(SUITE_TARGET ${BINARY_NAME}_${SUITE_NAME})

add_library(specs_${SUITE_TARGET} OBJECT
    specs_${SUITE_NAME}.cpp
)

add_library(specs_nonfunctional_${SUITE_TARGET} OBJECT
    specs_nonfunctional_${SUITE_NAME}.cpp
)

target_link_libraries(specs_${SUITE_TARGET} PRIVATE ${BINARY_NAME} ${TESTING_FRAMEWORK_TARGET})
target_link_libraries(specs_nonfunctional_${SUITE_TARGET} PRIVATE ${BINARY_NAME} benchmark::benchmark)
setupFlags(specs_${SUITE_TARGET})
setupFlags(specs_nonfunctional_${SUITE_TARGET})

target_link_libraries(${TEST_MODULE_TARGET}_specs PRIVATE
    specs_${SUITE_TARGET}
)

target_link_libraries(${TEST_MODULE_TARGET}_specs_nonfunctional PRIVATE
    specs_nonfunctional_${SUITE_TARGET}
)


