#include <iostream>
#include <windows.h> 
#include <chrono>
#include "lab21.h"
using namespace std;

Stopwatch::Stopwatch() { m_beg = clock_t::now(); };

void Stopwatch::start() { m_beg = clock_t::now(); };

void Stopwatch::show()
{

	double a;
	a = std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	system("cls");
	cout << a << endl;
};

double Stopwatch::stop() const

{
	return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
};