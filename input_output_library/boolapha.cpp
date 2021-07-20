/*
 * http://www.cplusplus.com/reference/ios/boolalpha/
 * Sets the boolalpha format flag for the str stream.
 *
 * When the boolalpha format flag is set, bool values are inserted/extracted by their textual representation: either true or false, instead of integral values.
 *
 * This flag can be unset with the noboolalpha manipulator.
 * */
#include <iostream>
#include <locale>

using namespace std;
int main() {

	cout << std::boolalpha << "boolapha true: " << true << endl;
       	bool f = false;
	cout << "boolapha false: " << f << endl;

	cout << std::noboolalpha << "noboolapha true: " << true << endl;
	cout << "noboolapha false: " <<	f << endl;
}


