// Author: Krzysztof Chowaniec
// Date: 06.12.2021

//Poleca sie napisac date i autora kodu

#include <iostream> //Biblioteki powinny znajdowac sie na samej gorze
#include <cmath>  //Poukladane obok siebie

//Serce programu
int main()
{
	//Najpierw powinny sie znajdowac deklaracje zmiennych oraz czasem ich inicjalizacje*
	int zmienna1 = 0;
	int tablica[1];

	//Nastepnie poleca sie grupowac kod na kroki na przyklad

	//Zczytanie zmiennej*
	std::cout << "Podaj liczbe int: ";
	std::cin >> zmienna1;

	//Dzialania na zmiennej*
	zmienna1 = zmienna1 + 10;

	//Sprawdzenie wartosci zmiennej pod danym warunkiem
	if (zmienna1 > 10) {
		std::cout << "Tak\n";
	} else std::cout << "Nie\n";
}

//Kod powinien byc dobrze opisany komentarzami, lecz nie warto opisywac cos co jest proste do zrozumienia na przyklad komentarze z * ktore napisalem, sa zbedne bo wyraznie widac co sie tam dzieje
