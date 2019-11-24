#pragma once
#include <iostream>

class MemoryBlock {
public:
	explicit MemoryBlock(size_t len);
	~MemoryBlock();
	MemoryBlock(const MemoryBlock&);
	MemoryBlock& operator = (const MemoryBlock& other);
	MemoryBlock(MemoryBlock&&);
	MemoryBlock& operator = (MemoryBlock&& other);

private:
	size_t length;
	int* data;
};
