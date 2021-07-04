#include <iostream>
#include <utility>

using namespace std;

int main() {
	pair<string, int> pair1("pair example: ", 1);	
	pair<string, int> pair2 = make_pair("pair_example: ", 2);

	cout << pair1.first << pair1.second << endl;
	cout << pair2.first << pair2.second << endl;

	return 0;
}
