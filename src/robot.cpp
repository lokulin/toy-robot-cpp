#include <cmath>

#include "robot.hpp"
#include <iostream>

const double pi() { return std::acos(-1); }

void Robot::move() {
  Point new_location = Point(location.x + sin(pi()*facing)
                            , location.y + cos(pi()*facing));
  place(new_location, facing, table);
}

void Robot::left() {
  facing = rmod(facing - 0.5, 2.0);
}

void Robot::right() {
  facing = rmod(facing + 0.5, 2.0);
}

void Robot::report() const {
  std::cout << location.x << "," << location.y << "," << facing << "\n";
}

void Robot::place(Point location, float facing
                 , Option<Table> table) {
  if (table.isSome() && table.get().contains(location)) {
    this->location = location;
    this->facing = facing;
    this->table = table;
  }
}

const float rmod(const float a, const float b) {
  return a - b * floor(a/b);
}

int main () {
  Robot robot = Robot();
  Option<Table> table = Some(Table(Point(0,0),Point(4,4)));
  robot.move();
  robot.report();
  robot.left();
  robot.report();
  robot.right();
  robot.report();
  robot.place(Point(1,2), 0.5, table);
  robot.report();
  robot.move();
  robot.report();
}
