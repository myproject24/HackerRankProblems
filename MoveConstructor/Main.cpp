#include"Source.h"

using namespace std;

int main() {
	MemoryBlock* ptrMB = new MemoryBlock(10);
	MemoryBlock* ptrMB1(ptrMB);
	MemoryBlock* ptrMB2 = ptrMB;
	MemoryBlock* ptrMB3 = move(ptrMB);

	delete ptrMB;

	getchar();
	return 0;
}