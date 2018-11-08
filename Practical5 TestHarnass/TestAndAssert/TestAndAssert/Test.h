#pragma once
#include <assert.h>
#include <vector>

class Test
{
public:
	Test() {};
	void runTests(std::vector<int> nums);
	void test6Elements(std::vector<int> nums);
	void testIfNumbers(std::vector<int> nums);
	void testNoRange(std::vector<int> nums);
	void testNoRepeated(std::vector<int> nums);
private:

};