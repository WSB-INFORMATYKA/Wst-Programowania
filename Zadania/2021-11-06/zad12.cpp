// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 12

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Dzialania w tablicy
int main()
{
    int arrayOfNumber[10];
    int sum = 0, min, max, dodatnie = 0, ujemne = 0, countOfZero = 0;
    double average;

    cout << "Wprowadz elementy tablicy o 10 elementach" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = ";
        cin >> arrayOfNumber[i];

        sum += arrayOfNumber[i];

        //Pierwszy obieg
        if (i == 0) {
            min = max = arrayOfNumber[i];
        }
        else if (min > arrayOfNumber[i]) {
            min = arrayOfNumber[i];
        }
        else if (max < arrayOfNumber[i]) {
            max = arrayOfNumber[i];
        }

        if (arrayOfNumber[i] > 0) {
            ++dodatnie;
        }
        else if (arrayOfNumber[i] < 0) {
            ++ujemne;
        }
        else {
            ++countOfZero;
        }
    }

    average = sum / 10.0;

    cout << "Suma elementow tablicy: " << sum << endl;
    cout << "Srednia elementow tablicy: " << average << endl << endl;
    cout << "Min to: " << min << endl;
    cout << "Max to: " << max << endl << endl;
    cout << "W tablicy jest " << dodatnie << " liczb dodatnich" << endl;
    cout << "W tablicy jest " << ujemne << " liczb ujemnych" << endl;
    cout << "W tablicy jest " << countOfZero << " zer";

}
