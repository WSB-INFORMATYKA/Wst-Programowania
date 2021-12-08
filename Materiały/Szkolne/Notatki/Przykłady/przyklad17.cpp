// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Obliczanie objetosci szescianu

#include <iostream>

using namespace std; //Przestrzen nazw std

//Funkcje umieszczamy nad funkcja main by program w funkcji main wiedzial ze taka funkcja istnieje
//Kompilator czyta z gory do dolu

float cubeVolume(float r) { //Funkcja oblicza objetosc szesciana i zwraca jako float
	return r * r * r;
}

//Serce programu
int main()
{
	//Deklaracja zmiennych
	float edge, volume;

	//Uzyskanie danych
	cout << "Podaj bok szescianu: "; cin >> edge;

	//Obliczenie objetosci szesciana, funkcja cubeVolume
	volume = cubeVolume(edge); //Zapisujemy zwracana wartosc do zmiennej

	//Wyswietlenie
	cout << "Objetosc szescianu o boku " << edge << " wynosi " << volume;
}
