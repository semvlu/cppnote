// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the diary task
#pragma once
#include<iostream>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct nameData 
{
	string name;
	string logContent;
}nameData;

typedef struct dateData 
{
	string date;
	vector<nameData> toNameData;
}dateData;

class Diary 
{
public:

	//Set the current date code(A string of words.May not all necessarily be numbers.)
	static void NewDay(string day);

	//record "sample's leg appeared (0 -> 3)" in the log.
	//record "sample's leg increased (3 -> 5)" in the log.
	//record "sample's leg decreased (5 -> 3)" in the log.
	static void logContent(string name, string content);


	static vector<dateData> diaryList;
};