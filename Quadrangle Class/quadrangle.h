#pragma once
class quadrangle
{
	double m_a, m_b, m_c, m_d;
public:
	quadrangle();
	quadrangle(double a, double b, double c, double d);
	void setAll(double a, double b, double c, double d);
	void perimeter();
	double getPerimeter();
	void Area();
	double getArea();
};