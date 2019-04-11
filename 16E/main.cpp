/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 16, distancia entre 2 puntos
**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, y, a, b, result; // Declaración de variables a utilizar en todo el flujo del programa

    cout << "x: "; // Se pide x
    cin >> x;

    cout << "y: "; // Se pide y
    cin >> y;

    cout << "A: "; // Se pide A
    cin >> a;
    cout << "B: "; // Se pide B
    cin >> b;

    result = sqrt(pow(((b * y) - (a * y)), 2) + pow(((b * x) - (a * x)), 2)); // Se calcula el resultado de la ecuación
    cout << "Respuesta: " << result; // Se muestra el resultado del cálculo
    return 0;
}
