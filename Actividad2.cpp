// Alejandro Santillán A01025654
// Gerardo Gutiérrez A01029422

#include<iostream>
#include<vector>

using namespace std;
int res = 0;

int Mul(int n, int m){
    if(n==0)
    {
		return res;
	}
    else
    {
        int n=n-1;
        res=m+res;
		return Mul(n, m);
	}
}


int Pot(int m, int n)
{
    if (n == 0)
    {
        res=1.0;
    }
    else if (n > 0)
    {
        res=m *Pot(m,n - 1);
    }
    else if (n < 0)
    {
        res= 1.0 / m *Pot(m,n + 1);
    }
 return res;
} 


int fib(int pos)
{
    if(pos==0)
    {
        return 0;
    }
    else
    {
        if(pos==1 or pos==2)
        {
            return 1;
        }
        else
        { 
            return fib(pos-1)+fib(pos-2);
        }
            
    }
}

int Digi(int num)
{
    if (num>0)
    {
        return (num%10) + Digi(num/10);
    }
    else
    {
        return 0; 
    }
}



int main()
{
    int m = 8;
    int n = 2;
    int res = 0;
    
    //Multiplicacion con sumas
    cout<<Mul(n,m)<<endl;
    
    // Potencia con multiplicaciones
    cout<<Pot(m,n)<<endl;

    //Fibonachi
    cout << "Posición: ";
    int num = 0;
    cin >> num;
    cout << fib(num) << endl; 

    //Suma de digitos
    cout<<Digi(453)<<endl;

}