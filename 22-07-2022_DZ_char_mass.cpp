// 22-07-2022_DZ_char_mass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//3. Поиск и выделение
// Написать функцию, принимающую в качестве параметров две строки
// и возвращающую копию первого параметра, все вхождения второго параметра
// в которой взяты в ( ) - скобки.
// например, если параметрами были строки  "abracadabra" и "ab"
// то вернуть надо "(ab)racad(ab)ra"
//https://www.stackfinder.ru/questions/34387181/find-char-element-in-array-of-char-in-c
// https://ru.stackoverflow.com/questions/717340/%D0%9A%D0%B0%D0%BA-%D0%B8%D0%BD%D0%B8%D1%86%D0%B8%D0%B0%D0%BB%D0%B8%D0%B7%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D1%82%D1%8C-vectorchar-%D1%81%D1%82%D1%80%D0%BE%D0%BA%D0%BE%D0%B9
// Код взят отсюда
// нихрена не доделал с итераторами надо как то по другому

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string s1;
	string s2;
	s1 = "abracadabra"; // строка поиска
	s2 = "abr";         // строка искомого результата
	bool vec = false;
	int inds1 = 0;
	int inds2 = 0;
	vector<char> vec1(s1.begin(), s1.end()); // заполняем вектор s строкой поиска
	vector<char> vec2(s2.begin(), s2.end()); // заполняем вектор s2 строкой поиска
	//  используем итераторы для перебора элементов вектора
	auto iter1 = s1.begin();  // "abracadabra" получаем итератор строки поиска
	auto iter2 = s2.begin();  // "abr" получаем итератор искомого результата

	while (iter1 != s1.end())    // пока не дойдем до конца
	{
		//cout << *iter1 << endl;// получаем элементы через итератор
		if (s1[inds1] == s2[inds2] && inds1 < s1.size()) {
			for (size_t i = 0, inds2 = 0; i < 2; i++, ++inds2, ++inds1)
			{
				advance(iter2, inds2);
				advance(iter1, inds1);
				cout << *iter1 << "\t";// получаем элементы через итератор
				cout << "s1 == s2" << "\n";
			}
		}
		else break;
		inds1++;        // перемещаемся вперед на один элемент
	}
}