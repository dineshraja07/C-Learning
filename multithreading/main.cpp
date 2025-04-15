#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
void printOdd()
{
	for(long long i=0;i<100;i++)
	{
		cout<<"Odd : "<<i<<endl;
	}
}
void printEven()
{
	 for(long long i=0;i<100;i++)
	 {
	 	cout<<"Even :"<<i<<endl;
	 }
}
int main()
{
	auto start = chrono::high_resolution_clock::now();
	thread t1(printEven);
	thread t2(printOdd);
	t1.join();
	t2.join();
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = end - start;
	cout << "Elapsed time: " << elapsed.count() << " seconds" << endl;
	
}