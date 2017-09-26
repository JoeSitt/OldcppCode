/**
*	@file LinkedList.h
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#ifndef LinkedList_h
#define LinkedList_h
#include "City.h"
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
  bool search(int value) const;

  /**
  *  @pre must have a linked list and an inputted value.
  *  @post searches the linked list for the inoutted value
  *  @return none
  */
  bool searchname(std::string value) const;

  /**
  *  @pre must have a linked list
  *  @post prints out the contents of a linked list to the user
  *  @return none
  */
  void printList() const;

  /**
  *  @pre must have a linked list
  *  @post adds a value City to the back of the linked list
  *  @return none
  */
  void addBack(std::string name,int value,int value2);

  void moveBack(City* moved);

  void addBack(City* moved);

  void printcity(std::string a) const;

  /**
  *  @pre must have a linked list
  *  @post Creates and adds a value City to the front of the linked  list
  *  @return none
  */
  void addFront(std::string name,int value,int value2);

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

  void sort();

  void increasecityinpop( std::string value );

  void increaseinpop();

private:
City* m_front;
int m_size;
};

#endif
