// Author: Krzysztof Chowaniec
// Date: 17.12.2021
// Liczenie slow w tekscie

#include <iostream>

using namespace std;

int main()
{
	int i;

	const int length = 30;
	char text[length];
	bool isSpace = true;
	int countOfWord = 0;

	cout << "Wpisz text: ";

	for (i = 0; i < length - 1; ++i) {
		char c;
		c = getchar();
		if (c == '&') break; //Dodajemy specjalny znak ktory zatrzyma pobieranie danych
		text[i] = c;

		//Czy spacja juz byla i pojawia sie cos co nie jest bialym znakiem
		if (isSpace && c > ' ') {
			countOfWord++; //Dodajemy jako 1 slowo i zmieniamy ze poprzedni znak to nie spacja
			isSpace = false;
		} else if (c <= ' ') { //Czy znak to bialy znak
			isSpace = true; //Zmieniamy ze pojawil sie bialy znak
		}
	}
	text[i] = 0;
	cout << "Wpisales: " << text << "\n";
	cout << "Ilosc slow to: " << countOfWord << "\n";
}

//Slowo zaczyna sie, jesli po spacji pojawia sie litera badz cyfra
