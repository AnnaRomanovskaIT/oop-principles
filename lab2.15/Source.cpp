#include <iostream>
#include "quadrangle.h"
using namespace std;
quadrangle::quadrangle() {};
quadrangle::quadrangle(double a, double b, double c, double d)
{
	setAll(a, b, c, d);
};
void quadrangle::setAll(double a, double b, double c, double d)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
};
void quadrangle::perimeter() 
{
	cout << "perimetr is " << getPerimeter() << endl;
};
double quadrangle::getPerimeter()
{
	double p;
	p = m_a + m_b + m_c + m_d;
	return p;
};
void quadrangle::Area()
{
	cout << "area is " << getArea() << endl;
};
double quadrangle::getArea()
{
	double S,s;
	s = (m_a + m_b + m_c + m_d) / 2;
	S = sqrt((s - m_a) * (s - m_b) * (s - m_c) * (s - m_d));
	return S;
};