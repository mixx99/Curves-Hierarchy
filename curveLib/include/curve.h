#pragma once
#include "point.h"
#include <iostream>

namespace CHR {
struct Curve {
  virtual Point getPoint() = 0;
  virtual Point getDerivative() = 0;
  virtual ~Curve() {
#ifndef NDEBUG
    std::cout << "~Curve" << std::endl;
#endif
  }
};
} // namespace CHR