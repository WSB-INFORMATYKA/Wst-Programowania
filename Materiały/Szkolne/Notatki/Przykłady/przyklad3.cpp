// Author: Krzysztof Chowaniec
// Date: 05.12.2021

#include <iostream> //Biblioteka podstawowa
#include <cstdlib> //Standardowa Biblioteka C
#include <cmath> //Biblioteka matematyczna

//Serce programu
int main()
{
	///cstdlib

	//Deklaracja zmiennych
	char zmienna1[] = "12.5";
	char zmienna2[] = "12";

	//Funkcja atof() zamiana tablicy znakow(char[]) na liczbe z przecinkiem(double)
	std::cout << atof(zmienna1) << '\n';

	//Funkcja atoi() zamiana tablicy znakow(char[]) na liczbe(int)
	std::cout << atoi(zmienna1) << '\n';

	///cmath

	//Deklaracja zmiennych
	double zmienna3 = 12.1;
	double zmienna4 = -10;
	double zmienna5 = 5;

	//Funkcja ceil() liczby zaokraglanie do gory
	std::cout << "Liczba " << zmienna3 << " zaokraglona do " << ceil(zmienna3) << '\n';

	//Funkcja abs() wyswietlaja wartosc absolutna(nieujemna)
	std::cout << "Wartosc absolutna liczby " << zmienna4 << " to " << abs(zmienna4) << '\n';

	//Funkcja pow() potegujaca liczbe
	std::cout << "3 potega liczby " << zmienna5 << " to " << pow(zmienna5, 3) << '\n';

	//Radze nie uzywac tych funkcji w zadaniach domowych !!
}
