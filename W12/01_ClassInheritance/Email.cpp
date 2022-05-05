// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the class inheritance task
#include "Email.h"

Email::Email(string content, string sndr, string rcvr, string _title) : Document(content)
{
	snd = sndr;
	rcv = rcvr;
	title = _title;
}

string Email::getSnd()
{
	return snd;
}

void Email::setSnd(string _snd)
{
	snd = _snd;
}

string Email::getRcv()
{
	return rcv;
}

void Email::setRcv(string _rcv)
{
	rcv = _rcv;
}

string Email::getTitle()
{
	return title;
}

void Email::setTitle(string _title)
{
	title = _title;
}

Email Email::operator=(Email _new)
{
	Email n(_new.getText(), _new.getSnd(), _new.getRcv(), _new.getTitle() );
	return n;
}