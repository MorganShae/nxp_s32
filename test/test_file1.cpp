#include <boost/test/unit_test.hpp>
#include "MathFunctions/MathFunctions.h"

BOOST_AUTO_TEST_CASE(test_sqrt) {
    double result = mathfunctions::sqrt(4.0);
    BOOST_CHECK_CLOSE(result, 2.0, 0.0001); // Check if result is close to 2.0
}
