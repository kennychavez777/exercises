/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 19, calculo de la cuata respectiva de una casa
**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double house, i, years, r, m; // Se declaran las variables que se utilizaran en todo el flujo del programa

    cout << "Valor de la casa: Q. "; // Se pide el valor de la casa
    cin >> house;

    cout << "Interes: "; // Se pide el interes
    cin >> i;

    if(i >= 100){ // Se evalua si el interes es mayor o igual al 100%
        cout << "\nEl interes debe ser menor al 100%"; // Si es así se muestra un mensaje y se finaliza el programa
        return 0;
    }

    cout << "Plazo (Years): "; // Se pide el plazo a pagar
    cin >> years;

    r = i / (100 / 12); // Se hace el calculo de r
    m = ((house * r) / (1 - pow((1 + r), -12 * years))); // Se hace el calculo de m

    cout << "\nRespuesta: " << house + m; // Se muestra el calculo

    return 0;
}
