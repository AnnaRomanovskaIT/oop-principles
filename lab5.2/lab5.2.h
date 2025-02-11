#pragma once
#include <iostream>
using namespace std;
class wheel
{
    int m_radius;
public:
    wheel();
    wheel(int n);
    int getR();
};

class car :public wheel
{
    char* m_mark;
    int m_price;
public:
    car();
    car(char* mark, int price);
    char* getMark();
    int getPrice();
    ~car();
    void print(wheel a);
};
class truck
{
    int m_carrying_capacity;
public:
    truck();
    truck(int n);
    ~truck();
    void print(car a, wheel b);
};
