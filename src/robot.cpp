#include "robot.hpp"
#include <iostream>

void Robot::move() const {}

void Robot::left() const {}

void Robot::right() const {}

void Robot::report() const {}

void Robot::place(Point location, float facing
                 , Option<Table> table) {
  this->location = location;
  this->facing = facing;
  this->table = table;
}

int main () {
  Robot robot = Robot();
  Option<Table> table = Some(Table(Point(0,0),Point(4,4)));
  robot.move();
  robot.left();
  robot.right();
  robot.report();
  robot.place(Point(1,2), 0.5, table);
}
