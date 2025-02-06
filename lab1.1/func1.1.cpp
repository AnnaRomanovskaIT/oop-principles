#include <iostream>
#include <cstdlib>
#include <stdlib.h>  
using namespace std;

int* create(int n)
{
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20 - 10;
    }
    return a;
}

void print(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

int max_el(int* a, int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}


int sum_el(int* a, int n)
{
    int sum=0, i = n - 1;
    while (a[i] > 0)
    {
        i = i - 1;
    }
    for (int y = 0; y < i; y++)
    {
        sum = sum + a[y];
    }
    return sum;
}

int* new_a(int* a, int n, int c, int d)
{
    int g = 0;
    for (int i = 0; i < n; i++)          
    {
        g = abs(a[i]);
        if (g >= c)
        {
            if (g <= d)
            {
                a[i] = 0;
            }
        }
    }
    int* u = new int[n];
    int i = 0, y = n - 1, t = 0;
    while (i < n)
    {
        if (a[i] == 0)
        {
            u[y] = a[i];
            y = y - 1;
        }
        if (a[i] != 0)
        {
            u[t] = a[i];
            t++;
        }
        i++;
    }
    return u;
}