// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#include"Document.h"

//constructor
Document::Document(string te)
{
	text = te;
}

//get the text
string Document::getText()const
{
	return text;
}

//set new text
void Document::setText(string s)
{
	text = s;
}

//assignment
Document Document::operator=(Document rhs)
{
	text = rhs.text;
	return *this;
}