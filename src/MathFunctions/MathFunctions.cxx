// src/MathFunctions/MathFunctions.cxx

#include "MathFunctions.h"
#include <cmath>

#ifdef MY_LIBRARY_EXPORTS
    #define MY_LIBRARY_API __declspec(dllexport)
#else
    #define MY_LIBRARY_API __declspec(dllimport)
#endif

namespace mathfunctions {
    MY_LIBRARY_API double sqrt(double x) {
        return std::sqrt(x);
    }
}
