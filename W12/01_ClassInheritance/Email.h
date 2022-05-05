// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once
#include "Document.h"
class Email : public Document
{
public:
	Email(string content, string sndr, string rcvr, string _title);
	string getSnd();
	void setSnd(string _snd);
	string getRcv();
	void setRcv(string _rcv);
	string getTitle();
	void setTitle(string _title);
	Email operator=(Email _new);
private:
	string snd, rcv, title;
};
