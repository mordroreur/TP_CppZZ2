#ifndef HEADER_PILE_ZZ2_TP6_H
#define HEADER_PILE_ZZ2_TP6_H

class Pile{
  int lenght;
  int *tab;
  int capacity;
public :
  Pile();
  Pile(const int&);
  bool empty() const;
  void push(int);
  const int& size() const;
  const int& pop();
  const int& top() const;
  ~Pile();
};


#endif /*HEADER_PILE_ZZ2_TP6_H*/
