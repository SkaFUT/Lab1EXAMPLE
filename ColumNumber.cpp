#include "pch.h"

int ColumNumber(double ROW ,double COL, int** Array)
{
	bool light = true;
	int ColonnaNumber = 0;
	for (int i = 0; i < ROW; i++)
	{
		if (light)
		{
			for (int j = 0; j < COL; j++)
			{
				if (Array[i][j] == 0)
				{
					ColonnaNumber = j + 1;
					light = false;
					break;
				}
			}
		}
	}
	return ColonnaNumber;
}