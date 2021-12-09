// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Ukazanie porownania liczb

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int a = 5, b = 8;

	//Wyswietlenie wynikow
	cout << "A: " << a << ", B: " << b << "\n";
	cout << "Czy a jest mniejsze od b: " << (a < b) << "\n";
	cout << "Czy a jest mniejsze lub rowne od b: " << (a <= b) << "\n";
	cout << "Czy a jest wieksze od b: " << (a > b) << "\n";
	cout << "Czy a jest wieksze lub rowne od b: " << (a >= b) << "\n";
	cout << "Czy a jest rowne b: " << (a == b) << "\n";
	cout << "Czy a nie jest rowne b: " << (a != b) << "\n";
}
