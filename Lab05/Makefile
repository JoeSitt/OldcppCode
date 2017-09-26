Lab04: main.o Recursion.o LinkedList.o
	g++ -g -std=c++11 -Wall main.o Recursion.o LinkedList.o -o Lab05

main.o: main.cpp Node.hpp Node.h Recursion.h Recursion.cpp LinkedList.h LinkedList.cpp
	g++ -g -std=c++11 -Wall -c main.cpp Recursion.cpp LinkedList.cpp

Recursion.o: Recursion.h Recursion.cpp LinkedList.h Node.hpp Node.h
	g++ -g -std=c++11 -Wall -c Recursion.cpp LinkedList.cpp

LinkedList.o: LinkedList.h LinkedList.cpp Node.hpp Node.h
	g++ -g -std=c++11 -Wall -c LinkedList.cpp


clean:
	rm *.o Lab05
	echo clean done
