#ifndef QueueI_H
#define QueueI_H
#include "PreconditionViolationException.h"
template <typename T>
class StackInterface{
public:

      virtual~QueueInterface() {}

      virtual bool isEmpty() const = 0;
          //returns true if the stack is empty, false otherwise

      virtual void enqueue(const T value) = 0;
          //Entry added to back of queue

      virtual void dequeue() throw(PreconditionViolationException) = 0;
          //assumes the queue is not empty
          //front of the front is removed
          //throws PreconditionViolationException ifattempted on an empty queue. Does not return a value in this case.

      virtual T peekFront() const throw(PreconditionViolationException) = 0;
          //assumes the queue is not empty
          //returns the value at the front of the stack
          //throws a PreconditionViolationException if attempted on an empty queue. Does not return a value in this case.

};
#endif
