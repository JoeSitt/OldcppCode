/**
*  @file LinkedList.h
*   @author Joseph Sittenauer
*  @date 2015.09.21
*
*/
#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"
#include <iostream>
#include <string>

class LinkedList{
public:
  /**
  *  @pre None
  *  @post Creates and initializes a linked list instance
  *  @return none
  */
  LinkedList();

  /**
  *  @pre None
  *  @post deletes a linked list instance
  *  @return none
  */
  ~LinkedList();

  /**
  *  @pre must have a linkedlist
  *  @post none
  *  @return boolean value true if the linkedlist is empty
  */
  bool isEmpty() const;

  /**
  *  @pre must have a linked list
  *  @post none
  *  @return an intager the size of the linked list
  */
  int size() const;

  /**
  *  @pre must have a linked list and an inputted value.
  *  @post searches the linked list for the inoutted value
  *  @return none
  */
  bool search(std::string value) const;

  /**
  *  @pre must have a linked list
  *  @post prints out the contents of a linked list to the user
  *  @return none
  */
  void printList() const;

  /**
  *  @pre must have a linked list
  *  @post adds a value node to the back of the linked list
  *  @return none
  */
  void addBack(std::string value);

  /**
  *  @pre must have a linked list
  *  @post Creates and adds a value node to the front of the linked  list
  *  @return none
  */
  void addFront(std::string value);

  /**
  *  @pre None
  *  @post removes and deletes the back value of the linked list
  *  @return boolean value
  */
  bool removeBack();

  /**
  *  @pre None
  *  @post removes and deletes the front value of the linked list
  *  @return boolean value
  */
  bool removeFront();

  Node<std::string>* getfront() const;

  void setfront(Node<std::string>* x);

private:
Node<std::string>* m_front;
int m_size;
};

#endif
