


Democracy: main.o voter.o executive.o
	g++ -std=c++11  -Wall -g main.o voter.o executive.o -o Democracy

main.o: main.cpp voter.cpp executive.cpp
	g++ -std=c++11  -Wall -g -c main.cpp


voter.o: voter.cpp voter.h
	g++ -std=c++11  -Wall -g -c voter.cpp

executive.o: executive.cpp executive.h voter.cpp
	g++ -std=c++11  -Wall -g -c executive.cpp

clean:
	rm *.o Democracy
	rm *.o Program
	echo clean done
