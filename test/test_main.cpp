#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp>

// A simple test case
BOOST_AUTO_TEST_CASE(example_test) {
    int a = 1;
    int b = 2;

    BOOST_CHECK_EQUAL(a + b, 3);
}
