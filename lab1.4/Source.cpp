#include <iostream>
#include <string>
using namespace std;
struct skald {

    string name;
    string type;
    int quantity;
    int cost;
    void input() {
        cout << "name of the product" << endl;
        cin >> name;
        cout << "type of the product" << endl;
        cin >> type;
        cout << "quantity" << endl;
        cin >> quantity;
        cout << "how many cost" << endl;
        cin >> cost;
    }
    void print()
    {
        cout << "=================" << endl;
        cout << "      " << name << endl;
        cout << "  type: " << type << endl;
        cout << "  quantity: " << quantity << endl;
        cout << "  cost: " << cost << endl;
        cout << "=================" << endl;
        cout << endl;
    }
};

void set(skald* shop, int n)
{
    for (int i = 0; i < n; i++)
    {
        shop[i].input();
    }
}

void get(skald* shop, int n)
{
    for (int i = 0; i < n; i++)
    {
        shop[i].print();
    }
}

void sort(skald* shop, int n)
{
    string swap_c;
    int swap_n = 0;
    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < n - k; i++)
        {
            if (shop[i].name > shop[i + 1].name)
            {
                swap_c = shop[i].name;
                shop[i].name = shop[i + 1].name;
                shop[i + 1].name = swap_c;

                swap_c = shop[i].type;
                shop[i].type = shop[i + 1].type;
                shop[i + 1].type = swap_c;

                swap_n = shop[i].quantity;
                shop[i].quantity = shop[i + 1].quantity;
                shop[i + 1].quantity = swap_n;

                swap_n = shop[i].cost;
                shop[i].cost = shop[i + 1].cost;
                shop[i + 1].cost = swap_n;
            }
        }
    }
}

void if_there_is_it(skald* shop, string a, int n)
{
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        if (shop[i].name == a)
        {
            cout << "=================" << endl;
            cout << "      " << shop[i].name << endl;
            cout << "  type: " << shop[i].type << endl;
            cout << "  quantity: " << shop[i].quantity << endl;
            cout << "  cost: " << shop[i].cost << endl;
            cout << "=================" << endl;
            cout << endl;
            v++;
        }
    }
    if (v == 0) { cout << endl << "This product cannot be found"; }
}