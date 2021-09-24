#include <iostream>
#include <string>

using namespace std;

// struct EjemploEstructura // en c++ es mejor usar clases 
// { // en estructuras todo es publico
//     int a;
//     char b;
// };

class Ejemplo1
{
    private:
    int b;

    public:
    int a;
    
    void printEjemplo()
    {
        cout << "hola desde el ejemplo" << endl;
    }
};

class Ejemplo2: public Ejemplo1
{
    public:
    int c;

    Ejemplo2()
    {
        c=5;
    }
    
    Ejemplo2(int var)
    {
        c = var;
    }
};



int main()
{
    int a = 0;
    float b = 0.0;
    double c = 0.0;
    char d = 'a';
    bool e = true;
    string g = "Hola";

    Ejemplo2 h(5);

    h.printEjemplo();

    return 0;
}