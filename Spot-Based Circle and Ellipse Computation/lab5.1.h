#pragma once
#include <iostream>
using namespace std;

class spot
{
private:
    int m_x, m_y;
public:
    spot();
    spot(int n, int m);
    int getX();
    int getY();
    ~spot() {};
    void print();
};

class circle : public spot
{
    double areaCircle;
public:
    circle();
    circle(spot a, spot b);
    ~circle() {};
    void setAreaCircle(spot a, spot b);
    void printAC();
};

class ellipse : public spot
{
    double areaEllipse;
public:
    ellipse();
    ellipse(spot a, spot b, spot c);
    ~ellipse() {};
    void setAreaEllipse(spot a, spot b, spot c);
    void printAE();
};