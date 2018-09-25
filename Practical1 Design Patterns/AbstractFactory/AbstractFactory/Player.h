#pragma once
#include <iostream>

class Player : public Character {
public:
	void draw() {
		std::cout << "Draw Player" << std::endl;
	}
};
