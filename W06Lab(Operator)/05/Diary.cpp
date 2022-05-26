// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the diary task
#include "Diary.h"
#include<iostream>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>


vector<dateData> Diary::diaryList;

//Set the current date code(A string of words.May not all necessarily be numbers.)
void Diary::NewDay(string day)
{
	dateData newData;
	newData.date = day;
	diaryList.push_back(newData);
}


//record "sample's leg appeared (0 -> 3)" in the log.
//record "sample's leg increased (3 -> 5)" in the log.
//record "sample's leg decreased (5 -> 3)" in the log.
void Diary::logContent(string name, string content)
{
	nameData newData;
	newData.name = name;
	newData.logContent = content;
	diaryList[diaryList.size() - 1].toNameData.push_back(newData);
}