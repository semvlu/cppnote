// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Document
{
public:
	Document(string content);
	string getText();
	void setText(string _text);
	Document operator=(Document _new);
private:
	string text;
};
