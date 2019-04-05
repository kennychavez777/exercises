/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 18,
**/

#include <iostream>
using namespace std;

int main()
{
    double years, seg = 60 * 60 * 24 * 365;
    cout << "Edad (years old): ";
    cin >> years;
    cout << "\nSegundos: " << seg * years;

    return 0;
}
