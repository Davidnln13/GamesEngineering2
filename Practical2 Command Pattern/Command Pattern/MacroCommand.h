#pragma once
class MacroCommand : public Command {
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command*);
	virtual void remove(Command*);
	virtual void execute();
private:
	List<Command*>* commands;
}
