#include "InputHandler.h"

void InputHandler::handleInput(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), ::toupper);

	if (s == "JUMP") jump->execute();
	else if (s == "FIRE") fire->execute();
}
