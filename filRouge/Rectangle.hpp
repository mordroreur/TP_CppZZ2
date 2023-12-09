#ifndef H_HEADER_RECTANGLE_FILROUGE_01_12_23
#define H_HEADER_RECTANGLE_FILROUGE_01_12_23

#include <iostream>

class Rectangle{
private :
  int x;
  int y;
  int w;
  int h;
  int ordre;
public :
  Rectangle();
  Rectangle(int, int, int, int);
  std::string toString();
  int getOrdre();
  void setOrdre(int);
};





#endif /*H_HEADER_RECTANGLE_FILROUGE_01_12_23*/
