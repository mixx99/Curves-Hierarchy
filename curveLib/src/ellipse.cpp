#include "../include/ellipse.h"

// std
#include <cmath>

using std::cin;
using std::cos;

namespace CHR {
Ellipse::Ellipse(double a_, double b_) noexcept : a(a_), b(b_) {}

Point Ellipse::getPoint(double t) const noexcept{
  return Point(a * cos(t), b * sin(t), 0);
}

Point Ellipse::getDerivative(double t) const noexcept {
  return Point(a * (-sin(t)), b * cos(t), 0);
}

void Ellipse::checkValidRadii(){
  if(a < 0 || b < 0){
    a = std::abs(a);
    b = std::abs(b);
    std::cerr << "WARNING: Ellipse radius was negative. It changed to absolute value." << std::endl;
  }
}

} // namespace CHR