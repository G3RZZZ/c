#include <iostream>
#include <string>
#include <vector>

using namespace std;

int factorialIterativo(int n)
{
    int respuesta = 1;

    for(int i=1; i<=n; i++)
    {
        respuesta*=i;
    }
    return respuesta;
}

int factorialRecursivo(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorialRecursivo(n-1);
    }
}

// int factorialRecursivo(3)
//     return 3*factorialRecursivo(2) // regresa 6
//              return 2*factorialrecursivo(1) //regresa 2
                //   return 1*factorialRecursivo(0) // factorialRecursivo(0) se vuelve 1 // regresa 1
//                      regresa 1

int factorialColaAux(int n, int res)
{
    if(n==0)
    {
        return res;
    }
    else
    {
        return factorialColaAux(n-1, res*n);
    }
}

int factorialCola(int n)
{
    return factorialColaAux(n, 1);
}

// factorialCola(3,1)
//     return factorialCola(3-1,1*3) // (2,3)
//          return factorialCola(1,6) // (2-1, 2*3)
            //  return factorialCola(o,6) // 6
            //      return res;


int main()
{
    // vector<int> v;
    // cout << "Tamaño: " <<  v.size() << endl;
    // v.push_back(5); //push back agrega un elemento al vector, tipo append
    // v.push_back(3);
    // cout << "Tamaño: " <<  v.size() << endl;
    // cout << "valor en 0: " << v[0] << endl;


    // cout << factorialIterativo(5) << endl;

    cout << factorialCola(5);

    return 0;
}