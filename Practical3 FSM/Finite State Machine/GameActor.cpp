#include "GameActor.h"
#include <iostream>

void GameActor::jump()
{
	std::cout << "Jump" << std::endl;
}

void GameActor::undoJump()
{
	std::cout << "Undo Jump" << std::endl;
}

void GameActor::fire()
{
	std::cout << "Fire" << std::endl;
}

void GameActor::undoFire()
{
	std::cout << "Undo Fire" << std::endl;
}

void GameActor::crouch()
{
	std::cout << "Crouch" << std::endl;
}

void GameActor::undoCrouch()
{
	std::cout << "Undo Crouch" << std::endl;
}

void GameActor::melee()
{
	std::cout << "Melee" << std::endl;
}

void GameActor::undoMelee()
{
	std::cout << "Undo Melee" << std::endl;
}

void GameActor::shield()
{
	std::cout << "Shield" << std::endl;
}
void GameActor::undoShield()
{
	std::cout << "Undo Shield" << std::endl;
}
