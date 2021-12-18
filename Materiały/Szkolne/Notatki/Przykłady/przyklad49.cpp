// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Szukanie dzielnika w tablicy

#include <iostream>

using namespace std;

int main()
{
	int tab[10], pointer;
	
	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i << " liczbe: ";
		cin >> tab[i];
	}

	for (int i = 0; i < 10; i++) {
		if (tab[9] % tab[i] == 0) { pointer = i; break; }
	}

	cout << "Liczba dzielaca ostatna liczbe to: " << pointer << "\n";
}
