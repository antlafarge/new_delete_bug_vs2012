#include "stdafx.h"
#include "Machin.h"
#include "Bidule.h"

void Machin::test(void)
{
	auto c = new Bidule();
	auto j = c->create();
	delete j;
	delete c;
}
