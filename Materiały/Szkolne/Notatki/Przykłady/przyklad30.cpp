// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Numer miesiaca

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

int main()
{
	int choice;
	cout << "Podaj numer miesiaca: "; cin >> choice;

	switch (choice) {
	case 1:
		cout << "Styczen"; break;
	case 2:
		cout << "Luty"; break;
	case 3:
		cout << "Marzec"; break;
	case 4:
		cout << "Kwiecien"; break;
	case 5:
		cout << "Maj"; break;
	case 6:
		cout << "Czerwiec"; break;
	case 7:
		cout << "Lipiec"; break;
	case 8:
		cout << "Sierpien"; break;
	case 9:
		cout << "Wrzesien"; break;
	case 10:
		cout << "Pazdziernik"; break;
	case 11:
		cout << "Listopad"; break;
	case 12:
		cout << "Grudzien"; break;
	default:
		cout << "Nie ma takiego numeru miesiaca";
	}
}
