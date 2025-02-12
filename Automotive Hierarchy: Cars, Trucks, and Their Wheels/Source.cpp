#include "lab5.2.h"
#include <iostream>
using namespace std;

wheel::wheel() { m_radius = 1; }
wheel::wheel(int n) { m_radius = n; }
int wheel::getR() { return m_radius; }
car::car() :m_mark(0), m_price(0) { };
car::car(char* mark, int price)
{
    m_mark = mark;
    m_price = price;
};
char* car::getMark() { return m_mark; };
int car::getPrice() { return m_price; };
car::~car() {};
void car::print(wheel a)
{
    cout << "it is a car " << m_mark << " with radius of wheel " << a.getR() << " and the prise is " << m_price << endl;
}
truck::truck() { m_carrying_capacity = 1; };
truck::truck(int n) { m_carrying_capacity = n; };
truck::~truck() {};
void truck::print(car a, wheel b)
{
    cout << "it is a truck, mark is " << a.getMark() << endl;
    cout << "radius of wheel is " << b.getR() << endl;
    cout << "number of carrying capacity is " << m_carrying_capacity << endl;
    cout << "price is " << a.getPrice() << endl;
};