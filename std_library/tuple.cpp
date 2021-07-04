#include <iostream>
#include <tuple>

using namespace std;

int main() {
	tuple<int, double, const char*> tup1(1, 0.1, "Tuple1");
	tuple<int, double, const char*> tup2 = make_tuple(2, 0.2, "Tuple2");

	cout << get<0>(tup1) << " " << get<1>(tup1) << " " << get<2>(tup1) << endl;
	cout << get<0>(tup2) << " " << get<1>(tup2) << " " << get<2>(tup2) << endl;
	
	get<2>(tup1) = "Tuple1.1";
	cout << get<0>(tup1) << " " << get<1>(tup1) << " " << get<2>(tup1) << endl;

	return 0;	
}
