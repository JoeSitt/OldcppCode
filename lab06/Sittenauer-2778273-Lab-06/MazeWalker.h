#ifndef MW_H
#define MW_H
#include "Position.h"
#include <iostream>
#include <stack>
#include <queue>


/*enum class Search
{
	DFS,
	BFS
};
*/

class MazeWalker{
	public:
	/**
	*	@pre The mazePtr pointer is to a valid maze.
	*	@post A maze walker if created ready to traverse the maze from the start position is the specified order.
	*/
	MazeWalker(const char* const* mazePtr, int startRow, int startCol, int rows, int cols);

	/**
	*
	*	@pre The visited array still exists and has the same dimensions (rows X cols)
	*	@post The visited array is deallocated
	*/
	~MazeWalker();

	/**
	*	@pre The maze is a valid maze.
	*	@post The maze is traversed until the end is reached or all moves are exhausted.
	*	@return true if an exit was reached, false otherwise
	*/
	bool walkMaze(int currow, int curcol);


	/**
	*	@return A const pointer to the visited array. (A pointer that cannot change the array)
	*/
	const int* const* getVisited() const;

	/**
	*	@return number of rows in maze
	*/
	int getVisitedRows() const;

	/**
	*	@return number of cols in maze
	*/
	int getVisitedCols() const;

	/**
	*	@return A const pointer to the maze. (A pointer that cannot change the array)
	*/
	const char* const* getMaze() const;

        private:

	/**
	*	@returns If the current position is the exit, true is returned. False is returned otherwise.
	*/
	bool isGoalReached(int currow, int curcol) const;
	void setreached(bool q);

	void printvmaze() const;

	const char* const* m_maze;
	int** m_visited;
	int m_rows, m_cols;
	int m_curRow, m_curCol;
	int m_startRow, m_startCol;
	bool reachedgoal;
	int m_curStep;
	Position* next[200];
	int nextcount;
};

#endif
