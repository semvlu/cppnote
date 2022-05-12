// Name: ªÂ¬f§g
// Date: Apr 13, 2022
// Last Update: Apr 13, 2022
// Problem statement: This C++ program do the Polynomial task. 
#pragma once
#include <cmath>
#include <algorithm>
class Polynomial
{
public:
	double* coef;
	int a;

	Polynomial() = default;
	Polynomial(double* param, int size)
	{
		a = size;
		coef = new double[size];
		for (int i = a - 1; i >= 0; i--)
			coef[i] = param[a - i - 1];
	}

	int mySize()
	{
		int cnt = 0;
		for (int i = 0; i < a; i++)
			if (coef[i] != 0)
				cnt++;
		return cnt;
	}

	void operator=(Polynomial v)
	{
		a = v.a;
		coef = new double[a];
		for (int i = 0; i < a; i++)
			coef[i] = v.coef[i];
	}

	double operator[](int idx) { return coef[a - idx - 1]; }

	Polynomial operator+(Polynomial b)
	{
		int m = std::max(a, b.a);
		double* coe;
		coe = new double [m];
		for (int i = 0; i < m; i++)
			coe[i] = 0;
		Polynomial c(coe, m);

		for (int i = 0; i < c.a; i++)
		{
			if (a >= b.a)
				if (b.a - 1 >= i)
					c.coef[i] = coef[i] + b.coef[i];
				else
					c.coef[i] = coef[i];
			else
				if (a - 1 >= i)
					c.coef[i] = coef[i] + b.coef[i];
				else
					c.coef[i] = b.coef[i];
		}
		return c;
	}

	Polynomial operator-(Polynomial b)
	{
		double coe[200] = { 0 };
		Polynomial c(coe, std::max(a, b.a));
		for (int i = 0; i < c.a; i++)
		{
			if (a >= b.a)
				if (b.a - 1 >= i)
					c.coef[i] = coef[i] - b.coef[i];
				else
					c.coef[i] = coef[i];
			else
				if (a - 1 >= i)
					c.coef[i] = coef[i] - b.coef[i];
				else
					c.coef[i] = -b.coef[i];

		}
		return c;
	}

	Polynomial operator*(Polynomial b)
	{
		double* coe = { 0 };
		Polynomial c(coe, std::max(a, b.a));
		if (a > b.a)
		{
			for (int i = 0; i < a; i++)
			{
				for (int j = 0; j < b.a; j++)
				{
					c.coef[i] += coef[i] * b.coef[j];
				}
			}
		}
		else
		{
			for (int i = 0; i < b.a; i++)
			{
				for (int j = 0; j < a; j++)
				{
					c.coef[i] += b.coef[i] * coef[j];
				}
			}
		}
		return c;
	}

};

double evaluate(const Polynomial& poly, const double& var)
{
	int val = 0;
	for (int i = poly.a - 1; i >= 0; i--)
		val += poly.coef[poly.a - i - 1] * pow(var, i);
	return val;
}