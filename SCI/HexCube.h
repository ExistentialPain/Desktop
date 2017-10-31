#pragma once
#include "HexOffset.h"

////////////////////////////////////////
//
// Klasa reprezentujaca pozycje szesciokatu w koordynatach szesciennych.
// 
////////////////////////////////////////

class HexCube {
public:
	HexCube(int q, int r, int s);
	virtual ~HexCube();
	HexCube operator+(const HexCube& h);
	HexCube operator-(const HexCube& h);
	HexCube operator*(const HexCube& h);
	HexCube operator/(const HexCube& h);
	////////////////////////////////////////
	//
	// Konwertuje koordynaty szescienne na offsetowe.
	//
	////////////////////////////////////////
	HexOffset toOffsetCoords() const;
	////////////////////////////////////////
	//
	// Tworzy obiekt HexCube z koordynatow offsetowych.
	//
	////////////////////////////////////////
	static HexCube fromOffsetCoords(const HexOffset& h);
	int getQ() const;
	int getR() const;
	int getS() const;
private:
	int q, r, s;
};
