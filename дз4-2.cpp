/* TheTri7 Найтите все числа из промежутка[a, b], которые при возведении
в квадрат дают пальндром.*/
#include <iostream>

using namespace std;

int pal(int f)
{
	int x = f;
	int s = 0;
	while (x)
	{
		s = s * 10 + x % 10;
		x /= 10;
	}
	return f == s;
}

int main()
{
	int a, b, k;
	cin >> a >> b;
	for (a; a <= b; a++)
	{
		k = 0;
		if (pal(a * a))
			
			cout << a << endl;
		    k += 1;
	}
}
// a=48, b=101 -> 101
// a=300, b=1000 -> 307 836