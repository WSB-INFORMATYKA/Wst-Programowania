// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 7

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Sprawdzanie parzystosci tablicy
int main()
{
    int tablica[5];

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe: ";
        cin >> tablica[i];
    }

    cout << "Wyswietlam dane o liczbach w tablicy: " << endl;
    for (int i = 0; i < 5; i++) {
        if (tablica[i] < 0) {
            cout << "-";
        }
        if (tablica[i] % 2 == 0) {
            cout << "parzysta, ";
        }
        else
        {
            cout << "nieparzysta, ";
        }
    }
}
