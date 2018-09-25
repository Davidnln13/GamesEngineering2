#include "MacroCommand.h"

void MacroCommand::execute() {
	ListIterator<Command*> i(commands);
	for (i.First(); !i.IsDone(); i.Next())
	{
		Command *c = i.CurrentItem();
		c->execute();
	}
}
void MacroCommand::add(Command *c) {
	commands->append(c);
}
void MacroCommand::remove(Command *c) {
	commands->remove(c);
}
