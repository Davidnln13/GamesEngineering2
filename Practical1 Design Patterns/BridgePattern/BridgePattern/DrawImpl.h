#pragma once
#include "DrawAPI.h"
#include <iostream>
class DrawImpl : public DrawAPI
{
public:
	void Draw() {
		std::cout << "DrawImpl" << std::endl; }
	};
