// Author: Krzysztof Chowaniec
// Date: 05.12.2021

#include <iostream> // <--- Podstawowa Biblioteka, bez której program się nie wykona, zawiera ona komendy takie jak 'cout' oraz 'cin'

int main() // <--- Kompilator szuka funkcji o nazwie, jest to serce programu, bez niej program sie nie odpali
{
    std::cout << "Hello World!\n"; // Wyswietlenie na konsoli Hello World! oraz przejscie do nowej linii \n
} //Jesli program dojdzie do konca funkcji main, zatrzymuje sie, jest to koniec programu

// Wszystko po koncu main nie skompiluje sie, moze tez wywola blad

//Biblioteka pozwala na uzycie programow stworzonych przez innych, ktore pomoga nam napisac wlasny
//Polecane jest uzywanie bibliotek

//Cout pozwala na wyswietlenie wartosci podanej po '<<' moze byc to napis, zmienna, liczba...
