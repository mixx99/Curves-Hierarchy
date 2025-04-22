#pragma once
#include "curve.h"

namespace CHR{
  class Helix : public Curve{
    double r, step;
    void checkValidRadius();
  public:
    Helix(double r_, double step_) noexcept;
    ~Helix();
    Point getPoint(double t) const noexcept override;
    Point getDerivative(double t) const noexcept override;
    double getRadius() const noexcept { return r; }
    double getStep() const noexcept { return step; }
    void setRadius(double r_) noexcept;
    void setStep(double step_) noexcept { step = step_; }
  };
}