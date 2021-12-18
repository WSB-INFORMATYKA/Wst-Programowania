// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Szukanie powtorek w tablicy

#include <iostream>

using namespace std;

int main()
{
	int wages[12];

	for (int i = 0; i < 12; i++) {
		cout << "Podaj " << i << " liczbe: "; cin >> wages[i];
	}

	for (int i = 0; i < 12; i++) {
		for (int j = i + 1; j < 12; j++) {
			if (wages[i] == wages[j]) { //Petla szuka po kazdym elemencie
				cout << "Wagi sa takie same w miesiacach " << i + 1 << " i " << j + 1 << "\n";
				goto done;
			}
		}
	}

	cout << "Kazdy miesiac jest inny";
done:;
}
