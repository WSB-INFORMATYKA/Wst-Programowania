// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Pierwiastki od 1 do 10*

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

int main()
{
	//Petla drukujaca pierwiastki
	for (int i = 1; i <= 10; i++) {
		cout << "Pierwiastek liczby " << i << " to: " << sqrt(i) << "\n";
	}
}

//* z uzyciem funkcji sqrt()
