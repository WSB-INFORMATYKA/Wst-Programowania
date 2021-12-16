// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Suma kwadratow liczb 1..1000

#include <iostream>

using namespace std;

int main()
{
	long suma = 0;

	for (int i = 0; i <= 1000; i++) {
		suma += i * i;
	}

	cout << "Suma kwadratow liczb 1..1000 to: " << suma << "\n";
}
