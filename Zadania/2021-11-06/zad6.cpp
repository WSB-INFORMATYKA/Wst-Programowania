// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 6

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Program wyswietlajacy ilosc towaru
int main()
{
    //Stan zaopatrzenia
    const int mleko = 5;
    const int chleb = 3;
    const int chrupki = 7;

    string userChoice;

    //Menu
    cout << "W magazynie znajduje sie:" << endl;
    cout << "1. Mleko" << endl;
    cout << "2. Chleb" << endl;
    cout << "3. Chrupki" << endl;

    cout << "Wybierz towar aby sprawdzic stan:" << endl;
    cin >> userChoice;

    //Niestety Switch nie przyjmuje String wiec zrobie to na IF
    if (userChoice == "1" || userChoice == "Mleko") {
        cout << "Mleko: " << mleko << " litrow";
    }
    else if (userChoice == "2" || userChoice == "Chleb") {
        cout << "Chleb: " << chleb << " sztuk";
    }
    else if (userChoice == "3" || userChoice == "Chrupki") {
        cout << "Chrupki: " << chrupki << " sztuk";
    }
    else {
        cout << "Nie ma takiej opcji";
    }
}
