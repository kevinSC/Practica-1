#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	double a = 0, b = 0;
	char operador = ' ';
	cout << "por favor ingrese la peracion que desa realizar\nSeparando los numeros de los signos por espacios:" << endl;
	cin >> a >> operador >> b;
	switch(operador){
		case '+':
			cout << a << operador << b << " = " << a + b << endl;
			break;
		case '-':
			cout << a << operador << b << " = " << a - b << endl;
			break;
		case '*':
			cout << a << operador << b << " = " << a * b << endl;
			break;
		case '/':
			cout << a << operador << b << " = " << a / b << endl;
			break;
	}
	return 0;
}