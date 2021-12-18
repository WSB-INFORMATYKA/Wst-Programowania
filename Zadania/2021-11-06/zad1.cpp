// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Zadanie nr. 1

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program pobiera dwa dane i wykonuje na nich obliczenia
int main()
{
    int x, y, wynik;

    cout << "Podaj liczbe x: "; cin >> x;
    cout << "podaj liczbe y: "; cin >> y;

    wynik = x - y;
    cout << "Wynik x - y = " << wynik << "\n";

    wynik *= 2;
    cout << "Wynik * 2 = " << wynik << " oraz wiekszy o 5 = " << wynik + 5 << "\n";
}
