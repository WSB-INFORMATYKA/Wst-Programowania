// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Kwadraty liczb

#include <iostream>

using namespace std;

int main()
{
	for (double i = 1.0; i < 2.1; i += 0.1) {
		cout << "Kwadrat liczby " << i << " to " << i * i << "\n";
	}
}
