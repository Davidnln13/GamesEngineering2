#pragma once
#include "Character.h"
#include <iostream>
class Boss : public Character {
public:
	void draw() {
		std::cout << "Draw Boss" << std::endl;
	}
};
