#include "pch.h"

void ArraySort(double ROW, double COL, int** Array)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int i = 0; i < ROW - 1; i++)
		{

			int* _tempArr = new int[COL]; // ��������� ������-������.
			int _tempChar = Characteristic(COL, i, Array); // ���-�� ������.

			if (_tempChar > Characteristic(COL, i + 1, Array))
			{
				for (int j = 0; j < COL; j++)
				{
					_tempArr[i] = Array[i][j];
					Array[i][j] = Array[i + 1][j];
					Array[i + 1][j] = _tempArr[i];
				}
			}
		}
	}
}