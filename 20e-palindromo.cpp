#include <iostream>
#include <cmath>

using namespace std;
int contador(int n);

int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    cout << "ingrese un numero: ";
    cin>>a;
    b=contador(a);
    e=a;
    while(b!=0){
        c=a%10;
        a/=10;
        d+=c*(pow(10,(b-1)));
        b--;
    }
    if (e==d){
        cout<<e<<" es un numero palindromo"<<endl;
    }
    else
        cout<<e<<" NO es un numero palindromo"<<endl;
   
   return 0;
}

int contador (int n) 
{
    int contador=0;
    do{ 
    n/=10; 
    contador++; 
    }
    while (n>=1); 
return contador; 
}