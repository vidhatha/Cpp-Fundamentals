#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string, int> m{
			{"Dijkstra", 1972}, 
			{"Bellman", 1987}
			};
	m["Ritchie"] = 1983;
	//cout << m["Ritchie"] << endl;
	for(auto p : m) {
		cout << "{ " << p.first << ", " << p.second << " }" << endl;
	}
	return 0;
}

