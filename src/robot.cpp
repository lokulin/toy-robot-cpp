#include "robot.hpp"
#include <iostream>

int main () {
  Robot robot = Robot();
  Point p1 = Point(10,0);
  Option<Point> sp = Some(p1);
  Option<Point> np = None<Point>();
  std::cout << sp.get().x << "\n";
}
