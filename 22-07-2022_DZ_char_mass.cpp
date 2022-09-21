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
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
    vector<int> num;
    setlocale(LC_ALL, "Russian");

    string str1 = "1,2,2333,    4,15, 6";

    int numRes;
    stringstream s(str1);
    while (!s.eof())
    {
        (s >> numRes).get();
        num.push_back(numRes);
    }

    for (unsigned int i = 0; i < num.size(); i++)
        cout << num[i] << endl;

    cin.get();

    return(EXIT_SUCCESS);
}