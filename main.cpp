#include <iostream>
#include "FizzBuzz.h"

int main() {

  FizzBuzz Num;
  for (int i = 0; i < 100; i++)
  {
     cout << Num.evaluate(i) << endl;
  }
  return 0;
}
