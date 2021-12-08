// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Obliczanie przekatnej prostokata

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Funkcja oblicza przekatna prostokata i zwraca je w postaci float
float rectangleDiagonal(float a, float b)
{
	//Boki podnosimy do kwadratu
	a *= a; b *= b; //a*=a odpowiada a = a*a;

	//Obliczamy i zwracamy wynik
	return sqrt(a + b); //pierwiastkujemy sume bokow podniesionych do kwadratu
}

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float rectangle_a, rectangle_b, rectangle_d;

	//Uzyskanie danych
	cout << "Podaj pierwszy bok prostokata: "; cin >> rectangle_a;
	cout << "Podaj drugi bok prostokata: "; cin >> rectangle_b;

	//Obliczenie przekatnej prostokata, funkcja rectangleDiagonal()
	rectangle_d = rectangleDiagonal(rectangle_a, rectangle_b);

	//Wyswietlenie
	cout << "Przekatna prostokata o bokach " << rectangle_a << "," << rectangle_b << " wynosi " << rectangle_d;
}

//Aby obliczyc przekatna prostokata, uzyjemy wzoru kw.a + kw.b = kw.c
