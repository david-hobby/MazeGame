#include <iostream>
#include <windows.h>
#include "Sword.h"

void Sword::Draw()
{
	int var = 06;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(console, (int)m_color);

	std::cout << (char)var;
	SetConsoleTextAttribute(console, (int)ActorColor::Regular);
}