#ifndef _H_HEADER_CERCLE_
#define _H_HEADER_CERCLE_

#include <iostream>

class Cercle{
private :
  int x;
  int y;
  int w;
  int h;
public :
  Cercle();
  Cercle(int, int, int);
  Cercle(int, int, int, int);
  std::string toString();
};





#endif /*_H_HEADER_RECTANGLE_*/
