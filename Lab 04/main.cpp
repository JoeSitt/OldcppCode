#include <iostream>
#include <string>
#include "Node.h"
#include <stdexcept>
#include "PreconditionViolationException.h"
#include "Queue.h"
#include "Stack.h"
#include "QueueInterface.h"
#include "StackInterface.h"
int main(int argc, char* argv[]){
  std::string command, victum;



StackInterface<std::string>* inelevator = new Stack<std::string>(); //declare StackInterface pointer
Stack<std::string>* inelevatorptr = new Stack<std::string>(); //declare stack pointer
QueueInterface<std::string>* groundfloor = new Queue<std::string>();
Queue<std::string> groundfloorptr = new Queue<std::string>();
  std::ifstream file;
      file.open(argv[1]);
      bool notEof=1;
      int drop=0;//amount to be dropped off
while(!file.notEof()){
  try{
    file>>command;
    victum="";
    drop=0;


    if (command=="WAIT"){
      file>>victum;
      groundfloorptr.enqueue(victum);
    }


    if (command=="INSPECTION"){
      if(inelevator->size()==0){
        std::cout<<"no one is in the elevator";
      }
      else{
        std::cout << "The elevator is not empty" << std::endl;
      }
      std::cout << inelevator->peek()<< " is first to leave on the elevator" << std::endl;
      catch(PreconditionViolationException e){
        std::cout << "no one is on the elevator" << std::endl;
        e="";
      }
      std::cout << groundfloor->peekFront() <<"is next to get on the elevator" << std::endl;
      catch(PreconditionViolationException e){
        std::cout << "no one is in line to get on the elevator" << std::endl;
        e="";
      }
    }

    if (command=="PICK_UP"){
      while(inelevator->size() < 7  &&  groundfloor.size() > 0 ) {
        inelevator->push(groundfloorptr.peekFront());
        groundfloor.dequeue();
      }
    }

    if (command=="DROP_OFF"){
      file>>drop;
      if(inelevator->size()<drop){
        drop = inelevator->size();
      }
      for (int i = 0; i < drop; i++) {
        inelevator->pop();
        if (inelevator->size()== 0) {
          std::cout << "elevator was cleared. not enough people to remove anyone else." << std::endl;
        }
      }Heap<T>* theHeap;
    }
  }
  catch(PreconditionViolationException e)
  {
    std::cout<< e << "  was not caught correctly" << std::endl;
    e = "";
  }
}


file.close();
inelevator.~StackInterface(std::string);
inelevatorptr.~StackInterface(std::string);
groundfloor.~QueueInterface(std::string);
groundfloorptr.~QueueInterface(std::string);
return (06);
}
