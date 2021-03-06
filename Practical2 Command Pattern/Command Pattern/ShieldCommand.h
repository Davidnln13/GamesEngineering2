#pragma once
#include "Command.h"
#include "GameActor.h"
class ShieldCommand : public Command
{
public:
	//new instance of jump command for our concrete commands
	ShieldCommand(GameActor * actor) : m_actor(actor) {}
	//derived functions executed by the pointer to our player
	void execute() { m_actor->shield(); }
	void undo() { m_actor->undoShield(); }
private:
	GameActor * m_actor;

};
