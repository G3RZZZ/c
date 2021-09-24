#include <iostream>
#include <string>

using namespace std;

void ejercicio2()
{
    int cantidad = 0;
    cout << "Cuantos números quieres introducir: ";
    cin >> cantidad;
    int suma = 0;
    int entradaNumero = 0;

    for(int i = 0; i<cantidad; i++)
    {
        cout << "Qué número quieres agregar: ";
        cin >> entradaNumero;
        suma += entradaNumero;
    }
    cout << "La suma es " << suma << endl;
}

void ejercicio3()
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

void ejercicio3v2()
{
    string frase;
    string palabra;

    cout << "Introduce una frase: ";
    getline(cin, frase);
    cout << "introduce una palabra: ";
    cin >> palabra;

    int contador = 0;

    int pos = frase.find(palabra);
    while(pos!=string::npos)
    {
        contador++;
        pos = frase.find(palabra, pos+1);
    }
    cout << "La palabra se encontro " << contador << " veces " << endl;
}

int main()
{
    ejercicio3v2();

    return 0;
}