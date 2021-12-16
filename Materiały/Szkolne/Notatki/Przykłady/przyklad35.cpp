// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Elementy podanego wzoru

#include <iostream>

using namespace std;

int main()
{
	cout << "Elementy to: ";
	for (int i = 1; i <= 7; i++) {
		cout << 1.0 / (i * i + 1) << ", ";
	}
	cout << "\n";
}
