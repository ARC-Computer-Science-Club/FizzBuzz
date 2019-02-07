#include "FizzBuzz.h"

/*
  Converts an integer into a string.
  @parameter: int i, the integer we want to convert to a string.
  @return: string representing the integer value.
*/
std::string FizzBuzz::stringifier(int i) {
  
}

/*
  Returns the appropiate string based on the number given.
  @parameter: int i is our given number.
  @return: string representing i, unless i is divisible by 3,
   then return "Fizz", or if i is divisible by 5 return "Buzz" 
   or if i is divisible by 3 and 5 return "FizzBuzz".
*/
std::string FizzBuzz::evaluate(int i) {
  if(fizz.isWorthy(i) && buzz.isWorthy(i))
    return "FizzBuzz";
  if(fizz.isWorthy(i))
    return "Fizz";
  if(buzz.isWorthly(i))
    return "Buzz";
  return stringifier(i);
}