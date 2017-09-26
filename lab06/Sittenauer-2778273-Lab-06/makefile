Lab06: main.o MazeReader.o MazeCreationException.o MazeWalker.o Position.o Test.o
	g++ -g -std=c++11 -Wall main.o MazeReader.o MazeCreationException.o MazeWalker.o Position.o Test.o -o Lab06

main.o: main.cpp MazeReader.h MazeCreationException.h MazeWalker.h
	g++ -g -std=c++11 -Wall -c main.cpp

MazeReader.o: MazeReader.h MazeReader.cpp MazeCreationException.h
	g++ -g -std=c++11 -Wall -c MazeReader.cpp

MazeCreationException.o: MazeCreationException.h MazeCreationException.cpp
	g++ -g -std=c++11 -Wall -c MazeCreationException.cpp

MazeWalker.o: MazeWalker.h MazeWalker.cpp Position.h
	g++ -g -std=c++11 -Wall -c MazeWalker.cpp

Position.o: Position.h Position.cpp
	g++ -g -std=c++11 -Wall -c Position.cpp

Test.o: Test.h Test.cpp ArrayHelper.h ArrayHelper.hpp MazeReader.h MazeWalker.h Position.h MazeCreationException.h
	g++ -g -std=c++11 -Wall -c Test.cpp

clean:
	rm *.o Lab06
	echo clean done
