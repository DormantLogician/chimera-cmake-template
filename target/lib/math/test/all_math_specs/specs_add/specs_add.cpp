// SPDX-License-Identifier: MIT

#include <boost/test/unit_test.hpp>

#include "math/add.h"


BOOST_AUTO_TEST_SUITE(add);

BOOST_AUTO_TEST_CASE(Both_positive)
{
    BOOST_CHECK_EQUAL(math::add(3854, 1643), 5497);
};

BOOST_AUTO_TEST_CASE(Both_negative)
{
    BOOST_CHECK_EQUAL(math::add(-12000, -340000), -352000);
};

BOOST_AUTO_TEST_CASE(Positive_then_negative)
{
    BOOST_CHECK_EQUAL(math::add(200000, -10000), 190000);
};

BOOST_AUTO_TEST_CASE(Negative_then_positive)
{
    BOOST_CHECK_EQUAL(math::add(-42000, 27000), -15000);
};

BOOST_AUTO_TEST_CASE(Both_zero)
{
    BOOST_CHECK_EQUAL(math::add(0, 0), 0);
};

BOOST_AUTO_TEST_CASE(Both_one)
{
    BOOST_CHECK_EQUAL(math::add(1, 1), 2);
};

BOOST_AUTO_TEST_CASE(Zero_then_one)
{
    BOOST_CHECK_EQUAL(math::add(0, 1), 1);
};

BOOST_AUTO_TEST_CASE(One_then_zero)
{
    BOOST_CHECK_EQUAL(math::add(1, 0), 1);
};

BOOST_AUTO_TEST_SUITE_END();
