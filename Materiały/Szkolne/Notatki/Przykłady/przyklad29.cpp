// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Dni tygodnia

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

int main()
{
	int choice;
	cout << "Podaj dzien tygodnia: "; cin >> choice;

	switch (choice) {
	case 1:
		cout << "Poniedzialek"; break;
	case 2:
		cout << "Wtorek"; break;
	case 3:
		cout << "Sroda"; break;
	case 4:
		cout << "Czwartek"; break;
	case 5:
		cout << "Piątek"; break;
	case 6:
		cout << "Sobota"; break;
	case 7:
		cout << "Niedziela"; break;
	default:
		cout << "Nie ma takiego dnia tygodnia";
	}
}
