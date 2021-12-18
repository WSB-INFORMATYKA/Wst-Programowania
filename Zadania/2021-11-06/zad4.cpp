// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Zadanie nr. 4

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program znajduje najmniejsza liczbe
int main()
{
    int liczba1, liczba2, liczba3, temp;

    cout << "Podaj pierwsza liczbe: "; cin >> liczba1;
    cout << "Podaj druga liczbe: "; cin >> liczba2;
    cout << "Podaj trzecia liczbe: "; cin >> liczba3;

    //Porownuje liczby
    temp = (liczba1 < liczba2) ? liczba1 : liczba2;
    temp = (temp < liczba3) ? temp : liczba3;

    cout << "Najmniejsza liczba to " << temp;
}
