#include "bubbleSort.cpp"
#include "insertionSort.cpp"
#include "mergesort.cpp"
#include "quicksort.cpp"
#include "selectionSort.cpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <chrono>
#include <functional>
#include <cassert>
#include <sstream>



int main(int argc, char** argv){
  std::string inputsizestr=argv[1];
  int inputsize;
  std::stringstream convert;
  convert << inputsizestr;
  convert >> inputsize;
  std::string order = argv[2];
  std::string sort = argv[3];
  srand(3);
  double* A1= new double[inputsize];

  if (order == "random") {
    for(int i = 0; i < inputsize; i++)
 	      {
 	        // array[i] = drand48();
 	        A1[i] = drand48()*100000;
 	      }
  }
  if (order == "ascending"){
    for (int i = 0;  i< inputsize; i++) {
      /* code */

      A1[i] = 0.001*static_cast<double>(i);
    }
  }
  if (order == "descending"){
    for (int i = 0;  i< inputsize; i++) {
      /* code */

      A1[i] =  0.001*static_cast<double>(inputsize - i - 1);
    }
  }
  if (sort=="bubble") {
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::chrono::duration<double> elapsed;

    std::cout << "Starting The sort now.\n";
  start = std::chrono::system_clock::now();
  bubbleSort(A1, inputsize);
  end = std::chrono::system_clock::now();
  elapsed = (end - start);
  //std::cout << "What you did completed in " << elapsed.count() << " seconds\n";
  std::cout << "the sort took: "<<elapsed.count()<< " for " << inputsize<< " items"<< std::endl;
  }
  if (sort=="insertion") {
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::chrono::duration<double> elapsed;

    std::cout << "Starting The sort now.\n";
  start = std::chrono::system_clock::now();
  insertionSort(A1, inputsize);
  end = std::chrono::system_clock::now();
  elapsed = (end - start);
  //std::cout << "What you did completed in " << elapsed.count() << " seconds\n";
  std::cout << "the sort took: "<<elapsed.count()<< " for " << inputsize<< " items"<< std::endl;
  }
  if (sort=="merge") {
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::chrono::duration<double> elapsed;

    std::cout << "Starting The sort now.\n";
  start = std::chrono::system_clock::now();
  mergeSort(A1, inputsize);
  end = std::chrono::system_clock::now();
  elapsed = (end - start);
  //std::cout << "What you did completed in " << elapsed.count() << " seconds\n";
  std::cout << "the sort took: "<<elapsed.count()<< " for " << inputsize<< " items"<< std::endl;
  }
  if (sort=="quick") {
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::chrono::duration<double> elapsed;

    std::cout << "Starting The sort now.\n";
  start = std::chrono::system_clock::now();
  quickSort(A1, 0,inputsize);
  end = std::chrono::system_clock::now();
  elapsed = (end - start);
  //std::cout << "What you did completed in " << elapsed.count() << " seconds\n";
  std::cout << "the sort took: "<<elapsed.count()<< " for " << inputsize<< " items"<< std::endl;
  }
  if (sort=="selection") {
    std::chrono::system_clock::time_point start;
    std::chrono::system_clock::time_point end;
    std::chrono::duration<double> elapsed;

    std::cout << "Starting The sort now.\n";
  start = std::chrono::system_clock::now();
  selectionSort(A1, inputsize);
  end = std::chrono::system_clock::now();
  elapsed = (end - start);
  //std::cout << "What you did completed in " << elapsed.count() << " seconds\n";
  std::cout << "the sort took: "<<elapsed.count()<< " for " << inputsize<< " items"<< std::endl;
  }
  return(42);
}
