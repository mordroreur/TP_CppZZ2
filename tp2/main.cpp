#include <cstdio>
#include <iostream> 
#include <ostream>
#include "Point.hpp"


class Bavarde {
  int stock;
public:
  Bavarde();
  Bavarde(int i);
  ~Bavarde();
  int get();
} bizarre(1);  

Bavarde globale(2);

Bavarde::Bavarde() {
  std::cout << "construteur vide" << std::endl;
  stock = 0;
}


Bavarde::Bavarde(int nb): stock(nb){
  std::cout << "construteur un param" << std::endl;
  
  }

Bavarde::~Bavarde(){
  std::cout << "Destructeur" << std::endl;
  }

int Bavarde::get(){
  return stock;
}

void fonction(Bavarde) {
  std::cout << "code de la fonction";
}









class Tableau 
{
   int * tab;
   int taille;

 public:
   Tableau():tab(nullptr), taille(10) 
   {
     int i;
       tab = new int[taille]; // si problème ?
       for(i = 0; i < taille; i++){
	 tab[i] = i;
       }
   }
  ~Tableau(){
    delete [] tab;
  }
  void afficher(){
    int i;
    for(i = 0; i < taille; i++){
      std::cout<< tab[i] << " ";
    }
    std::cout<<std::endl;
  }

};













int main(int, char**) {
  Point p1;
  Point p2 {};
  Point p3 {2, 4};
  Point *p4 = new Point(2, 3);

  p1.setX(2);
  p1.setY(0);
  std::cout << p1.getX() << "," << p1.getY() << std::endl;

  p1.deplacerVers(10, 12);
  std::cout << p1.getX() << "," << p1.getY() << std::endl;

  p1.deplacerDe(5,5);
  std::cout << p1.getX() << "," << p1.getY() << std::endl;
  std::cout << Point::getCompteur() << std::endl;
  delete p4;


  Bavarde b1(3);
  Bavarde b2(4);
  //Bavarde * p = new Bavarde(5);
  // fonction(b1);

  std::cout << Bavarde(0).get() << std::endl;
  std::cout << "next line" << std::endl;
  //delete p;


  Tableau t;
  t.afficher();
  
  return 0;
}
