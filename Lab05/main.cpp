#include "Recursion.h"
#include "LinkedList.h"
#include "Node.h"
#include <string>
#include <iostream>

void run() {
  int choice = 0;
  Recursion r;
  while (choice!= 4) {
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. reverse a list" << std::endl;
    std::cout << "2. compute c(n)" << std::endl;
    std::cout << "3. quad tree" << std::endl;
    std::cout << "4. leave" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
      r.listreversal();
    }
    if (choice == 2) {
      //std::cout << "work in progress, please try again later" << std::endl;
      std::cout << "what number do you want?" << std::endl;
      int n;
      std::cin >> n;
      r.c(n);
    }
    if (choice == 3) {
      std::cout << "work in progress, please try again later" << std::endl;
    }
  }
}

int main() {
  run();
  std::cout << "Thank you, have a wonderful day!" << std::endl;
  return 42;
}
