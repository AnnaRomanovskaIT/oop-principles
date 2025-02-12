#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
    string m_name;
    double m_weight;
    int m_energy, m_bilok, m_jyry, m_wuglewody;
public:
    Product();
    Product(string name, double weight, int energy, int bilok, int jyry, int wuglewody);
    void setAll(string name, double weight, int energy, int bilok, int jyry, int wuglewody);
    void print();
    double energy_summar(Product* a, int n);
};