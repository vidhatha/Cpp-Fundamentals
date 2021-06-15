#include <iostream>

using namespace std;

class Shape {
	public:
	virtual float getArea() = 0;
};

class Rectangle : public Shape {
	float height;
	float width;

	public:
	Rectangle(float ht, float wd) {
		height = ht;
		width = wd;
	}
	
	float getArea() {
		return height * width;
	}
};

class Circle : public Shape {
	float radius;

	public:
	Circle(float rad) {
		radius = rad;
	}

	float getArea() {
		return 3.14 * radius * radius;
	}
};

int main () {
	Rectangle r(2, 6);
	Shape * shape1 = new Shape();
	Shape* s = &r;

	cout << "Calling Rectangle getArea function: " << r.getArea() << endl;
	cout << "Calling Rectangle from Shape pointer: " << s->getArea() << endl<< endl;

	Circle c(5);	

	s = &c;

	cout << "Calling Circle getArea function: " << c.getArea() << endl;
	cout << "Calling Rectangle from Shape pointer: " << s->getArea() << endl;
}
