#include "../include/solution.h"

#include <ellipse.h>
#include <helix.h>
// std
#include <cmath>
#include <algorithm>
#include <cassert>

namespace{
  enum{
    CIRCLE,
    ELLIPSE,
    HELIX
  };
}

namespace SLV{
  double Solution::getRandDouble(int max_value, bool can_be_negative){
    double integer_part = rand() % max_value;
    double float_part;
    while(1){
      float_part = 1 / ((double)(rand() % 10)); // % 10 gives a digit [0..9] for fractional part
      if(!std::isinf(float_part)) // Dangerous, division by 0
        break;
    }
    double result = integer_part + float_part;
    if(can_be_negative && rand() % 2 == 0)
      result = -result;
    return result;
  }

  void Solution::fillFirstContainer(int number_of_curves, double max_radius, int max_step){
    for(int i = 0; i < number_of_curves; ++i){
      double rand_radius = getRandDouble(max_radius);
      double second_rand_radius = getRandDouble(max_radius); // Second radius for ellipse
      double rand_step = getRandDouble(max_step);
      int obj_number = rand() % 3; // % 3 because we have only 3 objects: circle, ellipse, helix.
      if(obj_number == CIRCLE){
        firstContainer.push_back(std::make_shared<CHR::Circle>(CHR::Circle(rand_radius)));
      }
      else if(obj_number == ELLIPSE){
        firstContainer.push_back(std::make_shared<CHR::Ellipse>(CHR::Ellipse(rand_radius, second_rand_radius)));
      }
      else if(obj_number == HELIX){
        firstContainer.push_back(std::make_shared<CHR::Helix>(CHR::Helix(rand_radius, rand_step)));
      }
      else
        std::cerr << "WARNING: Something went wrong with filling first container!" << std::endl;
    }
  }

  void Solution::fillSecondContainer(){
    for(const auto &i : firstContainer){
        auto circle_obj = std::dynamic_pointer_cast<CHR::Circle>(i);
        if(circle_obj)
          secondContainer.push_back(circle_obj);
    }
  }
  void Solution::sortSecondContainer(){
    std::sort(secondContainer.begin(), secondContainer.end(), [](auto first, auto second)
    {
      return first->getRadius() < second->getRadius();
    });
  }

  double Solution::getSumSecondContainerRadii() const{
    double result = 0;
    for(const auto& i : secondContainer)
      result += i->getRadius();
    assert(result >= 0);
    return result;
  }

  void Solution::printPointsAndDerivativesFromFirstContainer(double t) const{
    double epsilon = 0.00001;
    if(t - M_PI/4 < epsilon)
      std::cout << "t = PI/4" << std::endl;

    for(const auto &i : firstContainer){
      auto obj_circle = std::dynamic_pointer_cast<CHR::Circle>(i);
      auto obj_ellipse = std::dynamic_pointer_cast<CHR::Ellipse>(i);
      auto obj_helix = std::dynamic_pointer_cast<CHR::Helix>(i);
      if(obj_circle)
        std::cout << "Circle: " << "Radius = " << obj_circle->getRadius() << std::endl;
      else if(obj_ellipse)
        std::cout << "Ellipse: " << "a = " << obj_ellipse->getA() << " b = " << obj_ellipse->getB() << std::endl;
      else if(obj_helix)
        std::cout << "Helix: " << "R = " << obj_helix->getRadius() << " Step = " << obj_helix->getStep() << std::endl;
      else
        std::cerr << "Something went wrong with print points!" << std::endl;

      std::cout << "  Point:      " << i->getPoint(t) << std::endl;
      std::cout << "  Derivative: " << i->getDerivative(t) << std::endl;
    }
  }
}