#include <iostream>
#include <sstream>

int main()
{
	auto i = new int(13);
	delete i;
	
	auto j = new int[10];
	delete[] j;
	
	std::cin.ignore();

	return 0;
}
