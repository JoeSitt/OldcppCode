/**
*	@file City.cpp
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#include "City.h"
#include <iostream>

City::City(){
  City::m_pop = 0;
  City::m_inpop=0;
  City::m_next = NULL;
  City::m_name="";
}

void City::setpopValue(int val) {
    m_pop = val;
  }

  void City::setinpopValue(int val) {
      m_inpop = val;
    }

    void City::setnameValue(std::string val) {
        m_name = val;
      }

int City::getpopValue() const {
      return( m_pop );
  }

  int City::getinpopValue() const {
        return( m_inpop );
    }

    std::string City::getnameValue() const {
          return( m_name );
      }

 void City::setNext(City* prev){
     m_next = prev;
  }

City* City::getNext() const{
      return(m_next);
  }
