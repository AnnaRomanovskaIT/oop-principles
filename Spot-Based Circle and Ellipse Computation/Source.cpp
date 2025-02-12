#include "lab5.1.h"
#include <iostream>
using namespace std;
spot::spot() { m_x = 0; m_y = 0; };
spot::spot(int n, int m) { m_x = n; m_y = m; };
int spot::getX() { return m_x; };
int spot::getY() { return m_y; }
spot::~spot() {};
void spot::print()
{
    cout << " [" << m_x << ", " << m_y << "]" << endl;
};
circle::circle() { areaCircle = 0; };
circle::circle(spot a, spot b) { setAreaCircle(a, b); };
circle::~circle() {}
void circle::setAreaCircle(spot a, spot b)
{
    double r;
    int x_a = a.getX(), x_b = b.getX();
    int y_a = a.getY(), y_b = b.getY();
    r = pow(x_a - x_b, 2) + pow(y_a - y_b, 2); //ab; a is a center
    areaCircle = r * 3.14159265359;
}
void circle::printAC()
{
    cout << "area of curcle is " << areaCircle << endl;
}
ellipse::ellipse() { areaEllipse = 0; }
ellipse::ellipse(spot a, spot b, spot c) { setAreaEllipse(a, b, c); };
ellipse::~ellipse() {}
void ellipse::setAreaEllipse(spot a, spot b, spot c)
{
    double r;
    int x_a = a.getX(), x_b = b.getX(), x_c = c.getX();
    int y_a = a.getY(), y_b = b.getY(), y_c = c.getY();
    //ab ac; a is a center
    r = sqrt(pow((x_a - x_b), 2) + pow((y_a - y_b), 2)) + sqrt(pow((x_a - x_c), 2) + pow((y_a - y_c), 2));
    areaEllipse = r * 3.14159265359;
}
void ellipse::printAE()
{
    cout << "area of ellipse is " << areaEllipse << endl;
}