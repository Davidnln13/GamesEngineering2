#pragma once
#include "Entity.h"
#include <iostream>
#include <string>

class AiSystem
{
	std::vector<Entity> entities;

public:
	void addEntity(Entity e) { entities.push_back(e); }
	void update() {
		std::cout << "AISystem Update" << std::endl;
		std::cout << "AISystem updates " << entities.size() << " entities" << std::endl;
		std::cout << "They Are:" << std::endl;
		int count = 1;
		for (Entity e : entities)
		{
			
			std::cout << "	" << count << "." << e.getName() << std::endl;
			count++;
			std::cout << "	This entities components are: " << std::endl;
			int countC = 1;
			for (Component* c : e.getComponents())
			{
				
				std::cout << "		" << countC << "." << c->getName() <<std::endl;
				countC++;
			}
		}

		std::cout << std::endl << std::endl;
	}
};
