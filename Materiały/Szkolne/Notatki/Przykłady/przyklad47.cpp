// Author: Krzysztof Chowaniec
// Date: 17.12.2021
// Uzyskanie specjalnej wartosci

#include <iostream>

using namespace std;

int main()
{
	float x;

	do {
		cout << "Podaj liczbe 0<x<1: "; cin >> x;
	} while (x<=0 || x>=1);

	cout << "Twoja wartosc to: " << x << "\n";
}
