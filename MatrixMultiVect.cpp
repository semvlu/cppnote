// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the matrix multiplication task
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string size, elemA, elemB;
	getline(cin, size);
	int rnc[4]; // array to store row and cloumn size for A & B
	stringstream ss;
	ss << size;
	int num, c = 0;
	while (ss >> num)
	{
		rnc[c] = num;
		c++;
	}
	if (rnc[1] != rnc[2])
		cout << "Matrix multiplication failed." << endl;
	else
	{
		int **a; // matrix A
		a = new int*[rnc[0]];
		for (int i = 0; i < rnc[0]; i++)
			a[i] = new int[rnc[1]];
		int **b; // matrix B
		b = new int*[rnc[2]];
		for (int i = 0; i < rnc[2]; i++)
			b[i] = new int[rnc[3]];

		for (int i = 0; i < rnc[0]; i++)
		{
			for (int j = 0; j < rnc[1]; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < rnc[2]; i++)
		{
			for (int j = 0; j < rnc[3]; j++)
				cin >> b[i][j];
		}

		// calculate the answer
		int **c;
		c = new int*[rnc[0]];
		for (int i = 0; i < rnc[0]; i++)
			b[i] = new int[rnc[3]];

		for (int i = 0; i < rnc[0]; i++)
		{
			for (int j = 0; j < rnc[3]; j++)
				c[i][j] = 0;
		}
		/*
		for (int i = 0; i < rnc[0]; i++)
		{
			for (int j = 0; j < rnc[3]; j++)
			{
				for (int k = 0; k < rnc[1]; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
		}
		*/

		for (int i = 0; i < rnc[0]; i++)
		{
			for (int j = 0; j < rnc[3]; j++)
				cout << c[i][j] << " ";
			cout << endl;
		}
	}
}