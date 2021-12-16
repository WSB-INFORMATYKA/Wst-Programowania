// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Iloczyn liczb 1..10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int iloczyn = 1;

	for (int i = 1; i <= 10; i++) {
		iloczyn *= i;
	}

	cout << "Iloczyn liczb 1..10 to: " << iloczyn << "\n";
}
