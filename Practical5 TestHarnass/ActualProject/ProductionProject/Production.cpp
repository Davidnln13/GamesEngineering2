#include "Production.h"

Production::Production()
{
}

std::vector<int> Production::input()
{
	std::vector<int> nums;
	bool end = false;
	
	std::cout << "Please enter 6 different numbers between 1 and 46 after each number press enter. Enter 0 to exit" << std::endl << std::endl;
	for (int i = 0; i < 6; i++)
	{
		int input;

		if (!(std::cin >> input))
		{
			std::cout << "Bad value, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			nums.clear();
			i = -1;
		}
		else
		{
			nums.push_back(input);
		}
		if (input == 0)
		{
			end = true;
		}
	}
	return nums;
}
void Production::checkNoOfElements(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		n++;
	}
	if (!n == 6)
	{
		std::cout << "Wrong number of elements" << std::endl;
	}
}
void Production::checkIfNumbers(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		if (i == floor(i))
		{
			n++;
		}
	}
	if (!n == 6)
	{
		std::cout << "Some elements are not numbers" << std::endl;
	}
}
void Production::checkInRange(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		if (i > 0 && i < 47)
		{
			n++;
		}
	}
	if (!n == 6)
	{
		std::cout << "Some elements not in range" << std::endl;
	}
}
void Production::checkIfRepeated(std::vector<int> nums)
{
	int n = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (nums[i] != nums[j])
			{
				n++;
			}
		}
	}
	if (!n == 15)
	{
		std::cout << "Some elements repeated" << std::endl;
	}
}