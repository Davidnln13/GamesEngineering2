#include "Production.h"

int main()
{
	std::vector<int> nums;
	Production p;
	std::cout << "Console Application" << std::endl << std::endl;

	try 
	{
		nums = p.input();
		p.checkIfNumbers(nums);
		p.checkIfRepeated(nums);
		p.checkInRange(nums);
		p.checkNoOfElements(nums);
	}
	catch(std::string e)
	{
		std::cout << "One of your values was incorrect" << std::endl;
	}

	system("PAUSE");
}