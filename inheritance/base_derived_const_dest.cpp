#include <iostream>

using namespace std;

class Base {
	int num;

	public:
	Base() {
		cout << "base class default constructor" << endl;
	}

	Base(int n) {
		cout << "base class parameterized constructor" << endl;
	}

	~Base() {
		cout << "base class destructor" << endl;
	}
};

class Derived : public Base {
	int dnum;
	
	public:
	Derived() {
		cout << "derived class default constructor" << endl;
	}

	Derived(int n) : Base(n) {
		cout << "derived class parameterized constructor" << endl;
	}

	~Derived() {
		cout << "Derived class destructor" << endl;
	}
};

int main() {
	Base b;
	cout << endl;
	Base b1(10);
	cout << endl;
	Derived d;
	cout << endl;
	Derived d1(20);
	cout << endl;
}

