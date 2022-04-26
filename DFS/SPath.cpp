#include "SPath.h"
using namespace std;

int main()
{
	vector <vector <char> > a(10, vector <char>(10));
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
			a[i][j] = ' ';
	}
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			if (i == 0 || j == 0)
				a[i][j] = 'W';
			else if (i == a.size() - 1 || j == a[i].size() - 1)
				a[i][j] = 'W';
		}
	}
	for (int i = 3; i < 9; i++)
		a[4][i] = 'W';
	for (int i = 2; i < 7; i++)
		a[i][5] = 'W';
	a[2][3] = 's'; // Start
	a[6][9] = ' '; // Finish
	show(a);

	dfs(a);
	cout << endl;
	show(a);
	return 0;
}
