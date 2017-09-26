#include "voter.h"
voter::voter( std::string ifirst, std::string ilast,int iage, std::string iparty) {
  fname = ifirst;
  lname = ilast;
  age = iage;
  party = iparty;
}

voter::voter() {
  fname = "";
  lname = "";
  age = 0;
  party = "";
}

std::string voter::getlname() const {
  return(lname);
}

std::string voter::getfname() const {
  return(fname);
}

std::string voter::getparty() const {
  return(party);
}

int voter::getage() const {
  return(age);
}

void voter::printinfo() const {
  std::cout<< "Record: " << this->getfname() << " " << this->getlname() << "; age " << this->getage() << "; Registered as: " << this->getparty() << "\n";
  //std::cout<< "Record: " + fname + " " + lname + "; age " + age + "; Registered as: " + party + "\n";

}
