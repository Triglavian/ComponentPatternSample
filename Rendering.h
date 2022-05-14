#pragma once
#include <iostream>
#include <Windows.h>

class Rendering {
private:
	CONSOLE_CURSOR_INFO cursor;
	HANDLE hout;
	DWORD len;
	CONSOLE_SCREEN_BUFFER_INFO window;

public:
	void cursor_pos(const short, const short);
	Rendering();
	~Rendering();
	//param1 is output, param2 is x pos, param3 is y pos, param 4 is msg
	void render_object(const std::string, const int, const int);
	void render_object(const char, const int, const int);
	void render_int(const int, const int, const int, const std::string);	//param4 is default "", don't use if you want to print only int
	void clear_window();
};