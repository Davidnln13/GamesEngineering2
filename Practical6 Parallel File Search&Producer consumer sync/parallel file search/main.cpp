#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::string line1, line2;
	std::ifstream myFile("text.txt");
	if (myFile.is_open())
	{
		while (std::getline(myFile, line1))
		{
			
		}
		myFile.close();
	}

	
	return 0;

}