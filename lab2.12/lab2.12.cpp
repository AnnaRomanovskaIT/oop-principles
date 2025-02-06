// lab2.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include < iomanip >
#include "Person_class.h"
using namespace std;

int main()
{
    int n, o, p;
    string na, pr, a;
    cout << "n is "; cin >> n;
    Person* b = new Person[n];
    for (int i = 0; i < n; i++)
    {
        cout << "last name: "; cin >> na;
        cout << "old: "; cin >> o;
        cout << "proffesion: "; cin >> pr;
        cout << "adress: "; cin >> a;
        cout << "phone (8 symbols): "; cin >> p;
        b[i] = { na, pr, a, o, p };
    }
    for (int i = 0; i < n; i++)
    {
        b[i].print();
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
