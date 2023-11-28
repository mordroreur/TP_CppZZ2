#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::compteur = 0;

int Point::getX() {
  return x;
}

void Point::setX(int x){
  this->x = x;
}

int Point::getY() {
  return y;
}

void Point::setY(int y){
  this->y = y;
}

void Point::deplacerDe(int x, int y){
  this->x += x;
  this->y += y;
}

void Point::deplacerVers(int x, int y){
  this->x = x;
  this->y = y;
}

Point::Point(){
  x = 0;
  y = 0;
  compteur++;
  std::cout<< "Init sans args" << std::endl;
}

Point::Point(int x, int y):x(x), y(y){
  compteur++;
  std::cout<< "Init 2 args" << std::endl;
}


int Point::getCompteur(){
  return compteur;
}
