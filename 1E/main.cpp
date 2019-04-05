/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 1, suma, resta, multiplicacion, division y mod
**/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2; // Declaramos 2 variables double para almacenar los numeros a ingresar
    cout << "OPERATIONS" << endl; // Descripcion del proyecto
    cout << "No 1: "; // Pide el primer numero
    cin >> n1; // Guarda el primer numero
    cout << "No 2: "; // Pide el segundo numero
    cin >> n2; // Guarda el segundo numero

    cout << "\n\nResults: \n";
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl; // Imprime la suma de los numeros
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl; // Imprime la resta de los numeros
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl; // Imprime la multiplicacion de los numeros
    cout << n1 << " / " << n2 << " = " << n1 / n2 << endl; // Imprime la division de los numeros
    int mod = (int)n1 % (int)n2; // Convierte las dos variables anteriores a int, para que puede calcular el residuo
    cout << n1 << " mod " << n2 << " = " << mod << endl; // // Imprime el residuo de los numeros
}
