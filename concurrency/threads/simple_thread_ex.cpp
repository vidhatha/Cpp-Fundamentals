#include <iostream>
#include <thread>

using namespace std;

void HelloWorldFunc() {
	cout << "Hello World from a function. " <<endl;
}

class HelloWorld {
	public:
	void operator()() {
		cout << "Hello world from a class object" << endl;
	}
};

int main() {
	thread t1(HelloWorldFunc);

	HelloWorld helloWorldObj;
	thread t2(helloWorldObj);

	thread t3([]{cout<< "Hello world from a lambda" << endl; });

	t1.join();
	t2.join();
	t3.join();

	return 0;
}
