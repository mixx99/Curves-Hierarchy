#include "../include/circle.h"
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

  Circle::Circle(double r_) : r(r_){
    checkValidRadius();
  }

  Point Circle::getPoint(const double& t) const{
    return Point(r * cos(t), r * sin(t), 0);
  }
  Point Circle::getDerivative(const double& t) const{
    return Point(r * -sin(t), r * cos(t), 0);
  }
  double Circle::getRadius() const{
    return r;
  }
  void Circle::setRadius(const double& r_){
    r = r_;
    checkValidRadius();
  }
  Circle::~Circle(){
    #ifndef NDEBUG
    std::cout << "~Circle" << std::endl;
    #endif
  }
} // namespace CHR