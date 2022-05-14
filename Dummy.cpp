#include "Dummy.h"

Dummy::Dummy() {
	m_hp = 300;
	m_x = 0;
	m_y = 0;
}

Dummy::Dummy(const int p_x, const int p_y) {
	m_hp = 300;
	m_x = p_x;
	m_y = p_y;
}

Dummy::~Dummy() {

}

int& Dummy::get_hp() {
	return m_hp;
}

int& Dummy::get_x() {
	return m_x;
}

int& Dummy::get_y() {
	return m_y;
}

char Dummy::get_ch() {
	return m_ch;
}