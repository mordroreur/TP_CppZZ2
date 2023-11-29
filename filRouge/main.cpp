#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"

int main(int, char**) {

  Cercle c;
  Rectangle r;

  std::cout << c.toString() << std::endl;
  std::cout << r.toString() << std::endl;

  return 0;
}

