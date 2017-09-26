/**
*	@file Pokemon.cpp
* 	@author Joseph Sittenauer
*	@date 2015.09.21
*
*/
#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon(){
  m_dex = 0;
  m_jname = "";
  m_name="";
}

/*Pokemon::Pokemon(std::string a, int b, std::string c){
  m_dex = b;
  m_jname = c;
  m_name=a;
}*/

void Pokemon::setdexValue(int val) {
    m_dex = val;
  }

  void Pokemon::setjnameValue(std::string val) {
      m_jname = val;
    }

    void Pokemon::setnameValue(std::string val) {
        m_name = val;
      }

int Pokemon::getdexValue() const {
      return( m_dex );
  }

  std::string Pokemon::getjnameValue() const {
        return( m_jname );
    }

    std::string Pokemon::getnameValue() const {
          return( m_name );
      }
