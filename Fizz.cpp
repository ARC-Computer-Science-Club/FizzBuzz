#include "Fizz.h"
const int FIZZ_WORTHY = 3;

/*
  Contructor for Fizz class. This should set response to "Fizz".
  Uses the ZZ class to get the last two letters of "Fizz"
*/
Fizz::Fizz()
: ZZ() {
    unshiftResponse("Fi");
}

/*
  This function will check if i is divisible by the FIZZ_WORTHY number
  @parameter: int i is the number we are comparing to FIZZ_WORTHY
  @return: boolean value true if i is divisible by FIZZ_WORTHY else false.
*/
bool Fizz::isWorthy(int i) {
 //hello
}
