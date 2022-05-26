// Name: 祁柏君
// Date: Mar 24, 2022
// Last update: Mar 24, 2022
// Problem statement: This C++ program do the number game task
#include"numberGame.h"

// set the given integer A.
void NumberGame::SetInput(int a) {A = a;}

void NumberGame::ProcessInput() // splitting the integer A into several digits.
{
	int aTest = A;

	while (aTest > 0) 
	{
		aTest /= 10;
		count++;
	}

	aTest = A;

	for (int i = count - 1; i >= 0; i--)
	{
		seperate[i] = aTest % 10;
		aTest /= 10;
	}
	sort(seperate, seperate + count);
}

// set the file name of the file where list S is located.
void NumberGame::SetFileName(string name) { infile.open(name);}

void NumberGame::LoadNumberList() // read list S from the file.
{
	while (infile >> E[countE]) 
		countE++;
	sort(E, E + countE);
	infile.close();
}
void NumberGame::PrintAllValid() // print all the valid numbers in S ascendingly
{
	int whether1 = 0;
	for (int j = 0; j < count; j++)
	{
		if (seperate[j] == 1)
		{
			whether1 = 1;		
			break;
		}
	}

	for (int i = 0; i <= countE; i++) 
	{
		int chkNum = E[i];
		for (int j = count - 1; j >= 0; j--) 
		{
			if (seperate[j] != 0 && chkNum % seperate[j] == 0) 
			{
				chkNum /= seperate[j];
				if (chkNum == 1)
					break;
			}
		}
		if (chkNum == 1 && whether1 == 1) 
			cout << E[i] << '\n';
		else if (chkNum == 1 && whether1 != 1) 
		{
			if (E[i] == 1) 
				continue;
			cout << E[i] << "\n";
		}
		else 
		{
			chkNum = E[i];
			for (int j = count - 2; j >= 0; j--) 
			{
				if (seperate[j] != 0 && chkNum % seperate[j] == 0) 
				{
					chkNum /= seperate[j];
					if (chkNum == 1) 
					{
						cout << E[i] << "\n";
						break;
					}
				}
			}
		}
	}
}
void NumberGame::Reset() // reset all variables.
{
	A = 0;
	count = 0;
	countE = 0;
}