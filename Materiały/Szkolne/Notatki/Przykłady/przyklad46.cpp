// Author: Krzysztof Chowaniec
// Date: 17.12.2021
// Zdobywanie wartosci po przecinku

#include <iostream>

using namespace std;

int main()
{
	float x;
	cout << "Wpisz liczbe zmiennoprzecinkowa: "; cin >> x;

	while (x >= 1) { --x; } //Odejmujemy 1 az dopoki wartosc nie bedzie 0.?

	cout << "Po przecinku wartosc to: " << x << "\n";
}
