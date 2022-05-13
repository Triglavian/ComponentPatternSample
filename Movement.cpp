#include "Movement.h"

Movement::Movement() { }

Movement::~Movement() { }

void Movement::Move(int& p_x, int& p_y, const int p_modif_x, const int p_modif_y) {	//confirm modif pos to current pos
	p_x = p_modif_x;
	p_y = p_modif_y;
}

void Movement::CancelMove(const int p_x, const int p_y, int& p_modif_x, int& p_modif_y) {	//reset modif pos to current pos
	p_modif_x = p_x;
	p_modif_y = p_y;
}
