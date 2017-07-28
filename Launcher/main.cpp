#include <iostream>
#include "Bidule.h"
#include <sstream>

int main()
{
	//auto i = new int(13);
	//delete i;
	
	auto j = new int[10];
	delete[] j;
	
	/*
	auto c = new Bidule();
	auto h = c->create();
	//delete h;
	c->destroy(h);
	delete c;
	*/

	std::cin.ignore();

	return 0;
}
