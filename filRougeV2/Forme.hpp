#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include <iostream>
#include "Point.hpp"

// enum COULEURS { BLANC, NOIR};
enum class COULEURS { BLANC, BLEU, JAUNE, NOIR, ROUGE, VERT};

class Forme {
  Point point;
  double w;
  double h;
  int id;
  COULEURS col;
  static int nbForme;
public:
  Forme();
  Forme(const Point, const COULEURS);
  Forme(const Point, const double, const double, const COULEURS);
  int getId() const;
  double getLargeur() const;
  double getHauteur() const;
  void setHauteur(const double);
  void setLargeur(const double);
  Point& getPoint();
  Point getPoint() const;
  COULEURS getCouleur() const;
  void setX(const double);
  void setY(const double);
  void setCouleur(const COULEURS);

  virtual std::string toString() const;

  virtual ~Forme();
  static int prochainId();
};

#endif
