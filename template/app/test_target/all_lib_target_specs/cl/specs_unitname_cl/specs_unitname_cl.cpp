#include <boost/test/unit_test.hpp>
#include <array>

BOOST_AUTO_TEST_SUITE(unitname_cl);

enum class Situation
{
    First,
    Second,
    Third,
    Nth
};

BOOST_AUTO_TEST_CASE(test_case_1)
{
    constexpr std::array sit{
        Situation::First,
        Situation::Second,
        Situation::Third,
        Situation::Nth
    };

    BOOST_FAIL("Test case body not completed yet.");
};

BOOST_AUTO_TEST_SUITE_END();
