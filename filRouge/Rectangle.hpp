#ifndef _H_HEADER_RECTANGLE_
#define _H_HEADER_RECTANGLE_

#include <iostream>

class Rectangle{
private :
  int x;
  int y;
  int w;
  int h;
public :
  Rectangle();
  Rectangle(int, int, int, int);
  std::string toString();
};





#endif /*_H_HEADER_RECTANGLE_*/
