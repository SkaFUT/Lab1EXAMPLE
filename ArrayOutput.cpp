#include "pch.h"

void ArrayOutput(double ROW, double COL, int **Array)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << endl;
		for (int j = 0; j < COL; j++)
		{
			cout << Array[i][j] << " ";
		}
	}
}