#include "pch.h"

void ProductOfNumbers(double *Ex_Array, double size)
{
	double ProductOfNumbers = 1;
	bool light = false;//проверочная булевая переменная для входа в выбор одного из максимумов
	int countOfMAX = 1;//переменная будет считать количество максимумов
	int chouse;
	int chouseTEMP = 1;//временная перемнная по сути тоже самое что и переменная chouse(с англ выбор)
	for (int i = 1; i < size; i++)
	{
		if (Ex_Array[0] == Ex_Array[i])
		{
			light = true;
			countOfMAX++;
		}
	}
	if (light)
	{
		for (int i = 0; i < size; i++)
		{
			cout << Ex_Array[i] << " ";
		}
		cout << "\nChoose the number of the number we will start counting from: ";
		cin >> chouse;
		chouseTEMP = chouse-1;
		if (chouse <= countOfMAX + 1)
		{
			for (; chouseTEMP < size; chouseTEMP++)
			{
				ProductOfNumbers = Ex_Array[chouseTEMP] * ProductOfNumbers;
			}
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			ProductOfNumbers = Ex_Array[i] * ProductOfNumbers;
		}
	}

	if ((countOfMAX == size) && ((chouse == countOfMAX)))
	{
		cout << "Error. small number of elements" << endl;

	}
	else
	{
		cout << "\nElement number: " << chouse << "\nElement: " << Ex_Array[0] << fixed << setprecision(4) << "\nProduct of numbers: " << ProductOfNumbers << endl;
	}
}