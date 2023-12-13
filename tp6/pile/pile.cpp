#include "pile.hpp"
#include <stdexcept>
#include <iostream>

Pile::Pile() : Pile(50) {}

Pile::Pile(const int& t){
  if(t < 1){
    throw std::invalid_argument("La pile doit avoir une taille positive <3");
  }
  capacity = t;
  lenght = 0;
  tab = new int[t];
}

bool Pile::empty() const { return lenght == 0; }

void Pile::push(int ni) { tab[lenght++] = ni; }

const int& Pile::size() const{
  return lenght;
}

const int &Pile::pop() {
  if(lenght < 1){
    throw  std::invalid_argument("La pile est vide <4");
  }
  return tab[--lenght];
}

const int& Pile::top() const{
  return tab[lenght-1];
}

Pile::~Pile(){
  delete [] tab;
}
