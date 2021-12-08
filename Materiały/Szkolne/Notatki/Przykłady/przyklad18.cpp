// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Obliczanie pola prostokata

#include <iostream>

using namespace std; //Przestrzen nazw std

//Funkcja oblicza pole prostokata i zwraca je w postaci float
float rectangleArea(float a, float b) {
	return a * b;
}

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float rectangle_a, rectangle_b, rectangle_area;

	//Uzyskanie danych
	cout << "Podaj pierwszy bok prostokata: "; cin >> rectangle_a;
	cout << "Podaj drugi bok prostokata: "; cin >> rectangle_b;

	//Obliczenie pola prostokata, funkcja rectangleArea()
	rectangle_area = rectangleArea(rectangle_a, rectangle_b);

	//Wyswietlenie
	cout << "Pole prostokata o bokach " << rectangle_a << "," << rectangle_b << " wynosi " << rectangle_area;
}
