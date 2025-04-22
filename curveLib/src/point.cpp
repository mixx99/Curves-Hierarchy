#include "../include/point.h"

std::ostream& CHR::operator<<(std::ostream& os, const CHR::Point& point){
    os << point.x << ' ' << point.y << ' ' << point.z;
    return os;
}