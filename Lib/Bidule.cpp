#include "stdafx.h"
#include "Bidule.h"

void* Bidule::create()
{
	auto ptr = new long long int(16);
	return ptr;
}

void Bidule::destroy(void* ptr)
{
	delete ptr;
}
