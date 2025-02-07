#pragma once
#include <iostream>
#include <iomanip>  // For formatting output
using namespace std;

class Person
{
private:
    string m_lastName, m_profession, m_address, m_phone;
    int m_age;

public:
    Person();  
    Person(string lastName, string profession, string address, int age, string phone);

    void setAll(string lastName, string profession, string address, int age, string phone);

    void print() const;
};
