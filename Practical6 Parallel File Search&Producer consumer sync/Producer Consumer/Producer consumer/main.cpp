#include <thread>
#include <iostream>


// p things produced 
//c things consumed
//buf is interaction between them
int buf =0, p = 0, c = 0;

//function forward declerations
void producer(int aArr[], int n);
void consumer(int bArr[], int n);

class Game
{
public:
	void run(int n)
	{
		std::cout << "Hi [" << n << "]" << std::endl;
	}
};

//entry point
int main()
{
	//number of iterations
	int n = 5;
	//2 arrays 
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0,0,0,0,0 };

	//2 threads to run separately 
	//once something is produced it should be consumed
	std::thread pThread = std::thread(producer, a, n);
	std::thread cThread = std::thread(consumer,b, n);
	//let threads finish
	pThread.join();
	cThread.join();
	
	std::cout << "FINISHED" << std::endl;

	system("PAUSE");
	return 0;
}

void producer(int aArr[], int n)
{
	//basically a for loop
	//if we have less things produced than we want
	while (p < n)
	{
		//wait for the number of things produced to be the same as things consumed (in consumer via thread)
		while (p == c)
		{
			//the first thing in our array is produced we make that the buffer later used to produce
			buf = aArr[p];
			std::cout << "Produced: " << buf << std::endl;
			p++;
		}
	}
}
void consumer(int bArr[], int n)
{
	//also basically a for loop
	while (c < n)
	{
		//when we have something produced but not consumed
		while (p > c)
		{
			//we now consume buf which is what was produced earlier and add to our consumed array 
			bArr[c] = buf;
			std::cout << "Consumed: " << buf << std::endl;
			c++;
		}
	}
}
