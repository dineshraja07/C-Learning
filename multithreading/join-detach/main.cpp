#include <iostream>
#include <thread>
#include<chrono>
using namespace std;
void printNumbers() {
	for (int i = 0; i < 5; ++i) {
		cout << "Number: " << i << endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}

int main() {
	cout<<"main ()"<<endl;
	std::thread t(printNumbers);
	std::this_thread::sleep_for(std::chrono::seconds(6));
	cout<<"Thread completed";
	t.detach();   // detach() make the thread independent from the parent thread 
	//( here it is main) ,even run after parent thread goes out of scope
	cout<<"THread completed";
	return 0;
}