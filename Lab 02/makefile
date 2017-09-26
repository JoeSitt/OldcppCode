

Program: main.o
	g++ -std=c++11  -Wall -g main.o LinkedList.o City.o -o Program

main.o: main.cpp LinkedList.o City.o
	g++ -std=c++11  -Wall -g -c main.cpp

LinkedList.0: LinkedList.h LinkedList.cpp
	g++ -std=c++11 -Wall -g -c LinkedList.cpp

City.o: City.cpp City.h
	g++ -std=c++11 -Wall -g -c City.cpp

clean:
	rm *.o Program
	echo clean done
