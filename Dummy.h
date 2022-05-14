#pragma once
#include "Rendering.h"

class Dummy {
private:
	int m_hp;
	int m_x;
	int m_y;
	const char m_ch = 'D';
	Rendering m_render;
public:
	Dummy();
	Dummy(int, int);
	~Dummy();
	int& get_hp();
	int& get_x();
	int& get_y();
	char get_ch();
};

