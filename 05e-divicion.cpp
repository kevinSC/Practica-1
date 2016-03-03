#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	float a,b = 0;
	int c = 0;
	cout << "ingrese un numero:" << endl;
	cin >> a;
	cout << "ingrese otro numero:" << endl;
	cin >> b;
	c = int(round(a/b));
	cout << "la divicion entre estos numeros es: " << c << endl;
	return 0;
}		