/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 8, intercambio de valores
**/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;
    c = 0;

    cout << "\n\nVariable A: " << a << "\nVariable B: " << b;

    return 0;
}
