#ifndef __CPP4__CERCLE_HPP__
#define __CPP4__CERCLE_HPP__

#include <iostream>
#include "Forme.hpp"

class Cercle:public Forme{
  
public :
  Cercle();
  Cercle(Point, double);
  Cercle(Point, double, double);
  std::string toString() const override;

  void setRayon(const float);
  float getRayon() const;
};


#endif
