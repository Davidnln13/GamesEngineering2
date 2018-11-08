#include <vector>
#include <iostream>
#include <limits>
#include "Test.h"

int main()
{
	Test test;
	std::vector<int> nums;
	bool end = false;

	while (end == false)
	{
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
		test.runTests(nums);
		system("PAUSE");
	}
}
