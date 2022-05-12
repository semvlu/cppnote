// Name: ªÂ¬f§g
// Date: Apr 28, 2022
// Last Update: Apr 28, 2022
// Problem statement: This C++ program does the combination task
#include "PrintCombination.h"
using namespace std;

void PrintCombination(int* a, int n, int r)
{
    int *temp = new int[r];
    int cnt = 0;
    util(a, temp, 0, n - 1, 0, n, r, cnt);
}

int nCr(int n, int r) { return facto(n) / (facto(r) * facto(n - r)); }

int facto(int n)
{
    int c = 1;
    for (int i = 2; i <= n; i++)
        c = c * i;
    return c;
}

void util(int a[], int temp[], int strt, int end, int idx, int n, int r, int cnt)
{
    if (idx == r)
    {
        for (int i = 0; i < r; i++)
            cout << temp[i] << " ";
        cnt++;
        if (cnt != nCr(n, r))
            cout << endl;
    }

    for (int i = strt; i <= end && end - i + 1 >= r - idx; i++)
    {
        temp[idx] = a[i];
        util(a, temp, i + 1, end, idx + 1, n, r, cnt);
    }
}