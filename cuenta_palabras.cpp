// Alejandro Santillán 
// Gerardo Gutierrez

// Crea una función que pregunte al usuario una frase y una palabra. Cuenta cuantas veces aparece la palabra en la frase e imprime el resultado.

#include <iostream>
#include <string>

using namespace std;

void ejercicio3() //ejercicio resulto en clase
{
    string frase;
    string palabra;

    cout << "Introduce una frase: ";
    getline(cin, frase);
    cout << "introduce una palabra: ";
    cin >> palabra;

    int contador = 0;

    for(int i = 0; i < frase.length(); i++)
    {
        if(i+palabra.length() >= frase.length())
        {
            break;
        }
        bool bandera = true;

        for(int j = 0; j<palabra.length(); j++)
        {
            if(frase[i+j]!=palabra[j])
            {
                bandera = false;
                break;
            }
        }
        if(bandera) //otra manera de preguntar si el booleano es verdadero
        {
            contador++;
        }
    }
    cout << "La palabra se encontro " << contador << " veces " << endl;
}

int main()
{
    ejercicio3();

    return 0;
}