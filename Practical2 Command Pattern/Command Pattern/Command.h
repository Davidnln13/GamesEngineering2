#pragma once
class Command
{
public:
	virtual ~Command() {}
	virtual void Execute() = 0;
	virtual void RedoCommand() = 0;
	virtual void UndoCommand() = 0;
	virtual void DoCommand() = 0;
protected:
	Command() {}
};
