#include "a.hpp"
#include "b.hpp"


void A::exec(int nb) { i += nb; }

void A::send(B *b){
  b->exec(3);
}
