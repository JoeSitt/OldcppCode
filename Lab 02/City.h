/**
*	@file City.h
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#ifndef Node_h
#define Node_h
#include <iostream>
#include <string>


class City {
public:
  /**
  *  @pre None
  *  @post Creates and initializes a City instance
  *  @return none
  */
  City();

  /**
  *  @pre must have a City and an input value
  *  @post changes the population value of the City
  *  @return none
  */
  void setpopValue(int value);

  /**
  *  @pre must have a City and an input value
  *  @post changes the population value of the City
  *  @return none
  */
  void setinpopValue(int value);

  /**
  *  @pre must have a City and an input value
  *  @post changes the population value of the City
  *  @return none
  */
  void setnameValue(std::string name);

  /**
  *  @pre must have a City value.
  *  @post none
  *  @return the next City value
  */
  City* getNext() const;

  /**
  *  @pre a City and an input value.
  *  @post changes the next City value to the input value
  *  @return none
  */
  void setNext(City* prev);

  /**
  *  @pre must have a City
  *  @post none
  *  @return the population value of the City
  */
  int getpopValue() const;

  /**
  *  @pre must have a City
  *  @post none
  *  @return the infected population value of the City
  */
  int getinpopValue() const;

  /**
  *  @pre must have a City
  *  @post none
  *  @return the infected population value of the City
  */
  std::string getnameValue() const;

private:
  int m_pop,m_inpop;
  std::string m_name;
  City* m_next;


};
#endif
