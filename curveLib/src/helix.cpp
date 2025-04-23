#include "../include/helix.h"

// std
#include <iostream>
#include <cmath>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

using std::sin;
using std::cos;

namespace CHR{
    Helix::Helix(double r_, double step_) noexcept : r(r_), step(step_) {}
    void Helix::checkValidRadius(){
      if(r < 0){
        r = -r;
        std::cerr << "WARNING: Radius can't be negative. Helix Radius changed to absolute value." << std::endl;
      }
    }
    Point Helix::getPoint(double t) const noexcept{
      return Point(r * cos(t), r * sin(t), step / (2*M_PI) * t);
    }
    Point Helix::getDerivative(double t) const noexcept{
      return Point(r * -sin(t), r * cos(t), step / (2*M_PI));
    }
    void Helix::setRadius(double r_) noexcept{
      r = r_;
      checkValidRadius();
    }
}