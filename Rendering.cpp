#include "Rendering.h"

Rendering::Rendering() { 
	GetConsoleScreenBufferInfo(hout, &window);	
	len = 0;
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
}

Rendering::~Rendering() { }

void Rendering::render_object(const std::string p_str, const int p_x, const int p_y) {
	cursor_pos(p_x, p_y);
	std::cout << p_str;
}

void Rendering::render_object(const char p_ch, const int p_x, const int p_y) {
	cursor_pos(p_x, p_y);
	std::cout << p_ch;
}

void Rendering::render_int(const int p_int, const int p_x, const int p_y, const std::string p_msg = "") {
	cursor_pos(p_x, p_y);
	std::cout << p_msg << p_int;
}

void Rendering::clear_window() {
	FillConsoleOutputCharacter(hout, ' ', 30 * 30, { 0, 0 }, &len);
	cursor_pos(0, 0);
}

void Rendering::cursor_pos(const short p_x, const short p_y) {
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { p_x, p_y });
}
