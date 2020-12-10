#include "pch.h"

void Semenar3()
{
	system("cls");
	double size=CheckSizeOfArr();//переменна€ принимает возвращ€емое значение функции CheckSizeOfArr
	//объ€вление и заполнение массива
	double* Array = new double[size];//так как мы возвращаем значение в функции CheckSizeOfArr, то при таком вводе это эквивалентнно обыному хначению(перемнной)
	double* Ex_Array = new double[size];
	cout << "\nEnter the numbers themselves: ";
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
		Ex_Array[i] = fabs(Array[i]);
	}
	cout << "Number of elements large C: " << Counter(Array,size) << endl;
	SortArr(Ex_Array, size);
	ProductOfNumbers(Ex_Array, size);
	SortMainArr(Array, size);
	cout << endl;
	delete[] Array;
	delete[] Ex_Array;
	cout << "Press any key to continue: ";
	char next;
	cin >> next;
	MainMenu();
}