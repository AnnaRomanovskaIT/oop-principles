// lab2.21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h> 
#include <chrono>
#include "lab21.h"
using namespace std;

int main() 
{
    cout << "if you wanna start/end click space\n";
	system("cls");
	Stopwatch a;
	a.start();
	while (true)
	{
		a.show();
		if (GetAsyncKeyState(VK_SPACE) & 0x80000000)
		{
			cout << a.stop() << endl;
			break;
		};
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
