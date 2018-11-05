#pragma once
#include "State.h"

class Meleeing : public State
{
public:

	void idle(Animation* a)
	{
		std::cout << "Going from Meleeing to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
