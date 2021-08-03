//en.cppreference.com/w/cpp/container/list

#include <iostream>
#include <list>
#include <string>

using namespace std;

template<typename T>
ostream& operator<<(ostream& s, const list<T>& v) {
	s.put('[');
	char comma[3] = {'\0', ' ', '\0' };
	for (const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';
}

int main() {
	//comstruction
	list<string> vehicles1{"car", "bike", "truck"};
	cout << "Construction using {}: " << vehicles1 << endl;

	list<string> vehicles2(vehicles1.begin(), vehicles1.end());
	cout << "Construction using range: " << vehicles2 << endl;

	list<string> vehicles3(vehicles1);
	cout << "Construction using (): " << vehicles3 << endl;
	
	//merge two sorted lists
	list<string> vehicles4{"auto", "bus", "jeep"};
	vehicles2.sort();
	vehicles4.sort();
	cout << "List 1 to merge: " << vehicles2 << endl;
	cout << "List 2 to merge: " << vehicles4 << endl;
	vehicles2.merge(vehicles4);
	cout <<"Merged List: " << vehicles2 << endl;

	//splice
	list<int> splicelist1{ 1, 2, 3};
	list<int> splicelist2{-1, -2, -3};
	
	cout << "Splice list1: " << splicelist1 << endl;
	cout << "Splice list2: " << splicelist2 << endl;
	auto it = splicelist1.begin();
	splicelist1.splice(it, splicelist2);

	cout << "Splice list1: " << splicelist1 << endl;
	cout << "Splice list2: " << splicelist2 << endl;
	
	
	return 0;
}
