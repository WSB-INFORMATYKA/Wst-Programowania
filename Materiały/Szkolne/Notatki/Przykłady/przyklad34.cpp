// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Kwadraty liczb

#include <iostream>

using namespace std;

int main()
{
	double a, b, d;

	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj d: "; cin >> d;

	for (double i = a; i <= b; i += d) {
		cout << "Kwadrat liczby " << i << " to " << i * i << "\n";
	}
}
