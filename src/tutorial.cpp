// A simple program that computes the square root of a number
#include <iostream>
#include <string>

#include "MathFunctions/MathFunctions.h"

int main(int argc, char* argv[])
{
  // nvert input to double
  const double inputValue = std::stod(argv[1]);

  const double outputValue = mathfunctions::sqrt(inputValue);

  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
