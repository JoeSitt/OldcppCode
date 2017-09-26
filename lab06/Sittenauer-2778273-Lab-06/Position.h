#ifndef POSITION_H
#define POSITION_H
class Position{
public:
	/**
*        @post Position created with row and col values set.
	*/
	Position(int row, int col);




	/**
	*	@return row value
	*/
	int getRow() const;

	/**
	*	@return col value
	*/
	int getCol() const;

	void setrow(int r);

	void setcol(int c);

	void setpos(int r, int c);

	void setpos(Position temp);

private:
	int m_row;
	int m_col;
};
#endif
