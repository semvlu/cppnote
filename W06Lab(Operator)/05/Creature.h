// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the diary task
#pragma once
#include"Diary.h"


class Creature 
{
private:
	string creatureName;
	int firstDate;
	map<string, int> bodyPart;
	map<string, int>::iterator itPart;		//first->key(body part)  ;  second->value(body part num)

public:

	//Contains a creature named name.
	Creature(string name);
	//A creature that contains the same information as the base of each body part.
	Creature(string name, const Creature& base);
	// Destructor
	~Creature();

	//For example: c["leg"]: return to the body part of Creature c named "leg".
	Creature& operator[](string part);
	//For example: c["leg"] = 3: set the number of body parts in Creature c named "leg" to 3 
	Creature& operator=(const int& num);
	//For example: c["leg"] += 2: the number of body parts named "leg" increases by 2
	Creature& operator+=(const int& num);
	//For example: c["leg"] -= 2: the number of body parts named "leg" decreases by 2
	Creature& operator-=(const int& num);

	void makeLog(int numFront, int numBack);
	//Prints the value of each body part of the organism.
	void PrintStatus();
	//Prints the log information of the creature on a Diary basis since it was collected.
	void PrintLog();
};
