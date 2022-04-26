#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void show(vector <vector <char> > a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
			cout << a[i][j];
		cout << endl;
	}
}

void dfs(vector <vector <char> > a)
{
	int i = 0;
	int j = 0;
	while (i < a.size() - 1)
	{
		while (j < a[i].size() - 1)
		{
			if (a[i][j] != ' ' && a[i][j] != 'W')
			{
				while (a[i + 1][j] == ' ' || a[i - 1][j] == ' '
					|| a[i][j + 1] == ' ' || a[i][j - 1] == ' ')
				{
					if (a[i + 1][j] == ' ')
					{
						switch (a[i][j])
							{
							case 's':
								a[i + 1][j] = '1';
								break;
							case '1':
								a[i + 1][j] = '2';
								break;
							case '2':
								a[i + 1][j] = '3';
								break;
							case '3':
								a[i + 1][j] = '4';
								break;
							case '4':
								a[i + 1][j] = '5';
							case '5':
								a[i + 1][j] = '6';
								break;
							case '6':
								a[i + 1][j] = '7';
								break;
							case '7':
								a[i + 1][j] = '8';
								break;
							case '8':
								a[i + 1][j] = '9';
								break;
							case '9':
								a[i + 1][j] = '0';
								break;
							case '0':
								a[i + 1][j] = '1';
								break;
							default:
								break;
							}
					}
					else if (a[i - 1][j] == ' ')
					{
						switch (a[i][j])
							{
							case 's':
								a[i - 1][j] = '1';
								break;
							case '1':
								a[i - 1][j] = '2';
								break;
							case '2':
								a[i - 1][j] = '3';
								break;
							case '3':
								a[i - 1][j] = '4';
								break;
							case '4':
								a[i - 1][j] = '5';
							case '5':
								a[i - 1][j] = '6';
								break;
							case '6':
								a[i - 1][j] = '7';
								break;
							case '7':
								a[i - 1][j] = '8';
								break;
							case '8':
								a[i - 1][j] = '9';
								break;
							case '9':
								a[i - 1][j] = '0';
								break;
							case '0':
								a[i - 1][j] = '1';
								break;
							default:
								break;
							}
					}
					else if (a[i][j + 1] == ' ')
					{
						switch (a[i][j])
							{
							case 's':
								a[i][j + 1] = '1';
								break;
							case '1':
								a[i][j + 1] = '2';
								break;
							case '2':
								a[i][j + 1] = '3';
								break;
							case '3':
								a[i][j + 1] = '4';
								break;
							case '4':
								a[i][j + 1] = '5';
							case '5':
								a[i][j + 1] = '6';
								break;
							case '6':
								a[i][j + 1] = '7';
								break;
							case '7':
								a[i][j + 1] = '8';
								break;
							case '8':
								a[i][j + 1] = '9';
								break;
							case '9':
								a[i][j + 1] = '0';
								break;
							case '0':
								a[i][j + 1] = '1';
								break;
							default:
								break;
							}
					}
					else if (a[i][j - 1] == ' ')
					{
						switch (a[i][j])
							{
							case 's':
								a[i][j - 1] = '1';
								break;
							case '1':
								a[i][j - 1] = '2';
								break;
							case '2':
								a[i][j - 1] = '3';
								break;
							case '3':
								a[i][j - 1] = '4';
								break;
							case '4':
								a[i][j - 1] = '5';
							case '5':
								a[i][j - 1] = '6';
								break;
							case '6':
								a[i][j - 1] = '7';
								break;
							case '7':
								a[i][j - 1] = '8';
								break;
							case '8':
								a[i][j - 1] = '9';
								break;
							case '9':
								a[i][j - 1] = '0';
								break;
							case '0':
								a[i][j - 1] = '1';
								break;
							default:
								break;
							}
					}

				}
			}
			else
			{
				i++;
				j++;
			}
		}	
	}
}