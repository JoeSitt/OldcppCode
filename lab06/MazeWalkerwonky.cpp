#include "MazeWalker.h"
/**
*	@pre The mazePtr pointer is to a valid maze.
*	@post A maze walker if created ready to traverse the maze from the start position is the specified order.
*/
MazeWalker::MazeWalker(const char* const* mazePtr, int startRow, int startCol, int rows, int cols){
  m_maze=mazePtr;
  m_startRow=startRow;
  m_startCol=startCol;
  m_rows=rows;
  m_cols=cols;
  m_curRow=startRow;
  m_curCol=startCol;
  std::cout << "couldnt be here" << std::endl;
  m_visited = new int*[m_rows];
  for(int i =0; i<m_rows;i++){
    m_visited[i]=new int [m_cols];
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      m_visited[i][j]=0;
    }
  }
  m_curStep=0;
  reachedgoal=0;
  for (int k = 0; k < 200; k++) {
    //next[k]=Position(-1,-1);
    Position* temp = new Position(-1 , -1);

    next[k]=temp;
    //temp*=nullptr;
  }
  std::cout << "maybe not..." << std::endl;
  nextcount = 0;
  walkMaze(startRow,startCol-1);
  printvmaze();
}

/**
*
*	@pre The visited array still exists and has the same dimensions (rows X cols)
*	@post The visited array is deallocated
*/
MazeWalker::~MazeWalker(){

}

/**
*	@pre The maze is a valid maze.
*	@post The maze is traversed until the end is reached or all moves are exhausted.
*	@return true if an exit was reached, false otherwise
*/
bool MazeWalker::walkMaze( int currow, int curcol ){
  m_visited[currow][curcol]=m_curStep++;
  int counter=0;
  if (isGoalReached(currow,curcol)) {
    setreached(1);
    return 1;
  }else{
    if(!(currow==0)){
      if(m_visited[currow-1][curcol]==0){
        if (m_maze[currow-1][curcol]!='W') {
          // walkMaze(currow-1,curcol);
          // if (isGoalReached(currow,curcol)) {
          //   setreached(1);
          //   return 1;
          // }
          std::cout << "N" << std::endl;
          counter=0;
          while(next[counter]->getCol()!=-1){
            counter++;
          }
          next[counter]->setcol(curcol);
          next[counter]->setrow(currow-1);
        }
      }
    }
    if(curcol!=m_cols-1){
      if(m_visited[currow][curcol+1]==0){
        if (m_maze[currow][curcol+1]!='W') {
          // walkMaze(currow,curcol+1);
          // if (isGoalReached(currow,curcol)) {
          //   setreached(1);
          //   return 1;
          // }
          std::cout << "E" << std::endl;
          counter=0;
          while(next[counter]->getCol()!=-1){
            counter++;
          }
          next[counter]->setcol(curcol+1);
          next[counter]->setrow(currow);
        }
      }
    }
    if (currow!=m_rows-1) {
      if(m_visited[currow+1][curcol]==0){
        if (m_maze[currow+1][curcol]!='W') {
          // walkMaze(currow+1,curcol);
          // if (isGoalReached(currow,curcol)) {
          //   setreached(1);
          //   return 1;
          // }
          std::cout << "S" << std::endl;
          counter=0;
          while(next[counter]->getCol()!=-1){
            counter++;
          }
          next[counter]->setcol(curcol);
          next[counter]->setrow(currow+1);
        }
      }
    }
    if (!(curcol==0)) {
      if(m_visited[currow][curcol-1]==0){
        if (m_maze[currow][curcol-1]!='W') {
          // walkMaze(currow,curcol-1);
          // if (isGoalReached(currow,curcol)) {
          //   setreached(1);
          //   return 1;
          // }
          std::cout << "W" << std::endl;
          counter=0;
          while(next[counter]->getCol()!=-1){
            counter++;
          }
          next[counter]->setcol(curcol-1);
          next[counter]->setrow(currow);
        }
      }
    }
    counter=0;
    int arow=0;
    int acol=0;
    while(next[counter]->getCol()!=-1){
      arow=next[counter]->getRow();
      acol=next[counter]->getCol();
      //walkMaze(next[counter+m_curStep]->getRow(),next[counter+m_curStep]->getCol());
      next[counter]->setcol(-2);
      next[counter]->setrow(-2);
      if(arow!=-2){
        walkMaze(arow,acol);
      }
      counter++;
    }
    return 0;
  }
}


/**
*	@return A const pointer to the visited array. (A pointer that cannot change the array)
*/
const int* const* MazeWalker::getVisited() const{
  return m_visited;
}

/**
*	@return number of rows in maze
*/
int MazeWalker::getVisitedRows() const{
return m_rows;
}

/**
*	@return number of cols in maze
*/
int MazeWalker::getVisitedCols() const{
  return m_cols;
}

/**
*	@return A const pointer to the maze. (A pointer that cannot change the array)
*/
const char* const* MazeWalker::getMaze() const{
  return m_maze;
}


/**
*	@returns If the current position is the exit, true is returned. False is returned otherwise.
*/
bool MazeWalker::isGoalReached(int currow, int curcol) const{
  if (m_maze[currow][curcol]=='E'||reachedgoal==1) {

    return 1;
  }
  return 0;
}

void MazeWalker::setreached(bool q){
  reachedgoal=q;
}
void MazeWalker::printvmaze() const{
  for(int i=0;i<m_rows;i++){
    for(int j=0;j<m_cols;j++){
      std::cout<<m_visited[i][j]<<"   ";
    }
    std::cout<<"\n";
  }
}
