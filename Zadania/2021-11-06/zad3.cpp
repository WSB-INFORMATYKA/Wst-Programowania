// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Zadanie nr. 3

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program oblicza sprawdza parzystosc liczb
int main()
{
    int x, y;

    cout << "Podaj liczbe x: "; cin >> x;
    cout << "Podaj liczbe y: "; cin >> y;

    //Czy X jest parzysta
    if (x % 2 == 0) {
        cout << "Liczba x = " << x << " jest parzysta!" << endl;
    }

    //Czy Y jest parzysta
    if (y % 2 == 0) {
        cout << "Liczba y = " << y << " jest parzysta!" << endl;
    }
}
