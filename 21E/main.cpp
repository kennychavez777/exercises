/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 21, calculo de x1 y x2
**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, x1, x2; // Declaracion de todas las variables del flujo del programa
    cout << "a: "; // Se pide A
    cin >> a;
    cout << "b: "; // Se pide B
    cin >> b;
    cout << "c: "; // Se pide C
    cin >> c;

    x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a); // Se hace el calculo de x1
    x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a); // Se hace el calculo de x2

    cout << "X1: " << x1 << endl; // Se muestra x1
    cout << "X2: " << x2 << endl; // Se muestra x2
    return 0;
}
