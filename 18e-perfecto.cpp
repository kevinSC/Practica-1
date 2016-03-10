#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[]){
	int b = 0;
	float a = 0;
	cout << "ingrese un numero entero positivo: ";
	cin >> b;
	a = pow(b, 0.5);
	if ((a - int(a)) == 0)
		cout << b <<" es un cuadrado perfecto !!!!" << endl;
	else
		cout << b <<" NO es un cuadrado perfecto !!!!" << endl;
	return 0;
}