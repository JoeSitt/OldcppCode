Program: main.o Pokemon.o
	g++ -std=c++11 -Wall -g main.o Pokemon.o -o Program

main.o: main.cpp Pokemon.h BinaryNode.h BinaryNode.cpp
	g++ -std=c++11 -Wall -g -c main.cpp

Pokemon.o: Pokemon.h Pokemon.cpp
	g++ -std=c++11 -Wall -g -c Pokemon.cpp



clean:
	rm *.o Program
	echo clean done
