#include <iostream>
#include "mod_lab12.h"
using namespace std;


int main()
{
    int n,**arr,*t,*ds;
    cout << "n: ";
    cin >> n;
    arr = make(n);
    print(arr, n);
    t = sum(arr, n);
    print_sum(t, n);
    cout << "min suma modul diagonal: " << diagonals(arr, n);
}
