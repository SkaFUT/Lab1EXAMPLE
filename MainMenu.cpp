#include "pch.h"

void MainMenu()
{
	system("cls");

		int menu = 0;
		cout << "Select the workshop number\nSeminar3-3\nSeminar4-4\nSeminar5-5\nExit-0\n\nEnter the number: ";
		cin >> menu;
		switch (menu)
		{
		case 3:
			Semenar3();
			break;
		case 4:
			Seminar4();
			break;
		case 5:
			Seminar5();
			break;
		case 0:
			break;
		default:
			cout << "You enter a wrong symbol. You can enter only (3)(4)(5)(0)\n" << endl;
			break;
		}

}