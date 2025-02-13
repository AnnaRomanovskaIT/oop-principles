#include <iostream>
#include <vector>
#include "lab5.3.h"
using namespace std;
void swap(human& a, human& b)
{
    using std::swap;
    swap(a.m_name, b.m_name);
    swap(a.m_last_name, b.m_last_name);
    swap(a.m_age, b.m_age);
};
List::List()
    {
        a = {};
    };
List::List(string name, string last_name, int age)
    {
        a.m_name = name;
        a.m_last_name = last_name;
        a.m_age = age;
    };
List::~List() {};
string List::getName() { return a.m_name; };
string List::getLast_name() { return a.m_last_name; };
int List::getAge() { return a.m_age; };

void Steck::Steck_push_back(List a)
{
    human b = { a.getName(),a.getLast_name(),a.getAge() };
    m_steck.push_back(b);
}
void Steck::Steck_pop_back()
{
    m_steck.pop_back();
}
    void Steck::print()
    {
        size_t size = m_steck.size();
        for (int i = 0; i < size; i++)
        {
            cout << "====================" << endl;
            cout << "Name: " << m_steck[i].m_name << endl;
            cout << "Last name: " << m_steck[i].m_last_name << endl;
            cout << "Age: " << m_steck[i].m_age << endl;
            cout << "====================" << endl;
        }
    }
    void Steck::print(int n)
    {
        size_t size = m_steck.size();
        for (int i = 0; i < size; i++)
        {
            if (m_steck[i].m_age<n)
            {

                cout << "====================" << endl;
                cout << "Name: " << m_steck[i].m_name << endl;
                cout << "Last name: " << m_steck[i].m_last_name << endl;
                cout << "Age: " << m_steck[i].m_age << endl;
                cout << "====================" << endl;
            }
        }
    }


    void Line::addToLine(List a)
    {
        human b = { a.getName(),a.getLast_name(),a.getAge() };
        m_line.push_back(b);
    }
    void Line::Show()
    {
        size_t size = m_line.size();
        for (int i = 0; i < size; i++)
        {
            cout << "====================" << endl;
            cout << "Name: " << m_line[i].m_name << endl;
            cout << "Last name: " << m_line[i].m_last_name << endl;
            cout << "Age: " << m_line[i].m_age << endl;
            cout << "====================" << endl;
        }
    }
    void Line::printL(int n)
    {
        size_t size = m_line.size();
        for (int i = 0; i < size; i++)
        {
            if (m_line[i].m_age < n)
            {
                cout << "====================" << endl;
                cout << "Name: " << m_line[i].m_name << endl;
                cout << "Last name: " << m_line[i].m_last_name << endl;
                cout << "Age: " << m_line[i].m_age << endl;
                cout << "====================" << endl;
            }
        }
    }
    void Line::swapEl(int n, int m)
    {
        swap(m_line[n], m_line[m]);
    }