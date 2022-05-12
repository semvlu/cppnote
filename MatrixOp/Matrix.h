#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Matrix
{
public:
    int m;
    int n;

    Matrix(int a, int b)
    {
        m = a;
        n = b;
        elem.resize(m);
        for (int i = 0; i < elem.size(); ++i)
            elem[i].resize(n);
    }
    void init()
    {
        for (int i = 0; i < elem.size(); ++i)
        {
            for (int j = 0; j < elem[i].size(); ++j)
                elem[i][j] = rand() % 9;
        }
    }
    int getRow() {return m;}
    int getClmn() {return n;}
    void printMat()
    {
        for (int i = 0; i < elem.size(); ++i)
        {
            for (int j = 0; j < elem[i].size(); ++j)
                cout << elem[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    Matrix operator+(Matrix b)
    {
        Matrix c(m, n);
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                c.elem[i][j] = elem[i][j] + b.elem[i][j];
        }
        return c;
    }

    Matrix operator-(Matrix b)
    {
        Matrix c(m, n);
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
                c.elem[i][j] = elem[i][j] - b.elem[i][j];
        }
        return c;
    }

    Matrix operator*(Matrix b)
    {
        Matrix c(m, b.n);
        for (int i = 0; i < elem.size(); i++)
        {
            for (int j = 0; j < b.elem[0].size(); j++)
            {
                for (int k = 0; k < elem[i].size(); k++)
                    c.elem[i][j] += elem[i][k] * b.elem[k][j];
            }
        }
        return c;
    }
private:
    vector <vector <int> > elem;
};
