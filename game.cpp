#pragma once
#include <iostream>
#include "Barbarian.h"

int main() {
	Barbarian barb;
	Barbarian barb2;
	barb.attack(barb2.get_x(), barb2.get_y(), barb2.get_hp());
	return 0;
}