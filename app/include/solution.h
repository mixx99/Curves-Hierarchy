#pragma once

#include <curve.h>
#include <circle.h>
// std

#include <vector>
#include <memory>
#include <ctime>
#ifndef M_PI
  #define M_PI 3.14159265358979323846
#endif

namespace SLV{
struct Solution{
  Solution() { srand(time(NULL)); }
  std::vector<std::shared_ptr<CHR::Curve>> firstContainer;
  std::vector<std::shared_ptr<CHR::Circle>> secondContainer;
  
  void fillFirstContainer(int number_of_curves = 10, double max_radius = 10, int max_step = 10);
  void fillSecondContainer();

  void printPointsAndDerivativesFromFirstContainer(double t = M_PI / 4) const;
  void sortSecondContainer();

private:
  double getRandDouble(int max_value, bool can_be_negative = false);
};
}