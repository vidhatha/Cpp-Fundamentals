#include <iostream>
#include <vector>
using namespace std;

int main() {
	//Initialization
	vector<int> vec0;
	vector<int> vec1{1,2,3,4,5};
	vector<int> vec2= {1,2,3,4,5};
	
	//using auto to generate one line vector element o/p
	for (auto v: vec1) cout << v << " ";
	cout << endl;

	//Copy constructor
	vector<int> vec3(vec2);
	vector<int> vec4= vec2;

	//Move constructor
	vector<int> vec5(std::move(vec1));
	vector<int> vec6= std::move(vec2);

	//.emoty()
	cout << "Is vector1 empty? " << std::boolalpha << vec1.empty() << endl;
	
	cout << "vector3 elements before clear: " << vec3.size() << endl;
	//Delete all elements
	vec3.clear();

	//size()
	cout << "vector3 elements after clear: " << vec3.size() << endl;
	
	//Iterate over an vector forward
	for ( auto it = vec4.begin(); it != vec4.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	//Iterate over an vector backward
	for ( auto rit = vec4.rbegin(); rit != vec4.rend(); ++rit) {
	       cout << *rit << " ";
	}	       
	cout << endl;

	return 0;
}

