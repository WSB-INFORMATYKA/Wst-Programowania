// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Zwieksza liczbe o 1

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int zmienna_a;

	//Uzyskanie danych
	cout << "Podaj liczbe: "; cin >> zmienna_a;

	//Wyswietlenie wynikow i wykonanie
	cout << "Liczba + 1 = " << ++zmienna_a; // Uzywamy preinkrementacji by osczedzic linii kodu i wykonac powiekszenie o 1 w tej samej co wyswietlenie
}
