#pragma once

////////////////////////////////////////
//
// Klasa reprezentujaca pozycje szesciokatu w koordynatach offsetowych.
// 
////////////////////////////////////////
class HexOffset {
public:
	HexOffset(int col, int row);
	virtual ~HexOffset();
	int getRow() const;
	int getCol() const;
private:
	int row, col;
};

