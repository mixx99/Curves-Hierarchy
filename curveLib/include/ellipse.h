#pragma once
#include "curve.h"

namespace CHR {
class Ellipse : public Curve {
  double a = 1, b = 1;

public:
  Ellipse(double a_ = 1, double b_ = 1) noexcept;
  Point getPoint(const double &t = 1) const noexcept;
  Point getDerivative(const double &t = 1) const noexcept;

  void setA(const double& a_) noexcept { a = a_;}
  void setB(const double& b_) noexcept { b = b_;}
  double getA() const noexcept{ return a; }
  double getB() const noexcept {return b; }
  ~Ellipse();
};
} // namespace CHR