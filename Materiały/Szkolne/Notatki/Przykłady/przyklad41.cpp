// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Srednia i odchylenie standardowe

#include <iostream>
#include <cmath>

using namespace std;

//Srednia arytmetyczna
double Srednia(int tab[], double n) {
	int suma = 0;
	
	for (int i = 0; i < n; i++) {
		suma += tab[i];
	}

	return suma / n;
}

//Odchylenie standardowe
double Odchylenie(int tab[], double srednia, double n) {
	double suma = 0;

	for (int i = 0; i < n; i++) {
		suma += pow(tab[i] - srednia, 2);
	}

	return sqrt(suma / n);
}

int main()
{
	int* tab;
	double srednia, odchylenie, n;

	cout << "Podaj ilosc liczb: "; cin >> n;

	//Dynamiczna tablica
	tab = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> tab[i];
	}

	srednia = Srednia(tab, n);
	odchylenie = Odchylenie(tab, srednia, n);

	delete[] tab; //Usuniecie tablicy

	cout << "Srednia Arytmetyczna liczb to: " << srednia << "\n";
	cout << "Odchylenie standardowe liczb to: " << odchylenie << "\n";
}

//Wykorzystano pow() i sqrt() <cmath>
