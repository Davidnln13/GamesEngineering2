#pragma once
#include "Command.h"
#include <SDL.h>
#include <iostream>
#include <string>
#include "Animation.h"
 
class InputHandler
{
public:
	//take in an event and execute a command depending on the key 
	Command* handleInput(SDL_Event& e);
	//method to bind command to a key
	void bindCommand(std::string key, Command * c);
private:
	Command* button1;
	Command* button2;
	Command* button3;
	Command* button4;
	Command* button5;
	Command* previous = nullptr;
	Animation FSM;
};
