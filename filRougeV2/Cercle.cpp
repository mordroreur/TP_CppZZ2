#include "Cercle.hpp"
#include <string>

Cercle::Cercle() : Forme() {}

Cercle::Cercle(Point p, double d) : Forme(Point(p.getX()-d, p.getY()-d), 2 * d, 2 * d, COULEURS::BLEU) {}

Cercle::Cercle(Point p, double a, double b) : Forme(p, a, b, COULEURS::BLEU) {}

std::string Cercle::toString() const {
  Point p = getPoint();
  return "CERCLE " + std::to_string(p.getX()) + " " + std::to_string(p.getY()) + " " + std::to_string(getLargeur()) + " " + std::to_string(getHauteur()) ;
}

void Cercle::setRayon(const float r){
  Point p = getPoint();
  p.setX((getLargeur()-p.getX())/2 - r + p.getX());
  p.setY((getHauteur()-p.getY())/2 - r + p.getY());
  setHauteur(2 * r);
  setLargeur(2 * r);
}

float Cercle::getRayon() const{
  return (getHauteur())/2;
}
