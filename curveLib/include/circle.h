#pragma once
#include "curve.h"

namespace CHR{
  class Circle : public Curve{
    double r = 1;
    void checkValidRadius();
  public:
    Circle(double r_) noexcept;
  public:
    Point getPoint(double t) const noexcept override;
    Point getDerivative(double t) const noexcept override;
    double getRadius() const noexcept;
    void setRadius(double r_) noexcept;
    ~Circle();
  };
}