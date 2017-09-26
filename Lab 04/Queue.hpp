#include "Queue.h"
#include <iostream>


template <typename T>
Queue<T>::Queue(){
  m_front = nullptr;
  m_size = 0;
}

template <typename T>
virtual Queue<T>::~QueueInterface() {
  while(!isEmpty()){
    dequeue();
  }
}

template <typename T>
virtual bool Queue<T>::isEmpty() const{
  if(m_size==0){
    return 1;
  }
  return 0;
}
    //returns true if the Queue is empty, false otherwise

template <typename T>
virtual void Queue<T>::enqueue(const T value) {
  Node<T>* newNode = NULL; //creates new node
	Node<T>* traverse = NULL; //sifts through the nodes
	if(m_size == 0){
		m_front = new Node<T>();
		m_front -> setValue(value);
		m_size = m_size + 1;
	}
	else{
		m_size++;
		traverse = m_front;
		while(traverse -> getNext() != NULL){
			traverse = traverse -> getNext();
		}
		newNode = new City();
    newNode -> setValue(value);
		traverse -> setNext(newNode);
	}
}
    //Entry added to back of queue

template <typename T>
virtual void Queue<T>::dequeue() throw(PreconditionViolationException){
  Node* temp = NULL;
  if(isEmpty()){
    //return(false);
    throw(PreconditionViolationException("Dequeue attempted on an empty queue"));
  }
  else{
    m_size--;
    temp = m_front;
    m_front = m_front -> getNext();
    delete temp;
    temp = NULL;
    //return(true);
  }
}
    //assumes the queue is not empty
    //front of the front is removed
    //throws PreconditionViolationException ifattempted on an empty queue. Does not return a value in this case.

template <typename T>
virtual T Queue<T>::peekFront() const throw(PreconditionViolationException){
  if(isEmpty()){
    throw(PreconditionViolationException("Peek attempted on an empty queue"));
  }
  else{
    return(m_front->getValue());
  }
}
