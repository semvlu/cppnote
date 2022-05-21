// Name: ªÂ¬f§g
// Date: May 20, 2022
// Last Update: May 20, 2022
// Problem statement: This C++ program does the school task
#include "School.h"

School::School(string n, int num)
{
	name = n;
	studentAmount = num;
	studentAmountNextYear = num;
}
int School::getStudentAmount() { return studentAmount; }
int School::getStudentAmountNextYear() { return studentAmountNextYear; }
void School::setStudentAmount(int amount) { studentAmount = amount; }
void School::setStudentAmountNextYear(int amount) { studentAmountNextYear = amount; }
void School::admissions(float amount) { this->studentAmount += amount; }
void School::dropouts(float amount)
{
	if (amount <= this->studentAmount)
		this->studentAmount -= amount;
}
void School::transfer(float amount, School& toSchool)
{
	if (amount <= this->studentAmount)
	{
		this->dropouts(amount);
		toSchool.admissions(amount);
	}
}
ostream& operator<<(ostream& strm, const School& s)
{
	strm << s.name << "\t" << s.studentAmount << "\t"
		<< s.studentAmountNextYear;
	return strm;
}

PrivateSchool::PrivateSchool(string n, int num) : School(n, num), dropoutCnt(0){}
int PrivateSchool::getDropoutCnt() { return dropoutCnt; }
void PrivateSchool::dropouts(float amount)
{
	if (amount <= this->getStudentAmount())
	{
		this->setStudentAmount(this->getStudentAmount() - amount);
		if (this->dropoutCnt >= 1)
			this->setStudentAmountNextYear(this->getStudentAmountNextYear() - 100);
		this->dropoutCnt++;
	}
}

PublicSchool::PublicSchool(string n, int num) : School(n, num), growing_rate(0.05) {}
void PublicSchool::apply_growth()
{
	this->setStudentAmountNextYear((1 + growing_rate) * this->getStudentAmountNextYear() + 1);
}
void PublicSchool::dropouts(float amount)
{
	if (amount <= this->getStudentAmount())
	{
		this->setStudentAmount(this->getStudentAmount() - amount);
		if (amount > 100)
			this->setStudentAmountNextYear(0.95 * this->getStudentAmountNextYear());
	}
}