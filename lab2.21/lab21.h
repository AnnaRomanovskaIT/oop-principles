#pragma once
#include <iostream>
#include <windows.h> 
#include <chrono>
using namespace std;

class Stopwatch
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<60> >;
	std::chrono::time_point <clock_t> m_beg;

public:
	Stopwatch();
	void start();
	void show();
	double stop() const;
};