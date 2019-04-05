/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 12, calculo de cds para un backup
**/

#include <iostream>
using namespace std;

int main()
{
    double backup, gb = 1024, cd = 700; // Declaracion de parametros para el flujo del programa
    cout << "Backup size: (GB) "; // Se pide el tamaño del backup
    cin >> backup;

    cout << "Cantidad de CD's: " << backup * gb / cd; // Muestra de calculo de CD's

    return 0;
}
