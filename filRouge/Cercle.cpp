#include <iostream>
#include <string>
#include "Cercle.hpp" // Inclusion d'un fichier du répertoire courant

Cercle::Cercle():Cercle(0, 0, 0, 0){
}

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

Cercle::Cercle(int a, int b, int r):x(a-r), y(b-r), w(2*r), h(2*r){
}

std::string Cercle::toString(){
  return "CERCLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}

int Cercle::getOrdre(){
  return ordre;
}

void Cercle::setOrdre(int od){
  ordre = od;
}
