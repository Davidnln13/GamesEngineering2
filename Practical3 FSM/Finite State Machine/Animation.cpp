#pragma once
#include "Animation.h"
#include "Idle.h"

Animation::Animation()
{
	current = new Idle();
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::crouching()
{
	current->crouching(this);
}

void Animation::firing()
{
	current->firing(this);
}

void Animation::meleeing()
{
	current->meleeing(this);
}

void Animation::shielding()
{
	current->shielding(this);
}