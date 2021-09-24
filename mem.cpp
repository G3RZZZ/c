#include <iostream>

using namespace std;

class Ejemplo
{
    public:
    //int a;
    int *a;
    string b;

    //Constructor
    Ejemplo()
    {
        a = new int[10];
        b = "";
    }

    //constructor
    Ejemplo(int v, string v2)
    {
        a = new int [v];
        b = v2;
    }

    //destructor, se llama automaticamente cuando se sale del scope
    ~Ejemplo()
    {
        delete[] a;
        // cout << "Destructor ejecutado" << endl;
    }
};

//Función que crea un objeto ejemplo a
void f()
{
    Ejemplo a;
    Ejemplo b();
    Ejemplo c(10, "hola");
    Ejemplo *d=new Ejemplo(10, "hola");
    // cout << d.b << endl; esto no se puede hacer porque d es un apuntador
    // cout << ((Ejemplo)*d).b << endl; // esto no se va a usar 
    cout << d->b << endl; //cuando/porque d es un apuntador, del apuntador d, dame el atributo b
    delete d;
}

int main()
{
    // int arreglo[4] = {10,20,30,40};

    // int *b=arreglo;
    // cout << *b+1 << endl;
    // cout << *(b+1) << endl; // suma 

    // Ejemplo a;
    // Ejemplo b = new Ejemplo[3];

    //*int arreglo[10000]={10,20,30,40};
    //arreglo[10000]
    //*(arreglo+10000)
    // int *b=arreglo;
    // cout << *++b << endl;
    // cout << *b << endl;

    // Ejemplo a(10, "hola");



}