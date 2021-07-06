#include <iostream>
#include <memory>

using namespace std;

class SmartPtr {
	int num;

	public:
	SmartPtr(int n) : num(n) {}
       ~SmartPtr() {
       cout << "Destructor called with private member " << num << endl;
       }
};

int main() {
	unique_ptr<SmartPtr> uptr1{new SmartPtr(1)};
	cout << "Unique Ptr1 address" << uptr1.get() << endl;

	unique_ptr<SmartPtr> uptr2 = make_unique<SmartPtr>(2);
	cout << "Unique Ptr2 address" << uptr2.get() << endl;
        
	{
	unique_ptr<SmartPtr> uptr3 = make_unique<SmartPtr>(3);
	cout << "Unique Ptr3 address " << uptr3.get() << endl;
	}

	cout << "Last statement..." << endl;
	return 0;
}


