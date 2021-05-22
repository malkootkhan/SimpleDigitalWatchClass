#pragma once
#include <iostream>

using namespace std;

class clock
{
private:
	int hr;
	int mint;
	int sec;
public:
	clock();
	int Seconds();
	int Minutes();
	int Hours(int mnt);
};

