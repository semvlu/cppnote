// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#include "File.h"

File::File(string content, string name) : Document(content)
{
	Pathname = name;
}

string File::getPathname()
{
	return Pathname;
}

void File::setPathname(string _pathName)
{
	Pathname = _pathName;
}

File File::operator=(File _new)
{
	File n(_new.getText(), _new.getPathname());
	return n;
}