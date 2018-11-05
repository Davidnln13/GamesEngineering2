#pragma once
#include "GameActor.h"

class Command
{
public:
	virtual ~Command() {}
	//two pure virtual void functions to be derived in all of our commands 
	virtual void execute() = 0;
	virtual void undo() = 0;
protected:
	Command() {}
};
