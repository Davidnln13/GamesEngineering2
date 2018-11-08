#include "Test.h"
#include <iostream>


void Test::runTests(std::vector<int> nums)
{
	test6Elements(nums);
	testIfNumbers(nums);
	testNoRange(nums);
	testNoRepeated(nums);
	std::cout << "All numbers Valid" << std::endl;
}

void Test::test6Elements(std::vector<int> nums)
{
	int n = 0;
	for (auto& i : nums)
	{
		n++;
	}
	assert(n == 6);
}

void Test::testIfNumbers(std::vector<int> nums)
{
	for (auto& i : nums)
	{
		assert(i == floor(i));
	}
}

void Test::testNoRange(std::vector<int> nums)
{
	for (auto& i : nums)
	{
		assert(i > 0 && i < 47);
	}
}

void Test::testNoRepeated(std::vector<int> nums)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			assert(nums[i] != nums[j]);
		}
	}
}
