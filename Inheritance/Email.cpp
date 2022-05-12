// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 10, 2022
// Problem statement: This C++ program does the class inheritance task
#include"Email.h"

//get sender name
string Email::getSender()
{
	return sender;
}

//get recipient name
string Email::getRecipient()
{
	return recipient;
}

//get title
string Email::getTitle()
{
	return title;
}

//assignment
Email Email::operator=(Email rhs)
{
	sender = rhs.sender;
	recipient = rhs.recipient;
	title = rhs.title;
	text = rhs.text;
	return *this;
}