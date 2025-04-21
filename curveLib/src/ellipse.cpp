#include "../include/ellipse.h"
#include <cmath>

using std::cin;
using std::cos;

namespace CHR {
Ellipse::Ellipse(double a_, double b_) : a(a_), b(b_) {}

Point Ellipse::getPoint(const double &t) const {
  return Point(a * cos(t), b * sin(t), 0);
}

Point Ellipse::getDerivative(const double &t) const {
  return Point(a * (-sin(t)), b * cos(t), 0);
}

Ellipse::~Ellipse(){
  #ifndef NDEBUG
  std::cout << "~Ellipse" << std::endl;
  #endif
}
} // namespace CHR