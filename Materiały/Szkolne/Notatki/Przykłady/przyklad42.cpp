// Author: Krzysztof Chowaniec
// Date: 16.12.2021
// Dzialanie gets_s()

#include <iostream>
#include <stdio.h> //Wymagany naglowek do gets_s()

using namespace std;

int main()
{
	const int length = 30; //const oznacza ze liczba jest stala, nie mozna jej zmienic
	char text[length];

	cout << "Wpisz text: ";
	gets_s(text); //Uzywam gets_s poniewaz nie moge znalezc gets

	cout << "Wspisales \"" << text << "\"\n";
}
