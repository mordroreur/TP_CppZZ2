#ifndef H_HEADER_CERCLE_FILROUGE_01_12_23
#define H_HEADER_CERCLE_FILROUGE_01_12_23

#include <iostream>

class Cercle{
private :
  int x;
  int y;
  int w;
  int h;
  int ordre;
public :
  Cercle();
  Cercle(int, int, int);
  Cercle(int, int, int, int);
  std::string toString();
  int getOrdre();
  void setOrdre(int);
};





#endif /*H_HEADER_CERCLE_FILROUGE_01_12_23*/
