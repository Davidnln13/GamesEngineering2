#include "Animation.h"
#include <iostream>

class State
{
public:
	virtual void idle(Animation* a)
	{
		std::cout << "State::Idling" << std::endl;
	}

	virtual void jumping(Animation* a)
	{
		std::cout << "State::Jumping" << std::endl;
	}

	virtual void crouching(Animation* a)
	{
		std::cout << "State::Crouching" << std::endl;
	}

	virtual void firing(Animation* a)
	{
		std::cout << "State::Firing" << std::endl;
	}

	virtual void meleeing(Animation* a)
	{
		std::cout << "State::Meleeing" << std::endl;
	}

	virtual void shielding(Animation* a)
	{
		std::cout << "State::Shielding" << std::endl;
	}
};
