#include <iostream>
#include <cmath>
using namespace std;
float angule(float a, float b, float c);
int main(int argc, char const *argv[]){
	double r = 0,a = 0,b = 0, c = 0,A = 0 ,B = 0, C = 0;
	cout << "Por favor ingrese los 3 lados del triangulo separados por espacios:" << endl;
	cin >> a  >> b >> c;
	if (b > a){
		r = a;
		a = b;
		b = r;
	}
	if (c > b){
		r = b;
		b = c;
		c = r;
	}
	A = angule(a,b,c);
	B = angule(b,a,c);
	C = 3.14159 - A - B;
	if(A < 0.0001 || B <0.0001 || C < 0.0001 || C != C)
		cout << "las longitudes dadas no forman un triangulo" << endl;
	else{
		if( a == b && c==b)
			cout << "Es un triangulo equilatero" << endl;
		else if ( a == b && c != b)
			cout << "es un triangulo isocel" << endl;
		else
			cout << "es un triangulo escaleno" << endl;
	}
	return 0;
}
float angule(float a, float b, float c){
	return acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
}
