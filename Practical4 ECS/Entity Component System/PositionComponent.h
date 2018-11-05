#pragma once
#include "Component.h"

class PositionComponent : public Component
{
public:
	PositionComponent(int xIn, int yIn) : x(xIn), y(yIn) {}
	std::string getName() { return name; }
private:
	int x;
	int y;
	std::string name = "Position";
};
