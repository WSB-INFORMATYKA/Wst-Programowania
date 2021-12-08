// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Srednia 3 liczb

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float zmienna_a, zmienna_b, zmienna_c, srednia;

	//Uzyskanie danych
	cout << "Podaj 3 zmienne: \n";
	cin >> zmienna_a; cin >> zmienna_b; cin >> zmienna_c;

	//Obliczanie sredniej
	srednia = (zmienna_a + zmienna_b + zmienna_c) / 3.;

	//Wyswietlenie wynikow
	cout << "Srednia = " << srednia;
}
