#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
#pragma warning (disable: 4996)
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU"); //Включение русского языка
	cout << "Введите слова отделённые пробелом: ";
	string str;
	getline(cin, str); //Получаем весь текст, который пользователь ввёл в консоль

	vector<string> words; //Массив слов

	//Разделение слов по пробелам, слова записываются в переменную vector<string> words
	for (char* word = strtok((char*)str.data(), " "); word != NULL; word = strtok(NULL, " "))
		words.push_back(word);

	//Спрашиваем у пользователя, что он хочет выполнить. Он должен ввести цифру от 0 до 4
	cout << "Что вы хотите выполнить?\n";
	cout << "0 - Подсчитать количество слов в тексте\n";
	//cout << "1 - проверить, есть ли в тексте заданное слово\n";
	//cout << "2 - поменять местами два слова текста с заданными номерами\n";
	//cout << "3 - вставить новое слово после указанного\n";

	int cmd;
	cin >> cmd; //Ввод цифры от 0 до 4, которое передаётся в switch

	switch (cmd)
	{
	case 0:
	{
		unsigned int count = 0; //Переменная, которая хранит значение количества слов
		for (string word : words) count++; // Подсчёт слов
		cout << "Количество слов: " << count; //Вывод в консоль количества слов
		break; //Конец работы программы
	}
	//case 1:
	//{
	//	cout << "Введите слово для поиска: ";

	//	//Ввод слова для поиска
	//	string search_word; cin >> search_word;

	//	//Перебираем все слова
	//	for (string word : words)
	//	{
	//		//Если переборное слово эквивалентно слову для поиска
	//		if (word == search_word)
	//		{
	//			//Выводим в консоль, что найдено
	//			cout << "Данное слово присутствует";

	//			//Конец работы программы
	//			return 0;
	//		}
	//	}
	//	//Выводим в консоль, что не найдено
	//	cout << "Данное слово отсутствует";

	//	//Конец работы программы
	//	break;
	//}
	//case 2:
	//{
	//	cout << "Введите номера двух слов: ";

	//	//Создаём переменные, хранящие номера двух слов
	//	int first_idx, second_idx;

	//	//Вводим номера двух слов
	//	cin >> first_idx >> second_idx;

	//	//Меняем два слова местами
	//	string first_word = words[first_idx];
	//	words[first_idx] = words[second_idx];
	//	words[second_idx] = first_word;

	//	//Вывод всех слов
	//	for (string word : words) cout << word << " ";

	//	//Конец работы программы
	//	break;
	//}
	//case 3:
	//{
	//	cout << "Введите номер слова, после которого хотите вставить слово: ";
	//	int idx;
	//	cin >> idx; //Ввод номера слова, после которого вставится слово

	//	cout << "Введите слово: ";
	//	string insert_word;
	//	cin >> insert_word; //Ввод слова, которое вставится после слова с указанным номером

	//	words.emplace(words.begin() + idx + 1, insert_word); //Вставка слова после указанного номера

	//	//Вывод всех слов
	//	for (string word : words) cout << word << " ";

	//	//Конец работы программы
	//	break;
	//}
	return 0;
}
