/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 6, calcular superficie de un triangulo
**/

#include <iostream>
using namespace std;

int main()
{
    double base, height; // Se declaran parametros a utilizar en todo el flujo

    cout << "Calcular superficie de un triangulo" << endl;
    cout << "Base: "; // Se pide la base
    cin >> base;
    cout << "Altura: "; // Se pide la altura
    cin >> height;

    cout << "\nSuperficie: " << 0.5 * base * height; // Se calcula la superficie del trafico
    return 0;
}
