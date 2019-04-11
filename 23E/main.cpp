/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 23, Diametro de un circulo
**/

#include <iostream>
using namespace std;

int main()
{
    double d, r; // Se declaran todas las variables

    cout << "Diametro: "; // Se solicita el diametro al usuario
    cin >> d;

    r = d / 2; // Se calcula el radio

    cout << "\nResultado: " << 3.1416 * r * r; // Se hace el cálculo del area
    return 0;
}
