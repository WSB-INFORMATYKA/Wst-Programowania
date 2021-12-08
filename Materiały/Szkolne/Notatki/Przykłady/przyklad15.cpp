// Author: Krzysztof Chowaniec
// Date: 08.12.2021
// Dzielenie i modulo

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Wykonanie i wyswietlenie wynikow
	cout << "7/3 = " << 7 / 3 << "\n"; //Dzielac liczby calkowite otrzymasz wynik w liczbie calkowitej
	cout << "7/3. = " << 7 / 3. << "\n"; //Dzielac z jedna zmiennoprzecinkowa, wynik jest zmiennoprzecinkowy
	cout << "7%3 = " << 7 % 3 << "\n"; //Reszta z dzielenia
	cout << "(-7)%3 = " << (-7) % 3 << "\n"; //Reszta z dzielenia ujemnego, to reszta z dzielenia pomnoza przez -1
}
