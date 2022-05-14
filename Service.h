#pragma once
#include <iostream>
#include "Tick.h"
#include "Rendering.h"
#include "Archer.h"
#include "Barbarian.h"
#include "Dummy.h"

class Service {
private:
	Barbarian* bar;
	Archer* arch;
	Dummy* dummy;
	Tick* rend_tick;
	Rendering render;
public:
	Service();
	~Service();
	void run();
	void calculation();
	void rendering();
};

