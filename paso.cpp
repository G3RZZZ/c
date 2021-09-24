#include <iostream>

using namespace std;

int pasoCopia(int a)
{
    a++;
    return a;
}

int pasoApuntador(int *a)
{
    *a = (*a) + 1;

    return *a;
}

int pasoReferencia(int &a)
{
    a++;
    return a;
}

int main()
{
    int a = 5;
    cout << "Paso por copia: " << pasoCopia(a) << endl;
    cout << "Valor despues de ejecutar: " << a << endl;
    // int *pointerToA = &a;
    // cout << pointerToA << endl;
    // cout << *pointerToA << endl;

    cout << "Paso por copia: " << pasoApuntador(&a) << endl;
    cout << "Valor despues de ejecutar: " << a << endl;

    cout << "Paso por copia: " << pasoReferencia(a) << endl;
    cout << "Valor despues de ejecutar: " << a << endl;

    return 0;
}