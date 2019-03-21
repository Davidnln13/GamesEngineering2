/*
Peterson's Tie-Breaker algorithm
*/

#include <iostream>
#include <thread>

//petersons2
//bool in1 = false;
//bool in2 = false;
//bool cs1last = false;
//
//void cs1()
//{
//	while (true)
//	{
//		in1 = true;
//		cs1last = true;
//		while (in2 && cs1last)
//		{
//			continue;
//		}
//		std::cout << "Thread for cs1 in critical section" << std::endl;
//		in1 = false;
//	}
//}
//
//void cs2()
//{
//	while (true)
//	{
//		in2 = true; 
//		cs1last = false;
//		while (in1 && !cs1last)
//		{
//			continue;
//		}
//		std::cout << "Thread for cs2 in critical section" << std::endl;
//		in2 = false;
//	}
//}
//petersons 2

//petersons n
const int num = 5;
int in[num];
int last[num];

void CS(int i)
{
	while (true)
	{
		for (int j = 0; j < num-1; j++)
		{
			in[i] = j;
			last[j] = i;
			for (int k = 0; k < num-1; k++)
			{
				//if (i != k)
				//{
					while (k!=i && last[j] == i)
					{
						continue;
					}
				//}
			}
		}
		std::cout << "Critical Section: " << i << std::endl;
		in[i] = 0;
	}
}
//petersons n

int main()
{
	//petersons 2 
	/*std::thread first(cs1);
	std::thread second(cs2);

	first.join();
	second.join();*/
	//petersons 2

	//petersons n
	for (int i = 0; i < num; i++)
	{
		in[i] = 0;
		last[i] = 0;
	}

	std::thread first(CS, 0);
	std::thread second(CS, 1);
	std::thread third(CS, 2);
	std::thread fourth(CS, 3);
	std::thread fifth(CS, 4);

	first.join();
	second.join();
	third.join();
	fourth.join();
	fifth.join();
	//petersons n
}