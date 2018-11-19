#include "Production.h"

int main()
{
	std::vector<int> nums;
	Production p;
	std::cout << "Console Application" << std::endl << std::endl;

	nums = p.input();
	p.checkIfNumbers(nums);
	p.checkIfRepeated(nums);
	p.checkInRange(nums);
	p.checkNoOfElements(nums);

	system("PAUSE");
}