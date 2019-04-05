/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 10, calculo de promedio
**/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3; // Se declaran parametros a utilizar en todo el flujo del proyecto

    cout << "Promedio";
    cout << "\nNota 1: ";
    cin >> n1; // Se pide la nota 1
    cout << "Nota 2: ";
    cin >> n2; // Se pide la nota 2
    cout << "Nota 3: ";
    cin >> n3; // Se pide la nota 3

    cout << "\n\nPromedio: " << (n1 + n2 + n3) / 3; // Se calcula el promedio de las 3 notas
    return 0;
}
