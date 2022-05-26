// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the number game task

#ifndef numberGame_H
#define numberGame_H

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

class NumberGame {

public:
	void SetInput(int a);
	void ProcessInput();
	void SetFileName(string name);
	void LoadNumberList();
	void PrintAllValid();
	void Reset();

private:
	int A = 0;
	int seperate[1000];		
	int count = 0;		
	int E[10000];		
	int countE = 0;		
	ifstream infile;
};
#endif 