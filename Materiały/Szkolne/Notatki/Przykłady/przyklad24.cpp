// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Obliczanie pola trojkata
// **Sprawdzanie danych

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Funkcja oblicza pole trojkata
float triangleArea(float a, float b, float c)
{
	//Deklaracja zmiennych pomocniczych
	float s;

	//Obliczanie s
	s = (a + b + c) / 2;

	//Obliczanie wzorem Herona
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float triangle_a, triangle_b, triangle_c, triangle_area;

	//Uzyskanie danych
	cout << "Podaj pierwszy bok trojkata: "; cin >> triangle_a;
	cout << "Podaj drugi bok trojkata: "; cin >> triangle_b;
	cout << "Podaj trzeci bok trojkata: "; cin >> triangle_c;

	//Sprawdzanie danych
	if ((triangle_a + triangle_b > triangle_c) and (triangle_a > 0) and (triangle_b > 0) and (triangle_c > 0)) { //Sprawdzanie czy 2 boki krotsze sa dlusze razem od ostatniego, oraz sa dodatnie

		//Obliczenie pola trojkata, funkcja triangleArea()
		triangle_area = triangleArea(triangle_a, triangle_b, triangle_c);

		//Wyswietlenie
		cout << "Trojkata o bokach " << triangle_a << "," << triangle_b << "," << triangle_c << " wynosi " << triangle_area;
	}
	else cout << "Podane dane sa nieprawidlowe";
}

//Aby obliczyc pole trojkata uzyjemy wzoru Herona podanego w wykladzie
