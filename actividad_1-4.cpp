// Alejandro santillán A01025654
// Gerardo Gutierrez A01029422

// Actividad 1.4 Análisis de algoritmos de busqueda

#include <iostream>
#include <string>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

template <class T>
class Busquedas
{
    public:

    //atributos

    vector<T> a;
    T nBuscado;
    
    //Métodos

    //Constructor
    Busquedas(T buscado)
    {
        nBuscado = buscado;

        for(T i = 0; i<99999; i++)
        {
            a.push_back(i);
        }
    }

    int busquedaSecuencial()
    {
        for(T i = 0; i<a.size(); i++)
        {
            if(a[i]==nBuscado)
            {   
                return i;
            }
        }   
        return -1;
    }

    int busquedaMejorada()
    {
        for(int i = 0; i<a.size(); i++)
        {
            if(a[i]==nBuscado)
            {
                return i;
            }  
            else if(a[i]>nBuscado)
            {
                return -1;
            }   
        }   
        return -1;
    }  

    int busquedaMejorada2()
    {
        int inicio = 0;
        int salto = 2;

        while(inicio < a.size())
        {
            int fin = inicio + salto;

            if(fin > a.size())
            {
                fin = a.size();
            }
            if(a[fin-1] >= nBuscado)
            {
                for(int i = inicio; i < fin; i++)
                {
                    if(a[i]==nBuscado)
                    {
                        return i;
                    }
                }
                return -1;
            }
            inicio = fin;
        }
        return -1;
    }

    int busquedaBinaria()
    {
        int inicio = 0;
        int fin = a.size();

        while(inicio <= fin)
        {
            int medio = (fin + inicio)/2;

            if (a[medio]==nBuscado)
            {
                return medio;
            }
            else if(nBuscado > a[medio])
            {
                inicio = medio+1;
            }
            else
            {
                fin = medio-1;
            }
        }
        return -1;
    }   

};

int main()
{
    // Busquedas<int> m(8);
    // Busquedas<int> m(38000);
    // Busquedas<int> m(80000);
    Busquedas<int> m(120000);

    auto antes = high_resolution_clock::now(); 

    // int pos = m.busquedaSecuencial();
    // int pos = m.busquedaMejorada();
    // int pos = m.busquedaMejorada2();
    int pos = m.busquedaBinaria();

    auto despues = high_resolution_clock::now(); 

    auto tiempo = duration_cast<nanoseconds>(despues-antes).count();
    
    cout << "Se encontro el valor en la posición: " << pos << " en un tiempo de " << tiempo <<endl;

    return 0;
}