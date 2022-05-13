#pragma once
#include "Tick.h"
#include "Barbarian.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

class Service {
private:
	Barbarian bar1;
	Barbarian bar2;
	Tick calc_tick;
	Tick rend_tick;
	CONSOLE_CURSOR_INFO cursor;
	HANDLE hout;
	DWORD len;
	CONSOLE_SCREEN_BUFFER_INFO window;
public:
	Service();
	~Service();
	void run();
	void calculation();
	void rendering();
	void clear_window();
};

