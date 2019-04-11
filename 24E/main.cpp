/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 24, calcular minutos y horas en base a los segundos
**/

#include <iostream>
using namespace std;

int main()
{
    double seg, mins, hrs; // Se declaran las variables para todo el flujo del programa

    cout << "Segundos: "; // Se solicitan los segundos al usuario
    cin >> seg;

    mins = seg / 60; // Se calculan los minutos
    hrs = seg / 60 / 60; // Se calculan las horas

    cout << "\nMinutos: " << mins; // Se muestran los minutos
    cout << "\nHoras: " << hrs; // Se muestarn las horas
    return 0;
}
