#include "../include/solution.h"

#include <point.h>
#include <ellipse.h>
#include <circle.h>
#include <helix.h>

// std
#include <iostream>

int main(int argc, char** argv){
  SLV::Solution solution;
  solution.fillFirstContainer(); // we can pass more parameters such as size, max radius, max step. By default every parameter is 10.
  std::cout << "Size of the first container: " << solution.firstContainer.size() << std::endl;
  solution.printPointsAndDerivativesFromFirstContainer(M_PI/4); // by default t = PI/4
  
  solution.fillSecondContainer();
  solution.sortSecondContainer();
  std::cout << "Size of the second container: " << solution.secondContainer.size() << std::endl;
  std::cout << "Sum of radii in the second container: " << solution.getSumSecondContainerRadii() << std::endl;

  //system("Pause");
}