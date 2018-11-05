#pragma once
#include "Command.h"
#include "GameActor.h"
class FireCommand : public Command
{
public:
	//new instance of jump command for our concrete commands
	FireCommand(GameActor * actor) : m_actor(actor) {}
	//derived functions executed by the pointer to our player
	void execute() { m_actor->fire(); }
	void undo() { m_actor->undoFire(); }
private:
	GameActor * m_actor;

};
