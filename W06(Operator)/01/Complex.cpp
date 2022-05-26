// Name: 祁柏君
// Date: Mar 24, 2022
// Last update: Apr 14, 2022
// Problem statement: This C++ program do the comolex number task
#include "Complex.h"
#include<math.h>
#include<iomanip>
#include <iostream>
using namespace std;

//construct a complex number where both realValue and imaginaryValue are 0. 
Complex::Complex()
{
	realValue = 0;
	imaginaryValue = 0;
}

//construct a complex number where the realValue is r and the imaginaryValue is 0.
Complex::Complex(double r)
{
	realValue = r;
	imaginaryValue = 0;
}

//construct a complex number where the realValue is r and the imaginaryValue is i.
Complex::Complex(double r, double i)
{
	realValue = r;
	imaginaryValue = i;
}

//return the realValue.
double Complex::real() {return realValue;}

//return the imaginaryValue.
double Complex::imag() {return imaginaryValue;}

double Complex::norm()
{
	return sqrt( pow(realValue, 2) + pow(imaginaryValue, 2));
}

//return the realValue of a complex number c.
//friend
double real(Complex c) {return c.realValue;}

//return the imaginaryValue of a complex number c
//friend
double imag(Complex c) {return c.imaginaryValue;}

//friend
double norm(Complex c)
{
	return sqrt(c.realValue * c.realValue + c.imaginaryValue * c.imaginaryValue);
}

//Add another complex number or a double type number.
Complex Complex::operator+(Complex c)
{
	Complex last;
	last.realValue = realValue;
	last.imaginaryValue = imaginaryValue;
	last.realValue += c.realValue;
	last.imaginaryValue += c.imaginaryValue;
	return last;
}

//Minus another complex number or a double type number.
Complex Complex::operator-(Complex c)
{
	Complex last;
	last.realValue = realValue;
	last.imaginaryValue = imaginaryValue;
	last.realValue -= c.realValue;
	last.imaginaryValue -= c.imaginaryValue;
	return last;
}

//Multiply with another complex number or a double type number.
Complex Complex::operator*(Complex c)
{
	Complex last;
	last.realValue = realValue;
	last.imaginaryValue = imaginaryValue;
	double r = last.realValue;
	last.realValue = last.realValue * c.realValue - last.imaginaryValue * c.imaginaryValue;
	last.imaginaryValue = r * c.imaginaryValue + last.imaginaryValue * c.realValue;
	return last;
}

//Divide with another complex number or a double type number.
Complex Complex::operator/(Complex c)
{
	Complex last;
	last.realValue = realValue;
	last.imaginaryValue = imaginaryValue;
	double r = last.realValue;
	last.realValue = (last.realValue * c.realValue + last.imaginaryValue * c.imaginaryValue) / (c.realValue * c.realValue + c.imaginaryValue * c.imaginaryValue);
	last.imaginaryValue = (last.imaginaryValue * c.realValue - r * c.imaginaryValue) / (c.realValue * c.realValue + c.imaginaryValue * c.imaginaryValue);
	return last;
}

//friend
Complex operator+(double d, Complex c)
{
	c.realValue += d;
	return c;
}

//friend
Complex operator-(Complex c, double d)
{
	c.realValue -= d;
	return c;
}
Complex operator-(double d, Complex c)
{
	c.realValue = d - c.realValue;
	c.imaginaryValue = 0 - c.imaginaryValue;
	return c;
}

//friend
Complex operator*(double d, Complex c)
{
	c.realValue *= d;
	c.imaginaryValue *= d;
	return c;
}

//friend
Complex operator/(Complex c, double d)
{
	c.realValue = c.realValue * d / (d * d);
	c.imaginaryValue = c.imaginaryValue * d / (d * d);
	return c;
}
Complex operator/(double d, Complex c)
{
	double temp = c.realValue;
	c.realValue = d * c.realValue / ((c.realValue * c.realValue) + (c.imaginaryValue * c.imaginaryValue));
	c.imaginaryValue = -(c.imaginaryValue * d) / ((c.imaginaryValue * c.imaginaryValue) + (temp * temp));
	return c;
}

//Judge if the real and imaginary parts of two complex numbers are equal.
//friend
bool operator==(Complex c1, Complex c2)
{
	if (c1.realValue == c2.realValue && c1.imaginaryValue == c2.imaginaryValue) {
		return true;
	}
	return false;
}

//Send complex numbers to the output stream with the format ��realValue + imaginaryValue * i��.
//friend
ostream& operator<<(ostream& strm, const Complex& c)
{
	strm << c.realValue << " + " << c.imaginaryValue << "*i";
	return strm;
}

//Get the value of a complex number from the input stream with the format ��x = realValue + imaginaryValue*i��.
//friend
istream& operator>>(istream& strm, Complex& c)
{
	char a, b, d, e, f;
	strm >> a >> b >> c.realValue >> d >> c.imaginaryValue >> e >> f;
	return strm;
}

Complex::~Complex() {}