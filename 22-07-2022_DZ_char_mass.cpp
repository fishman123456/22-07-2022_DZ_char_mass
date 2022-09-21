// 22-07-2022_DZ_char_mass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//3. Поиск и выделение
// Написать функцию, принимающую в качестве параметров две строки
// и возвращающую копию первого параметра, все вхождения второго параметра
// в которой взяты в ( ) - скобки.
// например, если параметрами были строки  "abracadabra" и "ab"
// то вернуть надо "(ab)racad(ab)ra"
//https://www.stackfinder.ru/questions/34387181/find-char-element-in-array-of-char-in-c
// Код взят отсюда

#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;
void show_vector(vector<string>& a_vec)
{
    for (vector<string>::iterator it = a_vec.begin(); it != a_vec.end(); ++it)
        cout  << *it << "\t";
}
//int argc, const char* argv[]

int main() {
    system("chcp 1251");
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    int val_char{ 0 };
    vector<string> myStrings{ "One", "Two", "Three" };

    // std::find()  finds the first element that matches a value
    auto it = find(begin(myStrings), end(myStrings), "Three");
    if (it != end(myStrings)) {
        val_char++;
        cout << "We found this string; do something..." << endl;
        show_vector(myStrings);
        //cout <<"\nПорядковый номер строки (считаем от нуля) :\t"<< val_char<<"\n";

    }
}