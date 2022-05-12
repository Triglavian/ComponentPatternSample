#include "Interval.h"

Interval::Interval() {	//don't use
	m_interval = -1;
	m_start = clock();
	m_current = clock();
}

void Interval::set_interval(const int p_speed) {
	m_interval = p_speed;
}

Interval::~Interval() { }

bool Interval::validate_attack_interval(const bool p_is_engage) {
	if (p_is_engage == false) {	//reset attack interval if not under engagement
		m_start = m_current = clock();
		return false;
	}
	m_current = clock();
	if (m_current - m_start < m_interval) return false;	//not enough interval
	m_start = m_current;	//reset attack interval for attacking
	return true;
}
