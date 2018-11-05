#pragma once
#include <vector>
#include "Component.h"

class Entity
{
	int id;
public:
	Entity(std::string s) : name(s) {};
	std::string getName() { return name; }
	void addComponent(Component* c) { components.push_back(c); }
	void removeComponent(Component* c) { /* TBI */ }
	std::vector<Component*> getComponents() { return components; }
private:
	std::vector<Component*> components;
	std::string name;
};
