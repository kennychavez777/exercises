/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 9, calculo de la distancia
**/

#include <iostream>
using namespace std;

int main()
{
    double speed, time; // Declaracion de variables

    cout << "Calculo de distancia" << endl;
    cout << "Velocidad: (m/s) ";
    cin >> speed; // Ingreso de la velocidad
    cout << "Tiempo: (s) ";
    cin >> time; // Ingreso del tiempo

    cout << "\n-----------------------";
    cout << "\nDistancia: " << speed * time << "m"; // Calculo de la distancia

    return 0;
}
