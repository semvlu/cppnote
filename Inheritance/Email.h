#// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#pragma once
#include"Document.h"

class Email :public Document
{
public:
	string title;
	string sender;
	string recipient;

	//constructor
	Email(string te, string se, string re, string ti) :Document(te) {
		text = te;
		title = ti;
		sender = se;
		recipient = re;
	}

	//get sender name
	string getSender();
	//get recipient name
	string getRecipient();
	//get title
	string getTitle();

	//assignment
	Email operator=(Email rhs);
};


