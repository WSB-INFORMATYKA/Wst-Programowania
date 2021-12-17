// Author: Krzysztof Chowaniec
// Date: 17.12.2021
// Przetwarzanie tekstu

#include <iostream>
#include <stdio.h> //Wymagany naglowek do gets_s()

using namespace std;

int main()
{
	int i;

	const int length = 30; //const oznacza ze liczba jest stala, nie mozna jej zmienic
	char text[length];

	cout << "Wpisz text: ";

	for (i = 0; i < length - 1; ++i) { //Petla pobierajaca znaki
		char c;
		c = getchar(); //Funkcja pobiera jeden znak i zapisuje w zmiennej c
		if (c <= ' ') break; //Jesli znakiem jest bialy znak lub mniejsza wartosc przerywa zczytywanie, prosze zajrzec na tablice ASCII
		text[i] = c; //Zapisuje w odpowiednim slocie znak
	}
	text[i] = 0;
	cout << "Wpisales: " << text << "\n";
	cout << "Inverted: ";
	for (int j = i; j >= 0; --j) { //Wyswietla tablice od tylu
		cout << text[j];
	}
	cout << "\n";
}
