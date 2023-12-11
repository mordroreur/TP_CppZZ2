#include "Chaine.hpp"
#include <cstring>
#include <iostream>
#include <sstream>


Chaine::Chaine() : tab(nullptr), capacite(0) {}

Chaine::Chaine(const char * c){
  int size = 0;
  while(c[size] != '\0'){
    size++;
  }
  capacite = size+1;
  tab = new char[capacite];
  for(int i = 0; i < size+1; i++){
    tab[i] = c[i];
  }
}

Chaine::Chaine(std::string c) : Chaine(c.c_str()) {}

Chaine::Chaine(const int sz){
  capacite = sz+1;
  tab = new char[capacite];
  for(int i = 0; i < capacite; i++){
    tab[i] = '\0';
  }
}

Chaine::Chaine(const Chaine& c){
  capacite = c.capacite;
  tab = new char[capacite];

  for(int i = 0; i < capacite; i++){
    tab[i] = c.tab[i];
  }
}

Chaine& Chaine::operator=(const Chaine& c){
  if(this == &c){
    return *this;
  }
  if(capacite != 0){
    delete [] tab;
  }
  capacite = c.capacite;
  tab = new char[capacite];

  for(int i = 0; i < capacite; i++){
    tab[i] = c.tab[i];
  }
  return *this;
}

void Chaine::afficher() const {
  std::cout<<tab<<std::endl;
}

void Chaine::afficher(std::stringstream &s) const { s << tab; }

std::stringstream& operator<<(std::stringstream& s, const Chaine& c){
  c.afficher(s);
  return s;
}

int Chaine::getCapacite() const { return capacite-1; }

char * Chaine::c_str() const{
  return tab;
}


Chaine::~Chaine(){
  delete [] tab;
}
