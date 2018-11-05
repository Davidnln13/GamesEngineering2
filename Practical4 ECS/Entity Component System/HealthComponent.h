#pragma once
class HealthComponent : public Component
{
public:
	HealthComponent(int hp) : health(hp) {}
	/* Data Only */
	int getHealth() { return health; }
	void setHealth(int health) { this->health = health; }
	std::string getName() { return name; }
private:
	int health;
	std::string name = "Health";
};
