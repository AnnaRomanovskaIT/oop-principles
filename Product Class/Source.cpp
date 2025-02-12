#include "mod_lab21.h"

Product::Product() : m_name("name"), m_weight(0), m_energy(0), m_bilok(0), m_jyry(0), m_wuglewody(0) {};
Product::Product(string name, double weight, int energy, int bilok, int jyry, int wuglewody) 
{ setAll(name, weight, energy, bilok, jyry, wuglewody); };
void Product::setAll(string name, double weight, int energy, int bilok, int jyry, int wuglewody)
{ m_name = name; m_weight = weight; m_energy = energy; m_bilok = bilok; m_jyry = jyry; m_wuglewody = wuglewody; };
void Product::print()
{
    cout << "name of product: " << m_name << endl;
    cout << "weight: " << m_weight << endl;
    cout << "kalory: " << m_energy << endl;
    cout << "bilok (/100g): " << m_bilok << endl;
    cout << "jyry (/100g): " << m_jyry << endl;
    cout << "wuglewody (/100g): " << m_wuglewody << endl;
};
double Product::energy_summar(Product* a, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i].m_energy;
    }
    return sum;
};
