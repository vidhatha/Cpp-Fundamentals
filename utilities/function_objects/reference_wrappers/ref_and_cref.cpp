#include <iostream>
#include <functional>
#include <thread>

using namespace std;

void thread_func1(int& i) {
	cout << "Invoked thread function with parameter: " << i << endl;
}

void thread_func2(const string& str1) {
	cout << "Invoked thread function with parameter: " << str1 << endl;
}

int main() {
	int i = 0;
	thread t1(thread_func1, std::ref(i));
	
	string str1 = "Hello1!";
	thread t2(thread_func2, std::cref(str1));

	t1.join();
	t2.join();

	return 0;
}

