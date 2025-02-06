#include <iostream>
using namespace std;

struct storage {

    string name;
    string type;
    int quantity;
    double cost;
    void input() {
        cout << "name of the product" << endl;
        cin >> name;
        cout << "type of the product" << endl;
        cin >> type;
        cout << "how many quantity" << endl;
        cin >> quantity;
        cout << "how many cost" << endl;
        cin >> cost;
    }
    void print()
    {
        cout << "  " << name << endl;
        cout << "type: " << type << endl;
        cout << "quantity: " << quantity << endl;
        cout << "cost: " << cost << endl;
    }
};

void set_get(storage* shop, int n)
{
    for (int i = 0; i < n; i++)
    {
        shop[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        shop[i].print();
    }
}

void sort(storage* shop, int n)
{
    storage temp;  // Temporary variable to hold values during swap
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (shop[i].name < shop[j].name)
            {
                // Swap using temp
                temp = shop[i];
                shop[i] = shop[j];
                shop[j] = temp;
            }
        }
    }
}



int main()
{
    int n, a;
    cout << "n is ";
    cin >> n;
    storage* shop = new storage[n];
    set_get(shop, n);
    cout << "wanna sort it? (0 - no, 1 - yes) " << endl;
    cin >> a;
    if (a == 1)
    {
        sort(shop, n);
    }
    set_get(shop, n);
}
