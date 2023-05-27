#include <boost/test/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

namespace bdata = boost::unit_test::data;

BOOST_AUTO_TEST_SUITE(unitname_fn);

BOOST_AUTO_TEST_CASE(First_spec_description)
{
    BOOST_FAIL("Incomplete test case.");
};

BOOST_AUTO_TEST_SUITE_END();
