#include "Groupe.hpp"

Groupe::Groupe() : Groupe(10) {}

Groupe::Groupe(const int size):maxSize(size), placePrises(0){
  tab = new Forme*[size];
}

void Groupe::add(Forme * f){
  if(placePrises == maxSize-1){
    Forme **nt = new Forme*[maxSize*2];
    for(int i = 0; i < maxSize; i++){
      nt[i] = tab[i];
    }
    delete [] tab;
    tab = nt;
    maxSize*=2;
  }
  tab[placePrises++] = f;
}

int Groupe::getLength() const { return placePrises; }

Forme* Groupe::removeLast(){
  placePrises--;
  return tab[placePrises];
}

Forme* Groupe::removeAtIndex(const int ind){
  Forme* old = tab[ind];
  for(int i = ind; i < placePrises; i++){
    tab[i] = tab[i+1];
  }
  placePrises--;
  return old;
}

void Groupe::afficher() const{
  for(int i = 0; i < placePrises; i++){
    std::cout<<tab[i]->toString()<<std::endl;
  }
}


Groupe::~Groupe(){
  delete [] tab;
}
