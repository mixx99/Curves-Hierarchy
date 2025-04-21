#pragma once
#include "point.h"
#include <iostream>

namespace CHR {
struct Curve {
  virtual Point getPoint(double t) const = 0;
  virtual Point getDerivative(double t) const = 0;
  virtual ~Curve() = default;
};
} // namespace CHR