#pragma once
#include "State.h"

class Shielding : public State
{
public:

	void idle(Animation* a)
	{
		std::cout << "Going from Shielding to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
