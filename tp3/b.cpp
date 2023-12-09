#include "a.hpp"
#include "b.hpp"


void B::exec(int nb) { j += nb; }

void B::send(A * a){
  a->exec(3);
}
