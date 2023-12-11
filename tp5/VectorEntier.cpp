#include <iostream>
#include <string>
#include "VectorEntier.hpp"



VectorEntier::VectorEntier() : VectorEntier(10) {}

VectorEntier::VectorEntier(const int size):maxSize(size), placePrises(0){
  tab = new int[size];
}

void VectorEntier::add(int f){
  if(placePrises == maxSize-1){
    int *nt = new int[maxSize*2];
    for(int i = 0; i < maxSize; i++){
      nt[i] = tab[i];
    }
    delete [] tab;
    tab = nt;
    maxSize*=2;
  }
  tab[placePrises++] = f;
}

int VectorEntier::getLength() const { return placePrises; }

int VectorEntier::removeLast(){
  placePrises--;
  return tab[placePrises];
}

int VectorEntier::removeAtIndex(const int ind){
  int old = tab[ind];
  for(int i = ind; i < placePrises; i++){
    tab[i] = tab[i+1];
  }
  placePrises--;
  return old;
}

void VectorEntier::afficher() const{
  for(int i = 0; i < placePrises; i++){
    std::cout<<std::to_string(tab[i])<<std::endl;
  }
}


VectorEntier::~VectorEntier(){
  delete [] tab;
}
