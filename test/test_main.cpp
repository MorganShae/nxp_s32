#define BOOST_TEST_MODULE MyTest
#include <boost/test/included/unit_test.hpp>

int main(int argc, char* argv[])
{
    // Initialize the test framework
    return boost::unit_test::unit_test_main(&init_unit_test, argc, argv);
}

// A simple test case
BOOST_AUTO_TEST_CASE(example_test) {
    int a = 1;
    int b = 2;

    BOOST_CHECK_EQUAL(a + b, 3);
}
