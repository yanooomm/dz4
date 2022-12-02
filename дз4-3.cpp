/* TheTri15 Дано два числа X и Y в системе счисления с основанием P (2 <= P <= 9)
Написать функцию, позволяющую выполнять сложение чисел, заданных в одной и той же 
системе счисления. При сложении допускается переводить числа в десятичную 
систему счисления и обратно*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int func(int x, int y, int p)
{
    int x1 = 0;
    int k = 0;
    while (x > 0)
    {
        x1 += x % 10 * pow(p, k);
        k += 1;
        x /= 10;
    }

    int y1 = 0;
    k = 0;
    while (y > 0)
    {
        y1 += y % 10 * pow(p, k);
        k += 1;
        y /= 10;
    }
    int res = x1 + y1;
    string s;
    while (res > 0)
    {
        s += to_string(res % p);
        res /= p;
    }
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main()
{
    int x, y, p;
    cin >> x >> y >> p;
    if (x == 0 || y == 0)
    {
        cout << 0;
    }
    else
    {
        cout << func(x, y, p);
    }
}

/*
11
2606
7
2620
*/

/*
1111
1
2
10000
S*/

/*
31
3
4
100
*/