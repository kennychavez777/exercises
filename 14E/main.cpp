/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 14, convertir decimal a binario
**/

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int number; // Declaracion del numero decimal
    cout << "Decimal a binario" << endl;
    cout << "Numero: ";
    cin >> number; // Se guarda el numero decimal

    std::string bin = std::bitset< 10 >( number ).to_string(); // Se hace la conversion y se guarda en una variable
    cout << bin; // Se muestra el numero binario

    return 0;
}
