/**
*	@file Pokemon.h
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#ifndef Pokemon_h
#define Pokemon_h
#include <iostream>
#include <string>

class Pokemon {
public:
  /**
  *  @pre None
  *  @post Creates and initializes a Pokemon instance
  *  @return none
  */
  Pokemon();
  //Pokemon(std::string a, int b, std::string c);

  /**
  *  @pre must have a Pokemon and an input value
  *  @post changes the value of the Pokemon
  *  @return none
  */
  void setdexValue(int value);

  void setnameValue(std::string value);

  void setjnameValue(std::string value);


  /**
  *  @pre must have a Pokemon
  *  @post none
  *  @return the value of the Pokemon
  */
  int getdexValue() const;
  std::string getjnameValue() const;
  std::string getnameValue() const;

private:
  int m_dex;
  std::string m_jname;
  std::string m_name;


};
#endif
