#include "pch.h"
double CheckSizeOfArr()
{
	bool light = true; //������� ��������� Light � ���� ����(������) ����� �������� ��� ������ � for
	static double ArraySize; //���������� ��� ������� �������
	for (; light == true;)
	{
		cout << "\nEnter the number of elements in the array: ";//������� � ����� �������
		cin >> ArraySize;
		if (ArraySize<1.0)
		{
			cout << "You entered a negative number, the array size cannot be negative./nEnter a natural number.for example: (5)";
		}
		else
		{
			if (ArraySize == (int)ArraySize)
			{
				light = false;
			}
			else
			{
				cout << "You entered a real number, the dimension of the array must be expressed as a natural number.for example: (21)";
			}
		}
	}
	return ArraySize;
}