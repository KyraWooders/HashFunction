#pragma once
#include <functional>

namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);

	//hash function by Brian Kernighan and Dennis Ritchie
	unsigned int bkdrHash(const char* data, unsigned int length);

	//my hash function
	unsigned int kwHash(const char* data, unsigned int length);

	//a helper to access a default 
	static HashFunc defaulHash = kwHash;
};

