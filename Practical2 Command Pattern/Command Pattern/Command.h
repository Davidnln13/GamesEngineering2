#pragma once
#include "GameActor.h"

class Command
{
public:
	virtual ~Command() {}
	virtual void Execute(GameActor& actor) = 0;
	virtual void RedoCommand() = 0;
	virtual void UndoCommand() = 0;
	virtual void DoCommand() = 0;
protected:
	Command() {}
};
