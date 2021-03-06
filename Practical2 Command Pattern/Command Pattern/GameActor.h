#pragma once
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
};