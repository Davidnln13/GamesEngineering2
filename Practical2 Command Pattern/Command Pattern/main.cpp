/* Author: David Nolan
   Version: 1.0
   Date:
   Hours Worked:
   Description: Demonstrating command patterns
*/
#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "GameActor.h"


/// <summary>
/// @brief starting point for all C++ programs.
/// 
/// Create a game object and run it.
/// </summary>
/// <param name=""></param>
/// <param name="argv"></param>
/// <returns></returns>
int main()
{
	InputHandler inputHandler;
	GameActor actor;
	std::string s;
	while (true)
	{
		std::cout << "What would you like your character to do? Available commands: Jump, Fire, Crouch, Shield, Melee" << std::endl;
		std::cin >> s;
		Command* command = inputHandler.handleInput(s);
		if (command)
		{
			command->Execute(actor);
		}
	}
	system("PAUSE");
}