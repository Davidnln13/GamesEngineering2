#pragma once
class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}
	//these would be animations however in this case its just console output
	void idle();
	void jumping();
	void crouching();
	void firing();
	void meleeing();
	void shielding();
};
