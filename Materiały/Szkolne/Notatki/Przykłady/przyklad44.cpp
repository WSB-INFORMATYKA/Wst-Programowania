// Author: Krzysztof Chowaniec
// Date: 17.12.2021
// Liczenie cyfr w tekscie

#include <iostream>
#include <stdio.h> //Wymagany naglowek do gets_s()

using namespace std;

int main()
{
	int i;

	const int length = 30;
	char text[length];
	int countOfNumber = 0;

	cout << "Wpisz text: ";

	for (i = 0; i < length - 1; ++i) {
		char c;
		c = getchar();
		if (c <= ' ') break;
		text[i] = c;

		//Sprawdzanie czy zmienna to liczba, wykorzystuje wartosci z tabeli ASCII 48 57
		if (c >= 48 && c <= 57) { countOfNumber++; }
	}
	text[i] = 0;
	cout << "Wpisales: " << text << "\n";
	cout << "Ilosc cyfr to: " << countOfNumber << "\n";
}
