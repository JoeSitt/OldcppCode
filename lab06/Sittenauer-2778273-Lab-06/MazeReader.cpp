#include "MazeReader.h"
#include "MazeCreationException.h"
#include <iostream>
#include <fstream>
#include <string>

MazeReader::MazeReader(std::string file) throw (MazeCreationException){
std::ifstream myfile(file);
if(!myfile.good()){
  throw(MazeCreationException("bad file"));
}
else{
myfile>>m_rows>>m_cols;
myfile>> m_startrow >>m_startCol;
if(m_cols<1){
  throw (MazeCreationException("It failed because the colomns provided isnt correct"));
  }
  if(m_rows<1){
    throw (MazeCreationException("It failed because the rows provided isnt correct"));
      }
  if(m_cols<m_startCol||m_rows<m_startrow||m_startCol<0||m_startrow<0){
    throw (MazeCreationException("It failed because the start position provided isnt correct"));
      }
  maze=new char*[m_rows];
  for(int i =0; i<m_rows;i++){
    maze[i]=new char [m_cols];
  }
  for(int j=0;j<m_rows;j++){
    for(int k=0;k<m_cols;k++){
      myfile>>maze[j][k];
    }
  }
}
}

MazeReader::~MazeReader(){
  for(int i =0; i<m_rows;i++){
    delete[] maze[i];
  }
  delete[] maze;
}

const char* const* MazeReader::getMaze() const{
return(maze);
}

/**
*	@pre the file was formatted and read in correctly
*	@returns the number of columns listed in the file
*/
int MazeReader::getCols() const{
  return(m_cols);
}

/**
*	@pre the file was formatted and read in correctly
*	@returns the number of rows listed in the file
*/
int MazeReader::getRows() const{
  return(m_rows);
}

/**
*	@pre the file was formatted and read in correctly
*	@returns the starting column
*/
int MazeReader::getStartCol() const{
    return(m_startCol);
}


/**
*	@pre the file was formatted and read in correctly
*	@returns the starting row
*/
int MazeReader::getStartRow() const{
    return(m_startrow);
}




/**
*	@pre the file is properly formatted
*	@post the characters representing the maze are stores
*/
void MazeReader::readMaze()	throw (MazeCreationException){
try{}
catch(std::runtime_error& e)
{throw (MazeCreationException(""));}
}

void MazeReader::printmaze() const{
  for(int i=0;i<m_rows;i++){
    for(int j=0;j<m_cols;j++){
      std::cout<<maze[i][j]<<" ";
    }
    std::cout<<"\n";
  }
}
