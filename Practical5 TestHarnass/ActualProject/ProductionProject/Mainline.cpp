#include "Production.h"

int main()
{
	std::vector<int> nums;
	Production p;
	nums = p.input();

	p.checkIfNumbers(nums);
	p.checkIfRepeated(nums);
	p.checkInRange(nums);
	p.checkNoOfElements(nums);

	system("PAUSE");
}