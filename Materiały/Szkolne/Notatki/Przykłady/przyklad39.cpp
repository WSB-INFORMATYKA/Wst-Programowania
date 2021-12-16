// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Silnia liczby n

#include <iostream>
#include <cmath>

using namespace std;

//Silnia
long Silnia(int n) {
	long iloczyn = 1;
	for (int i = 1; i <= n; i++) {
		iloczyn *= i;
	}

	return iloczyn;
}

int main()
{
	int n;
	cout << "Podaj n: "; cin >> n;

	cout << "Silnia liczby n to: " << Silnia(n) << "\n";
}
