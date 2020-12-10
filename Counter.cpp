#include "pch.h"

int Counter(double *Array, double size)
{
	int count = 0;//счётчик чисел
	double number_C;
	cout << "Enter a number C: ";
	cin >> number_C;
	for (int i = 0; i < size; i++)
	{
		if (Array[i] > number_C)
		{
			count++;
			cout <<count<<")"<<Array[i] << endl;
		}
	}
	return count;
}