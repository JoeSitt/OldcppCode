#include "LinkedList.h"
#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
  std::string city,a,strpop,strinpop;
  char q=',';
  int choice=0;
  int i=0;
  int pop = 0;
  int inpop=0;
LinkedList myList,quarintine;
  std::ifstream file;
      file.open(argv[1]);
    /*  bool q=1;
      int b;
      file>> farts;
      file>>a;
      std::cout<<farts<<"\n";
      std::cout<<a<<"\n";
      int pop=69;
      int i=1;
while(q){
//std::cout<<"p\n";
  try{
    //std::cout<<"/here?";
    if(i==1){
      //std::cout<<"its here";
    pop =std::stoi(a);
    std::cout<<pop+" star\n";
    }
    if(i==2){
      b=std::stoi(a);
      std::cout<<"this should never show "<<b;
    }
    q=0;
  }
  catch(...){
    std::cout<<"start";
    farts=farts+" "+a;
    a="";
    file>>a;
    std::cout<<"planes";
i++;
  }
}
file>>b;
std::cout<<farts<<" "<<pop<<" "<<b;
*/

while(getline(file, a)){
  i=0;
  city="";
  strpop="";
  strinpop="";
  while(a[i] != q){
    city=city+a[i];

    i++;
  }
  i++;
  while(a[i]!= q){
    strpop=strpop+a[i];
    i++;
  }
  i++;
  while(i<a.length()){
    strinpop=strinpop+a[i];
    i++;
  }

  //std::cout<<city<<" "<<strpop<<" "<<strinpop<<"\n";
  pop=std::stoi(strpop,nullptr,10);
  inpop=std::stoi(strinpop,nullptr,10);
  myList.addBack(city,pop,inpop);
}
myList.printList();
std::cout<<"\n\n";
//myList.sort();
//myList.printList();

//i didnt manage my time well enough and so this is the end result.

std::cout<<"Make a selection:\n1) Increase infection level of all cities\n2) Increase infection level of specific city\n3) Print status of a specific city\n4) Create quarantine log\n5) Print all cities above an infection level\n6) Exit\nChoice: ";
std::cin>>choice;
while(choice!=6){
  if(choice==1){
    myList.increaseinpop();
    //find4s();
    //sort();
  }
  if(choice==2){
    std::cout<<"Please enter a city to infect";
    a="";
    std::cin>>a;
    myList.increasecityinpop(a);
  }
  if(choice==3){
    std::cout<<"Please enter a city to look up";
    a="";
    std::cin>>a;
    myList.printcity(a);
  }
if(choice!=6&&choice!=3&&choice!=2&&choice!=1){
  std::cout<<"that option is not available at this time. Expect updates in the future.";
}
  std::cout<<"Make a selection:\n1) Increase infection level of all cities\n2) Increase infection level of specific city\n3) Print status of a specific city\n4) Create quarantine log\n5) Print all cities above an infection level\n6) Exit\nChoice: ";
  std::cin>>choice;

}

myList.~LinkedList();
quarintine.~LinkedList();
return (06);
}
