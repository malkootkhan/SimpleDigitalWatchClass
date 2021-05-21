#pragma once
#include <iostream>
#include "clock.h"

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

