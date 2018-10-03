#pragma once
#include "Command.h"
#include <SDL.h>
#include <iostream>
#include <string>
 
class InputHandler
{
public:
	Command* handleInput(SDL_Event& e);
	void bindCommand(std::string key, Command * c);
	// Methods to bind commands...
private:
	Command* jump;
	Command* fire;
	Command* previous;
};
