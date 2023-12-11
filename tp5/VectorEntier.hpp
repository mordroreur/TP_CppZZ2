#ifndef CPP5__VECTOR_ENTIER_HPP
#define CPP5__VECTOR_ENTIER_HPP

class VectorEntier{
  int *tab;
  int maxSize;
  int placePrises;
public :
  VectorEntier();
  VectorEntier(const int);
  void add(int);
  int getLength() const;
  int removeLast();
  int removeAtIndex(const int);
  void afficher() const;
  ~VectorEntier();
};

#endif
