// src/MathFunctions/MathFunctions.h

#pragma once

#if defined(_WIN32)
    // For Windows
    #ifdef MY_LIBRARY_EXPORTS
        #define MY_LIBRARY_API __declspec(dllexport)
    #else
        #define MY_LIBRARY_API __declspec(dllimport)
    #endif
#else
    // For Linux and other platforms
    #define MY_LIBRARY_API __attribute__((visibility("default")))
#endif

namespace mathfunctions {
    MY_LIBRARY_API double sqrt(double x);
}
