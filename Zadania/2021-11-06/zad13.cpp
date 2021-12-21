// Author: Krzysztof Chowaniec
// Date: 21.12.2021
// Zadanie nr. 13

//Napisane na: Visual Studio 2019
//Testowane na: www.replit.com

#include <iostream>

using namespace std;

//Wyswietla stan produktow
void StanProduktu(const string nameTab[5], int amountTab[5], double priceTab[5]);
//Dodaje Produkt
void DodajProdukt(const string nameTab[5], int amountTab[5]);
//Odejmuje Produkt
void OdejmijProdukt(const string nameTab[5], int amountTab[5]);
//Ustawia Cene Produktu
void UstawCeneProduktu(const string nameTab[5], double priceTab[5]);
//Oblicza wartosc magazynu
void WartoscMagazynu(int amountTab[5], double priceTab[5]);

//Wlasny program, Zarzadzanie magazynem, wersja okrojona
int main()
{
    const string NameOfProduct[5] = { "Chleb", "Maslo", "Marchewka", "Jablko", "Banan" };
    int AmountOfProduct[5] = { 10, 5, 24, 16, 7 };
    double PriceOfProduct[5] = { 3.50, 1.20, 0.10, 0.05, 0.50 };
    int UserChoice = 0;

    //Glowna Petla
    do
    {
        //Menu Wyboru
        cout << "Wybierz co chcesz zrobic" << endl;
        cout << "1. Zobacz stan produktow" << endl;
        cout << "2. Dodaj produkty" << endl;
        cout << "3. Odejmij produkty" << endl;
        cout << "4. Zmien cene produktu" << endl;
        cout << "5. Zobacz wartosc magazynu" << endl;
        cout << "9. Zamknij program" << endl;

        cin >> UserChoice;

        switch (UserChoice)
        {
        case 1:
            StanProduktu(NameOfProduct, AmountOfProduct, PriceOfProduct);
            break;
        case 2:
            DodajProdukt(NameOfProduct, AmountOfProduct);
            break;
        case 3:
            OdejmijProdukt(NameOfProduct, AmountOfProduct);
            break;
        case 4:
            UstawCeneProduktu(NameOfProduct, PriceOfProduct);
            break;
        case 5:
            WartoscMagazynu(AmountOfProduct, PriceOfProduct);
            break;
        case 9:
            break;
        default:
            cout << "Zla opcja" << endl;
        }
    } while (UserChoice != 9);

}

void StanProduktu(const string nameTab[5], int amountTab[5], double priceTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << nameTab[i] << ": " << amountTab[i] << " szt. Za " << priceTab[i] << " zl" << endl;
    }
    cout << endl;
}

void DodajProdukt(const string nameTab[5], int amountTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    int amount;
    cout << "Do ktorego produktu dodac?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Ile dodac produktu?: ";
        cin >> amount;

        amountTab[userChoice] += amount;
        cout << "Aktualnie jest: " << amountTab[userChoice] << endl;
    }
    cout << endl;
}


void OdejmijProdukt(const string nameTab[5], int amountTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    int amount;
    cout << "W ktorym produkcie zmniejszyc ilosc?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Ile odjac produktu?: ";
        cin >> amount;

        if (amountTab[userChoice] >= amount) {
            amountTab[userChoice] -= amount;
            cout << "Aktualnie jest: " << amountTab[userChoice] << endl;
        }
        else {
            cout << "Nie da sie tyle odjac" << endl;
        }
    }
    cout << endl;
}

void UstawCeneProduktu(const string nameTab[5], double priceTab[5])
{
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << ". " << nameTab[i] << endl;
    }

    int userChoice;
    double price;
    cout << "W ktorym produkcie ustawic nowa cene?: ";
    cin >> userChoice;

    //Sprawdzenie czy id jest poprawne
    if (userChoice <= 4, userChoice >= 0) {
        cout << "Jaka ustawic cene?: ";
        cin >> price;

        priceTab[userChoice] = price;
        cout << "Aktualnie jest: " << price << endl;
    }
    cout << endl;
}

void WartoscMagazynu(int amountTab[5], double priceTab[5])
{
    cout << endl;

    double sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += (amountTab[i] * priceTab[i]);
    }

    cout << "Wartosc magazynu to " << sum << endl;

    cout << endl;
}
