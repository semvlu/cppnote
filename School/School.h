// Name: ªÂ¬f§g
// Date: May 20, 2022
// Last Update: May 20, 2022
// Problem statement: This C++ program does the school task
#pragma once
#include <iostream>
#include <string>
using namespace std;

class School
{
public:
	School(string n, float num);
	int getStudentAmount();
	int getStudentAmountNextYear();
	void setStudentAmount(int amount);
	void setStudentAmountNextYear(int amount);
	void admissions(float amount);
	virtual void dropouts(float amount);
	void transfer(float amount, School& toSchool);
	friend ostream& operator<<(ostream& strm, const School& s);
private:
	string name;
	float studentAmount;
	float studentAmountNextYear;
};

class PrivateSchool : public School
{
public:
	PrivateSchool(string n, float num);
	int getDropoutCnt();
	void dropouts(float amount);
private:
	int dropoutCnt = 0;
};

class PublicSchool : public School
{
public:
	PublicSchool(string n, float num);
	void apply_growth();
	void dropouts(float amount);
private:
	float growing_rate = 0.05;
};