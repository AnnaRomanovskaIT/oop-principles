#include <iostream>
#include <string>
#include <stdio.h>
#include <cctype>
#include <vector>
#include "mod_lab13.h"
using namespace std;

int count(string line)
{
	string symb = " ,/?";
	int n = line.length(), n1 = symb.length(), c = 0;
	for (int k = 0; k < n1; k++)
	{
		for (int i = 0; i < n; i++)
		{
			if (line[i] == symb[k])
			{
				c++;
			}
		}
	}
	return c;
}


rech::rech(string s, string symb, string ano_symb) {
	string words;
	int a = 0, b, symb_len = symb.length(), ano_symb_len = ano_symb.length();
	vector <string> result;
	while ((b = s.find(ano_symb, a)) != string::npos)
	{
		s.erase(b, ano_symb_len);
	}
	while ((b = s.find(symb, a)) != string::npos)
	{
		words = s.substr(a, b - a);
		a = b + symb_len;
		result.push_back(words);
	}
	result.push_back(s.substr(a));
	main = result;
}

void rech::print()
{
	int n = main.size();
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << main[i] << " ";
	}
}

vector <string> rech::twin()
{
	vector <string> t;
	int n = main.size();
	for (int i = 0; i < n; i++)
	{
		if (main[i].size() % 2 == 0)
		{
			t.push_back(main[i]);
		}
	}
	return t;
}

vector <string> rech::swap()
{
	int n = main.size();
	char swap_s;
	for (int i = 0; i < n; i++)
	{
		swap_s = main[i].back();
		main[i].back() = main[i].front();
		main[i].front() = swap_s;
	}
	return main;
}