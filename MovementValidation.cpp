#include "MovementValidation.h"

MovementValidation::MovementValidation() { 
	fp_temp_move[0] = &MovementValidation::temp_up;
	fp_temp_move[1] = &MovementValidation::temp_down;
	fp_temp_move[2] = &MovementValidation::temp_left;
	fp_temp_move[3] = &MovementValidation::temp_right;
}

MovementValidation::~MovementValidation() { }

void MovementValidation::temp_move(int& p_x, int& p_y, const int p_direction) {
	(this->*fp_temp_move[p_direction])(p_x, p_y);
}

void MovementValidation::temp_up(int& p_x, int& p_y) {
	--p_y;
}

void MovementValidation::temp_down(int& p_x, int& p_y) {
	++p_y;
}

void MovementValidation::temp_left(int& p_x, int& p_y) {
	--p_x;
}

void MovementValidation::temp_right(int& p_x, int& p_y) {
	++p_x;
}

bool MovementValidation::validate_movable(int& p_x, int& p_y) {
	if (p_x < 1 || p_x > 40 || p_y < 1 || p_y > 30) return false;	//field size = 30 * 30
	return true;
}