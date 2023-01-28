# SPDX-License-Identifier: MIT

set(BINARY_NAME math)
set(TEST_MODULE_TARGET all_${BINARY_NAME}_specs)
set(TESTING_FRAMEWORK_TARGET Boost::unit_test_framework)

makeTest(${TEST_MODULE_TARGET} ${TEST_MODULE_TARGET}.cpp)

add_subdirectory(specs_add)
