// Author: Krzysztof Chowaniec
// Date: 09.12.2021
// Obliczanie wynikow rownania kwadratowego

#include <iostream>
#include <cmath>

using namespace std; //Przestrzen nazw std

//Funkcja obliczajaca Delte
double getDelta(int a, int b, int c) {
	return pow(b, 2) - 4 * a * c; //Delta = B do kw - 4AC;
}

//Serce programu
int main()
{
	int a, b, c;
	double delta, x1, x2;

	cout << "ax2 + bx + c = 0\n";
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj c: "; cin >> c;

	delta = getDelta(a, b, c);

	if (delta < 0) { //Brak rozwiazan
		cout << "Wzor nie ma rozwiazan\n";
	}
	else if (delta == 0) { //1 rozwiazanie
		x1 = (-b) / (2 * a);
		cout << "Jedyne rozwiazanie to " << x1 << "\n";
	}
	else { //2 rozwiazania
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "Rozwiazania to " << x1 << ", " << x2 << "\n";
	}
}
