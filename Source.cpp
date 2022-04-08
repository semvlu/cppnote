// Name: ªÂ¬f§g
// Date: Mar 31, 2022
// Last Update: Mar 31, 2022
// Problem statement: This C++ program do the 7 segment display task. 
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const char* format[10] = { " _ | ||_|", "     |  |", " _  _||_ ", " _  _| _|", // 0, 1, 2, 3
						   "   |_|  |", " _ |_  _|", " _ |_ |_|",		       // 4, 5, 6
						   " _   |  |", " _ |_||_|", " _ |_| _|" };		       // 7, 8, 9

int main()
{
	string a;
	while (cin >> a)
	{
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < a.size(); j++)
				if (!isdigit(a[i])) // clear non digit char
					a.erase(i, 1);
		}

		vector <vector <char> > out(4, vector<char>(302));
		int cnt;
		for (int i = 0; i < a.size(); i++)
		{
			switch (a[i])
			{
			case '0':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[0][cnt];
						cnt++;
					}
				}
				break;
			case '1':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[1][cnt];
						cnt++;
					}
				}
				break;
			case '2':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[2][cnt];
						cnt++;
					}
				}
				break;
			case '3':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[3][cnt];
						cnt++;
					}
				}
				break;
			case '4':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[4][cnt];
						cnt++;
					}
				}
				break;
			case '5':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[5][cnt];
						cnt++;
					}
				}
				break;
			case '6':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[6][cnt];
						cnt++;
					}
				}
				break;
			case '7':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[7][cnt];
						cnt++;
					}
				}
				break;
			case '8':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[8][cnt];
						cnt++;
					}
				}
				break;
			case '9':
				cnt = 0;
				for (int h = 0; h < 3; h++)
				{
					for (int j = 3 * i; j < 3 * i + 3; j++)
					{
						out[h][j] = format[9][cnt];
						cnt++;
					}
				}
				break;
			default:
				break;
			}
		}

		for (int i = 0; i < 3; i++) // output
		{
			for (int j = 0; j < 300; j++)
				cout << out[i][j];
			cout << endl;
		}
	}
}