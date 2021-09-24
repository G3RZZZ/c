//Alejandro Santillán A01025654
//Gerardo Gutierrez A01029422

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
		
        this->fecha = f;

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
int compararDosRecordsipDestino(Record r1, Record r2){
	if(r1.iPdestino<r2.iPdestino){
		return -1;
	}else if (r1.iPdestino==r2.iPdestino){
		return 0;
	}else{
		return 1;
	}
}

//
int compararRecordsfecha(Record r, string f)
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
int compararRecordEntradaDestino(Record r, string eD){
	if(r.entradaDestino<eD){
		return -1;
	}else if (r.entradaDestino==eD){
		return 0;
	}else{
		return 1;
	}
}
//
int compararDosRecordsEntradaDestino(Record r1, Record r2){
	if(r1.entradaDestino<r2.entradaDestino){
		return -1;
	}else if (r1.entradaDestino==r2.entradaDestino){
		return 0;
	}else{
		return 1;
	}
}


//

template <class T, class B>
int busquedaSecuencial(vector<T> a, B buscado, int comparador(T a, B b)){
	for(int i=0; i<a.size(); i++){
		if(comparador(a[i],buscado)==0){
			return i;
		}
	}
	return -1;
}   

//prueba
// template <class T, class B>
// int busquedaSecuencial(vector<T> a, B buscado, int comparador(T a, B b)){
// 	for(int i=0; i<100; i++){
// 		if(comparador(a[i],buscado)==0){
// 			return i;
// 		}
// 	}
// 	return -1;
// }

// template <class T, class B>
// int busquedaBinaria(vector<T> a, B buscado, int comparador(T a, T b)){
// 	int inicio=0;
// 	int fin=a.size()-1;
// 	while(inicio<=fin){
// 		int medio=(fin+inicio)/2;
// 		if(comparador(a[medio], buscado)==0){									//adaptar busqueda binaria
// 			return medio;
// 		}else if(comparador(a[medio], buscado)==-1){
// 			inicio=medio+1;
// 		}else{
// 			fin=medio-1;
// 		}
// 	}
// 	return -1;
// }



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
//selectionsorter es lento

//merge sort
//incluir el comparador para las funciones...
template <class T>
class MergeSort: public Sorter<T>
{
    public:
    void Sort(vector<T> &data, int comparador(T a, T b))
    {
        SortAux(data, 0, data.size()-1, comparador);
    }

    private:
    void SortAux(vector<T> &data, int lo, int hi, int comparador(T a, T b))
    {
        if(lo>=hi)
        {
            return;
        }

        int mid = (lo + hi)/2;

        SortAux(data, lo, mid, comparador); // sort de la izquierda
        SortAux(data, mid+1, hi, comparador); // sort de la derecha
        Merge(data, lo, mid, hi, comparador); 
    }

    void Merge(vector<T> &data, int lo, int mid, int hi, int comparador(T a, T b))
    {
        //Determinar el tamaño de la copia izquierda
        // int sizeI = mid - lo+1;

        //Determinar el tamaño de la copia derecha
        // int sizeD = hi - mid;

        //Hacer la copia izquierda
        vector<T> copiaI;
        for(int i = lo; i<mid; i++)
        {
            copiaI.push_back(data[i]);
        }

        //Hacer la copia derecha
        vector<T> copiaD;
        for(int i = mid+1; i<hi; i++)
        {
            copiaD.push_back(data[i]);
        }

        //Poner los indicadores de posición izquierda, derecha, y global en su lugar
        int posI = 0;
        int posD = 0;
        int posG = lo;

        //Copiar en su lugar
        //Mientras posI<sizeI y posD<sizeD
        while(posI<copiaI.size() && posD<copiaD.size())
        {
            if(comparador(copiaI[posI],copiaD[posD])==-1)
            {
                data[posG] = copiaI[posI];
                posI++;
                posG++;
            }
            else
            {
                data[posG] = copiaD[posD];
                posD++;
                posG++;
            }
        }
          
        //Revisar si el menor esta en copiaI o copiaD y poner en posición Global
        //Copiar elementos restantes
        while(posI<copiaI.size())
        {
            data[posG] = copiaI[posI];
            posI++;
            posG++;
        }
        
        while(posD<copiaD.size())
        {
            data[posG] = copiaD[posD];
            posD++;
            posG++;
        }
    }
};

