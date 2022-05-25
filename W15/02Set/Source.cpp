// Name: ªÂ¬f§g
// Date: May 24, 2022
// Last Update: May 24, 2022
// Problem statement: This C++ program does the name elimination task
#include <iostream>
#include <fstream>
#include <string>
#include <set>
using namespace std;

int main()
{
	ifstream in("name.txt");
	set <string> n;
	while (!in.eof())
	{
		string temp;
		getline(in, temp);
		n.insert(temp);
	}
	n.erase("");
	for (auto i : n)
		cout << i << endl;
}
