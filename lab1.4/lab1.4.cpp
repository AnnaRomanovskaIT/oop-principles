#include <iostream>
using namespace std;

struct skald {

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

void set_get(skald* shop, int n)
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

void sort(skald* shop, int n)
{
    string swap_c;
    int swap_n = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (shop[i].name < shop[i + 1].name)
        {
            shop[i].name= swap_c;
            shop[i].name = shop[i + 1].name;
            shop[i + 1].name = swap_c;

            shop[i].type = swap_c;
            shop[i].type = shop[i + 1].type;
            shop[i + 1].type = swap_c;

            shop[i].quantity = swap_n;
            shop[i].quantity = shop[i + 1].quantity;
            shop[i + 1].quantity = swap_n;

            shop[i].cost = swap_n;
            shop[i].cost = shop[i + 1].cost;
            shop[i + 1].cost = swap_n;
        }
    }
}


int main()
{
    int n, a;
    cout << "n is ";
    cin >> n;
    skald* shop = new skald[n];
    set_get(shop, n);
    cout << "wanna sort it? (0 - no, 1 - yes) " << endl;
    cin >> a;
    if (a == 1)
    {
        sort(shop, n);
    }
    set_get(shop, n);
}
