#include "InputHandler.h"

Command* InputHandler::handleInput(SDL_Event& e)
{
	switch (e.key.keysym.sym)
	{
	case SDLK_SPACE:
		jump->execute();
		break;
	case SDLK_f:
		fire->execute();
		break;
	}
	return NULL;
}
void InputHandler::bindCommand(std::string key, Command * c)
{
	if (key == "Jump")
	{
		jump = c;
	}
	if (key == "f")
	{
		fire = c;
	}
}
	