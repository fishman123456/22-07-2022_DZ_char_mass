// 22-07-2022_DZ_char_mass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//3. Поиск и выделение
// Написать функцию, принимающую в качестве параметров две строки
// и возвращающую копию первого параметра, все вхождения второго параметра
// в которой взяты в ( ) - скобки.
// например, если параметрами были строки  "abracadabra" и "ab"
// то вернуть надо "(ab)racad(ab)ra"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {

    vector<string> myStrings{ "One", "Two", "Three" };

    // std::find()  finds the first element that matches a value
    auto it = find(begin(myStrings), end(myStrings), "Two");
    if (it != end(myStrings)) {
        cout << "We found this string; do something..." << endl;
    }
}