#include <boost/test/unit_test.hpp>
#include <array>

#include "math/add.h"

BOOST_AUTO_TEST_SUITE(add);

enum class Situation
{
    Greater_left_argument,
    Left_argument_is_zero,
    Right_argument_is_zero,
    Has_negative_numbers,
    Has_positive_numbers
};

BOOST_AUTO_TEST_CASE(test_case_1)
{
    constexpr std::array sit{
        Situation::Left_argument_is_zero,
        Situation::Right_argument_is_zero
    };

    BOOST_CHECK_EQUAL(math::add(0, 0), 0);
};

BOOST_AUTO_TEST_CASE(test_case_2)
{
    constexpr std::array sit{
        Situation::Left_argument_is_zero,
        Situation::Has_negative_numbers
    };

    BOOST_CHECK_EQUAL(math::add(0, -1), -1);
};

BOOST_AUTO_TEST_CASE(test_case_3)
{
    constexpr std::array sit{
        Situation::Left_argument_is_zero,
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(0, 2), 2);
};

BOOST_AUTO_TEST_CASE(test_case_4)
{
    constexpr std::array sit{
        Situation::Right_argument_is_zero,
        Situation::Has_negative_numbers
    };

    BOOST_CHECK_EQUAL(math::add(-1, 0), -1);
};

BOOST_AUTO_TEST_CASE(test_case_5)
{
    constexpr std::array sit{
        Situation::Right_argument_is_zero,
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(2, 0), 2);
};

BOOST_AUTO_TEST_CASE(test_case_6)
{
    constexpr std::array sit{
        Situation::Has_negative_numbers,
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(-2, 3), 1);
};

BOOST_AUTO_TEST_CASE(test_case_7)
{
    constexpr std::array sit{
        Situation::Greater_left_argument,
        Situation::Has_negative_numbers,
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(3, -2), 1);
};

BOOST_AUTO_TEST_CASE(test_case_8)
{
    constexpr std::array sit{
        Situation::Greater_left_argument,
        Situation::Has_negative_numbers
    };

    BOOST_CHECK_EQUAL(math::add(-3, -4), -7);
};

BOOST_AUTO_TEST_CASE(test_case_9)
{
    constexpr std::array sit{
        Situation::Has_negative_numbers
    };

    BOOST_CHECK_EQUAL(math::add(-4, -3), -7);
};

BOOST_AUTO_TEST_CASE(test_case_10)
{
    constexpr std::array sit{
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(3, 4), 7);
};

BOOST_AUTO_TEST_CASE(test_case_11)
{
    constexpr std::array sit{
        Situation::Greater_left_argument,
        Situation::Has_positive_numbers
    };

    BOOST_CHECK_EQUAL(math::add(4, 3), 7);
};

BOOST_AUTO_TEST_SUITE_END();