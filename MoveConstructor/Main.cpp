#include"Source.h"

using namespace std;

int main() {
	MemoryBlock obj(10);
	MemoryBlock obj1(obj);
	obj = obj1;

	MemoryBlock obj2(std::move(obj));
	obj1 = obj2;

	getchar();
	return 0;
}