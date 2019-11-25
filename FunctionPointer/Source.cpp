#include <iostream>

using namespace std;

void(*funPtr)(int);

int* (*funPtr1)(int*);

int* fun2(int* p) {
	cout << "Pointer function called" << endl;
	int* p2 = nullptr;
	return p2;
}

void fun(int i) {
	cout << "i: " << i << endl;
}

int main() {
	funPtr = &fun;
	funPtr1 = &fun2;
	funPtr(10);
	int* p1 = nullptr;
	int* p2 = (*funPtr1)(p1);

	getchar();

	return 0;
}