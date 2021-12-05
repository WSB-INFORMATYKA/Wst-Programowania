// Author: Krzysztof Chowaniec
// Date: 05.12.2021

#include <iostream> //Biblioteka podstawowa
#include <cstdlib> //Standardowa Biblioteka C
#include <cmath> //Biblioteka matematyczna

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int number;

	std::cout << "Wprowadz dodatnia liczbe: ";
	std::cin >> number;

	//Najprostszy sposob na zrozumienie if to tlumaczenie na polski
	//Jeżeli (if) liczba(number) jest mniejsza badz rowna(<=) od zera(0) to zrób... ({ ... })
	if (number <= 0) {
		std::cout << "To nie jest dodatnia liczba";
	}
}
