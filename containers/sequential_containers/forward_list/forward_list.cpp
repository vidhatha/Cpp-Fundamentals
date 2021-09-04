#include <iostream>
#include <forward_list>

using namespace std;

//https://en.cppreference.com/w/cpp/container/forward_list

template<typename T>
ostream& operator<<(ostream& s, const forward_list<T>& v) {
	s.put('[');
	char comma[3] = {'\0', ' ', '\0'};
	for(const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';
}

int main() {
	//Initialization
	forward_list<string> countries{"india", "usa", "russia", "china"};
	// c2 == countries
	forward_list<string> c2(countries.begin(), countries.end());
	// c3 == c2
	forward_list<string> c3(c2);
	cout << "countries: " << c3 << endl;
	return 0;
}
