// Name: ªÂ¬f§g
// Date: Mar 24, 2022
// Last update: Apr 12, 2022
// Problem statement: This C++ program do the N dim vector task
#pragma once
#include <iostream>
#include <string>

class VecNf 
{
public:
	int dimension;
	float* value;

	//Construct a 1-D zero vector in default.
	VecNf()
	{
		dimension = 1;
		value = new float[dimension]();
	}
	// Construct a cnt-D vector using the 1st cnt num in dest.
	VecNf(float* dest, int cnt)
	{
		dimension = cnt;
		value = new float[dimension];
		for (int i = 0; i < dimension; i++) 
			value[i] = dest[i];
	}
	//Construct a new vector from a VecNf.
	VecNf(const VecNf& rhs)
	{
		dimension = rhs.dimension;
		value = new float[dimension];
		for (int i = 0; i < dimension; i++) 
			value[i] = rhs.value[i];
	}

	int Size();

	float& operator[](int i);
	void operator=(VecNf v);
	VecNf operator+(VecNf v);
	VecNf operator-(VecNf v);
	friend float operator*(VecNf v, VecNf v1);
	friend VecNf operator*(VecNf v, float f);
	friend VecNf operator*(float f, VecNf v);
	friend std::ostream& operator<<(std::ostream& strm, const VecNf& c);
};