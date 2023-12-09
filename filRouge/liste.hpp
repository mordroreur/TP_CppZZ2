#ifndef H_LISTE_FIL_ROUGE
#define H_LISTE_FIL_ROUGE

#include "Cercle.hpp"
#include "Rectangle.hpp"

const int MaxSizeTab = 10;


class Liste {
  Cercle ctb[MaxSizeTab];
  int nb_c;
  Rectangle rtb[MaxSizeTab];
  int nb_r;
  int compteur;
public:
  Liste();
  int getCompteur();
  std::string toString(); 
};


#endif /*H_LISTE_FIL_ROUGE*/
