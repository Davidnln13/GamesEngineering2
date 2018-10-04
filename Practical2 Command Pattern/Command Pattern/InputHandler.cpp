#include "InputHandler.h"

Command* InputHandler::handleInput(SDL_Event& e)
{
	//switch loop to perform command depending on key pressed
	//also sets previous pointer used for undo
	switch (e.key.keysym.sym)
	{
	case SDLK_SPACE:
		button1->execute();
		previous = button1;
		break;
	case SDLK_f:
		button2->execute();
		previous = button2;
		break;
	case SDLK_c:
		button3->execute();
		previous = button3;
		break;
	case SDLK_m:
		button4->execute();
		previous = button4;
		break;
	case SDLK_s:
		button5->execute();
		previous = button5;
		break;
	case SDLK_u:
		if (previous != nullptr)
		{
			previous->undo();
			previous = nullptr;
		}
		break;
	}
	return NULL;
}
void InputHandler::bindCommand(std::string key, Command * c)
{
	if (key == "space")
	{
		button1 = c;
	}
	if (key == "f")
	{
		button2 = c;
	}
	if (key == "c")
	{
		button3 = c;
	}
	if (key == "m")
	{
		button4 = c;
	}
	if (key == "s")
	{
		button5 = c;
	}
}
	