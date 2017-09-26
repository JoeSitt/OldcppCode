#include "Stack.h"
#include <iostream>
template <typename T>
Stack<T>::Stack(){
  m_topPtr = nullptr;
  m_size = 0;
}

template <typename T>
Stack<T>::~Stack(){
  while(!isEmpty()){
    pop();
  }
}

template <typename T>
bool Stack<T>::isEmpty() const{
  if(m_topPtr == nullptr){
    return(true);
  }
  else{
    return(false);
  }
}

template <typename T>
void Stack<T>::push(const T newEntry){
  if(isEmpty()){
    m_topPtr = new Node<T>();
    m_topPtr->setValue(newEntry);
    m_size++;
  }
  else{
    Node<T>* oldTop = m_topPtr;
    Node<T>* newTop = new Node<T>();
    newTop->setValue(newEntry);
    newTop->setNext(oldTop);
    oldTop->setPrevious(newTop);
    m_topPtr = newTop;
    m_size++;
  }
}

template <typename T>
int Stack<T>::size() const{
  return(m_size);
  }

template <typename T>
void Stack<T>::print() const{
  if(isEmpty()){
    std::cout << "";
  }
  else{
    Node<T>* t_Print = m_topPtr;
    while(t_Print->getNext() != nullptr){ //traverse til the end
      t_Print = t_Print->getNext();
    }
    while(t_Print != nullptr){
    std::cout << t_Print->getValue() << " "; //print value then go back one node
    t_Print = t_Print->getPrevious();
    }
  }
}

template <typename T>
T Stack<T>::peek() const throw(PreconditionViolationException){
  if(isEmpty()){
    throw(PreconditionViolationException("Peek attempted on an empty stack"));
  }
  else{
    return(m_topPtr->getValue());
  }
}

template <typename T>
void Stack<T>::pop() throw(PreconditionViolationException){
  if(isEmpty()){
    throw(PreconditionViolationException("Pop attempted on an empty stack"));
  }
  else if (size() == 1){
    Node<T>* temp = m_topPtr;
    m_topPtr = nullptr;
    delete temp;
    temp = nullptr;
    m_size--;
  }
  else{
    Node<T>* temp = m_topPtr;
    m_topPtr = m_topPtr->getNext();
    m_topPtr->setPrevious(nullptr);
    delete temp;
    temp = nullptr;
    m_size--;
  }
}
