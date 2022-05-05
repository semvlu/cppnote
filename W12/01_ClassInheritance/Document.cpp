// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#include "Document.h"

Document::Document(string content)
{
	text = content;
}

string Document::getText()
{
	return this->text;
}

void Document::setText(string _text)
{
	text = _text;
}

Document Document::operator=(Document _new)
{
	Document n(_new.getText() );
	return n; 
}