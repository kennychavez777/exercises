/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 7, paga de un trabajador semanalmente
**/

#include <iostream>
using namespace std;

int main()
{
    double timeWorked, rate; // Se declaran todas las variables a utilizar en todo el flujo del programa
    // Se piden al usuario todos los datos que se requieren para el calculo
    cout << "Horas trabajadas: ";
    cin >> timeWorked;
    cout << "Tarifa Horaria: (Q) ";
    cin >> rate;

    cout << "-----------------------------" << endl;
    cout << "Total: Q. " << timeWorked * rate << endl; // Se muestra el calculo del total neto
    return 0;
}
