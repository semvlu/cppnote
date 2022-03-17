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
	bool chk = true;
	//each 3x3 square contains each number from 1-9 exactly once
	for (int i = 0; i < 3; i++)
	{
		vector <int> b(9);
		vector <int> c(9);
		vector <int> d(9);
		for (int j = 3 * i; j < 3 * i + 3; j++)
		{
			// run the 1st big column
			for (int k = 0; k < 3; k++)
				b.push_back(a[j][k]);

			// run the 2nd big column
			for (int k = 3; k < 6; k++)
				c.push_back(a[j][k]);

			// run the 3rd big column
			for (int k = 6; k < 9; k++)
				d.push_back(a[j][k]);
		}
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		sort(d.begin(), d.end());

		// check for no dupllicatess
		for (int l = 0; l < 9; l++)
		{
			if (b[l] != l + 1 || c[l] != l + 1 || d[l] != l + 1)
			{
				chk = false;
				break;
			}
		}
		
		if (chk == false)
			break;
	}
	//each row and column doesn��t contain duplicates
	if (chk == true)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				for (int k = j; k < 9; k++)
				{
					if (a[i][j] == a[i][k])
						chk = false;
					else if (a[j][i] == a[k][i])
						chk = false;
				}
			}
		}
	}
	return chk;
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
