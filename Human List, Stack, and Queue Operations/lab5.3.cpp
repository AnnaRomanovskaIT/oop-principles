// lab5.3(2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
#include "lab5.3.h"
int main()
{
    string name = "Lesya", last_name = "Ukrainka", name2 = "Stephan", last_name2 = "Bandera", name3 = "Vyacheslav", last_name3 = "Chornovil", name4 = "Taras", last_name4 = "Shevchenko", name5 = "Ivan", last_name5 = "Franko";
    int age = 48, age2 = 63, age3 = 50, age4 = 52, age5 = 37;
    List Ukrainka(name, last_name, age), Bandera(name2, last_name2, age2), Chornovil(name3, last_name3, age3), Shevchenko(name4, last_name4, age4), Franko(name5, last_name5, age5);
    Steck a;
    Line b;
    string n, l;
    int ag;
    bool answer;
    a.Steck_push_back(Ukrainka);
    a.Steck_push_back(Bandera);
    a.Steck_push_back(Chornovil);
    a.Steck_push_back(Shevchenko);
    a.Steck_push_back(Franko);
    cout << "                 in steck" << endl;
    a.print();
    cout << "                 delete the last person? (1 - yes, 0 - no)" << endl;
    cin >> answer;
    if (answer)
    {
        a.Steck_pop_back();
        a.print();
    }
    cout << "                 in line now" << endl;
    b.addToLine(Bandera);
    b.Show();
    cout << "                 wanna add all that been in steck? (1 - yes, 0 - no)" << endl;
    cin >> answer;
    if (answer)
    {
        b.addToLine(Ukrainka);
        b.addToLine(Chornovil);
        b.addToLine(Shevchenko);
        b.addToLine(Franko);
        b.Show();
    }
    cout << "                 wanna swap something? (1 - yes, 0 - no)" << endl;
    cin >> answer;
    int p, m;
    if (answer)
    {
        cin >> p;
        cin >> m;
        b.swapEl(p, m);
        b.Show();
    }
    cout << "                 wanna see all people in steck younger than n? (1 - yes, 0 - no)" << endl;
    cin >> answer;
    int N;
    if (answer)
    {
        cin >> N;
        a.print(N);
    }
    cout << "                 wanna see all people in line younger than n? (1 - yes, 0 - no)" << endl;
    cin >> answer;
    int N1;
    if (answer)
    {
        cin >> N1;
        a.print(N1);
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
