#include "toyrobot.hpp"
#include <iostream>

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
