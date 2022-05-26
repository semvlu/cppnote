#include "Complex.h"
int main()
{
	Complex x, y(3), z(-3.2, 2.1);
	std::cout << "x =  " << x << "y = " << y << "z = " << z << "\n";
	x = Complex(3, -4);
	y = Complex(1, -1);
	std::cout << "x =  " << x << "\n";
	std::cout << "testing members and support functions as well as"
		<< " output operator:\n"
		<< "complex number x = " << x << endl
		<< "real part: " << x.real() << endl
		<< "real part from friend real(x): " << real(x) << endl
		<< "imaginary part: " << x.imag() << endl
		<< "imaginary part from friend imag(x) : " << imag(x) << endl
		<< "norm: " << norm(x) << endl << endl;
	std::cout << "test operator ==:" << endl << endl;

	if (x == y)
		std::cout << "x = y" << endl << endl;
	else
		std::cout << "x!=y" << endl << endl;

	std::cout << "test complex arithmetic and output routines: \n\n";
	y = Complex(1, -1);
	std::cout << "x =  " << x << "y = " << y << "z = " << z << endl << endl;

	z = x + y;
	std::cout << "z = x + y = " << z << endl;
	z = x * y;
	std::cout << "z = x * y = " << z << endl;
	z = x - y;
	std::cout << "z = x - y = " << z << endl;
	z = x / y;
	std::cout << "z = x / y = " << z << endl << endl;

	double d(2.0);
	std::cout << "d: " << d << "   x: " << x << endl;
	std::cout << "x+d: ";
	z = x + d;
	std::cout << z << endl;
	z = x - d;
	std::cout << "x-d: ";
	std::cout << z << endl;
	z = x * d;
	std::cout << "x*d: ";
	std::cout << z << endl;
	z = x / d;
	std::cout << "x/d: ";
	std::cout << z << endl;

	z = d + x;
	std::cout << "d+x: ";
	std::cout << z << endl;
	z = d - x;
	std::cout << "d-x: ";
	std::cout << z << endl;
	z = d * x;
	std::cout << "d*x: ";;
	std::cout << z << endl;
	z = d / x;
	std::cout << "d/x: ";;
	std::cout << z << endl;

	Complex two(2, 0);
	std::cout << "two/x: ";
	std::cout << two / x << endl;

	std::cout << "\nGetting data from standard input: \n";
	std::cin >> x >> y;
	std::cout << "data read is: x = " << x << " y = " << y << endl << endl;
	return 0;
}