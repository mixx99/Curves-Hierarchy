#include "../include/ellipse.h"
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

Ellipse::~Ellipse(){}
} // namespace CHR