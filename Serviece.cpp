#include "Service.h"

Service::Service() {
	calc_tick.set_tick(2000);
	rend_tick.set_tick(100);
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hout, &window);
}

Service::~Service() { }

void Service::run() {
	while (1) {
		if (calc_tick.is_tick() == true) {	//2000ms tick
			calculation();
		}
		if (rend_tick.is_tick() == true) {
			rendering();
		}
	}
}

void Service::calculation() {
	bar1.attack(bar2.get_x(), bar2.get_y(), bar2.get_hp());
}

void Service::rendering() {
	clear_window();
	std::cout << bar2.get_hp() << std::endl;
}

void Service::clear_window() {
	FillConsoleOutputCharacter(hout, ' ', 30 * 30, { 0, 0 }, &len);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
}
