// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Uklady rownan

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	int a, b, c, d, e, f;
	float x, y;

	cout << "ax + by = c\n";
	cout << "dx + ey = f\n";
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj c: "; cin >> c;
	cout << "Podaj d: "; cin >> d;
	cout << "Podaj e: "; cin >> e;
	cout << "Podaj f: "; cin >> f;

	//Obliczanie X, Y
	x = (c * e - b * f) / (a * e - b * d);
	y = (a * f - c * d) / (a * e - b * d);

	cout << "Wynik to: X=" << x << ", Y=" << y << "\n";
}

//Do rozwiazania zostal uzyty wzor Cramera
