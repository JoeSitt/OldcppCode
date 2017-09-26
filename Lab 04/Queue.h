#ifndef Queue_H
#define Queue_H
#include "QueueInterface.h"
#include "Node.h"
#include "PreconditionViolationException.h"
//#include "Test.h"
template <typename T>
class Queue : public QueueInterface<T>{
public:
      virtual Queue();
      virtual ~QueueInterface() {}

      virtual bool isEmpty() const;
          //returns true if the stack is empty, false otherwise

      virtual void enqueue(const T value);
          //Entry added to back of queue

      virtual void dequeue() throw(PreconditionViolationException);
          //assumes the queue is not empty
          //front of the front is removed
          //throws PreconditionViolationException ifattempted on an empty queue. Does not return a value in this case.

      virtual T peekFront() const throw(PreconditionViolationException);

private:
  Node<T>* m_front;
  int m_size;
};
#include "Queue.hpp"
#endif
