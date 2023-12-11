#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle() : Forme() {}

Rectangle::Rectangle(Point p, double a, double b) : Forme(p, a, b, COULEURS::BLEU) {}

std::string Rectangle::toString() const {
  Point p = getPoint();
  return "RECTANGLE " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(getLargeur()) + " " + std::to_string(getHauteur()) ;
}
