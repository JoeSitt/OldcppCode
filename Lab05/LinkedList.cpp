/**
*  @file LinkedList.cpp
*   @author Joseph Sittenauer
*  @date 2015.09.21
*
*/
#include "LinkedList.h"


LinkedList::LinkedList() {
  m_front = NULL;
  m_size = 0;
}


LinkedList::~LinkedList() {
  while (!isEmpty()) {
    removeBack();
  }
}


bool LinkedList::isEmpty() const {
  if (m_front == NULL) {
    return (true);
  } else {
    return(false);
  }
}


int LinkedList::size() const {
  return(m_size);
}


void LinkedList::printList() const {
  Node<std::string>* traverse = NULL;
  if (isEmpty()) {
    std::cout << "";
  } else {
    traverse = m_front;
    while (traverse != NULL) {
      std::cout << traverse -> getValue() << " ";
      traverse = traverse -> getNext();
    }
  }
  std::cout << "\n";
}


bool LinkedList::search(std::string value) const {
  Node<std::string>* searcher = NULL;
  if (isEmpty()) {
    return(false);
  }
  for (searcher = m_front; searcher != NULL; searcher = searcher-> getNext()) {
    if (searcher -> getValue() == value) {
      // std::cout << value << " is in the list";
      return(true);
    }
  }
  for (searcher = m_front; searcher != NULL; searcher = searcher-> getNext()) {
    if (searcher -> getValue() != value) {
      // std::cout << value << " is not in the list";
      return(false);
    }
  }
  return(true);
}

void LinkedList::addBack(std::string value) {
  Node<std::string>* newNode = NULL;  // creates new Node
  Node<std::string>* traverse = NULL;  // sifts through the Nodes
  if (m_size == 0) {
    m_front = new Node<std::string>();
    m_front -> setValue(value);
    m_size = m_size + 1;
  } else {
      m_size++;
      traverse = m_front;
      while (traverse -> getNext() != NULL) {
        traverse = traverse -> getNext();
      }
    newNode = new Node<std::string>();
    newNode -> setValue(value);
    traverse -> setNext(newNode);
  }
  newNode = NULL;
  traverse = NULL;
  delete newNode;
  delete traverse;
}

void LinkedList::addFront(std::string value) {
  if (m_size == 0) {
    m_front = new Node<std::string>();
    m_front -> setValue(value);
    m_size++;
  } else {
    m_size++;
    Node<std::string>* newFront = NULL;
    Node<std::string>* temp = NULL;
    temp = m_front;
    newFront = new Node<std::string>();
    newFront -> setValue(value);
    newFront -> setNext(temp);
    m_front = newFront;
  }
}

bool LinkedList::removeFront() {
  Node<std::string>* temp = NULL;
  if (isEmpty()) {
    return(false);
  } else {
    m_size--;
    temp = m_front;
    m_front = m_front -> getNext();
     //delete temp;
    temp = NULL;
    // delete temp;
    return(true);
  }
}

bool LinkedList::removeBack() {
  Node<std::string>*  newBack = NULL;
  Node<std::string>* back = NULL;
  if (isEmpty()) {
    return(false);
  } else if (size() == 1) {
      back = m_front;
      removeFront();
      return(true);
    } else {
      m_size--;
      back = m_front;
      while (back -> getNext() != NULL) {
        back = back -> getNext();
      }
    newBack = m_front;
    while (newBack -> getNext() != back) {
      newBack = newBack -> getNext();
    }
    delete back;
    back = NULL;
    newBack -> setNext(NULL);
    return(true);
  }
}

Node<std::string>* LinkedList::getfront() const {
  return m_front;
}

void LinkedList::setfront(Node<std::string>* x) {
  m_front = x;
}
