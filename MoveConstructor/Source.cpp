#include "Source.h"

using namespace std;

MemoryBlock::MemoryBlock(size_t len)
	:length(len), data(new int[len]) {
	cout << "In memory block len: " << length << endl;
}

MemoryBlock::MemoryBlock(const MemoryBlock& other)
	: length(other.length), data(new int[other.length]) {
	copy(other.data, other.data + length, data);
}

MemoryBlock& MemoryBlock::operator = (const MemoryBlock& other) {
	if (this != &other) {
		delete[] data;
		length = other.length;
		data = new int[length];
		copy(other.data, other.data + length, data);
	}

	return *this;
}

MemoryBlock::MemoryBlock(MemoryBlock&& other)
	: length(0), data(nullptr) {
	length = other.length;
	data = other.data;
	other.data = nullptr;
	other.length = 0;
}

MemoryBlock& MemoryBlock::operator=(MemoryBlock&& other) {
	if (this != &other) {
		delete[] data;
		length = other.length;
		data = other.data;
		other.length = 0;
		other.data = nullptr;
	}
	return *this;
}

MemoryBlock::~MemoryBlock() {
	delete[] data;
	data = nullptr;
}