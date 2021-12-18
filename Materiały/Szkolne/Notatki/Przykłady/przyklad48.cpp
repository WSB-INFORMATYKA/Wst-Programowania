// Author: Krzysztof Chowaniec
// Date: 18.12.2021
// Pierwiastkowanie

#include <iostream>

//Funkcja rekurencyjna, wywolujaca siebie samego
float f(float a, int n)
{
	if (n == 0) { return 1; } //Funkcja wywoluje sie az do n==0, potem rozwiazuje sie
	else
	{
		float temp = f(a, n - 1);
		return (temp * temp + a) / 2.f / temp; //Kiedy juz znajdzie n==0 wykonuje to co ma wykonac i przekazuje sobie samemu z wczesniejszej wersji
	}
}
int main()
{
	float a;
	std::cin >> a;
	std::cout << f(a,10);
	return 0;
}
