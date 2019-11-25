#include <iostream>
#include <vector>

using namespace std;

template<typename type>
struct MyAlloc : allocator<type>
{
	type* allocate(size_t size) {
		cout << "Allocation request size: " << size << endl;
		return new type[size];
	}

	void deallocate(type* ptr, size_t size) {
		cout << "Deallocating size: " << size << endl;
		delete[] ptr;
	}
};

int main() {
	vector<int, MyAlloc<int> > v1;
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);

	getchar();

	return 0;

}