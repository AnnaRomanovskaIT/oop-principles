// lab5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits> 
#include "lab5.1.h"
using namespace std;

int main()
{
    int bx, by, cx, cy;
    try
    {
        cout << "enter b[x,y]" << endl;
        cin >> bx;
        cin >> by;
        cout << "enter c[x,y]" << endl;
        cin >> cx;
        cin >> cy;
        if (!std::cin)
        {
            throw - 1;
            cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    catch (int)
    {
        cout << "expection value is int" << endl;
    }
    spot a, b(bx, by), c(cx, cy);
    cout << "A";
    a.print();
    cout << "B";
    b.print();
    cout << "C";
    c.print();
    circle ab(a, b);
    ab.printAC();
    ellipse abc(a, b, c);
    abc.printAE();

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
