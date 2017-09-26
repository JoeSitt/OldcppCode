#ifndef Recursion_h
#define Recursion_h
#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <fstream>
#include <string>
class Recursion{
public:
void listreversal();
void c(int n);
void boxstart;

private:
Node<std::string>*  listreversal2(LinkedList list,Node<std::string>* curr,Node<std::string>* next,Node<std::string>* prev, int times);
int nCr(int n, int r);
int nPr(int n, int r);
void box(bool hell[][], int minr, int maxr, int minc, int maxc);
};
#endif
