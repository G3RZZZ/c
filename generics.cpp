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

template <class T> //no se dice que tipo de clase es y se dice despues, generalmente se usa la letra T

class EjemploGenerics
{
    public:
    T valor;

    EjemploGenerics(T val)
    {
        valor = val;
    }
    
    printValor()
    {
        cout << valor << endl;
    }

    void sumarValores(T val1, T val2)
    {
        cout << val1 + val2 << endl;
    }
    
};

template <class T>
class EjemploGenericsHijo : public EjemploGenerics<T>
{
    public:
    T valorHijo;
    EjemploGenericsHijo(T val)
    {
        valorHijo = val;
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

    // EjemploGenerics<int> i(5); // o <string> j("hola");
    // i.printValor();

    EjemploGenerics<int> i(5);
	i.printValor();

	i.sumarValores(5,3);

	EjemploGenerics<string> j("hola");

	j.printValor();

	j.sumarValores("hola", " mundo");



    return 0;
}