#pragma once
#include <iostream>
#include <string>
using namespace std;

class o_system
{
protected:
    string yadro;
    string interface;
    string draivers;
public:
    o_system();
    o_system(string y, string i, string d);
    o_system(const o_system& object);
    virtual ~o_system();
    friend std::ostream& operator<< (std::ostream& out, const o_system& o);
    friend std::istream& operator>> (std::istream& in, o_system& o);
};

class Windows :public o_system
{
    string yadroW;
    string interfaceW;
    string draiversW;
public:
    Windows();
    Windows(string y, string i, string d);
    Windows(const Windows& object);
    virtual ~Windows();
    friend std::ostream& operator<< (std::ostream& out, const Windows& o);
    friend std::istream& operator>> (std::istream& in, Windows& o);
};