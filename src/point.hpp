class Point {
  public:
    double x, y;

    Point() :
      x(0),
      y(0)
    { /**/ }

    Point(double xx, double yy) :
      x(xx),
      y(yy)
    { /**/ }

    bool operator>=(const Point& rhs) const;
    bool operator<=(const Point& rhs) const;

    Point operator&=(const Point& rhs) const;

};
