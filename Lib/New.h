#pragma once

#include <iostream>
#include <cstdlib>

inline void* operator new(size_t s)
{
	auto ptr = _malloc_dbg(s, _NORMAL_BLOCK, NULL, NULL);
	std::cout << "new " << (uintptr_t)ptr << " (" << s << " bytes )" << std::endl;
	return ptr;
}

inline void operator delete(void* ptr)
{
	std::cout << "delete " << (uintptr_t)ptr << std::endl;
	_free_dbg(ptr, _NORMAL_BLOCK);
}

inline void* operator new[](size_t s)
{
	auto ptr = _malloc_dbg(s, _NORMAL_BLOCK, NULL, NULL);
	std::cout << "new " << (uintptr_t)ptr << " (" << s << " bytes )" << std::endl;
	return ptr;
}

inline void operator delete[](void* ptr)
{
	std::cout << "delete " << (uintptr_t)ptr << std::endl;
	_free_dbg(ptr, _NORMAL_BLOCK);
}
