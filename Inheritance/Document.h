// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once

#include<iostream>
#include<string>

using namespace std;

class Document
{
public:
	string text;

	//constructor
	Document(string te);

	//get the text
	string getText()const;
	//set new text name
	void setText(string s);

	//assignment
	Document operator=(Document rhs);
};