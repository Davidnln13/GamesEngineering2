#pragma once
#include "Command.h"
#include <iostream>
#include <algorithm>
#include <string>

class InputHandler
{
public:
	void handleInput(std::string s);
	// Methods to bind commands...
private:
	Command* jump;
	Command* fire;
};
