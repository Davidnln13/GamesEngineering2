#pragma once
#include "Component.h"

class ControlComponent : public Component
{
public:
	ControlComponent(bool controlled) : control(controlled) {}
	std::string getName() { return name; }
	
private:
	bool control;
	std::string name = "Control";
};