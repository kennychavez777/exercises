/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 22, conversion de dolares a quetzales
**/

#include <iostream>
using namespace std;

int main()
{
    double amount, rate; // Se declaran las variables que se utilizaran en el flujo de todo el programa

    cout << "Monto: "; // Se pide el monto
    cin >> amount;
    cout << "Tarifa: "; // Se pide la tarifa
    cin >> rate;

    cout << "\nResultado: Q. " << amount * rate; // Se muestra el cálculo
    return 0;
}
