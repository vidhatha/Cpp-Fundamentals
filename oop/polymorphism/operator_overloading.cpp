#include <iostream>

using namespace std;

class Account {
	private:
	double balance;

	public:
	explicit Account(double b): balance(b) {}

	Account operator += (double b) {
		balance += b;
		return *this;
	}

	friend Account& operator += (Account &a, Account &b);
	friend ostream& operator << (ostream& os, const Account& a);

};

Account& operator +=(Account &a, Account &b) {
       a.balance += b.balance;
	return a;
}

ostream& operator <<(ostream &os, const Account& a) {
	os << a.balance;
	return os;
}

int main() {
	cout << endl;
	Account acc1(100.0);
	Account acc2(100.0);
	Account acc3(100.0);

	acc1 += 50.0;
	acc2 += acc2;

	acc3.operator +=(50.0);

	cout << "acc1: " <<acc1 << endl;
	cout << "acc2: " << acc2 << endl;

	return 0;
}

