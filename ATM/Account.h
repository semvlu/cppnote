// Name: ªÂ¬f§g
// Date: May 20, 2022
// Last Update: May 20, 2022
// Problem statement: This C++ program does the ATM task
#pragma once
class NegativeDeposit
{
public:
	NegativeDeposit(){}
};

class InsufficientFunds
{
public:
	InsufficientFunds(){}
};
class Account
{
private:
	double balance;
public:
	Account() { balance = 0; }
	Account(double initialDeposit) { balance = initialDeposit; }
	double getBalance() { return balance; }

	double deposit(double amount)
	{

		if (amount > 0)
		{
			balance += amount;
			return balance;
		}
		else
			throw NegativeDeposit();
	}

	double withdraw(double amount)
	{
		if ((amount > balance) || (amount < 0))
			throw InsufficientFunds();
		else
			balance -= amount;
		return balance;
	}
};
