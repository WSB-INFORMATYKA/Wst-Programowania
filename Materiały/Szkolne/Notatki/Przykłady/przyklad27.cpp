// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Wartosc Bezwzgledna

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	int value;
	cout << "Podaj wartosc: "; cin >> value;

	value = (value >= 0 ? value : -value); //Czy wartosc jest wieksza lub rowna 0, tak: value, nie: -value

	cout << "Wartosc absolutna wartosci to " << value;
}
