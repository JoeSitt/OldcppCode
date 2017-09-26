/**
*	@file Patient.h
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#ifndef Patient_h
#define Patient_h
#include <iostream>
#include <string>

class Patient {
public:
  /**
  *  @pre None
  *  @post Creates and initializes a Patient instance
  *  @return none
  */
  Patient();
  //Patient(std::string a, int b, std::string c);
  Patient(int priority, std::sting name);

  /**
  *  @pre must have a Patient and an input value
  *  @post changes the value of the Patient
  *  @return none
  */
  void setpriorityValue(int value);

  void setnameValue(std::string value);


  /**
  *  @pre must have a Patient
  *  @post none
  *  @return the value of the Patient
  */
  int getpriorityValue() const;
  std::string getnameValue() const;

  void print();

private:
  int m_priority;
  std::string m_name;


};
#endif
