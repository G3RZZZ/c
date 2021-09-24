//Ejercicios de práctica, rec

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Ejemplo de Alg Euclides
int MCD(int m, int n)
{
    int r = m % n;

    if(r == 0)
    {
        return n;
    }
    else
    {
        return MCD(n,r);
    }
}

// Ejemplo elementos de un vector
// Iterativo
int sumaVectorI(vector<int> A)
{
    int resultado = 0;

    for(int i = 0; i < A.size(); i++)
    {
        resultado += A[i];
    }
    return resultado;
}

// Hay ciertos algoritmos que al usar un ciclo iterativo no funciona, ej. algs de arboles, mientras
// que los recursivos se vuelven una solución más sencilla y elegante a esto.
// Recursivo, regresión de cola
int sumaVectorR(vector<int> A, int resultado, int posicion)
{
    if (posicion== A.size())
    {
        return resultado;
    }
    else
    {
        return sumaVectorR(A, resultado+A[posicion], posicion+1); //posicion++); forma alternativa de ++
    }
}

// Ejemplo suma de los elementos de una matriz
// usando vectores de vectores
int sumaMatrix(vector<vector<int>> M)
{
    int resultado = 0;

    for(int fila = 0; fila < M.size(); fila++)
    {
        // for(int columna = 0; columna < M[fila].size(); columna++)  // Iterativo
        // {
        //     resultado+=M[fila][columna];
        // }
        resultado += sumaVectorI(M[fila]);
    }
    return resultado;
}
// Solución Recursiva
int sumaMatrizR(vector<vector<int>> m, int resultado, int fila)
{
    if(fila==m.size())
    {
        return resultado;
    }
    else
    {
        return sumaMatrizR(m, resultado+sumaVectorR(m[fila], 0, 0), fila+1);
    }
}



int main()
{
    // vector<int> a;

    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);

    MCD(10,5);

    

    return 0;
}