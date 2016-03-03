#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	float pi = 3.1416;
	float radio;
	cout << "por favor ingrese el radio:" << endl;
	cin >> radio;
	cout << "el perimetro de la circunferencia es: " << 2 * pi * radio << endl;
	cout << "el area de la circunferencia es: " << pi * radio *radio << endl;
	return 0;
}