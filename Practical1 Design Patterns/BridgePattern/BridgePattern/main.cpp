/* Author: David Nolan
   Version: 1.0
   Date:
   Hours Worked:
   Description: Demonstrating design patterns
*/
#include "DrawImpl.h"
#include "Player.h"



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
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	std::cin.get();

	system("PAUSE");
}