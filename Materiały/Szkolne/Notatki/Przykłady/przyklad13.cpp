// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Zamiana czasu w sekundy

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int hours, minutes, seconds;

	//Uzyskanie danych
	cout << "Podaj ile minelo godzin (0..?): "; cin >> hours;
	cout << "Podaj ile minelo minut (0..?): "; cin >> minutes;
	cout << "Podaj ile minelo sekund (0..?): "; cin >> seconds;

	seconds += (60 * 60 * hours); //Dodajemy do aktualnej liczby sekund, sekundy z liczby godzin
	seconds += (60 * minutes); //Dodajemy teraz minuty

	//Wyswietlenie wynikow
	cout << "Miniony czas w sekundach = " << seconds;
}
