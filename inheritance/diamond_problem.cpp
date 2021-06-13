#include <iostream>

using namespace std;

class A {
	protected:
	int id;

	public:
	A() : id(0) {}
};

class B : virtual public A {
	int id_b;

	public:

};

class C : virtual public A {
	int id_c;

	public:
};

class D : public B, public C {
	int id_d;

	public:
	int getId() {
		return id;
	};
};

int main() {
	D d;
	cout << "id " << d.getId();
	return 0;
}
