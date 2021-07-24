#include <iostream>
using namespace std;

class Vehicle {
protected:
	string make;
	string color;
	int year;
	string model;

public:
	Vehicle() {
	make = "";
	color = "";
	year = 0;
	model = "";
	}

	Vehicle(string mk, string col, int yr, string mdl) {
	make = mk;
	color = col;
	year = yr;
	model = mdl;
	}

  void print_details(){
      cout << "Manufacturer: " << make << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "Model: " << model << endl;
  }
};

class Cars : public Vehicle {
	string trunk_size;

public:
	Cars() {
		trunk_size = "";
	}

	Cars(string mk, string col, int yr, string mdl, string ts) : Vehicle(mk, col,yr,mdl) {
		trunk_size = ts;
	}

	void car_details() {
		print_details();
		cout << "Trunk size: " <<trunk_size <<endl;
	}
};

class Ships : public Vehicle {
	int no_of_anchors;

	public:
	Ships() {
		no_of_anchors = 0;
	}

	Ships(string mk, string col, int yr, string mdl, int noa) : Vehicle(mk, col, yr, mdl) {
		no_of_anchors = noa;
	}

	void ship_details() {
		print_details();
		cout<< "No of Anchors" << no_of_anchors <<endl;
	}
};


int main() {
	Cars c("ford india", "white", 2021, "EX", "9 cubic feet");
	c.car_details();
	cout<< endl;
	Ships s("Harland and Wolff, Belfast", "Black and whilte",
			            1912, "RMS Titanic", 3);
	s.ship_details();

}
