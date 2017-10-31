#include "HexCube.h"


HexCube::HexCube(int q, int r, int s) {
	this->q = q;
	this->r = r;
	this->s = s;
}

HexCube::~HexCube() {
}

HexCube HexCube::operator+(const HexCube & h) {
	return HexCube(q + h.q, r + h.r, s + h.s);
}

HexCube HexCube::operator-(const HexCube & h) {
	return HexCube(q - h.q, r - h.r, s - h.s);
}

HexCube HexCube::operator*(const HexCube & h) {
	return HexCube(q * h.q, r * h.r, s * h.s);
}

HexCube HexCube::operator/(const HexCube & h) {
	return HexCube(q / h.q, r / h.r, s / h.s);
}

HexOffset HexCube::toOffsetCoords() const {
	int col = q + int((r + (r & 1)) / 2);
	int row = r;
	return HexOffset(row, col);
}

HexCube HexCube::fromOffsetCoords(const HexOffset & h) {
	int q = h.getCol() - int((h.getRow() + (h.getRow() & 1)) / 2);
	int r = h.getRow();
	int s = -q - r;
	return HexCube(q, r, s);
}

int HexCube::getQ() const {
	return q;
}

int HexCube::getR() const {
	return r;
}

int HexCube::getS() const {
	return s;
}
