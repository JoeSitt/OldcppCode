/**
*	@file Patient.cpp
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#include "Patient.h"
#include <iostream>

Patient::Patient(){
  m_priority = 0;
  m_name="";
}

Patient::Patient(int priority, std::sting name){
  m_priority = priority;
  m_name= name;
}

Patient::Patient(std::nullptr_t){
  m_priority = 0;
  m_name="";
}

void Patient::setpriorityValue(int val) {
    m_priority = val;
  }


    void Patient::setnameValue(std::string val) {
        m_name = val;
      }

int Patient::getpriorityValue() const {
      return( m_priority );
  }


    std::string Patient::getnameValue() const {
          return( m_name );
      }

void Patient::print(){
  std::cout << getnameValue()<<" "<< getpriorityValue() << std::endl;
}
