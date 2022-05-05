// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once
#include "Document.h"
class File : public Document
{
public:
	File(string content, string name);
	string getPathname();
	void setPathname(string _pathName);
	File operator=(File _new);
private:
	string Pathname;
};