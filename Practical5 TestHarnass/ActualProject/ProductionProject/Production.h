#pragma once
#include <vector>
#include <iostream>
#include <limits>

class Production
{
public:
	Production();
	std::vector<int> input();
	void checkIfNumbers(std::vector<int> nums);
	void checkIfRepeated(std::vector<int> nums);
	void checkInRange(std::vector<int> nums);
	void checkNoOfElements(std::vector<int> nums);
};