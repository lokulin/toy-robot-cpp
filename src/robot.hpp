#ifndef TOYROBOT_ROBOT_H_
#define TOYROBOT_ROBOT_H_

#include "option.hpp"
#include "table.hpp"
#include "point.hpp"

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

  void move() const;

  void left() const;

  void right() const;

  void report() const;

  void place(Point location, float facing, Option<Table> table);

};

#endif // TOYROBOT_ROBOT_H_
