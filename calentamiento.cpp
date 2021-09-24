#include <iostream>
#include <string>

using namespace std;

class Animal
{
    public:
        string especie;
        int patas;
        bool alas;
        string sonido;

};

class Perro: public Animal
{
    public:
        string nombre;

    Perro(string n)
    {
        nombre = n;
        especie = "canino";
        patas = 4;
        alas = false;
        sonido = "guau";
    }

    void hacerSonido()
    {
        cout << nombre << " hace " << sonido << endl;
    }
};

class Gato: public Animal
{
    public:
        string nombre;

    Gato(string n)
    {
        nombre = n;
        especie = "felino";
        patas = 4;
        alas = false;
        sonido = "miau";
    }

    void hacerSonido()
    {
        cout << nombre << " hace " << sonido << endl;
    }
};

template <class T>

class Veterinario
{
    public:
        string nombre;

        Veterinario(string n)
        {
            nombre = n;
        }

        void inyectar(T paciente)
        {
            cout << nombre << " inyecta a " << paciente.nombre << endl;
            paciente.hacerSonido();
        }
};

int main()
{
    int x;

    // cout << "Dame un número: ";
    // cin >> x;
    // cout << "El número que me diste es" << x << endl;

    // string x;
    // cout << "Dame una frase: ";
    // getline(cin, x);
    // cout << "La frase que me diste es " << x << endl;

    Perro fido("fido");
    fido.hacerSonido();

    Gato Garfield("Garfield");
    Garfield.hacerSonido();

    Veterinario<Perro> ale("Alejandra");
    ale.inyectar(fido);

    return 0;
}