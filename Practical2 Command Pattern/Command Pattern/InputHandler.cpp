#include "InputHandler.h"

Command* InputHandler::handleInput(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), ::toupper);

	if (s == "JUMP") 
		return jump;
	else if (s == "FIRE") 
		return fire;

	return NULL;
}
	