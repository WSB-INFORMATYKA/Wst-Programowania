// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Min, Max 2 liczb

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Serce programu
int main()
{
	int a, b, max, min;
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;

	max = (a > b ? a : b); // A>B Tak:A, Nie:B
	min = (a < b ? a : b); //A<B Tak:A, Nie:B

	cout << "Max=" << max << ", Min=" << min;
}
