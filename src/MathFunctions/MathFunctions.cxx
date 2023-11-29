// src/MathFunctions/MathFunctions.cxx

#include "MathFunctions.h"
#include <cmath>

namespace mathfunctions {
    __declspec(dllexport) double sqrt(double x) {
        return std::sqrt(x);
    }
}
