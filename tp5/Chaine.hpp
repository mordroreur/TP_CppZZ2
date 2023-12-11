#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {
  char * tab;
  int capacite;
public :
  Chaine();
  Chaine(const char *);
  Chaine(const int);
  Chaine(const std::string);
  Chaine(const Chaine&);
  Chaine& operator=(const Chaine&);
  friend std::stringstream& operator<<(std::stringstream&, const Chaine&);
  void afficher() const;
  void afficher(std::stringstream&) const;
  int getCapacite() const;
  char * c_str() const;

  ~Chaine();
};

#endif
