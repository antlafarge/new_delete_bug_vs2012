#include "stdafx.h"
#include <iostream>
#include "Machin.h"
#include <sstream>

int main()
{
	/*
	auto i = new int(13);
	delete i;
	*/
	auto j = new int[12];
	delete[] j;
	/*
	auto m = new Machin();
	m->test();
	delete m;

	std::stringstream ss;
	ss << 13;
	ss << 37;
	std::string str = ss.str();
	*/
	std::cin.ignore();

	return 0;
}
