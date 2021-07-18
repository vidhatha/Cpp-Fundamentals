#include <iostream>
#include <memory>
using namespace std;

class SharedPtr: public enable_shared_from_this<SharedPtr> {
	public:
		shared_ptr<SharedPtr> getSharedPtr() {
			return shared_from_this();
		}
};

int main() {
	shared_ptr<SharedPtr> sptr1 = make_shared<SharedPtr>();
	shared_ptr<SharedPtr> sptr2 = sptr1->getSharedPtr();

	{
		shared_ptr<SharedPtr> sptr3(sptr2);
		cout << "SharedPtr reference count: " << sptr1.use_count() << endl;
	}

	cout << "SharedPtr reference count: " << sptr1.use_count() << endl;

	return 0;
}

