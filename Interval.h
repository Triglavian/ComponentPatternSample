#pragma once
#include <ctime>

class Interval {
private:
	int m_interval;	//ms
	int m_start;
	int m_current;
public:
	Interval();	//don't use
	void set_interval(const int);
	~Interval();
	bool validate_attack_interval(const bool);	//validate attack speed
};