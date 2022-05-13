#pragma once
#include "Position.h"

class Movement {
public:
	Movement();	
	~Movement();
	void Move(int&, int&, const int, const int);		//confirm modif pos to current pos
	void CancelMove(const int, const int, int&, int&);	//reset modif pos to current pos
};