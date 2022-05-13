#include "Barbarian.h"

Barbarian::Barbarian() {
	m_hp = 60;
	m_atk_range = 1;
	m_dmg = 11;
	m_atk_speed = 800;
	m_x = 10;
	m_y = 3;
	m_interval.set_interval(m_atk_speed);
	m_atk_valid.set_range(m_atk_range);
	m_atk.set_dmg(m_dmg);
}

Barbarian::Barbarian(int p_x, int p_y) {
	m_hp = 60;
	m_atk_range = 1;
	m_dmg = 11;
	m_atk_speed = 800;
	m_x = p_x;
	m_y = p_y;
	m_interval.set_interval(m_atk_speed);
	m_atk_valid.set_range(m_atk_range);
	m_atk.set_dmg(m_dmg);
}


int& Barbarian::get_hp() {
	return m_hp;
}

void Barbarian::set_x(const int p_x) {
	m_x = p_x;
}

int& Barbarian::get_x() {
	return m_x;
}

void Barbarian::set_y(const int p_y) {
	m_y = p_y;
}

int& Barbarian::get_y() {
	return m_y;
}

void Barbarian::attack(const int p_target_x, const int p_target_y, int& p_target_hp) {
	if (m_atk_valid.is_in_range(m_x, m_y, p_target_x, p_target_y) == false) {
		m_interval.validate_attack_interval(false);	//reset attack interval
		return;
	}
	if (m_interval.validate_attack_interval(true) == false) return;	//if not enough interval 
	m_atk.attack(p_target_hp);
}

void Barbarian::move(const int p_direction) {
	m_mov_valid.temp_move(m_x, m_y, p_direction);
	if (m_mov_valid.validate_movable(m_modif_x, m_modif_y) == false) {
		m_movement.CancelMove(m_x, m_y, m_modif_x, m_modif_y);
		return;
	}
	m_movement.Move(m_x, m_y, m_modif_x, m_modif_y);
}

//Position& Barbarian::get_pos() {
//	return m_pos.get_pos();
//}

//template <class T>
//void Barbarian::attack(T p_target) {
//	if (m_atk_valid.is_in_range(m_x, m_y, p_target.get_x(), p_target.get_y()) == false) {
//		m_interval.validate_attack_interval(false);	//reset attack interval
//		return;
//	}
//	if (m_interval.validate_attack_interval(true) == false) return;	//if not enough interval 
//	m_atk.attack(p_target.get_hp());
//}
 