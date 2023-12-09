#include <iostream>


class Bavarde {
  int stock;
public:
  Bavarde();
  Bavarde(int i);
  Bavarde(const Bavarde&);
  ~Bavarde();
  int get();
  void afficher();
};  

Bavarde::Bavarde(const Bavarde &b){
  stock = b.stock;
  std::cout<< "Constructeur par copie"<<std::endl;
}

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


void test1(Bavarde b) {
  std::cout << "appel de fonction avec parametre objet et copie";
  b.afficher();
}


Bavarde test2a() {
  std::cout << "appel de fonction avec retour";
  return Bavarde(); // creation d'un objet local
} // plus de copie - voir ZZ3


Bavarde test2b() {
  Bavarde b; // creation d'un objet local
  std::cout << "appel de fonction avec retour";
  return b; 
} // plus de copie - ZZ3


void test3(Bavarde &b) {
  std::cout << "appel de fonction avec référence ";
  b.afficher();
}

void test4(Bavarde *b) {
  std::cout << "appel de fonction avec un pointeur sur un objet";
  b->afficher();
}

int main(int, char**) {
  Bavarde b{1};
  test1(b);
  test2a();
  test2b();

  std::cout<<"test3"<<std::endl;
  test3(b);

  std::cout<<"test4"<<std::endl;
  test4(&b);
  
  return 0;
}
