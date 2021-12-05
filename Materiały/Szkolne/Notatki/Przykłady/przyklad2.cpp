// Author: Krzysztof Chowaniec
// Date: 05.12.2021

#include <iostream> //Biblioteka podstawowa

//Serce programu
int main()
{
	//Deklaracja wymaganych zmiennych
	int number;

	//Uzyskanie wartosci 'number'
	std::cout << "Enter a number: ";
	std::cin >> number;

	//Wykonanie zadania, tutaj wyswietlenie liczby
	std::cout << "Your number is " << number << "\n";
