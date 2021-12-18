// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Szukanie dzielnych w tablicy

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
			if (wages[i] % wages[j] == 0 || wages[j] % wages[i] == 0) { //Czy dziela sie
				cout << "Liczby sie dziela na pozycjach " << i + 1 << " i " << j + 1 << "\n";
				goto done;
			}
		}
	}

	cout << "Nie dzieli sie zadna";
done:;
}
