/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 5, calculo de velocidad
**/

#include <iostream>
using namespace std;

int main()
{
    double time, distance = 1500; // Declaracion de parametros a utilizar
    int option;

    cout << "Tiempo: "; // Se pide al usuario el tiempo
    cin >> time;
    cout << "\nMedida" << endl;
    cout << "1) Segundos" << endl;
    cout << "2) Minutos" << endl;

    cin >> option; // Se pide qué tipo de medida a utilizar

    if(option == 2){ // Si la medida es minutos, el tiempo se multiplica por 60
        time = time * 60;
    }
    cout << "Velocidad: " << 1500 / time << "m/s"; // Se muestra la velocidad final
    return 0;
}
