#include "pch.h"

void Semenar3()
{
	system("cls");
	double size=CheckSizeOfArr();//���������� ��������� ������������ �������� ������� CheckSizeOfArr
	//���������� � ���������� �������
	double* Array = new double[size];//��� ��� �� ���������� �������� � ������� CheckSizeOfArr, �� ��� ����� ����� ��� ������������� ������� ��������(���������)
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