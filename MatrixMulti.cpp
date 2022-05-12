// Name: ªÂ¬f§g
// Date: May 5, 2022
// Last Update: May 5, 2022
// Problem statement: This C++ program does the matrix multiplication task
#include<iostream>

using namespace std;

int main() {
	int i, j, k, j2;	// i,k = row ; j,j2 = column
	int A[50][50] = { 0 };	//initialise
	int B[50][50] = { 0 };	//initialise
	int ans[50][50] = { 0 };	//initialise

	cin >> i >> j >> j2 >> k;

	if (j != j2)
		cout << "Matrix multiplication failed." << endl;

	else
	{
		//input matrix A
		for (int m = 0; m < i; m++) 
		{
			for (int n = 0; n < j; n++) 
				cin >> A[m][n];
		}

		//input matrix B
		for (int m = 0; m < j; m++) 
		{
			for (int n = 0; n < k; n++) 
				cin >> B[m][n];
		}

		//calculate the answer
		for (int m = 0; m < i; m++)
		{
			for (int n = 0; n < k; n++)
			{
				for (int p = 0; p < j; p++) 
					ans[m][n] += A[m][p] * B[p][n];
			}
		}

		//print the answer
		for (int m = 0; m < i; m++) 
		{
			for (int n = 0; n < k; n++)
			{
				if (n != k - 1) 
					cout << ans[m][n] << " ";
				else 
					cout << ans[m][n];
			}
			cout << endl;
		}
	}
	return 0;
}