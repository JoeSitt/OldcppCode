


Program: main.o MathTools.o
	g++ -std=c++11  -Wall -g main.o MathTools.o  -o Program

main.o: main.cpp MathTools.cpp
	g++ -std=c++11  -Wall -g -c main.cpp


MathTools.o: MathTools.cpp MathTools.h
	g++ -std=c++11  -Wall -g -c MathTools.cpp



clean:
	rm *.o Democracy
	rm *.o Program
	echo clean done
