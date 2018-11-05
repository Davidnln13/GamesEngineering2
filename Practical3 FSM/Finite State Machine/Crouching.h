#pragma once
#include "State.h"

class Crouching : public State
{
public:

	void idle(Animation* a)
	{
		std::cout << "Going from Crouching to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
