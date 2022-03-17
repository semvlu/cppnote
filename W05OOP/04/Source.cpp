// Name: ªÂ¬f§g
// Date: Mar 17, 2022
// Last update: Mar 17, 2022
// Problem statement: This C++ program do the sudoku checker task
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
bool sudoku(vector<vector <int> > a)
{
	bool c = true;
	//each 3x3 square contains each number from 1-9 exactly once
	for (int i = 0; i < 3; i++)
	{
		vector <int> b(9);
		for (int j = 3 * i; j < 3 * i + 3; j++)
		{
			for (int k = j; k < j + 3; k++)
			{
				b.push_back(a[j][k]);
			}
		}
		sort(b.begin(), b.end());

		for (int j = 0; j < 9; j++)
		{
			if (b[i] != i + 1)
			{
				c = false;
				break;
			}
		}
		if (c == false)
			break;
	}
	//each row and column doesn¡¦t contain duplicates
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = j; k < 9; k++)
			{
				if (a[i][j] == a[i][k])
					c = false;
				else if (a[j][i] == a[k][i])
					c = false;
			}
		}
	}
	return c;
}

int main()
{
	vector<vector <int> > a(9);
	for (int i = 0; i < a.size(); i++)
	{
		string input;
		string n;
		getline(cin, input);
		istringstream iss(input);

		while (getline(iss, n, ','))
			a[i].push_back(stoi(n));
	}
	if (sudoku(a) == true)
		cout << "True" << endl;
	else
		cout << "False" << endl;

}