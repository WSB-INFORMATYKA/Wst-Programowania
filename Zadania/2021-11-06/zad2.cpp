// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Zadanie nr. 2

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program oblicza pole prostokata
int main()
{
    double a, b;

    cout << "Podaj dlugosc boku a: "; cin >> a;
    cout << "Podaj dlugosc boku b: "; cin >> b;

    cout << "Pole prostokata wynosi: " << a * b << "\n";

    if (a == b)
    {
        cout << "Prostokat jest kwadratem" << "\n";
    }
}
