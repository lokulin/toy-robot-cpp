#include "point.hpp"

bool Point::operator>=(const Point& rhs) const {
  return x >= rhs.x && y >= rhs.y;
}

bool Point::operator<=(const Point& rhs) const {
  return x <= rhs.x && y <= rhs.y;
}

Point Point::operator&=(const Point& rhs) const {
  return Point(x + rhs.x, y + rhs.y);
}

