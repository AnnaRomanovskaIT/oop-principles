// lab2.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "mod_lab21.h"
using namespace std;

int main()
{
    int n, energy, bilok, jyry, wuglewody;
    string name;
    double weight;
    cout << "how are many products you eat? "; cin >> n;
    Product* a = new Product[n];
    for (int i = 0; i < n; i++)
    {
        cout << "name: "; cin >> name;
        cout << "weight: "; cin >> weight;
        cout << "kallory: "; cin >> energy;
        cout << "bilok: "; cin >> bilok;
        cout << "jyry: "; cin >> jyry;
        cout << "wuglewody: "; cin >> wuglewody;
        a[i] = { name, weight, energy, bilok, jyry, wuglewody };
    }
    for (int i = 0; i < n; i++) {a[i].print(); }
    cout <<"sum of callory " << a->energy_summar(a, n);
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
