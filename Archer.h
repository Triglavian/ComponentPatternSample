#pragma once
#include "Interval.h"
#include "AttackRangeValidation.h"
#include "Attacking.h"
#include "MovementValidation.h"
#include "Movement.h"
#include "Rendering.h"

class Archer {
private:
	int m_hp;
	int m_atk_range;
	int m_dmg;
	int m_atk_speed;
	int m_move_speed;
	int m_x;
	int m_y;
	int m_modif_x;
	int m_modif_y;
	const char m_ch = 'A';
	Interval* m_atk_interval;
	Interval* m_move_interval;
	AttackRangeValidation* m_atk_valid;
	Attacking* m_atk;
	Movement m_movement;
	MovementValidation m_mov_valid;
	Rendering m_render;
public:
	Archer();
	Archer(int, int);
	~Archer();
	int& get_hp();
	int& get_x();
	int& get_y();
	char get_ch();
	bool attack(const int, const int, int&);
	void move(const int);
	//void set_movable(const bool);
	//bool get_movable();
};

