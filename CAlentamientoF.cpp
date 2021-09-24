#include <iostream>
#include <string>

using namespace std;

void ejercicio3() //ejercicio resulto en clase
{
    string frase;
    string palabra;

    cout << "Introduce una frase: ";
    getline(cin, frase);
    cout << "introduce una palabra: ";
    cin >> palabra;

    int contador = 0;

    for(int i = 0; i < frase.length(); i++)
    {
        if(i+palabra.length() >= frase.length())
        {
            break;
        }
        bool bandera = true;

        for(int j = 0; j<palabra.length(); j++)
        {
            if(frase[i+j]!=palabra[j])
            {
                bandera = false;
                break;
            }
        }
        if(bandera) //otra manera de preguntar si el booleano es verdadero
        {
            contador++;
        }
    }
    cout << "La palabra se encontro " << contador << " veces " << endl;
}

template <class T>
class Calculadora
{
 public:
	T valor;
	
	Calculadora(T val)
    {
		valor=val;
	}
	
	void printValor()
    {
		cout<<valor<<endl;
	}
	
	void sumar(T val1, T val2)
    {
		cout<<val1+val2<<endl;
	}
    void restar(T val1, T val2)
    {
		cout<<val1-val2<<endl;
	}
    void dividir(T val1, T val2)
    {
		cout<<val1/val2<<endl;
	}
    void multiplicar(T val1, T val2)
    {
		cout<<val1*val2<<endl;
	}
};

void sumatoria(){
     
     int z,x,y;
    cout<<"Numero de valores a sumar: "<<endl;
    cin>>z;
    y=0;

    while (z>0)
    {
        cout<<"Numero a sumar: "<<endl;
        cin>>x;
        y = x+y;
        z = z-1;
        cout<<"Suma al momento: "<<y<<endl;
    }

    cout<<"Suma Total: "<<y<<endl;

}

void anobi(){
    int z;
    cout<<"ano a comprobar"<<endl;
    cin>>z;
    if(z%4==0 and z%100!=0 or z%400==0)
    {
         cout << "Bisiesto" << endl;
    }
    else{
      cout << "No es bisiesto" << endl; 
    }
    
     int z,x,y;
}


int main()
{
    ejercicio3();
    
    Calculadora<int> i(0);
	i.sumar(5,3);
    i.restar(4,1);
    i.dividir(10,2);
    i.multiplicar(10,4);
	
     

    return 0;
}