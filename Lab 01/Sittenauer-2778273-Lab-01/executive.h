#include "voter.h"
#include <iostream>
#include <fstream>
#include <string>
#ifndef executive_h
#define executive_h

class executive
{
private:
  int insize;
  int choice;
  std::string searchin;
  voter voterx;
  voter* votersx;

public:
executive(std::string filename);

  void run();
};
#endif
