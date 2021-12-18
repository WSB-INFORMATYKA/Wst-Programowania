// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Zadanie nr. 5

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program dopasowuje liczbe do przedzialu
int main()
{
    double x;

    cout << "Podaj liczbe x: "; cin >> x;

    if (x >= -5 && x <= 10.5) {
        cout << "Liczba miesci sie w przedziale";
    } else {
        cout << "Liczba jest spoza przedzialu";
    }
}
