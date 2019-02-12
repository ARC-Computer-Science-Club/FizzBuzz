#include <iostream>
#include "FizzBuzz.h"

int main() {

  FizzBuzz Num;
  for (int i = 1; i <= 100; i++)
  {
     std::cout << Num.evaluate(i) << std::endl;
  }
  return 0;
}
