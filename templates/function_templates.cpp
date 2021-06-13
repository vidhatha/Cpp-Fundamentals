#include <iostream>

using namespace std;

template <typename T>
void custom_swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <int N>
int multiply(int n) {
	return N * n;
}

int main() {
	int a = 10;
	int b = 20;
	cout<< a <<" " <<b << endl;
	custom_swap<int>(a,b);
	cout<< a << " " << b << endl;
	int m = multiply<5>(4);
	cout << "Multiply: " << m <<endl;
	return 0;
}
