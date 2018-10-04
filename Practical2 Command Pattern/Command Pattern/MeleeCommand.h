#pragma once
#include "Command.h"
#include "GameActor.h"
class MeleeCommand : public Command
{
public:
	//new instance of jump command for our concrete commands
	MeleeCommand(GameActor * actor) : m_actor(actor) {}
	//derived functions executed by the pointer to our player
	void execute() { m_actor->melee(); }
	void undo() { m_actor->undoMelee(); }
private:
	GameActor * m_actor;

};
