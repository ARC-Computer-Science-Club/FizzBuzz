FizzBuzz: main.o ZZ.o FizzBuzz.o Fizz.o Buzz.o
	g++ -Wall main.o ZZ.o FizzBuzz.o Fizz.o Buzz.o -o FizzBuzz
main.o: main.cpp FizzBuzz.h
	g++ -Wall -c main.cpp
ZZ.o: ZZ.cpp ZZ.h
	g++ -Wall -c ZZ.cpp
FizzBuzz.o: FizzBuzz.cpp FizzBuzz.h
	g++ -Wall -c FizzBuzz.cpp
Fizz.o: Fizz.cpp Fizz.h
	g++ -Wall -c Fizz.cpp
Buzz.o: Buzz.cpp Buzz.h
	g++ -Wall -c Buzz.cpp
clean:
	rm *.o FizzBuzz
run: FizzBuzz
	./FizzBuzz
