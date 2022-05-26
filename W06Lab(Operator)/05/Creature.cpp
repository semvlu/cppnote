// Name: 祁柏君
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the diary task
#include"Creature.h"
#include<iostream>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

//Contains a creature named name.
Creature::Creature(string name)
{
	creatureName = name;
	firstDate = Diary::diaryList.size() - 1;
}

//A creature that contains the same information as the base of each body part.
Creature::Creature(string name, const Creature& base)
{
	creatureName = name;
	firstDate = Diary::diaryList.size() - 1;
	bodyPart = base.bodyPart;
}

// Destructor
Creature::~Creature() {}

//For example: c["leg"]: return to the body part of Creature c named "leg".
Creature& Creature::operator[](string part)
{
	auto it = bodyPart.find(part);
	if (it != bodyPart.end()) 
	{
		itPart = it;
		return *this;
	}
	bodyPart[part] = 0;
	itPart = bodyPart.find(part);
	return *this;
}

//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
Creature& Creature::operator=(const int& num)
{
	int numFront = itPart->second;
	int numBack = num;
	if (numBack >= 0) 
	{
		itPart->second = num;
		makeLog(numFront, numBack);
	}
	return *this;
}

//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2
Creature& Creature::operator+=(const int& num)
{
	int numFront = itPart->second;
	int numBack = numFront + num;
	if (numBack >= 0)
	{
		itPart->second = numBack;
		makeLog(numFront, numBack);
	}
	return *this;
}

//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2
Creature& Creature::operator-=(const int& num)
{
	int numFront = itPart->second;
	int numBack = numFront - num;
	if (numBack >= 0) 
	{
		itPart->second = numBack;
		makeLog(numFront, numBack);
	}
	return *this;
}

void Creature::makeLog(int numFront, int numBack)
{
	string changed, numFrontStr, numBackStr;
	if (numFront == 0 && numBack > numFront) 
		changed = "appeared";
	else if (numFront > 0 && numBack > numFront) 
		changed = "increased";
	else if (numFront > 0 && numBack < numFront) 
		changed = "decreased";
	else 
		return;

	stringstream ss;
	ss << numFront;
	ss >> numFrontStr;
	ss.clear();		//�M�Ŭy
	ss.str("");		//�M�Ŭy�֨�
	ss << numBack;
	ss >> numBackStr;

	string totalContent = "";
	totalContent += creatureName + "'s " + itPart->first + " " + changed + " (" + numFrontStr + " -> " + numBackStr + ").";
	Diary::logContent(creatureName, totalContent);
}

//Prints the value of each body part of the organism.
void Creature::PrintStatus()
{
	cout << creatureName << "'s status:" << endl;
	for (auto it = bodyPart.begin(); it != bodyPart.end(); it++)
		if (it->second != 0) 
			cout << it->first << " * " << it->second << endl;
	cout << endl;
}

//Prints the log information of the creature on a Diary basis since it was collected.
void Creature::PrintLog()
{
	cout << creatureName << "'s log:" << endl;
	for (int i = firstDate; i < Diary::diaryList.size(); i++) 
	{
		cout << "Day " << Diary::diaryList[i].date << endl;
		for (int j = 0; j != Diary::diaryList[i].toNameData.size(); j++) 
			if (Diary::diaryList[i].toNameData[j].name == creatureName) 
				cout << Diary::diaryList[i].toNameData[j].logContent << endl;
	}
	cout << endl;
}