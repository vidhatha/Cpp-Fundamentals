// https://en.cppreference.com/w/cpp/container/deque

#include <iostream>
#include <deque>

using namespace std;

template<typename T>
ostream& operator<<(ostream& s, const deque<T>& v) {
	s.put('[');
	char comma[3] = {'\0', ' ', '\0'};
	for (const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';
}

int main() {
	//construction
	deque<string> pets1{"cat", "dog", "fish"};
	cout << "pets1: " << pets1 << endl;
	
	deque<string> pets2(pets1.begin(), pets1.end());
	cout << "pets2: " << pets2 << endl;
	
	deque<string> pets3(pets1);
	cout << "pets3: " << pets3 << endl;
	
	//= assignemnt operator
	deque<string> pets4;
	pets4 = pets1;
	cout << "pets4: " << pets4 << endl;

	/* assign
	 * Replaces the contents with count copies of value value
	 * Replaces the contents with copies of those in the range [first, last)
	 * Replaces the contents with the elements from the initializer list ilist.
	 */
	deque<string> defaultpets;
	defaultpets.assign(5, "dog");
	cout << "default pets: " << defaultpets << endl;
	
	deque<string> pets5;
	pets5.assign(defaultpets.begin(), defaultpets.end());
	cout << "pets5: " << pets5 << endl;

	deque<string> pets6;
	pets6.assign({"cat", "cat" });
	cout << "pets6: " << pets6 << endl;
	
	//at
	// read element at pos 0
	try {
		cout<< "Element at position 0: " << pets1.at(0) << endl;
	}
	catch (out_of_range const& ex) {
		cout << ex.what() << endl;
	}
	
	//set element at position 0
	pets2.at(0) = "kitten";
	cout << "Updated pets2 list using at: " << pets2 << endl;
        
 	//[] operator
	// Unlike std::map::operator[], this operator never inserts a new element into the container.
	pets2[1] = "puppy"; 
	cout << "Updated pets2 list using []: " << pets2 << endl;	

	//front
	cout << "First item using front(): " << pets1.front() << endl;
	
	//back
	cout << "Last element using back(): " << pets1.back() << endl;

	//push_back
	pets1.push_back("chick");
	cout << "Added new element at end: " << pets1 << endl;

	//pop_back
	pets1.pop_back();
	cout << "Removed element at end: " << pets1 << endl;

	//push_front
	pets1.push_front("puppy");
	cout << "Added new element at front: " << pets1 << endl;

	//pop_front
	pets1.pop_front();
	cout << "Removed element at front: " << pets1 << endl;
	return 0;
}

