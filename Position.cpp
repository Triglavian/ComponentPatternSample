#include "Position.h"

Position::Position() {
	m_x = 0;
	m_y = 0;
}

Position::~Position() { }

void Position::set_pos(int p_x, int p_y) {
	m_x = p_x;
	m_y = p_y;
}

Position Position::get_pos() {
	return *this;
}

int Position::get_x() {
	return m_x;
}

int Position::get_y() {
	return m_y;
}
