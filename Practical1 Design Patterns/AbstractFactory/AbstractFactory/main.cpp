/* Author: David Nolan
   Version: 1.0
   Date:
   Hours Worked:
   Description: Demonstrating design patterns
*/
#include "Character.h"
#include "Character Factory.h"
#include <vector>


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
	Factory* factory = new CharacterFactory;
	std::vector<Character*> characters;

	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for(int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	system("PAUSE");
}