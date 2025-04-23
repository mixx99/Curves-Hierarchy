#pragma once
#include "curve.h"

namespace CHR {
class Ellipse : public Curve {
  double a, b;

public:
  Ellipse(double a_ = 1, double b_ = 1) noexcept;
  Point getPoint(double t = 1) const noexcept override;
  Point getDerivative(double t = 1) const noexcept override;

  void setA(double a_) noexcept { a = a_;}
  void setB(double b_) noexcept { b = b_;}
  double getA() const noexcept{ return a; }
  double getB() const noexcept {return b; }
};
} // namespace CHR