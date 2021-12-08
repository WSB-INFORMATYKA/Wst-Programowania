// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Obliczanie zarobkow z roku po zarobkach z miesiaca

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int tab_mies[12], suma_rok = 0;

	//Uzyskanie danych
	for (int i = 0; i < 12; i++) { //Wartosci tablicy maja indeksy od 0..11
		cout << "Podaj zarobki z " << i + 1 << " miesiaca: "; cin >> tab_mies[i]; // Dajemy i+1 poniewaz liczenie jest od 0..11 a miesiace sa od 1..12
	}

	//Obliczenie zarobkow roku
	for (int i = 0; i < 12; i++) {
		suma_rok += tab_mies[i];
	}

	//Wyswietlenie
	cout << "Zarobki z calego roku = " << suma_rok;
}
