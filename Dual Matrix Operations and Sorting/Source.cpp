#include <iostream>
#include "lab4.h"
using namespace std;
Matrix::Matrix()
{
    n = 5;
    m = 5;
    setAll(m, n);
}
Matrix::Matrix(int m1, int n1)
{
    m = m1;
    n = n1;
    setAll(m, n);
}

Matrix::~Matrix() {
    for (int i = 0; i < n; i++)
        delete[] arr[i];
    delete[] arr;
}

void Matrix::setAll(int m1, int n1)
{
    this->arr = new int* [n1];
    for (int i = 0; i < n1; i++)
    {
        this->arr[i] = new int[m1];
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            arr[i][j] = rand() % 30 - 3;
        }
    }
}
void Matrix::print()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

Matrix operator+(const Matrix& object1, const Matrix& object2)
{
    if (object1.n != object2.n || object1.m != object2.m)
    {
        cout << "Matrix dimensions do not match!" << endl;
        return Matrix();
    }

    Matrix result(object1.m, object1.n);
    for (int i = 0; i < object1.n; i++)
    {
        for (int j = 0; j < object1.m; j++)
        {
            result.arr[i][j] = object1.arr[i][j] + object2.arr[i][j];
        }
    }
    return result;
}


Matrix1::Matrix1(Matrix matrix)
{
    this->n = matrix.n;
    this->m = matrix.m;
    this->arr = matrix.arr;

    if (this->marr != nullptr)
        delete[] this->marr;

    this->marr = new int[n];

    for (int i = 0; i < n; i++)
    {
        int maxel = arr[i][0];
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > maxel)
                maxel = arr[i][j];
        }
        this->marr[i] = maxel;
    }
}

Matrix1::~Matrix1() {
    delete[] marr; 
}

void Matrix1::printm(Matrix matrix) {
    int n = matrix.n;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " max element " << marr[i] << " " << endl;
    }
}

void Matrix1::sortMatrix()
{
    int* marr2 = new int[n];
    for (int i = 0; i < n; i++)
        marr2[i] = marr[i];

    int** arr2 = new int* [n];
    for (int i = 0; i < n; i++)
        arr2[i] = arr[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marr2[j] > marr2[j + 1])
            {
                swap(marr2[j], marr2[j + 1]);
                swap(arr2[j], arr2[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        arr[i] = arr2[i];

    delete[] marr2;
    delete[] arr2;
}