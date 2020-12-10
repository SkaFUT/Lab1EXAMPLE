#include "pch.h"

void SortArr(double* Ex_Array,double size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (Ex_Array[j]<Ex_Array[j+1])
			{
				swap(Ex_Array[j], Ex_Array[j + 1]);
			}
		}
	}
}