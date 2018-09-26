#pragma once
#include "Command.h"
class FireCommand : public Command
{
public:
	virtual void execute(GameActor& actor) 
	{
		actor.fire();
	}
};
