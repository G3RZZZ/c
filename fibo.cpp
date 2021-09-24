// Fibonacci recursivo
#include <iostream>
#include <vector>

using namespace std;

int res = 0;

int sum(int n, int m)
{
    if(n==0)
    {
        return res;
    }
    else
    {
        int n = n-1;

        res = m+res;

        return sum(n, m);
    }
}

int mul(int n, int m)
{
    if (m==0)
    {
        return res;
    }
    else
    {
        if(n==0)
        {
            return res;
        }
        else
        {
            int n = n-1;
            res=(m*m);
            return mul(n,m);
        }
    }
    
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



int main()
{

    int m = 5;
    int n = 2;

    cout << mul(n,m) << endl;

    // cout << "Posición: ";
    // int num = 0;
    // cin >> num;
    // cout << fib(num) << endl;


    return 0;
}