/**
**  Author: Kenny Chavez
**  Desctiption: Ejercicio 3, buscar palabras/frases palindromas
**/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string phrase, newPhrase = "", compare = ""; // Se declaran las variables para almacenar la cadena
    cout << "Palindromo: Es una palabra o expresion que es igual si se lee de izquierda a derecha o de derecha a izquierda.\n"; // Solo se coloca una escripcion de la palabra "palindromo"

    cout << "\nPalabra o frase: "; // Se pide la palabra o frase
    getline(cin, phrase); // Se usa getline porque cin omite espacios en blanco

    std::transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower); // Se convierte a minuscula

    for(std::string::size_type i = 0; i < phrase.size(); ++i) { // Se inicia un ciclo para recorrer caracter por caracter
        if(phrase[i] != ' '){ // Se verifica que el caracter no sea un espacio en blanco
            newPhrase = newPhrase + phrase[i]; // Se guarda la frase/palabra sin espacios
        }
    }

    for(std::string::size_type i = phrase.size(); i > 0; i--) { // Se inicia otro ciclo para recorrer caracter por caracter pero inversamente
        if(phrase[i - 1] != ' '){ // Se verifica que el caracter no sea un espacio en blanco
            compare = compare+ phrase[i -1]; // Se guarda la frase/palabra sin espacios
        }
    }

    if(newPhrase == compare){ // Se compara la version original sin espacios con la version al contrario sin espacios y se retorna una respuesta.
        cout << "\nEs palindromo";
    }else{
        cout << "\nNo es palindromo";
    }

    return 0;
}
