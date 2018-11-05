#pragma once
#include "SDL.h"

class GameActor
{
public:
	//commands and undo commands
	void jump();
	void fire();
	void crouch();
	void melee();
	void shield();

	void undoJump();
	void undoFire();
	void undoCrouch();
	void undoMelee();
	void undoShield();
	//change rectangle colour
	void draw(SDL_Surface* surface);
};