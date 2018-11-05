#pragma once
#include "Command.h"
#include "GameActor.h"
class CrouchCommand : public Command
{
public:
	//new instance of jump command for our concrete commands
	CrouchCommand(GameActor * actor) : m_actor(actor) {}
	//derived functions executed by the pointer to our player
	void execute() { m_actor->crouch(); }
	void undo() { m_actor->undoCrouch(); }
private:
	GameActor * m_actor;

};
