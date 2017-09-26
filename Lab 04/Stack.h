#ifndef STACK_H
#define STACK_H
#include "StackInterface.h"
#include "Node.h"
#include "PreconditionViolationException.h"
//#include "Test.h"
template <typename T>
class Stack : public StackInterface<T>{
public:
  Stack();
  ~Stack();
  bool isEmpty() const;
  void push(const T newEntry);
  void pop() throw(PreconditionViolationException);
  T peek() const throw(PreconditionViolationException);
  int size() const;
  void print() const;

private:
  Node<T>* m_topPtr;
  int m_size;
};
#include "Stack.hpp"
#endif
