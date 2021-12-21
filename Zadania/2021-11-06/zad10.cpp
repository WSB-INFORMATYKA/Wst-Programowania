// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 10

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Znajdowanie najwiekszej i najmniejszej liczby w tablicy
int main()
{
    int n, max, min;
    int* arrayOfNumber;

    cout << "Podaj wielkosc tablicy: ";
    cin >> n;

    arrayOfNumber = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Podaj element a[" << i + 1 << "]: ";
        cin >> arrayOfNumber[i];

        //Pierwsze obieg
        if (i == 0) {
            max = min = arrayOfNumber[i];
        }
        else if (max < arrayOfNumber[i]) {
            max = arrayOfNumber[i];
        }
        else if (min > arrayOfNumber[i]) {
            min = arrayOfNumber[i];
        }
    }

    cout << "Najmniejszy element w tablicy to " << min << endl;
    cout << "Najwiekszy element w tablicy to " << max;

}
