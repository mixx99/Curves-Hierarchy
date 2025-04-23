#include "../include/point.h"

std::ostream& CHR::operator<<(std::ostream& os, const CHR::Point& point){
    os << "x = " << point.x << '\t' << "y = "  <<point.y << '\t' << "z = " << point.z;
    return os;
}