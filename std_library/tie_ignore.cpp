#include <iostream>
#include <tuple>
#include <set>

using namespace std;

int main() {
	set<string> set_of_strings;
	bool inserted = false;
	tie(std::ignore, inserted) = set_of_strings.insert("Test");
	if(inserted) {
		cout << "Value of inserted successfully" << endl;
	}
}

