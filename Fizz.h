#ifndef FIZZ_H
#define FIZZ_H
#include "ZZ.h"

class Fizz : public ZZ {
  public:
    Fizz();
    bool isWorthy(int);
};

#endif