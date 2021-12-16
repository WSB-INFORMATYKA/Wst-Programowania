// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Dni miesiaca

#include <iostream>

using namespace std; //Przestrzen nazw std

int main()
{
	int choice;
	cout << "Podaj numer miesiaca: "; cin >> choice;

	switch (choice) {
	case 1:
		cout << "31 dni"; break;
	case 2:
		cout << "28 dni"; break;
	case 3:
		cout << "31 dni"; break;
	case 4:
		cout << "30 dni"; break;
	case 5:
		cout << "31 dni"; break;
	case 6:
		cout << "30 dni"; break;
	case 7:
		cout << "31 dni"; break;
	case 8:
		cout << "31 dni"; break;
	case 9:
		cout << "30 dni"; break;
	case 10:
		cout << "31 dni"; break;
	case 11:
		cout << "30 dni"; break;
	case 12:
		cout << "31 dni"; break;
	default:
		cout << "Nie ma takiego numeru miesiaca";
	}
}
