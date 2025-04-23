#include "../include/solution.h"

#include <point.h>
#include <ellipse.h>
#include <circle.h>
#include <helix.h>

// std
#include <iostream>

int main(int argc, char** argv){
  SLV::Solution solution;
  solution.fillFirstContainer();
  solution.printPointsAndDerivativesFromFirstContainer();
  

  system("Pause");
}