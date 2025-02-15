#include <iostream>
#include "lab6.h"
using namespace std;
template <class T>
Array<T>::Array()
{
    n = 0;
    a = nullptr;
};
template <class T>
Array<T>::Array (int size)
{
    n = size;
    a = new T[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20 - 10;
    }
}
template <class T>
void Array<T>::print()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}
template <class T>
T Array<T>::max_el()
{
    T max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
template <class T>
T Array<T>::sum_el()
{
    T sum = 0;
    int i;
    for (int k = n - 1; k > 0; k--)
    {
        if (a[k] > 0)
        {
            i = k + 1;
            break;
        }
    }
    for (int y = 0; y < i; y++)
    {
        sum = sum + a[y];
    }
    return sum;
}
template <class T>
void Array<T>::new_a(T c, T d)
{
    T g = 0;
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
    T* u = new T[n];
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
    a = u;
}