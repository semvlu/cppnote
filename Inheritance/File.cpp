// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#include"File.h"

//set the path name
void File::setPathname(string p)
{
	path = p;
}

//get the path name
string File::getPathname()
{
	return path;
}

//assignment
File File::operator=(File rhs)
{
	path = rhs.path;
	text = rhs.text;
	return *this;
}