#include <cstdio>
#include <cstdlib>
#include <iostream> 
#include <ostream>
#include <string>
#include "b.hpp"
#include "a.hpp"



class Bavarde {
  int stock;
public:
  Bavarde();
  Bavarde(int i);
  ~Bavarde();
  int get();
  void afficher();
};  



Bavarde::Bavarde() {
  std::cout << "construteur vide" << std::endl;
  stock = 0;
}


Bavarde::Bavarde(int nb): stock(nb){
  std::cout << "construteur un param" << std::endl;
  
  }

Bavarde::~Bavarde(){
  std::cout << "Destructeur" << stock<< std::endl;
  }

int Bavarde::get(){
  return stock;
}


void Bavarde::afficher(){
  std::cout<< "Affichage de %" <<std::endl;
}







class Couple{
  Bavarde b1;
  Bavarde b2;
  public:
  Couple();
  ~Couple();
};

Couple::Couple():b2(1), b1(2) { std::cout << "Couple crée" << std::endl; }

Couple::~Couple(){std::cout<< "Couple detruit"<<std::endl;}






class Famille{
  Bavarde *tab;
  public:
  Famille(int);
  ~Famille();
};

Famille::Famille(int x){
  if(x < 1){
    exit(0);
  }
  tab = new Bavarde[x];
}

Famille::~Famille(){
  delete [] tab;
}


void fonction(Bavarde) {
  std::cout << "code de la fonction";
}






class Mere{
  static int entier;
  std::string name;
public:
  Mere();
  Mere(std::string);
  virtual ~Mere();
  virtual void afficher();
  std::string getName();
  static int getEntier();
};

int Mere::entier = 0;

Mere::Mere() {
  std::cout << "construteur Mere " << entier++ <<  std::endl;
}

Mere::Mere(std::string nm):name(nm){}

Mere::~Mere() { std::cout << "Destructeur Mere" << std::endl; };

std::string Mere::getName(){
  return name;
}

int Mere::getEntier(){
  return entier;
}

void Mere::afficher(){
  std::cout<<"Objet de classe mere"<<std::endl;
}







class Fille: public Mere{
public:
  Fille();
  Fille(std::string);
  ~Fille() override;
  void afficher() override;
};
Fille::Fille():Mere(){
  std::cout<<"Constructeur Fille" << std::endl;
}
Fille::Fille(std::string nm):Mere(nm){
  
}
Fille::~Fille(){
  std::cout << "Destructeur Fille" << std::endl;
}

void Fille::afficher(){
  std::cout<<"Objet de classe fille"<<std::endl;
}





int main(int, char**) {
  /*const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];
  // Combien d'instances sont créées ?

  for (int i =0; i < TAILLE; ++i) {
    tab1[i].afficher();
    tab2[i].afficher();
  }

  
  
  // Combien d'instances sont détruites ?
  // 20

  // ca ela corrige
  delete [] tab2;*/

  /*
  Couple c;

  Famille f(5);

  //on remarque qu'il n'y a aps d'appel au constructeur.
  Bavarde *bmal = (Bavarde*)malloc(sizeof(Bavarde));
  std::cout<<"Par malloc : "<<bmal->get()<<std::endl;
  
  Bavarde *bnew = new Bavarde();
  std::cout<<"Par new : "<<bnew->get()<<std::endl;

  free(bmal);
  delete bnew;
  */

  Mere mr;

  std::cout<< mr.getEntier()<<std::endl;
  
  Fille fille;

  std::cout<< fille.getEntier()<<std::endl;

  std::cout<< Mere::getEntier()<<std::endl;


  Mere mnom("test");

  std::cout<<mnom.getName()<<std::endl;
  std::cout<<fille.getName()<<std::endl;
  std::cout<<mr.getName()<<std::endl;

  Fille fna("Thomas");



  Mere  *pm = new Mere("mere_dyn");
  Fille *pf = new Fille("fille_dyn");
  Mere  *pp = new Fille("fille vue comme mere");
  pm->afficher(); // affiche Mere
  pf->afficher(); // affiche Fille
  pp->afficher(); // affiche Fille

  delete pm;
  delete pf;
  delete pp;
  

  A unA;
  B unB;
  
  unA.send(&unB);


  
  
  return 0;
}
