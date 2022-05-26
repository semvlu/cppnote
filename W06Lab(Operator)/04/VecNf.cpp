#include "VecNf.h"
using namespace std;

int VecNf::Size() { return dimension; }

float& VecNf::operator[](int i) { return value[i]; }

void VecNf::operator=(VecNf v)
{
	cout << "ASSIGNMENT!!!" << endl;

	dimension = v.dimension;
	value = new float[dimension];
	for (int i = 0; i < dimension; i++)
		value[i] = v.value[i];
}

VecNf VecNf::operator+(VecNf v)
{
	VecNf c;
	if (dimension != v.dimension) 
	{
		cout << "dimensions inconsistent" << endl;
		c.dimension = 0;
		c.value = new float[c.dimension]();
		return c;
	}
	else 
	{
		c.dimension = dimension;
		c.value = new float[c.dimension]();
		for (int i = 0; i < dimension; i++) 
			c.value[i] = value[i] + v.value[i];
		return c;
	}
}

VecNf VecNf::operator-(VecNf v)
{
	VecNf c;

	if (dimension != v.dimension) 
	{
		cout << "dimensions inconsistent" << endl;
		c.dimension = 0;
		c.value = new float[c.dimension]();
		return c;
	}
	else 
	{
		c.dimension = dimension;
		c.value = new float[c.dimension]();
		for (int i = 0; i < dimension; i++) 
			c.value[i] = value[i] - v.value[i];
		return c;
	}
}

float operator*(VecNf v, VecNf v1)		//float * float
{
	float c = 0;
	if (v1.dimension != v.dimension) 
	{
		cout << "dimensions inconsistent" << endl;
		return c;
	}
	else 
	{
		for (int i = 0; i < v.dimension; i++)
			c += (v.value[i] * v1.value[i]);
		return c;
	}
}

VecNf operator*(VecNf v, float f)		//vec * float
{
	VecNf c;
	c.dimension = v.dimension;
	c.value = new float[c.dimension]();
	for (int i = 0; i < v.dimension; i++) 
		c.value[i] = v.value[i] * f;
	return c;
}

VecNf operator*(float f, VecNf v)		//vec * float
{
	VecNf c;
	c.dimension = v.dimension;
	c.value = new float[c.dimension]();
	for (int i = 0; i < v.dimension; i++) 
		c.value[i] = v.value[i] * f;
	return c;
}

ostream& operator<<(ostream& strm, const VecNf& v)
{
	int dimension = v.dimension;
	for (int i = 0; i < dimension; i++)
		strm << v.value[i] << " ";
	return strm;
}