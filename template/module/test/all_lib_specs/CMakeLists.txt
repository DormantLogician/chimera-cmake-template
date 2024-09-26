set(BINARY_NAME lib)
set(TEST_MODULE_TARGET all_${BINARY_NAME})
set(TESTING_FRAMEWORK_TARGET Boost::unit_test_framework)

makeTest(${TEST_MODULE_TARGET}_specs ${TEST_MODULE_TARGET}_specs.cpp)
target_link_libraries(${TEST_MODULE_TARGET}_specs PRIVATE ${TESTING_FRAMEWORK_TARGET})
setupFlags(${TEST_MODULE_TARGET}_specs)

makeTest(${TEST_MODULE_TARGET}_specs_nonfunctional ${TEST_MODULE_TARGET}_specs_nonfunctional.cpp)
target_link_libraries(${TEST_MODULE_TARGET}_specs_nonfunctional PRIVATE benchmark::benchmark)
setupFlags(${TEST_MODULE_TARGET}_specs_nonfunctional)
set_property(
    TEST ${TEST_MODULE_TARGET}_specs_nonfunctional
    PROPERTY FAIL_REGULAR_EXPRESSION "BigO.+nan;definitely lost: [1-9][0-9]+ bytes" # Regex for benchmarks and Valgrind memory leak checker respectively.
)

add_subdirectory(fn/specs_unitname)


