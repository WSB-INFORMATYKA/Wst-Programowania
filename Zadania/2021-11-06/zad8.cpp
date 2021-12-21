// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 8

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Prosty kalkulator
int main()
{
    //Z powodu ze modulo przyjmuje tylko int, uzyje wiec tylko int
    int a, b;
    char operationChoice;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Podaj znak (+,-,*,/,%): ";
    cin >> operationChoice;

    switch (operationChoice)
    {
    case '+':
        cout << "Suma liczb " << a << " i " << b << " wynosi: " << a + b;
        break;
    case '-':
        cout << "Roznica liczb " << a << " i " << b << " wynosi: " << a - b;
        break;
    case '*':
        cout << "Iloczyn liczb " << a << " i " << b << " wynosi: " << a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "Przez zero sie nie dzieli";
        }
        else
        {
            cout << "Iloraz liczb " << a << " i " << b << " wynosi: " << a / b;
        }
        break;
    case '%':
        cout << "Modulo liczb " << a << " i " << b << " wynosi: " << a % b;
        break;
    default:
        cout << "Zla opcja";
    }
}
