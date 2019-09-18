bigint: main.o Bigint.o
	g++ main.o Bigint.o -o bigint -Wall -g
main.o: main.cpp Bigint.h
	g++ -c main.cpp -Wall -g
Bigint.o: Bigint.cpp Bigint.h
	g++ -c Bigint.cpp -Wall -g