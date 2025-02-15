// lab6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "lab6.h"
using namespace std;

int main()
{
    int a, b;
    int n = 5;
    Array<int> intArray(n);
    intArray.print();
    cout << endl<<"max element: " << intArray.max_el() << endl;
    cout << "suma elements to last +: " << intArray.sum_el() << endl;
    cout << "you need to enter [a, b]"<<endl;
    cin >> a;
    cin >> b;
    intArray.new_a(a,b);
    intArray.print();

    double a2, b2;
    Array<double> doubleArray(n);
    cout << endl;
    doubleArray.print();
    cout << endl << "max element: " << doubleArray.max_el() << endl;
    cout << "suma elements to last +: " << doubleArray.sum_el() << endl;
    cout << "you need to enter [a, b]" << endl;
    cin >> a2;
    cin >> b2;
    doubleArray.new_a(a2, b2);
    doubleArray.print();
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
