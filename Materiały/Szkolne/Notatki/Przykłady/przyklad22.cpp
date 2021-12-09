// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Porownanie podanych liczb

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int a, b;

	//Uzyskanie danych
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;

	//Wyswietlenie wynikow
	cout << "A: " << a << ", B: " << b << "\n";
	cout << "Czy a jest mniejsze od b: " << (a < b) << "\n";
	cout << "Czy a jest mniejsze lub rowne od b: " << (a <= b) << "\n";
	cout << "Czy a jest wieksze od b: " << (a > b) << "\n";
	cout << "Czy a jest wieksze lub rowne od b: " << (a >= b) << "\n";
	cout << "Czy a jest rowne b: " << (a == b) << "\n";
	cout << "Czy a nie jest rowne b: " << (a != b) << "\n";
}
