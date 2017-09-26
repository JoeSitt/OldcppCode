#include "Position.h"

/**
*        @post Position created with row and col values set.
*/
Position::Position(int row, int col){
  m_row=row;
  m_col=col;
}



int Position::getRow() const{
  return(m_row);
}


int Position::getCol() const{
  return(m_col);
}

void Position::setrow(int r){
  m_row=r;
}

void Position::setcol(int c){
  m_col=c;
}

void Position::setpos(int r, int c){
  m_col=c;
  m_row=r;
}

void Position::setpos(Position temp){
  setcol(temp.getCol());
  setrow(temp.getRow());
}
