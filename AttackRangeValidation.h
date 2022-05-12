#pragma once
#include <math.h>

class AttackRangeValidation {
private:
	int m_range;
public:
	AttackRangeValidation();
	~AttackRangeValidation();
	void set_range(const int);
	bool is_in_range(int, int, int ,int);
};