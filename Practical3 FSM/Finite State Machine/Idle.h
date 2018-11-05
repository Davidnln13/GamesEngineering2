#pragma once
#include "State.h"

class Idle : public State
{
public:
	void jumping(Animation* a);
	void crouching(Animation* a);
	void firing(Animation* a);
	void meleeing (Animation* a);
	void shielding(Animation* a);
};
