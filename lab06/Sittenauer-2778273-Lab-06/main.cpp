//Test.o: Test.h Test.cpp ArrayHelper.h ArrayHelper.hpp MazeReader.h MazeWalker.h
	//g++ -g -std=c++11 -Wall -c Test.cpp ArrayHelper.h ArrayHelper.hpp MazeReader.h MazeWalker.h

#include "MazeReader.h"
#include "MazeCreationException.h"
#include "MazeWalker.h"
#include <iostream>
#include <string>
#include "Test.h"
int main(int argc, char** argv){
  std::string inputfile=argv[1];
  std::string mode = inputfile;
  if(mode != "-test"){
    mode = "-bfs";
  }
  if(inputfile=="-test"){
    mode="-test";
  }
  MazeReader* myMR;
  MazeWalker* mymw;
  Test mytest;
  if(mode == "-bfs")
{
  //inputfile=argv[1];
  myMR= new MazeReader(inputfile);
  myMR->printmaze();
  mymw= new MazeWalker(myMR->getMaze(),myMR->getStartRow(),myMR->getStartCol(),myMR->getRows(),myMR->getCols());
  //mymw->walkMaze();
}
//Check for sort flag
else if (mode == "-dfs")
{
  //inputfile=argv[1];
  myMR= new MazeReader(inputfile);
  mymw= new MazeWalker(myMR->getMaze(),myMR->getStartRow(),myMR->getStartCol(),myMR->getRows(),myMR->getCols());
  //mymw->walkMaze();
}
//Check for test flag
else if (mode == "-test")
{

	mytest.runTests();
}
//std::cout<<"farts";
//MazeReader* myMR= new MazeReader("maze.txt");
//std::cout<<"super farts";
//myMR->printmaze();
//std::cout<<"i hope this works\n";
// std::cout<<"Hallelua!";
//std::cout<<"\n";
//myMR->printmazefile();
//catch(std::runtime_error& e){std::cout<<"it didnt work";}
//std::cout<<"\n farts2";
//std::cout<<"\ntest\n";
//std::cout<<myMR->Printmazelocation(2,2);
//std::cout<<"starting position ("<<myMR->getStartRow()<<","<<myMR->getStartCol()<<") ";
//myMR->~MazeReader();
delete myMR;
  return(42);
}
