#include <iostream>
#include <vector>
#include <string>
#include "Matrix.h"
using namespace std;

/*
vector<vector<int> > operator*(Matrix x, Matrix y)
{
    vector<vector<int> > z;
    z.resize(x.elem.size());
    for (int i = 0; i < x.elem.size(); i++)
        z[i].resize(y.elem[0].size());
    for (int i = 0; i < z.size(); ++i)
    {
        for (int j = 0; j < z[i].size(); ++j)
            z[i][j] = 0;
    }

    for (int i = 0; i < x.elem.size(); i++)
    {
        for (int j = 0; j < y.elem[0].size(); j++)
        {
            for (int k = 0; k < x.elem[i].size(); k++)
                z[i][j] += x.elem[i][k] * y.elem[k][j];
        }
    }
    return z;
}
*/
int main()
{
    Matrix x(2, 2);
    x.init();
    Matrix y(2, 2);
    y.init();
    x.printMat();
    y.printMat();

    Matrix q = x + y;
    Matrix w = x - y;
    Matrix r = x * y;
    q.printMat();
    w.printMat();
    r.printMat();
/*
    vector <vector <int> > z;
    z = x * y;
    for (int i = 0; i < z.size(); ++i)
    {
        for (int j = 0; j < z[i].size(); ++j)
            cout << z[i][j] << " ";
        cout << endl;
    }
*/
}
