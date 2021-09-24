#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Record
{
    public:
    string nombreFuente;
    int puertoFuente;
    string nombreDestino;

    Record(string nF, string pF, string nD)
    {
        this->nombreFuente=nF;
        this->puertoFuente=stoi(pF);
        this->nombreDestino=nD;
    }

    void imprimirRecord()
    {
        cout << nombreFuente << " : " << puertoFuente << endl;
    }
};

void cargarDatos(string path)
{
    ifstream in;
    in.open(path);
    string line, parte;
    vector<string> partes;

    while(getline(in, line))
    {
        if(line.find("\r")!=line.npos)
        {
            line = line.substr(0, line.size()-1);
        }
        istringstream inString(line);
        while(getline(inString, parte,','))
        {
            partes.push_back(parte);
        }
        Record r(partes[4], partes[3], partes[2]);
        data.push_back(r);
        partes.clear();
    }
    in.close();
}

vector<Record> data;

int compararRecordNombreFuente(Record r, string nF)
{
    if(r.nombreFuente<nF)
    {
        return -1;
    }
    else
    {
        if(r.nombreFuente == nF)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int compararRecordNombreDestino(Record r, string nD)
{
    if(r.nombreDestino<nD)
    {
        return -1;
    }
    else
    {
        if(r.nombreFuente == nD)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

//no combiene usar este metodo de busqueda porque es lento
template <class T, class B>
int busquedaSecuencial(vector<int> a, B buscado, int comparador(T a, B b))
{
    for(int i = 0; i<a.size(); i++)
    {
        if(comparador(a[i], buscado) == 0)
        {
            return i;
        }
    }
    return -1;
}

int compararRecordsPorNombreFuente(Record r1, Record r2)
{
    
}

template <class T>
class SelectionSort: public Sorter<T>
{
    public:
    void Sort(vector<T> &data)
    {
        for(int i = 0; i<data.size()-1; i++)
        {
            int minimo = i;
            for(int j=i+1; j<data.size(); j++)
            {
                if(data[j]<data[minimo])
                {
                    minimo = j;
                }
            }
            this->Intercambiar(data, i, minimo);
        }
    }
};

int main()
{
    cargarDatos("C:/Users/gerar/OneDrive/Documents/AS_3/estructuras_de_datos_y_algoritmos/c");

    // for(int i = 0, i< 100; i++)
    // {
    //     //data[i].imprimirRecord();
    // }

    

    return 0;
}