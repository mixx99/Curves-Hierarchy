#pragma once
#include "curve.h"

namespace CHR{
  class Circle : public Curve{
  private:
    double r = 1;
    void checkValidRadius();
  public:
    Circle(double r_) noexcept;
  public:
    Point getPoint(const double& t) const noexcept;
    Point getDerivative(const double& t) const noexcept;
    double getRadius() const noexcept;
    void setRadius(const double& r_) noexcept;
    ~Circle();
  };
}