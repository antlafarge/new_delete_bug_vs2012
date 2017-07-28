#pragma once

#define LIB_API
/*
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport) 
#else
#define LIB_API __declspec(dllimport) 
#endif
*/
class Bidule
{
public:
	LIB_API void* create();
	LIB_API void destroy(void* ptr);
};
