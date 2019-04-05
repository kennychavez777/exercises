/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 15, conversion decimal a hexadecimal
**/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <strstream>
using namespace std;

int main()
{
    int number; // Se declara el numero que estara en sistema decimal

    cout << "Decimal a Hexadecimal" << endl;
    cout << "Decimal: "; // Se pide el decimal
    cin >> number; // Se guarda el decimal

    std::stringstream stream; // Se declarara una variable tipo stringstream
    stream << std::hex << number; // Se calcula el numero decimal
    std::string result( stream.str() ); // Se convierte a string y se guarda en otra variable tipo string

    cout << "\nHexadecimal: " << result; // Se imprime el resultado
    return 0;
}
