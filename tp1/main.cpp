#include <iostream>

/* on peut utiliser le mot clé const pour définir la taille d'un tableau statique en C++ */
/* Jamais de #define pour cela */
const int TAILLE = 10;

class Exemple {
 public:
  void afficher() {
     std::cout << "hello" << std::endl;
  }
};

void fonction1(int a) {
  std::cout << &a << std::endl;
}

void fonction2(int& a) {
  std::cout << &a << std::endl;
}

void echangePointeur(int* a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void echangeAddr(int& a, int& b){
  int tmp = a;
  a = b;
  b = tmp;
}


int main(int, char **) {
  /*
  int i;
  for(i=0; i< 120; ++i)
    std::cout << "Bonjour les ZZ " << i/10.0 << std::endl;

  std::string prenom;     // type chaines de caracteres"
  std::string nom;     // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre nom ?" << std::endl;
  std::cin  >> nom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour "<< nom << std::endl;
  std::cout << "Bonjour "<< prenom << std::endl;
  std::cout << "Bonjour "<< prenom <<":"<<nom<< std::endl;


  std::string ch1;
  std::string ch2;

  
  std::cout << "Entrez la chaine 1 : " << std::endl;
  std::cin  >> ch1 ;
  std::cout << "Entrez la chaine 2 : " << std::endl;
  std::cin  >> ch2 ;
  std::cout << "La plus petite chaine en ordre lexico est : " << ((ch1<ch2)?ch1:ch2) << " et a une longueur de "<< ((ch1<ch2)?ch1.size():ch2.size()) << std::endl;


  int tab[TAILLE];
  
  for (int i=0; i < TAILLE; ++i) {
    tab[i] = i %2;
    std::cout << tab[i] << " ";
  }

  std::cout << std::endl;

  char s[10];
  // std::string s;
  // char *      s;

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;
  

  int  a = 5;
   int &r = a;

   std::cout << a << " " << r << std::endl;
   std::cin  >> a;
   std::cout << &a << " " << &r << std::endl;
   std::cin  >> r;
   std::cout << a << " " << r << std::endl;
  


  int age = 45;

  std::cout << &age << std::endl;
  fonction1(age);
  fonction2(age);

  int  a = 3;
  int  b = a;
  int& c = a;

  std::cout << a << " " << b << " " << c << std::endl;
  b = 4;
  std::cout << a << " " << b << " " << c << std::endl;
  c = 5;
  std::cout << a << " " << b << " " << c << std::endl;
  a = 6;
  std::cout << a << " " << b << " " << c << std::endl;

  std::cout << "a : " << a << " b : " << b <<std::endl;
  echangePointeur(&a, &b);
  std::cout << "a : " << a << " b : " << b <<std::endl;
  echangeAddr(a, b);
  std::cout << "a : " << a << " b : " << b <<std::endl;

  int  w;
  int &r = w;

  std::cout << w << " " << r << std::endl;
  

  int        a = 1;
   const int &r = a;

   std::cout << a << " " << r << std::endl;

   a = 2;
   std::cout << a << " " << r << std::endl;

   r=3;
   std::cout << a << " " << r << std::endl;
  

  int * p = new int;

   *p = 3;
   std::cout << *p << std::endl;

   delete p;
  

  int * p = new int[TAILLE];

  for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
  for(auto i = 0; i< TAILLE; ++i ) std::cout << p[i] << std::endl;

  delete []p;
  */

  Exemple e;
  
  e.afficher();
  
  return 0;
}
