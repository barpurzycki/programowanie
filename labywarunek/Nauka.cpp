#include <iostream>

using namespace std;

int power(int a, int b)
{
	int wynik = a;
	if (b == 0)
	{
		return 1;
	}
	for (int i = 1; i < b; i++)
	{
		wynik *= a;
	}
	return wynik;
}

int zad12(unsigned int n, unsigned int m, unsigned int k)
{
	if (m % n == 0 && m % k == 0)
	{
		return 2;
	}
	else if (m % n == 0 || m % k == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int zad14(unsigned int a, unsigned int b, unsigned int c)
{
	int wynik = 0;
	for (int i = 3 * a + 1; i <= b; i++)
	{
		if (i % c != 0)
		{
			wynik += i;
		}
	}
	return wynik;
}


int main()
{
	/* 
	Zad 1.
	
	int a = 5;
	int b = 2;
	int c = 4;
	int d = 3;
	int x;
	cin >> x;
	float wiela = a * power(x, 3) + b * power(x, 2) + c * x + d;
	float wielb = a * power(x, 2) + b * x + c;
	cout << wiela << endl;
	cout << wielb << endl;
	*/

	/* 
	Zad 2.
	
	int rok = 0;
	cin >> rok;

	if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
	{
		cout << "Jest przestępny" << endl;
	}
	else
	{
		cout << "Nie jest przestępny" << endl;
	}
	*/

	/* 
	Zad 3.
	
	int x1;
	cin >> x1;
	int y1;
	cin >> y1;
	int wynik1;
	cin >> wynik1;
	int x2;
	cin >> x2;
	int y2;
	cin >> y2;
	int wynik2;
	cin >> wynik2;
	float w1 = (x1 * y2) - (y1 * x2);
	float w2 = (wynik1 * y2) - (y1 * wynik2);
	float w3 = (x1 * wynik2) - (wynik1 * x2);
	float x = w2 / w1;
	float y = w3 / w1;
	cout << "X wynosi: " << x << endl;
	cout << "Y wynosi: " << y << endl;
	*/

	/*
	Zad 4.

	float a;
	cin >> a;
	float b;
	cin >> b;
	float c;
	cin >> c;

	float srednia = (a + b + c) / 3;
	cout << srednia << endl;
	*/

	/*
	Zad 5.

	unsigned int n = 0;
	cin >> n;
	unsigned int m = 0;
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		cout << n * i << endl;
	}
	*/

	/* 
	Zad 6.
	
	unsigned n = 0;
	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << n << endl;
	}
	else
	{
		int fn2 = 1;
		int fn1 = 0;
		int wynik = 0;
		for (int i = 2; i <= n; i++)
		{
			wynik = fn2 + fn1;
			fn1 = fn2;
			fn2 = wynik;
		}
		cout << wynik;
	}
	*/

	/* 
	Zad 7.
	
	unsigned int n = 0;
	unsigned int m = 0;
	int wynik = 0;
	cin >> n;
	cin >> m;
	for (int i = 1; wynik < m; i++)
	{
		cout << wynik << endl;
		wynik = n * i;
	}
	*/

	/*
	Zad 8.
	
	float celsjusze = 0;
	cin >> celsjusze;
	float fahrenheity = (celsjusze * 1.8) + 32;
	float kelwiny = celsjusze + 273.15;
	cout << "Celsjusze: " << celsjusze << endl;
	cout << "Fahrenheity: " << fahrenheity << endl;
	cout << "Kelwiny: " << kelwiny << endl;
	*/

	/* 
	Zad 9.

	int n;
	cin >> n;
	if (n < 0)
	{
		cout << n * (-1) << endl;
	}
	else 
	{
		cout << n << endl;
	}
	*/

	/*
	Zad 10.

	int n, m;
	cin >> n;
	cin >> m;
	if (n < 0)
	{
		n = n * (-1);
	}
	if (m < 0)
	{
		m = m * (-1);
	}

	if (n > m)
	{
		cout << n << endl;
	}
	else
	{
		cout << m << endl;
	}
	*/

	/*
	Zad 11.

	int a, b, x;
	cin >> a;
	cin >> b;
	if (a != 0)
	{
		x = (b / a) * (-1);
		cout << x << endl;
	}
	else if (a == 0 && b != 0)
	{
		cout << "Nie ma miejsc zerowych" << endl;
	}
	else if (a == 0 && b == 0)
	{
		cout << "Ma nieskończenie wiele rozwiązań" << endl;
	}
	*/

	//Zad 12.

	//cout << zad12(4, 6, 3);

	/*
	Zad 13.

	unsigned int n;
	int pom;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (power(3, i) < n)
		{
			pom = power(3, i);
		}
	}
	cout << pom << endl;
	*/

	//Zad 14.
	
	//cout << zad14(1, 10, 2) << endl;
	//cout << zad14(3, 18, 2) << endl;

	

}
