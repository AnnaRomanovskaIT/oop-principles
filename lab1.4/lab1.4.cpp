#include <iostream>
#include "mod_lab14.h"
using namespace std;


int main()
{
    int n, a;
    string name_prod;
    cout << "n is ";
    cin >> n;
    skald* shop = new skald[n];
    set(shop, n);
    cout << "  sorting... " << endl;
    sort(shop, n);
    get(shop, n);
    cout << "please, enter name of product" << endl;
    cin >> name_prod;
    if_there_is_it(shop, name_prod, n);
}
