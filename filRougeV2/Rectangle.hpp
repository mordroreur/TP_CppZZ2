#ifndef __CPP4__RECTANGLE_HPP__
#define __CPP4__RECTANGLE_HPP__

#include <iostream>
#include "Forme.hpp"

class Rectangle:public Forme{
  
public :
  Rectangle();
  Rectangle(Point, double, double);
  std::string toString() const override;
};

#endif
