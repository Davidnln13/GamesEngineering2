#pragma once
#include "Command.h"
#include "GameActor.h"
class JumpCommand : public Command
{
public:
	//new instance of jump command for our concrete commands
	JumpCommand(GameActor * actor) : m_actor(actor) {}
	//derived functions executed by the pointer to our player
	void execute() { m_actor->jump(); }
	void undo() { m_actor->undoJump(); }
private:
	GameActor * m_actor;
	
};
