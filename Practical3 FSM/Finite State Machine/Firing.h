#pragma once
#include "State.h"

class Firing : public State
{
public:

	void idle(Animation* a)
	{
		std::cout << "Going from Firing to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
