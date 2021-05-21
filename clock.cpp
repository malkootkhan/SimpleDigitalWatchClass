#include "clock.h"
#include <Windows.h>

clock::clock()
{
	hr = 12;
	mint = 0;
	sec = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 50,12 });
	cout << hr << ":" << mint << ":" << sec;
}

int clock::Seconds()
{
	while (this->sec != 60)
	{
		this->sec++;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {50,12});
		cout << hr << ':' << mint << ':' << sec;
		Sleep(1000);
	}
	sec = 0;
	mint++;
	if (mint == 60)
	{
		mint = 0;
		hr++;
	}
	return 0;
}
int clock::Minutes()
{
	mint++;
	return mint;
}
int clock::Hours(int mnt)
{
	if(mnt == 60)
	hr++;
	return 0;
}
