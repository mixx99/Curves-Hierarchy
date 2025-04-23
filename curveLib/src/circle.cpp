#include "../include/circle.h"

//std
#include <cmath>
#include <iostream>

using std::cin;
using std::cos;

namespace CHR{

  void Circle::checkValidRadius(){
    if(r < 0){
      r = -r;
      std::cerr << "WARNING: Radius can't be negative. Circle Radius changed to absolute value." << std::endl;
    }
  }

  Circle::Circle(double r_) noexcept : r(r_){
    checkValidRadius();
  }

  Point Circle::getPoint(double t) const noexcept{
    return Point(r * cos(t), r * sin(t), 0);
  }
  Point Circle::getDerivative(double t) const noexcept{
    return Point(r * -sin(t), r * cos(t), 0);
  }
  double Circle::getRadius() const noexcept{
    return r;
  }
  void Circle::setRadius(double r_) noexcept{
    r = r_;
    checkValidRadius();
  }
} // namespace CHR