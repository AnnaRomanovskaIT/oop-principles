#include <string>
#include <vector>
#pragma once
using std::string;
using std::vector;

class sentence
{
	vector <string> main;
public:
	sentence() {};
	sentence(string s, string symb, string ano_symb);
	void print();
	vector <string> twin();
	vector <string> swap();
};

int count(string line);
