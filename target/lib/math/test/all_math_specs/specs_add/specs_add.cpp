#include <boost/test/unit_test.hpp>
#include <array>

#include "math/add.h"

BOOST_AUTO_TEST_SUITE(add);


BOOST_AUTO_TEST_SUITE(Output_is_sum_of_both_numbers);

BOOST_AUTO_TEST_CASE(test_case_1)
{
    BOOST_CHECK_EQUAL(math::add(0, 0), 0);
    BOOST_CHECK_EQUAL(math::add(0, -1), -1);
    BOOST_CHECK_EQUAL(math::add(0, 2), 2);
    BOOST_CHECK_EQUAL(math::add(-1, 0), -1);
    BOOST_CHECK_EQUAL(math::add(2, 0), 2);
    BOOST_CHECK_EQUAL(math::add(-2, 3), 1);
    BOOST_CHECK_EQUAL(math::add(3, -2), 1);
    BOOST_CHECK_EQUAL(math::add(-3, -4), -7);
    BOOST_CHECK_EQUAL(math::add(-4, -3), -7);
    BOOST_CHECK_EQUAL(math::add(3, 4), 7);
    BOOST_CHECK_EQUAL(math::add(4, 3), 7);
};

BOOST_AUTO_TEST_SUITE_END();


BOOST_AUTO_TEST_SUITE_END();