#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
void main()
{
    setlocale(LC_ALL, "Russian");
    itn decimal;
    cout << "Введите десятичное число"; cin >> decimal;
    const int n = 32;
    bool bin[n] = {};
    int i = 0;
    while (decimal)
    {
        bin[i] = decimal % 2; // младший двоичный разряд
        decimal /= 2; // убираем младший двоичный разряд


    }

