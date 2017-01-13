/* Cracking the Coding Interview
 * Problem 1.7
 * Elijah Verdoorn
 * 1/9/17
 */

#include <iostream>
using namespace std;

int& rotateMatrix(int* (*mat), int size)
{
	int rotated[size][size];
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			rotated[size - i][j] = mat[i - 1][j];
		}
	}
	return &rotated;
}

int main()
{
	int size = 3;
	int test1[size][size];
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			test1[i][j] = count;
			count++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << test1[i][j];
		}
		cout << endl;
	}
	int* out = rotateMatrix(test1, size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << out[i][j];
		}
		cout << endl;
	}
}
	
