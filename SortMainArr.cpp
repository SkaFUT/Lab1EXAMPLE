#include "pch.h"
void SortMainArr(double* Array, double size)
{
	for (int i = 0; i < size; i++)
	{
		if (Array[i] < 0)
		{
			cout << fixed << setprecision(2) << Array[i] << " ";
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (Array[j] >= 0)
		{
			cout << fixed << setprecision(2) << Array[j] << " ";
		}
	}
}