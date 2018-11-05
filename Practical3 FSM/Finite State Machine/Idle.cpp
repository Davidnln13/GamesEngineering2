#include "Idle.h"

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::crouching(Animation* a)
{
	std::cout << "Crouching" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::firing(Animation* a)
{
	std::cout << "Firing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::meleeing(Animation* a)
{
	std::cout << "Meleeing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Idle::shielding(Animation* a)
{
	std::cout << "Shielding" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
