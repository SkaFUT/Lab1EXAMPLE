#include "pch.h"

int Characteristic(double COL, int i, int** Array)
{
	int summ = 0;
	for (int j = 0; j < COL; j++)
	{
		if ((Array[i][j] < 0) && (Array[i][j] % 2 == 0))
		{
			summ = Array[i][j] + summ;
		}
	}
	return summ;
}