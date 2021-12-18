// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Szukanie pary z warunkiem w tablicy

#include <iostream>

using namespace std;

int main()
{
	int wages[12];

	for (int i = 0; i < 12; i++) {
		cout << "Podaj " << i + 1 << " liczbe: "; cin >> wages[i];
	}

	for (int i = 0; i < 12; i++) {
		for (int j = i + 1; j < 12; j++) {
			if (wages[i] + wages[j] == 10) { //Czy suma wynosi 10
				cout << "Liczby razem daja 10 na pozycjach " << i + 1 << " i " << j + 1 << "\n";
				goto done;
			}
		}
	}

	cout << "Zadana para nie daje 10";
done:;
}
