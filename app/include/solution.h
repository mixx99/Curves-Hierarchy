#pragma once

#include <curve.h>
#include <circle.h>
#include <constants.h>
// std
#include <vector>
#include <memory>
#include <ctime>

namespace SLV{
struct Solution{
  Solution() { srand(time(NULL)); }
  std::vector<std::shared_ptr<CHR::Curve>> firstContainer;
  std::vector<std::shared_ptr<CHR::Circle>> secondContainer;
  
  void fillFirstContainer(int number_of_curves = 10, double max_radius = 10, int max_step = 10);
  void fillSecondContainer();

  void printPointsAndDerivativesFromFirstContainer(double t = M_PI / 4) const;
  void sortSecondContainer();

  double getSumSecondContainerRadii() const;
private:
  double getRandDouble(int max_value = 10, bool can_be_negative = false);
};
}