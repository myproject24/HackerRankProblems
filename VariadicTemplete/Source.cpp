#include <iostream>

using namespace std;

// To handle base case of below recursive 
// Variadic function Template
void print() {
	cout << "I am empty fnction and "
		"I am called at last.\n";
}

// Variadic function Template that takes  
// variable number of arguments and prints 
// all of them.
template<typename T, typename ...types>
void print(T var1, types ... var2) {
	cout << var1 << endl;
	print(var2...);
}

int main() {
	print(1, 2, 3.14, "pass me any",
		"number of arguments",
		"i will print.\n");

	getchar();

	return 0;
}