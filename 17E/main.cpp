/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 17, de grados celsius a fahrenheit
**/

#include <iostream>
using namespace std;

int main()
{
    double c, f; // Se declaran las variables que se usaran en el flujo del programa
    cout << "De C° a F°" << endl;
    cout << "C°: "; // Se piden los grados celsius
    cin >> c; // Se guardan los grados celsius

    f = c * (9 / 5) + 32; // Se calcula la conversion
    cout << "\nF°: " << f; // Se muestran los grados fahrenheit
    return 0;
}
