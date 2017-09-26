#include "Recursion.h"
void Recursion::listreversal() {
  std::string filen;
  LinkedList list = LinkedList();
  std::cout << "what list file would you like to load?" << std::endl;
  std::cin >> filen;
  // filen="text.txt";
  std::ifstream file;
  file.open(filen);// filen=file name. but after this line it is used as the file line.
    // file>>filen;
    while(!file.eof()) {
      file >> filen;
      if (!list.search(filen)) {
        list.addBack(filen);
        }
      }
  file.close();
  //std::cout << list.size() << std::endl;
  Node<std::string>* curr = nullptr;
  Node<std::string>* next = nullptr;
  Node<std::string>* prev = nullptr;
  list.printList();
  curr = list.getfront();
  int times = 0;
  list.setfront(listreversal2(list, curr, next, prev, times));
  list.printList();
  list.~LinkedList();
  next = nullptr;
  prev = nullptr;
  curr = nullptr;
  delete next;
  delete prev;
  delete curr;
}


Node<std::string>* Recursion::listreversal2(LinkedList list, Node<std::string>* curr1, Node<std::string>* next1, Node<std::string>* prev1, int times) {
  if (curr1 != nullptr) {
    // Node<std::string>* temp = list.getfront();
    next1 = curr1->getNext();

    curr1->setNext(prev1);

     prev1 = curr1;
     curr1 = next1;
     // list.setfront(prev1); //i thought it was too cool to remove. so i just commented it out.
     // list.printList();
     // list.setfront(temp);
     return(listreversal2(list, curr1, next1, prev1, times++));
  } else {
    next1 = nullptr;
    curr1 = nullptr;
    return prev1;
    }
}


void Recursion::c(int n){
  bool permutations;
  std::cout << "Would you like permutations to be included?" << std::endl;
  std::cout << "1. yes" << std::endl;
  std::cout << "0. no" << std::endl;
  std::cin >> permutations;
  //int r=0;
  if(permutations){
    std::cout << "The total number of combinations is " << nCr(n,n) << "\n";
  } else {
    std::cout << "The total number of combinations is " << nPr(n,n) << "\n";
  }
}

int Recursion::nCr(int n, int r){
  if(n==r){
    return(1+nCr(n , r-1));
  }
  if(r<n&&n*r!=0){
    return( nCr(n--,r--) + nCr(n,r--));
  } else {
    return 0;
  }

}

int Recursion::nPr(int n, int r){
  return -1;
}
