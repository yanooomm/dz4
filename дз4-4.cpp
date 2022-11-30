﻿/* MinMax24 Дано целое число n > 1 и набор из n чисел. Найти наибольшую сумму двух соседних чисел.*/
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 0, b = 0, sum = 0;
    int n, i;
    cout << "Введите количество элементов: ";
    cin >> n;
    cin >> a;
    int maxsum = 0;
    for (i = 1; i < n; i++)
    {
        cin >> b;
        sum = a + b;
        if (maxsum < sum)
            maxsum = sum;
        a = b;
    }
       
    cout << "Максимальная сумма двух соседних чисел: " << maxsum;
}

/*
Введите количество элементов: 5
1
2
3
4
5
Максимальная сумма двух соседних чисел: 9
*/

/*
Введите количество элементов: 7
12
43
6
5
23
323
5
Максимальная сумма двух соседних чисел: 346
*/