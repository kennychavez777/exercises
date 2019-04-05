/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 4, paga neta de un trabajador
**/

#include <iostream>
using namespace std;

int main()
{
    double timeWorked, rate, taxes, discount; // Se declaran todas las variables a utilizar en todo el flujo del programa
    // Se piden al usuario todos los datos que se requieren para el calculo
    cout << "Horas trabajadas: ";
    cin >> timeWorked;
    cout << "Tarifa Horaria: (Q) ";
    cin >> rate;
    cout << "Impuestos: (%)";
    cin >> taxes;

    discount = (timeWorked * rate) * (taxes / 100); // Se hace el calculo del descueto
    cout << "-----------------------------" << endl;
    cout << "Total neto: Q. " << timeWorked * rate << endl; // Se muestra el calculo del total neto
    cout << "Descuento: Q. " << discount << endl; // Se muestra del descuento
    cout << "TOTAL: Q. " << (timeWorked * rate) - discount; // Se muestra el calculo del total a pagar
    return 0;
}
