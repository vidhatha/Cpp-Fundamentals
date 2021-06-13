#include <iostream>

using namespace std;

class Employee {
	protected:
		string name;
		int id;
		int reportsTo;
	public:
              Employee(string name, int id, int boss) : name(name), id(id), reportsTo(boss) {}

	      string getName() {
		return name;
		}
		
		int getId() {
		return id;
		}

		int getBoss() {
		return  reportsTo;
		}
		
		void display() {
		   cout << id << " " << name << " reports to " << reportsTo << endl;
		}

		void display(string salutation) {
			cout << salutation << " ";
			display();
		}
};

class Manager : public Employee {
	protected:
		string teamName;
	public:
		Manager(string name, int id, int boss, string teamName) : Employee(name, id, boss), teamName(teamName) {}

		void display() {
			Employee::display();
			cout << " Heads the team " << teamName << endl;
		}
};

int main() {
	Employee worker("Vidhatha", 10, 2);
	Manager ceo("Mehdi", 0, 0, "Sales");
	Manager cto("Drit", 2, 0, "Engineering");
	worker.display("Mr");
	ceo.display();
	cto.display();

	return 0;
}

