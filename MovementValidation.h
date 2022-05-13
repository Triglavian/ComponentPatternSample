#pragma once
#include "Direction.h"

class MovementValidation {
private:
	void(MovementValidation::*fp_temp_move[(int)Direction::MAX])(int&, int&);
public:
	MovementValidation();
	~MovementValidation();
	void temp_move(int&, int&, const int);
	void temp_up(int&, int&);
	void temp_down(int&, int&);
	void temp_left(int&, int&);
	void temp_right(int&, int&);
	bool validate_movable(int&, int&);
};