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

int digits(int num) 
{
	if (num >= 10) 
		return digits(num / 10) + 1;
	return 1;
}

int main()
{
	string size, elemA, elemB;
	getline(cin, size);
	vector <int> rnc; // vector to store row and cloumn size for A & B
	stringstream ss;
	ss << size;
	int num;
	while (ss >> num)
		rnc.push_back(num);
	if (rnc[1] != rnc[2])
		cout << "Matrix multiplication failed." << endl;
	else
	{
		vector <vector <int> > a; // matrix A
		a.resize(rnc[0]);
		for (int i = 0; i < a.size(); i++)
			a[i].resize(rnc[1]);
		vector <vector <int> > b; // matrix B
		b.resize(rnc[2]);
		for (int i = 0; i < b.size(); i++)
			b[i].resize(rnc[3]);

		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < a[i].size(); j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < b.size(); i++)
		{
			for (int j = 0; j < b[i].size(); j++)
				cin >> b[i][j];
		}

		// calculate fo the answer
		vector <vector<int> > c(rnc[0], vector<int>(rnc[3], 0));
		
		for (int i = 0; i < rnc[0]; i++)
		{
			for (int j = 0; j < rnc[3]; j++)
			{
				for (int k = 0; k < rnc[1]; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
		}

		for (int i = 0; i < c.size(); i++)
		{
			for (int j = 0; j < c[i].size(); j++)
				cout << c[i][j] << " ";
			cout << endl;
		}
	}
}