int main(){
	cargarDatos("/mnt/c/Users/gerar/Documents/AS_3/estructuras_de_datos_y_algoritmos/c/datosEquipo11.csv");
	// C:\Users\gerar\OneDrive\Documents\AS_3\estructuras_de_datos_y_algoritmos\c
	// C:\Users\gerar\Documents\AS_3\estructuras_de_datos_y_algoritmos\c
	// int pos=busquedaSecuencial<Record, string>(data, "ronald.reto.com", compararRecordNombreFuente);
	// cout<<"ronald.reto.com se encuentra en la posicion: "<< pos <<endl;
	// SelectionSort<Record> s;
	// s.Sort(data, compararDosRecordsNombreFuente);
	// for(int i=0; i<100; i++){
	// 	data[i].imprimirRecord();
	// }

	//pregunta 1: numero de datos
	// cout << data.size() << endl;
	// 38000

	//pregunta 2: ¿Cuántos récords hay del segundo día registrado? ¿Qué día es este?
	// int pos = busquedaSecuencial<Record, string>(data, "11-8-2020", compararRecordsfecha);
	// MergeSort<Record> s;
	// s.Sort(data, compararDosRecordsfecha);
	// // for(int i=0; i<data.size(); i++){
	// // 	data[i].imprimirRecord();
	// // }
	// int contador = 0;
	// //tipo de data[i] debe definirse
	// for(int i=0; i<data.size()-1; i++)
	// {
	// 	if(data[i].fecha == "11-8-2020")
	// 	{
	// 		contador = contador +1;
	// 	}
	// }
	// cout << contador << endl;
	// 3280 records, dia 11-8-2020

	//pregunta 3, ¿Alguna de las computadoras pertenece a Jeffrey, Betty, Katherine, Scott, Benjamin, Samuel o Raymond?
	// int pos=busquedaBinaria<Record, string>(data, "jeffrey.reto.com", compararRecordNombreFuente);
	// cout<<"ronald.reto.com se encuentra en la posicion: "<< pos <<endl;
	// int pos=busquedaSecuencial<Record, string>(data, "jeffrey.reto.com", compararRecordNombreFuente);
	// cout<<"jeffrey.reto.com se encuentra en la posicion: "<< pos <<endl;
	// no hay jeffrey
	// int pos=busquedaSecuencial<Record, string>(data, "betty.reto.com", compararRecordNombreFuente);
	// cout<<"betty.reto.com se encuentra en la posicion: "<< pos <<endl;
	// si hay una computadora que le pertenece a Betty
	// int pos=busquedaSecuencial<Record, string>(data, "katherine.reto.com", compararRecordNombreFuente);
	// cout<<"katherine.reto.com se encuentra en la posicion: "<< pos <<endl;
	// no hay katherine
	// int pos=busquedaSecuencial<Record, string>(data, "server.reto.com", compararRecordNombreFuente);
	// cout<<"betty.reto.com se encuentra en la posicion: "<< pos <<endl;

	//ultima pregunta

	// MergeSort<Record> s;
	// s.Sort(data, compararDosRecordsNombreDestino);


	// int contador = 0;

	// for(int i = 0; i<data.size()-1; i++)
	// {
	// 	data[i].imprimirRecord();
	// }
	// cout << contador << endl;

	// // //tipo de data[i] debe definirse
	// for(int i=0; i<data.size()-1; i++)
	// {
	// 	int datos = stoi(data[i].entradaDestino);

	// 	if(datos < 1000)
	// 	{
	// 		cout << data[i].entradaDestino << endl;
	// 	}
	// }
	// cout << contador << endl;

	
	
}


