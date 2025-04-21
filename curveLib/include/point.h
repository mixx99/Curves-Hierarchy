#pragma once
#include <stdint.h>

namespace CHR {
struct Point {
  double x, y, z;
  Point(double x_ = 0, double y_ = 0, double z_ = 0) noexcept : x(x_), y(y_), z(z_) {}
};
} // namespace CHR