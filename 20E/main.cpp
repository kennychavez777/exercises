/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 20, calculo de interes de un banco
**/

#include <iostream>
using namespace std;

int main()
{
    double amount, years, interests, result; // Se declaran las variables que se utilizaran en todo el flujo del programa
    cout << "Monto: Q. "; // Se pide el monto a guardar en el banco
    cin >> amount;
    cout << "Years: "; // Se pide la cantidad de años que se van a guardar
    cin >> years;
    cout << "Interes (%): "; // Se pide la tasa de interes
    cin >> interests;

    result = amount * (1 + interests / 100) * years; // Se hace el calculo

    cout << "\nResultado: " << result; // Se muestra el resultado

    return 0;
}
