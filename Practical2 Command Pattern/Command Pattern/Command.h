#pragma once
#include "GameActor.h"

class Command
{
public:
	virtual ~Command() {}
	virtual void execute(GameActor& actor) = 0;
	virtual void undoCommand() = 0;
protected:
	Command() {}
};
