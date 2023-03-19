#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include <vector>
#include <limits>

#include "math/add.h"

namespace bdata = boost::unit_test::data;

std::vector<long long> get_dataset()
{
    return {
        std::numeric_limits<long long>::min(),
        -10,
        -9,
        -8,
        -7,
        -6,
        -5,
        -4,
        -3,
        -2,
        -1,
        0,
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        std::numeric_limits<long long>::max(),
    };
};

BOOST_AUTO_TEST_SUITE(add);

BOOST_DATA_TEST_CASE(Data_test_example,
                     (bdata::make(get_dataset()) * bdata::make(get_dataset())),
                     first_integer, second_integer)
{
    BOOST_TEST_INFO_SCOPE("OUTPUT: " << math::add(first_integer, second_integer) << "\n");
    BOOST_CHECK_EQUAL((math::add(first_integer, second_integer) - second_integer), first_integer);
    BOOST_CHECK_EQUAL((math::add(first_integer, second_integer) - first_integer), second_integer);
    BOOST_CHECK_EQUAL(math::add(first_integer, second_integer), math::add(second_integer, first_integer));
};

BOOST_AUTO_TEST_SUITE_END();
