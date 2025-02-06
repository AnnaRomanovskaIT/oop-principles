#include <string>
#include <vector>
#pragma once
using std::string;
using std::vector;

class rech
{
	vector <string> main;
public:
	rech() {};
	rech(string s, string symb, string ano_symb);
	void print();
	vector <string> twin();
	vector <string> swap();
};

int count(string line);