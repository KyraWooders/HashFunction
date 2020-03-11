#include "HashFunction.h"

namespace HashFunction
{
	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash += data[i];
		}

		return hash;
	}

	//hash function by Brian Kernighan and Dennis Ritchie
	unsigned int bkdrHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	//my custom hash function
	unsigned int kwHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 69) + data[i] * (length + 69) / 7;
		}

		return (hash & 0xFFFFFF);
	}
}