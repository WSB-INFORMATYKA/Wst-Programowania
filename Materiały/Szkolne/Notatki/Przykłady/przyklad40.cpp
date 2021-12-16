// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Srednia i odchylenie standardowe

#include <iostream>
#include <cmath>

using namespace std;

//Srednia arytmetyczna
double Srednia(int tab[10]) {
	int suma = 0;
	
	for (int i = 0; i < 10; i++) {
		suma += tab[i];
	}

	return suma / 10.0;
}

//Odchylenie standardowe
double Odchylenie(int tab[10], double srednia) {
	double suma = 0;

	for (int i = 0; i < 10; i++) {
		suma += pow(tab[i] - srednia, 2);
	}

	return sqrt(suma / 10.0);
}

int main()
{
	int tab[10];
	double srednia, odchylenie;

	for (int i = 0; i < 10; i++) {
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> tab[i];
	}

	srednia = Srednia(tab);
	odchylenie = Odchylenie(tab, srednia);

	cout << "Srednia Arytmetyczna liczb to: " << srednia << "\n";
	cout << "Odchylenie standardowe liczb to: " << odchylenie << "\n";
}

//Wykorzystano pow() i sqrt() <cmath>
