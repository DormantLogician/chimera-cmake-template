set(BINARY_NAME math)
set(TEST_MODULE_TARGET all_${BINARY_NAME}_specs)
set(TESTING_FRAMEWORK_TARGET Boost::unit_test_framework)

makeTest(${TEST_MODULE_TARGET} main.cpp)
target_sources(${TEST_MODULE_TARGET} PRIVATE
    specs_add.cpp
)

target_link_libraries(${TEST_MODULE_TARGET} PRIVATE ${BINARY_NAME} ${TESTING_FRAMEWORK_TARGET})

makeTest(${TEST_MODULE_TARGET}_nonfunctional main_nonfunctional.cpp)
target_sources(${TEST_MODULE_TARGET}_nonfunctional PRIVATE
    specs_add_nonfunctional.cpp
)

target_link_libraries(${TEST_MODULE_TARGET}_nonfunctional PRIVATE ${BINARY_NAME} benchmark::benchmark)

set_property(
    TEST ${TEST_MODULE_TARGET}_nonfunctional
    PROPERTY FAIL_REGULAR_EXPRESSION "BigO.+nan;definitely lost: [1-9][0-9]+ bytes" # Regex for benchmarks and Valgrind memory leak checker respectively.
)
