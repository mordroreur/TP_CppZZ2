#include "Forme.hpp"

int Forme::nbForme = 0;

Forme::Forme():Forme(Point(), 0, 0, COULEURS::BLEU){
  
}

Forme::Forme(const Point p, const COULEURS c):Forme(p, 0, 0, c) {}

Forme::Forme(const Point p, const double pw, const double ph, const COULEURS c):point(p), w(pw),h(ph), col(c){
  id = nbForme++;
}


int Forme::getId() const { return id; }

int Forme::prochainId() { return nbForme; }

Point& Forme::getPoint() { return point; }

COULEURS Forme::getCouleur() const { return col; }

void Forme::setX(const double d) { point.setX(d); }

void Forme::setY(const double d) { point.setY(d); }

void Forme::setCouleur(const COULEURS c) { col = c; }

double Forme::getLargeur() const { return w; }

double Forme::getHauteur() const { return h; }
