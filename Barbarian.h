#pragma once
//#include "Position.h"
#include "Interval.h"
#include "AttackRangeValidation.h"
#include "Attacking.h"

class Barbarian
{
private:
	int m_hp;
	int m_atk_range;
	int m_dmg;
	int m_atk_speed;
	//Position m_pos;
	int m_x;
	int m_y;
	Interval m_interval;
	AttackRangeValidation m_atk_valid;
	Attacking m_atk;
public:	
	Barbarian();
	Barbarian(int, int);
	int& get_hp();
	void set_x(const int);
	int& get_x();
	void set_y(const int);
	int& get_y();
	//template <class T>
	//void attack(T);
	void attack(const int, const int, int&);
};