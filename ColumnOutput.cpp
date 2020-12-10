#include "pch.h"

void ColumnOutput(double ROW,double COL, int** Array)
{
	cout << "The column where 0 was first encountered: ";
	int NumberOfCOL = ColumNumber(ROW, COL, Array);
	NumberOfCOL -= 1;
	for (int i = 0; i < ROW; i++)
	{
		for (; NumberOfCOL <= NumberOfCOL;)
		{
			cout << Array[i][NumberOfCOL] << " ";
			break;
		}
	}
}