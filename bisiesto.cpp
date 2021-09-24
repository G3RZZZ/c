#include<iostream>

using namespace std;

int anio;

bool esBisiesto(int anio)
{   
    if (anio % 400 == 0)
    {    
        return true;
    }
    else
    {
        if (anio % 100 == 0)
        {
            return false;
        }
        else
        {
            if (anio % 4 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
        
    }
    return 0;
}

int main()
{
    anio = 2020;

    cout << esBisiesto(anio) << endl;

}