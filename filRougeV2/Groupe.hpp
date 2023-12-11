#ifndef __CPP4__GROUPE__HPP__
#define __CPP4__GROUPE__HPP__

#include "Forme.hpp"

class Groupe{
  Forme **tab;
  int maxSize;
  int placePrises;
public :
  Groupe();
  Groupe(const int);
  void add(Forme*);
  int getLength() const;
  Forme* removeLast();
  Forme* removeAtIndex(const int);
  void afficher() const;
  ~Groupe();
};


#endif
