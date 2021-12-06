// Author: Krzysztof Chowaniec
// Date: 06.12.2021
// Program konwertuje Fahrenheit na Celsjusz

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float celsjus, farenheit;

	//Uzyskanie danych (farenheit)
	cout << "Temperatura w Farenheit: ";
	cin >> farenheit;

	//Konwersja na Celsjusz
	celsjus = (farenheit - 32) / 9 * 5;

	//Wyswietlenie wynikow
	cout << farenheit << "F = " << celsjus << "C\n";
}
