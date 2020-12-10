#include "pch.h"

void Seminar4()
{
	system("cls");

	double ROW, COL;
	do
	{
		cout << "Enter the number of rows: ";
		cin >> ROW;//вводим строки
		cout << "Enter the number of columns: ";
		cin >> COL;//вводим колонны;
	} while (CheckSizeOfArray(ROW, COL));
	
	int** Array = new int* [ROW];
	//начало объ€вление 2D массива
	for (int i = 0; i < ROW; i++)
	{
		Array[i] = new int[COL];
	}
	cout << "\nEnter the matrix:\n";
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cin >> Array[i][j];
		}
	}
	//конец объ€влени€ 2D массива

	//int NumberOfCOL = ColumNumber(ROW, COL, Array);
	if (ColumNumber(ROW, COL, Array) == 0)
	{
		cout << "\nThere is no column containing 0 in this matrix.\n";
	}
	else
	{
		cout << "\nNumber of the column where 0 was first encountered:" << ColumNumber(ROW, COL, Array) << endl;
		ColumnOutput(ROW,COL, Array);
	}
	cout << endl;
	ArraySort(ROW, COL, Array);
	ArrayOutput(ROW, COL, Array);
	cout << endl;
	delete[] Array;
	cout << "Press any key to continue: ";
	char next;
	cin >> next;
	MainMenu();
}