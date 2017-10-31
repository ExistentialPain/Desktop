#include "HexOffset.h"

HexOffset::HexOffset(int col, int row) {
	this->col = col;
	this->row = row;
}

HexOffset::~HexOffset() {

}

int HexOffset::getRow() const {
	return row;
}

int HexOffset::getCol() const {
	return col;
}
