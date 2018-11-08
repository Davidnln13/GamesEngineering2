#include <vector>
#include <iostream>
#include <limits>

void checkIfNumbers(std::vector<int> nums);
void checkIfRepeated(std::vector<int> nums);
void checkInRange(std::vector<int> nums);
void checkNoOfElements(std::vector<int> nums);


int allPassed = 0;

int main()
{
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
		checkNoOfElements(nums);
		checkIfNumbers(nums);
		checkInRange(nums);
		checkIfRepeated(nums);

		if (allPassed == 4)
		{
			std::cout << "all Numbers valid" << std::endl;
		}
		else
		{
			std::cout << "numbers not valid" << std::endl;
		}
		allPassed = 0;
		system("PAUSE");
	}
}
void checkNoOfElements(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		n++;
	}
	if (n == 6)
	{
		allPassed++;
	}
}
void checkIfNumbers(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		if (i == floor(i))
		{
			n++;
		}
	}
	if (n == 6)
	{
		allPassed++;
	}
}
void checkInRange(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		if (i > 0 && i < 47)
		{
			n++;
		}
	}
	if (n == 6)
	{
		allPassed++;
	}
}
void checkIfRepeated(std::vector<int> nums)
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
	if (n == 15)
	{
		allPassed++;
	}
}