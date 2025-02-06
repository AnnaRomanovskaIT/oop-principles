#include <iostream>
#include <cstdlib>
#include <stdlib.h>  
#include "mod_lab11.h"
using namespace std;

int main()
{
    int n,*a,max,sum,c,b,*d;
    cout << "n: ";
    cin >> n;
    a=create(n);
    print(a, n);
    max = max_el(a, n);
    sum = sum_el(a, n);
    cout <<endl<<"max: " << max;
    cout << endl << "sum: " << sum;
    cout << endl << "enter a: ";
    cin >> c;//1
    cout << "enter b: ";
    cin >> b;//5
    d = new_a(a, n, c, b);
    print(d, n);
}
