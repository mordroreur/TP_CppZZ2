#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point {
  double x;
  double y;
public:
  Point();
  Point(const double, const double);
  double getX() const;
  double getY() const;
  void setX(const double);
  void setY(const double);  
};


#endif
