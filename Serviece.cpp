#include "Service.h"

Service::Service() {
	rend_tick = new Tick(200);
	bar = new Barbarian(3, 4);
	arch = new Archer(2, 3);
	dummy = new Dummy(20, 4);
}

Service::~Service() { 
	delete rend_tick;
	delete bar;
	delete arch;
	delete dummy;
}

void Service::run() {
	while (1) {
		calculation();
		if (rend_tick->is_tick() == true) {
			rendering();
		}
	}
}

void Service::calculation() {
	if (bar->attack(dummy->get_x(), dummy->get_y(), dummy->get_hp()) == false) {
		bar->move((int)Direction::RIGHT);
	}
	if (arch->attack(dummy->get_x(), dummy->get_y(), dummy->get_hp()) == false) {
		arch->move((int)Direction::RIGHT);
	}
}

void Service::rendering() {
	render.clear_window();
	render.render_object(bar->get_ch(), bar->get_x(), bar->get_y());
	render.render_object(arch->get_ch(), arch->get_x(), arch->get_y());
	render.render_object(dummy->get_ch(), dummy->get_x(), dummy->get_y());
	render.render_int(dummy->get_hp(), 40, 5, "Dummy HP : ");
}

