// Author: Krzysztof Chowaniec
// Date: 05.12.2021

#include <iostream> //Biblioteka podstawowa

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int n, m;

	//Wczytanie danych
	std::cout << "Wpisz liczbe ktora nie jest zerem: ";
	std::cin >> n;

	//Jezeli 'n' jest rowne 0 wykonaj...
	//Jesli nie wykonaj...
	if (n == 0) {
		std::cout << "Wpisales zero. Wpisz liczbe jeszcze raz: ";
		std::cin >> n;
	} else {
		std::cout << "Wpisz m:\n";
		std::cin >> m;
	}
}
