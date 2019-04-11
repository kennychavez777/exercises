/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 21,
**/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, x1, x2, k1;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    //x1 = -b + (sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
    //x2 = -b - (sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;

    k1 = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(k1)) / (2 * a);
    x2 = sqrt((b * b) - (4 * a * c));

    cout << "X1: " << x1 << endl;
    cout << "X2: " << x2 << endl;
    return 0;
}
