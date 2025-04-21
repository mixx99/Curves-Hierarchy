#include "../include/helix.h"

// std
#include <iostream>
#include <cmath>

using std::sin;
using std::cos;

namespace CHR{
    Helix::Helix(double r_, double step_) : r(r_), step(step_) {}
    Helix::~Helix(){}
    void Helix::checkValidRadius(){
      if(r < 0){
        r = -r;
        std::cerr << "WARNING: Radius can't be negative. Helix Radius changed to absolute value." << std::endl;
      }
    }
    Point Helix::getPoint(double t) const{
      return Point(r * cos(t), r * sin(t), step / (2*M_PI) * t);
    }
    Point Helix::getDerivative(double t) const{
      return Point(r * -sin(t), r * cos(t), step / (2*M_PI));
    }
    void Helix::setRadius(double r_){
      r = r_;
      checkValidRadius();
    }
}