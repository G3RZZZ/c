#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class Record
{
	public:
    string fecha;
    string hora;
    string iPFuente;
	string entradaFuente;
	string nombreFuente;
    string iPdestino;
    string entradaDestino;
	string nombreDestino;
	
	Record(string f, string h,  string iF, string eF, string nF, string iD, string eD, string nD)
    {
		
        this->fecha = fecha;
        this->hora = h;
		this->nombreFuente=nF;

        if(iF == "-")
        {
            iF = "0";
            this->iPFuente = stoi(iF);
        }
        else
        {
           this->iPFuente = iF; 
        }

		if(eF == "-")
        {
			eF = "0";
            this->entradaFuente = stoi(eF);
		}
        else{
			this->entradaFuente=stoi(eF);
		}
        
        if(iD == "-")
        {
            iD = "0";
            this->iPdestino = stoi(iD);
        }
        else{
            this->iPdestino = iD;
        }
		
        if(eD == "-")
        {
			eD = "0";
            this->entradaDestino = stoi(eD);
		}
        else{
			this->entradaDestino=stoi(eD);
		}
        
        if(nD == "-")
        {
            nD = "0";
            this->nombreDestino = stoi(nD);
        }
        else{
            this->nombreDestino = nD;
        }
	}
	
	void imprimirRecord(){
		cout<< fecha << ":" << hora << ":" << iPFuente << ":" << entradaFuente << ":" << nombreFuente << ":" << iPdestino << ":" << entradaDestino << ":" << nombreDestino << endl;
	}
};   //clase completa

vector<Record> data;
void cargarDatos(string path){
	ifstream in;
	in.open(path);
	string line, parte;
	vector<string> partes;
	while(getline(in, line)){
		if(line.find("\r")!=line.npos){
			line=line.substr(0, line.size()-1);
		}
		istringstream inString(line);
		while(getline(inString, parte, ',')){
			partes.push_back(parte);
		}
		Record r(partes[0], partes[1], partes[2], partes[3], partes[4], partes[5], partes[6], partes[7]);
		data.push_back(r);
		partes.clear();
	}
	in.close();
} //carga copleta

int compararRecordNombreFuente(Record r, string nF){
	if(r.nombreFuente<nF){
		return -1;
	}else if (r.nombreFuente==nF){
		return 0;
	}else{
		return 1;
	}
}

int compararDosRecordsNombreFuente(Record r1, Record r2){
	if(r1.nombreFuente<r2.nombreFuente){
		return -1;
	}else if (r1.nombreFuente==r2.nombreFuente){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordiPFuente(Record r, string iF)
{
	if(r.iPFuente<iF)
	{
		return -1;
	}
	else
	{
		if(r.iPFuente==iF)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

//
int compararDosRecordsiPFuente(Record r1, Record r2){
	if(r1.iPFuente<r2.iPFuente){
		return -1;
	}else if (r1.iPFuente==r2.iPFuente){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordentradaFuente(Record r, string eF)
{
	if(r.entradaFuente<eF)
	{
		return -1;
	}
	else
	{
		if(r.entradaFuente==eF)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

//
int compararDosRecordsentradaFuente(Record r1, Record r2){
	if(r1.entradaFuente<r2.entradaFuente){
		return -1;
	}else if (r1.entradaFuente==r2.entradaFuente){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordnombreDestino(Record r, string nD)
{
	if(r.nombreDestino<nD)
	{
		return -1;
	}
	else
	{
		if(r.nombreDestino==nD)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

//
int compararDosRecordsNombreDestino(Record r1, Record r2){
	if(r1.nombreDestino<r2.nombreDestino){
		return -1;
	}else if (r1.nombreDestino==r2.nombreDestino){
		return 0;
	}else{
		return 1;
	}
}

//
int compararDosRecordsentradaFuente(Record r1, Record r2){
	if(r1.entradaFuente<r2.entradaFuente){
		return -1;
	}else if (r1.entradaFuente==r2.entradaFuente){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordiPdestino(Record r, string iD)
{
	if(r.iPdestino<iD)
	{
		return -1;
	}
	else
	{
		if(r.iPdestino==iD)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

//
int compararDosRecordsNombreFuente(Record r1, Record r2){
	if(r1.nombreFuente<r2.nombreFuente){
		return -1;
	}else if (r1.nombreFuente==r2.nombreFuente){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordfecha(Record r, string f)
{
	if(r.fecha<f)
	{
		return -1;
	}
	else
	{
		if(r.fecha==f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

//
int compararDosRecordsfecha(Record r1, Record r2){
	if(r1.fecha<r2.fecha){
		return -1;
	}else if (r1.fecha==r2.fecha){
		return 0;
	}else{
		return 1;
	}
}

//

//

//

//

// template <class T, class B>
// int busquedaSecuencial(vector<T> a, B buscado, int comparador(T a, B b)){
// 	for(int i=0; i<a.size(); i++){
// 		if(comparador(a[i],buscado)==0){
// 			return i;
// 		}
// 	}
// 	return -1;
// }   

//prueba
template <class T, class B>
int busquedaSecuencial(vector<T> a, B buscado, int comparador(T a, B b)){
	for(int i=0; i<100; i++){
		if(comparador(a[i],buscado)==0){
			return i;
		}
	}
	return -1;
}

/*
int busquedaBinaria(vector<int> a, int buscado){
	int inicio=0;
	int fin=a.size()-1;
	while(inicio<=fin){
		int medio=(fin+inicio)/2;
		if(a[medio]==buscado){									//adaptar busqueda binaria
			return medio;
		}else if(buscado>a[medio]){
			inicio=medio+1;
		}else{
			fin=medio-1;
		}
	}
	return -1;
}
*/


template <class T>
class Sorter{
	public:
	virtual void Sort(vector<T> &data, int comparador(T a, T b))=0;
	
	void Imprimir(vector<T> &data){
		for(int i=0; i<data.size(); i++){							//data.size por 100 para pruebas
			cout<<data[i]<<",";
		}
		cout<<endl;
	}
	
	void Intercambiar(vector<T> &data, int posI, int posJ){			//cambiar int a strings(probar antes)
		T temp=data[posI];
		data[posI]=data[posJ];
		data[posJ]=temp;
	}
};


template <class T>
class SelectionSort: public Sorter<T>{
	public:
	void Sort(vector<T> &data, int comparador(T a, T b)){
		for(int i=0; i<data.size()-1; i++){
			int minimo=i;
			for(int j=i+1; j<data.size(); j++){								//Checar si hay que cambiar(probar antes)
				if(comparador(data[j],data[minimo])==-1){
					minimo=j;
				}
			}
			this->Intercambiar(data, i, minimo);
		}
	}
};

int main(){
	cargarDatos("/mnt/c/Users/gerar/Documents/AS_3/estructuras_de_datos_y_algoritmos/c/datosEquipo11.csv");
	// C:\Users\gerar\OneDrive\Documents\AS_3\estructuras_de_datos_y_algoritmos\c
	// C:\Users\gerar\Documents\AS_3\estructuras_de_datos_y_algoritmos\c
	int pos=busquedaSecuencial<Record, string>(data, "ronald.reto.com", compararRecordNombreFuente);
	cout<<"ronald.reto.com se encuentra en la posicion: "<< pos <<endl;
	SelectionSort<Record> s;
	s.Sort(data, compararDosRecordsNombreFuente);
	for(int i=0; i<100; i++){
		data[i].imprimirRecord();
	}

	//pregunta 1: numero de datos
	cout << data.size();
}
