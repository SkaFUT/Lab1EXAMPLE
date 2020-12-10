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
		string line; // Создаём пустую строку.
		string word = ""; // Текущее слово на проверку.
		string longest_word = ""; // Самое длинное слово.
		int count_of_words = 0; // Кол-во длинных слов.
		getline(fin, line); // Записываем предложения в переменную line.
		istringstream stream(line); // Преобразование из потока символов в поток слов (aka string).

		while (stream) // Пока существует слово (не вышли из пределов предложения).
		{
			stream >> word; // Запись текущего слова в переменную word.
			if (word.size() > longest_word.size()) // Проверка длины слов. Текущее больше самого длинного?
			{
				longest_word = word; // Запись самого длинного слова
				count_of_words = 0; // Нашли новое длинное слово? Обнулим кол-во повторений этого слова. Пока что оно уникально.
			}

			if (word == longest_word) // Текущее слово равно самому длинному, то увеличиваем счётчик.
			{
				count_of_words++; // Сам счётчик.
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