// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Program konwertuje Celsjusz na Farenheit

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float celsjus, farenheit;

	//Uzyskanie danych (farenheit)
	cout << "Temperatura w Celsjusz: ";
	cin >> celsjus;

	//Konwersja na Celsjusz
	farenheit = celsjus * 9 / 5 + 32;

	//Wyswietlenie wynikow
	cout << celsjus << "C = " << farenheit << "F\n";
}
