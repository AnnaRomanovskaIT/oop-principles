#pragma once
struct storage {

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
void set(storage* shop, int n);
void get(storage* shop, int n);
void sort(storage* shop, int n);
void if_there_is_it(storage* shop, string a, int n);
