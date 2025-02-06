#pragma once
#include <iostream>
using namespace std;

class Person
{
    string m_nazwisko, m_proffesion, m_adress;
    int m_old, m_phone;
public:
    Person() {};
    Person(string nazwisko, string proffesion, string adress, int old, int phone);
    void setAll(string nazwisko, string proffesion, string adress, int old, int phone);
    void print();
};