#pragma once
#include <iostream>
using namespace std;

class Matrix
{
    int** arr;
    int n;
    int m;
public:
    Matrix();
    Matrix(int m1, int n1);
    ~Matrix();
    void setAll(int m1, int n1);
    void print();
    friend Matrix operator+(const Matrix& object1, const Matrix& object2);

    friend class Matrix1;
};

class Matrix1
{
    int* marr;
public:
    Matrix1(Matrix matrix);
    ~Matrix1();
    void printm(Matrix matrix);
    Matrix sort(Matrix matrix);
};
