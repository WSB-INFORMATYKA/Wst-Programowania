// Author: Krzysztof Chowaniec
// Date: 06.12.2021

#include <iostream>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	//Deklaracja zmiennych
	int a = 10, b = 3, c;

	//Dodawanie
	c = a + b;
	cout << a << " + " << b << " = " << c << "\n";

	//Odejmowanie
	c = a - b;
	cout << a << " - " << b << " = " << c << "\n";

	//Mnozenie
	c = a * b;
	cout << a << " * " << b << " = " << c << "\n";

	//Dzielenie
	c = a / b;
	cout << a << " / " << b << " = " << c << "\n";

	//Modulo
	c = a % b;
	cout << a << " % " << b << " = " << c << "\n";
}

//Wynik mozna obliczyc juz w cout
// cout << a - b;
//Rowniez dziala, nie potrzeba tworzyc zmiennej na wynik
