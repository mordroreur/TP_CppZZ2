#include "Cercle.hpp"

Cercle::Cercle() : Forme() {}

Cercle::Cercle(Point p, double d) : Forme(p, 2 * d, 2 * d, COULEURS::BLEU) {}

Cercle::Cercle(Point p, double a, double b) : Forme(p, a, b, COULEURS::BLEU) {}

std::string Cercle::toString() const{
  return "CERCLE " + 
}
