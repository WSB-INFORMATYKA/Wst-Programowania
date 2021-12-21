// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 11

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Poszukiwanie liczby w tablicy
int main()
{
    int n, target;
    int* arrayOfNumber;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    arrayOfNumber = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "tab[" << i << "] = ";
        cin >> arrayOfNumber[i];
    }

    cout << "Podaj szukana liczbe: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arrayOfNumber[i] == target) {
            cout << "Szukana liczba znajduje sie w tablicy pod indeksem:" << i << endl;
        }
    }
}
