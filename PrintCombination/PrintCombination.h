// Name: ªÂ¬f§g
// Date: Apr 28, 2022
// Last Update: Apr 28, 2022
// Problem statement: This C++ program deos the combination task
#pragma once
#include <iostream>
using namespace std;

void PrintCombination(int* a, int n, int r);
int facto(int n);
int nCr(int n, int r);
void util(int a[], int temp[], int strt, int end, int idx, int n, int r, int cnt);