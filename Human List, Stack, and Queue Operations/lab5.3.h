#pragma once
#include <iostream>
#include <vector>
using namespace std;
struct human
{
    string m_name{};
    string m_last_name{};
    int m_age{};
    friend void swap(human& a, human& b);
};

class List
{
protected:
    human a;
public:
    List();
    List(string name, string last_name, int age);
    ~List();
    string getName();
    string getLast_name();
    int getAge();
};

class Steck :public List
{
    vector <human> m_steck;
public:
    virtual void Steck_push_back(List a);
    virtual void Steck_pop_back();
    void print();
    void print(int n);
};

class Line :public List
{
    vector <human> m_line;
public:
    virtual void addToLine(List a);
    void Show();
    void printL(int n);
    void swapEl(int n, int m);
};

