#include <iostream>
#include <string>
using namespace std;
int main(){
    int a=0;
    char x='*',espacio=' ';
    cout<< "ingrese el numero: ";
    cin>> a;
    for(int i=0;i<(a);i++){
        cout<<x;
    }
    cout<<endl;
    for(int i=0;i<(a-2);i++){
        cout<<x;
        for(int i=0;i<(a-2);i++){
        cout<<espacio;}
        cout<<x<<endl;
    }
    for(int i=0;i<(a);i++){
        cout<<x;
    }
    cout<<endl;
    return 0;
}