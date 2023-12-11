//#include <iostream>
#include "Point.hpp"

Point ORIGINE{0, 0};

Point::Point() : Point(ORIGINE.getX(), ORIGINE.getY()) {}

Point::Point(const double px, const double py) : x(px), y(py) {}

double Point::getX() const {return x;}

double Point::getY() const { return y; }

void Point::setX(const double px) { x = px; }

void Point::setY(const double py) {y = py;}
