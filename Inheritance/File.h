// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once
#include"Document.h"

class File : public Document
{
public:
	string path;

	//constructor
	File(string te, string pa) :Document(te) {
		text = te;
		path = pa;
	}

	//set new path name
	void setPathname(string p);
	//get the path name
	string getPathname();

	//assignment
	File operator=(File rhs);
};
