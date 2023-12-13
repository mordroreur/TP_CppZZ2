#include <iostream>

  
class M {
public:
  M() {
    std::cout << "M::M()" << std::endl;
  }
  ~M() {
    std::cout << "M::~M()" << std::endl;
  }
  M(const M&) {
    std::cout << "M::M(const M&)" << std::endl;
  }

  M& operator=(M& m){
    std::cout<<"m = m"<<std::endl;
    return m;
  }
  
};

class F : public M {
public:
  F() {
    std::cout << "F::F()" << std::endl;
  }  
  ~F() {
    std::cout << "F::~F()" << std::endl;
  }
    
  F(const F& f):M(f){
    std::cout << "F::F(const F&)" << std::endl;
  }
  
  F& operator=(F& f){
    std::cout<<"f = f"<<std::endl;
    //M::operator=(M &m)
    return f;
  }
};


class A {
  M m;
public:
  A() {
    std::cout << "A::A()" << std::endl;
  }
  ~A() {
    std::cout << "A::~A()" << std::endl;
  }
  A(const A& a):m(a.m) {
    std::cout << "A::A(const A&)" << std::endl;
  }

  A& operator=(A& a){
    std::cout<<"a = a"<<std::endl;
    return a;
  }
};



class Bavarde {
  std::string nom;
 public :
   Bavarde(std::string n):nom(n) {
      std::cout << "constructeur " << nom << std::endl;
   }
   ~Bavarde() {
      std::cout << "destructeur " << nom << std::endl;
   }
};

Bavarde g("global");

int main(int, char**) {
  /*
  F f1;
  F f2 = f1;
  
  f1 = f2;

  A a1;
  A a2 = a1;
  */

  Bavarde t("local");
  static Bavarde s("statlocal");

  //std::exit(1);
  //std::terminate();
  //std::unexpected(); // ne s'appelle pas normalement
  
  return 0;
}
