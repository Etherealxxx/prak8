#include <iostream>
#include "..\prak8\header.h"
#include "Windows.h"

int main()
{
	HINSTANCE load;
	load = LoadLibrary(L"Dynamic.dll");
	typedef int (*sum) (int, int);
	sum Sum;
	Sum = (sum)GetProcAddress(load, "Sum");
	std::cout << (2, 5);
	FreeLibrary(load);
}
