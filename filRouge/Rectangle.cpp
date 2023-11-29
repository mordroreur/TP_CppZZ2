#include <iostream>  // Inclusion d'un fichier standard
#include <string>
#include "Rectangle.hpp" // Inclusion d'un fichier du répertoire courant

Rectangle::Rectangle():Rectangle(0, 0, 0, 0){
}

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {}

std::string Rectangle::toString(){
  return "RECTANGLE " + std::to_string(x) + " " + std::to_string(y) + " " + std::to_string(w) + " " + std::to_string(h);
}

