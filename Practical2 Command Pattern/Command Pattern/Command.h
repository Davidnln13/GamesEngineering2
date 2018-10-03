#pragma once
#include "GameActor.h"

class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	//virtual void undo() = 0;
protected:
	Command() {}
};
