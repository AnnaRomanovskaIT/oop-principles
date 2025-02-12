#include <iostream>
using namespace std;

int** make(int n) {
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 30 - 3;
        }

    }
    return arr;
}

void print(int** arr, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int* sum(int** arr, int n)
{
    int j = 0, sum = 0, r = 0, l = 0;
    int* t = new int[n];
    while (r < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][r] > 0)
            {
                sum = sum + arr[i][r];
                j++;
                if (j == n)
                {
                    t[l] = sum;
                    l++;
                }
            }
        }
        sum = 0;
        j = 0;
        r++;
    }
    return t;
}

void print_sum(int* t, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (t[i] < 0) { break; }
        cout << "sum: " << t[i] << endl;
    }
}

int diagonals(int** arr, int n)
{
    int o = 0, d = 0, s = 0, min_el = arr[0][0];
    while (o < n)
    {
        for (int i = 0; i < n + s; i++)
        {
            d = d + abs(arr[i][n - 1 - i + s]);
        }
        if (d < min_el)
        {
            min_el = d;
        }
        d = 0;
        s = s - 1;
        o++;
    }
    int g = 0, y = 0;
    while (y < n)
    {
        for (int i = 0; i < n - g; i++)
        {
            d = d + abs(arr[i + g][n - 1 - i]);
        }
        if (d < min_el)
        {
            min_el = d;
        }
        d = 0;
        g = g + 1;
        y++;
    }
    return min_el;
}