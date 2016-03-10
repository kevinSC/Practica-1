#include <iostream>
using namespace std;

int main(){
    int n, contador=0; 
    cout<<"Introduce un número: "; 
    cin>>n; 
    do{ 
    n/=10; 
    contador++; 
    }
    while (n>=1); 
    cout <<"Numero de cifras igual a "<<contador; 
    return 0;
}
