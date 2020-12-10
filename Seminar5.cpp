#include "pch.h"

void Seminar5()
{
	system("cls");
	int chouse;
	char path[64] = "FileSEM5.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "File not found.\nPress 1 to continue working: ";
		cin >> chouse;
		if (chouse == 1)
		{
			FileCreater(path);
		}
	}
	else
	{
		string line; // ������ ������ ������.
		string word = ""; // ������� ����� �� ��������.
		string longest_word = ""; // ����� ������� �����.
		int count_of_words = 0; // ���-�� ������� ����.
		getline(fin, line); // ���������� ����������� � ���������� line.
		istringstream stream(line); // �������������� �� ������ �������� � ����� ���� (aka string).

		while (stream) // ���� ���������� ����� (�� ����� �� �������� �����������).
		{
			stream >> word; // ������ �������� ����� � ���������� word.
			if (word.size() > longest_word.size()) // �������� ����� ����. ������� ������ ������ ��������?
			{
				longest_word = word; // ������ ������ �������� �����
				count_of_words = 0; // ����� ����� ������� �����? ������� ���-�� ���������� ����� �����. ���� ��� ��� ���������.
			}

			if (word == longest_word) // ������� ����� ����� ������ ��������, �� ����������� �������.
			{
				count_of_words++; // ��� �������.
			}
		}
		cout << "\nThe Word: " << longest_word << endl;
		cout << "\nCOUNT: " << count_of_words << endl;
	}
	fin.close();
	cout << "Press any key to continue: ";
	char next;
	cin >> next;
	MainMenu();
}