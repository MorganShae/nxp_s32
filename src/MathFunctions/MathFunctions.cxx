// src/MathFunctions/MathFunctions.cxx

#include "MathFunctions.h"
#include <cmath>

namespace mathfunctions {
    MY_LIBRARY_API double sqrt(double x) {
        return std::sqrt(x);
    }
}
