#include "option.hpp"
#include "point.hpp"

class Robot {
  Option<Point> location;

  public:

    Robot() :
      location(None<Point>())
    { /**/ };

};
