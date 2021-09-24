//CLase 1 repaso
//Gerardo gutierrez, A01029422

#include <iostream>
#include <string>

using namespace std;

int main()
{

    //El programa se ejecuta y se compila bien porque usa valores enteros nativos(int main, 0)

    int a = 0; //ocupa 32 bits o 4 bytes
    float b = 0.0;
    double c = 0.0; //ocupa 8 bytes

    char d = 'a';

    bool e = true;

    // string esta fuera del scope por lo que se usa #inlcude <string>
    string g = "Hola";
    // std::string g = "hola";
    // std::cout<<g<<std::endl;

    cout << g << endl;

    return 0;
}