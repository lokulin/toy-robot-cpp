#ifndef TOYROBOT_ROBOT_H_
#define TOYROBOT_ROBOT_H_

#include "option.hpp"
#include "table.hpp"
#include "point.hpp"
#include <map>
#include <string>

class Robot {
public:
  Point location;
  float facing;
  Option<Table> table;

  Robot() : location(Point()), facing(0.0), table(None<Table>())
  { /**/ };

  Robot(const Point& location, const float& facing, const Option<Table>& table)
    : location(location), facing(facing), table(table)
  { /**/ };

  void move();

  void left();

  void right();

  void report(const std::map<int,std::string> itodir) const;

  void place(Point location, float facing, Option<Table> table);

};

const float rmod(const float a, const float b);

#endif // TOYROBOT_ROBOT_H_
