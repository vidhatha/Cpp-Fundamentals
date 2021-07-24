#include <iostream>

using namespace std;

class Vehicle {
	protected:
	string make;
	string color;

	public:
	Vehicle() {
		make = "";
		color = "";
	}

	Vehicle(string mk, string col) : make(mk), color(col) {}

	void print_details() {
		cout << "Make " << make << endl;
		cout << "Color " << color << endl;
	}
};

class Car : public Vehicle {
	string brand;

	public:
	Car() = default;

	Car(string mk, string col, string br) : Vehicle(mk, col) {
		brand = br;
	}
	
	void car_details() {
		cout << "Brand " << brand << endl;
	}
};

class Audi : public Car {
	int topSpeed;

	public:
	Audi() = default;

	Audi(string mk, string col, string br, int ts) : Car(mk, col, br), topSpeed(ts) {}

	void audi_details() {
		print_details();
		car_details();
		cout << "Top Speed " <<topSpeed << endl;
	}
};

int main() {
	Audi a("A3", "white",  "Audi", 250);
	a.audi_details();
	return 0;
};



