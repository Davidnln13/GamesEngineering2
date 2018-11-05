#pragma once
#include "State.h"
class Jumping : public State
{
public:

	void idle(Animation* a)
	{
		std::cout << "Going from Jumping to Idling" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
