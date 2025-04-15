// C++ program to illustrate the race conditions 
#include <iostream>
#include <thread>

using namespace std;

// Shared resource
int number = 0;
// import mutex from C++ standard library
#include <mutex>

// Create object for mutex
mutex mtx;
// function to increment the number

void increment(int num){
	
	// increment number by 1 for 1000000 times
	for(int i=0; i<100; i++)
	{
		 mtx.lock();
		cout<<"Thread no : "<<num<<" == "<<number++<<endl;
		 mtx.unlock();
	}
}


int main()
{
	// Create thread t1 to perform increment()
	thread t1(increment,1);
	
	// Create thread t2 to perform increment()
	thread t2(increment,2);
	
	// Start both threads simultaneously
	t1.join();
	t2.join();
	
	// Print the number after the execution of both threads
	cout << "Number after execution of t1 and t2 is " << number;
	
	return 0;
}   