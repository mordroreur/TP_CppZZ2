#include <iostream> 
#include "Point.hpp"

int main(int, char**) {
  Point p;
  Point p2 {};
  Point p3 {2, 4};
  Point *p4 = new Point(2, 3);

  p.setX(2);
  p.setY(0);
  std::cout << p.getX() << "," << p.getY() << std::endl;

  p.deplacerVers(10, 12);
  std::cout << p.getX() << "," << p.getY() << std::endl;

  p.deplacerDe(5,5);
  std::cout << p.getX() << "," << p.getY() << std::endl;
  std::cout << Point::getCompteur() << std::endl;
  delete p4;
  
  return 0;
}
