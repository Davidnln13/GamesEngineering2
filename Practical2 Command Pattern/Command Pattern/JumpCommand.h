#pragma once
#include "Command.h"
#include "GameActor.h"
class JumpCommand : public Command
{
public:
	JumpCommand(GameActor * actor) : m_actor(actor) {}
	void execute() { m_actor->jump(); }
	//void undo() { m_actor->undoJump(); }
private:
	GameActor * m_actor;
	
};
