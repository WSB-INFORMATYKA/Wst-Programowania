// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 9

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Poszukiwanie pierwszego i ostatniego wystapienia w tablicy
int main()
{
    int numberOfDay, price, first = 0, last = 0;
    int* arrayOfDay;

    cout << "Podaj liczbe dni: ";
    cin >> numberOfDay;
    cout << "Podaj poszukiwana cene: ";
    cin >> price;

    arrayOfDay = new int[numberOfDay];

    for (int i = 0; i < numberOfDay; i++) {
        cout << "Podaj cene w dniu " << i + 1 << " : ";
        cin >> arrayOfDay[i];

        if (arrayOfDay[i] == price) {
            if (first == 0) {
                first = i + 1;
                last = first;
            }
            else
            {
                last = i + 1;
            }
        }
    }

    cout << "Pierwszy / Ostatni dzien wystapienia: ";

    if (first == 0) {
        cout << "Brak / ";
    }
    else {
        cout << first << " / ";
    }

    if (last == 0) {
        cout << "Brak";
    }
    else {
        cout << last;
    }

}
