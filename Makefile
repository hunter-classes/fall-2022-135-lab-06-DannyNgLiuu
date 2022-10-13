main: main.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decrypt.o

tests: tests.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o funcs.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h funcs.h caesar.h vigenere.h decrypt.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o funcs.o tests.o caesar.o vigenere.o decrypt.o test-ascii.o
