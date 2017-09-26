#include <string>
#include <iostream>
#ifndef voter_H
#define voter_H

class voter{
public:
  voter(std::string ifirst, std::string ilast,int iage, std::string iparty);
  voter();

  std::string getlname()const;
  std::string getfname()const;
  int getage()const;
  std::string getparty()const;
  void printinfo() const;


private:
  int age;
  std::string fname = "";
  std::string lname = "";
  std::string party = "";

};
#endif
