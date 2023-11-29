#include <iostream>  // Inclusion d'un fichier standard
#include <string>
#include "Cercle.hpp" // Inclusion d'un fichier du répertoire courant

Cercle::Cercle():Cercle(0, 0, 0, 0){
}

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Cercle::Cercle(int a, int b, int r){
  x = a-r;
  y = b-r;
  w = a+r;
  h = a+r;
}

std::string Cercle::toString(){
  return "CERCLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}
