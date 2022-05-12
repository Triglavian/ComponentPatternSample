#pragma once

class Position {
private:
	int m_x;
	int m_y;
public:
	Position();
	~Position();
	void set_pos(int, int);
	Position get_pos();
	int get_x();
	int get_y();
};