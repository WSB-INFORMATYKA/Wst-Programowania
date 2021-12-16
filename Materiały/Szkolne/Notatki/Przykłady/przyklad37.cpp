// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Suma pierwiastkow liczb 1..1000

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double suma = 0;

	for (int i = 0; i <= 1000; i++) {
		suma += sqrt(i);
	}

	cout << "Suma pierwiastkow liczb 1..1000 to: " << suma << "\n";
}

//Zrobione za pomoca sqrt() <cmath>
