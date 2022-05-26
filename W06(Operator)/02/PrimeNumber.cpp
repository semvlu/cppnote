// Name: 祁柏君
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the prime number task
#include "PrimeNumber.h"

//return the value of this PrimeNumber.
int PrimeNumber::get() {return value;}

//construct a PrimeNumber where the value is 1.
PrimeNumber::PrimeNumber() {value = 1;}

// construct a PrimeNumber where the value is _value.
PrimeNumber::PrimeNumber(int _value) {value = _value;}

PrimeNumber& PrimeNumber::operator++()
{
	value++;

	bool prime;
	do
	{
		prime = true;
		for (int j = 2; j <= value / 2; j++)
		{
			if (value % j == 0) 
			{
				prime = false;
				continue;
			}
		}
		if (prime == true) 
			break;
		value++;
	} while (prime != true);

	return *this;
}

//return the next larger prime number.
PrimeNumber PrimeNumber::operator++(int)
{
	PrimeNumber temp = *this;
	++* this;

	if (temp.value == 1) 
		return 1;
	else if (temp.value == 2) 
		return 2;
	bool prime;
	do
	{
		prime = true;
		for (int j = 2; j <= temp.value / 2; j++)
		{
			if (temp.value % j == 0)
			{
				prime = false;
				continue;
			}
		}
		if (prime == true) 
			return temp;

		temp.value++;
	} while (prime != true);
}

PrimeNumber& PrimeNumber::operator--()
{
	value--;

	bool prime;
	do
	{
		prime = true;
		for (int j = 2; j <= value / 2; j++)
		{
			if (value % j == 0) 
			{
				prime = false;
				continue;
			}
		}
		if (prime == true) 
			break;
		value--;
	} while (prime != true);

	return *this;
}

//return the next smaller prime number.
//If the PrimeNumber value equals to 2, -- operator should return 1. 
//In the testing data, the PrimeNumber won��t be less than 2.
PrimeNumber PrimeNumber::operator--(int)
{
	PrimeNumber temp = *this;
	--* this;

	if (temp.value == 1) 
		return 1;
	else if (temp.value == 2) 
		return 2;
	bool prime;
	do
	{
		prime = true;
		for (int j = 2; j <= temp.value / 2; j++) 
		{
			if (temp.value % j == 0) 
			{
				prime = false;
				continue;
			}
		}
		if (prime == true) 
			return temp;
		temp.value--;
	} while (prime != true);
}