#pragma once
#include <iostream>
using namespace std;
template <class T>
class Array
{
    int n;
    T* a;
public:
    Array();

    Array(int size);
    void print();
    T max_el();
    T sum_el();
    void new_a(T c, T d);
};
