/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 2, calculo de area y perimetro de un circulo
**/

#include <iostream>
using namespace std;

int main()
{
    double radius, area, perimeter; // Se declaran las variables que almacenaran el radio, area y perimetro
    cout << "Area y perimetro de un circulo" << endl;
    cout << "Radio: "; // Se pide el radio
    cin >> radius; // Se guarda el radio en una variable
    area = 3.1416 * (radius * radius); // Se calcula el area
    perimeter = 2 * 3.1416 * radius; // Se calcula el perimetro
    cout << "\nResultados\n";
    cout << "Perimetro: " << perimeter << endl; // Se imprime el valor del perimetro
    cout << "Area: " << area << endl; // Se imprime el valor del area

    return 0;
}
