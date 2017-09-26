#ifndef MR_H
#define MR_H
#include <iostream>
#include <fstream>
#include <string>
#include "MazeCreationException.h"
class MazeReader{
	public:
	/**
	*	@post A MazeReader is created. A 2D char array is allocated with the maze information.
	*	@throws MazeCreationExecption
	*
	*/
	MazeReader(std::string file) throw (MazeCreationException);

	/**
	*	@post The maze is deallocated.
	*/
	~MazeReader();

	/**
	*	@pre the file was formatting and read in correctly
	*	@return Returns pointer to the maze
	*/
	const char* const* getMaze() const;

	/**
	*	@pre the file was formatted and read in correctly
	*	@returns the number of columns listed in the file
	*/
	int getCols() const;

	/**
	*	@pre the file was formatted and read in correctly
	*	@returns the number of rows listed in the file
	*/
	int getRows() const;

	/**
	*	@pre the file was formatted and read in correctly
	*	@returns the starting column
	*/
	int getStartCol() const;

	/**
	*	@pre the file was formatted and read in correctly
	*	@returns the starting row
	*/
	int getStartRow() const;


		void printmaze() const; //below from old

		void printmazefile() const;

		char Printmazelocation(int i,int j);

	private:
	/**
	*	@pre the file is properly formatted
	*	@post the characters representing the maze are stores
	*/
	void readMaze()	throw (MazeCreationException);
	char **maze;//also from old
		int m_startCol,m_startrow,m_rows,m_cols,m_frows,m_fcols;//from old
};
#endif
