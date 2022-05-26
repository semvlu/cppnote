// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the prime number task
#include <iostream>

using namespace std;

class PrimeNumber
{
public:
	int value;
	int get();
	PrimeNumber();
	PrimeNumber(int _value);
	PrimeNumber& operator++();
	PrimeNumber operator++(int);
	PrimeNumber& operator--();
	PrimeNumber operator--(int);

};