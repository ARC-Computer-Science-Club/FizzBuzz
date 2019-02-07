#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H
#include "Fizz.h"
#include "Buzz.h"

class FizzBuzz {
  private:
    Fizz fizz;
    Buzz buzz;
    std::string stringifier(int);
  public:
    std::string evaluate(int i);
};
#endif