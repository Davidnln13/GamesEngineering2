#include <iostream>
#include <assert.h>
#include <vector>
#include "../ProductionProject/Production.h"

int main()
{
	Production p;

	std::vector<int> nums;
	std::cout << "Test Application" << std::endl << std::endl;
	nums = p.input();

	int n = 0;
	for (auto& i : nums)
	{
		n++;
	}
	assert(n == 6);

	for (auto& i : nums)
	{
		assert(i == floor(i));
	}

	for (auto& i : nums)
	{
		assert(i > 0 && i < 47);
	}
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			assert(nums[i] != nums[j]);
		}
	}
	
	system("PAUSE");
}