/*
Peterson's Tie-Breaker algorithm
*/

#include <iostream>
#include <thread>

bool in1 = false;
bool in2 = false;
bool cs1last = false;

void cs1()
{
	while (true)
	{
		in1 = true;
		cs1last = true;
		while (in2 && cs1last)
		{
			continue;
		}
		std::cout << "Thread for cs1 in critical section" << std::endl;
		in1 = false;
	}
}

void cs2()
{
	while (true)
	{
		in2 = true; 
		cs1last = false;
		while (in1 && !cs1last)
		{
			continue;
		}
		std::cout << "Thread for cs2 in critical section" << std::endl;
		in2 = false;
	}
}

int main()
{
	std::thread first(cs1);
	std::thread second(cs2);

	first.join();
	second.join();


	system("PAUSE");
	return 0;
}